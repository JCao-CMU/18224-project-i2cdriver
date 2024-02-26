`default_nettype none

module tb;
    logic clock, reset;

    // interface with I2C
    tri1 SDA;
    logic SCL;// We are fast enough, no need to do clock stretching

    // interface with downstream thread
    tri [7:0] data;
    logic writeOK;
    logic data_in;

    parameter i2c_slave_addr = 7'h49;

    I2C_slave DUT (.*);

    initial begin
        reset = 1;
        clock = 1;
        reset <= 0;
        forever #5 clock = ~clock;
    end

    initial begin
        $monitor("State: %s", DUT.state.name);
    end

    task wait_5_clocks();
        for (int i = 0; i < 5; i++) begin
            @(posedge clock)
        end
    endtask

    task wt(int x);
        for (int i = 0; i < x; i++) begin
            @(posedge clock)
        end
    endtask

    task set_value(input logic in); // set value 2 clock before;
        wt(3);
        SDA <= in;
        wt(2);
        SCL <= 1'b1;
        wait_5_clocks();
        SCL <= 1'b0;
        
    endtask

    task send_bytes (input logic [6:0] address, input logic [7:0] payload []);
        SDA = 1'b1;
        SCL = 1'b1;
        @(posedge clock)
        SDA <= 1'b0;
        @(posedge clock)
        SCL <= 1'b0;
        @(posedge clock);
        @(posedge clock);
        for (int i = 6; i >= 0; i--) begin
            set_value(address[i]);
        end
        set_value(1'b0); // WRITE, so read from slave's perspective
        SDA <= 1'bz;
        wt(3);
        assert (SDA == 1'b0) 
            else $error("Failure to ACKNOWLEDGE: SDA=%b", SDA);
        @(posedge clock);
        @(posedge clock);
        SCL <= 1'b1;
        wait_5_clocks();
        SCL <= 1'b0;
        wait_5_clocks();
        foreach (payload[k]) begin
            for (int j = 7; j >= 0; j--) begin
                set_value(payload[k][j]);
            end
            SDA <= 1'bz;
            wt(3);
            assert (SDA == 1'b0) 
                else $error("Failure to ACKNOWLEDGE: SDA=%b", SDA);
            @(posedge clock);
            @(posedge clock);
            SCL <= 1'b1;
            wait_5_clocks();
            SCL <= 1'b0;
            wait_5_clocks();
            assert (data == payload[k]) 
                else $error("Received %h, Send %h", data, payload[k]);
        end
        SDA <= 1'b0;
        SCL <= 1'b0;
        @(posedge clock)
        SCL <= 1'b1;
        @(posedge clock)
        SDA <= 1'b1;
    endtask

    task read_bit();
        wt(3);
        wt(2);
        SCL <= 1'b1;
        wt(2);
        $display("SDA Line: %b", SDA);
        wt(3);
        SCL <= 1'b0;
        
    endtask

    task recv_bytes (input logic [6:0] address, input logic [7:0] payload []);
        SDA = 1'b1;
        SCL = 1'b1;
        @(posedge clock)
        SDA <= 1'b0;
        @(posedge clock)
        SCL <= 1'b0;
        @(posedge clock);
        @(posedge clock);
        for (int i = 6; i >= 0; i--) begin
            set_value(address[i]);
        end
        set_value(1'b1); // READ, or write from slave's perspective
        data <= payload[0];
        data_in <= 1'b1;
        SDA <= 1'bz;
        @(posedge clock);
        data_in <= 1'b0;
        wt(2);
        assert (SDA == 1'b0) 
            else $error("Failure to ACKNOWLEDGE: SDA=%b", SDA);
        @(posedge clock);
        @(posedge clock);
        SCL <= 1'b1;
        wait_5_clocks();
        SCL <= 1'b0;
        wait_5_clocks();
        for (int k = 1; k < payload.size(); k++) begin
            for (int j = 0; i < 7; j++) begin
                read_bit();
            end
            data <= payload[0];
            data_in <= 1'b1;
            SDA <= (k == (payload.size() - 1)) ? 1'bz : 1'b0;
            @(posedge clock);
            data_in <= 1'b0;
            @(posedge clock);
            @(posedge clock);
            SCL <= 1'b1;
            wait_5_clocks();
            SCL <= 1'b0;
            SDA <= 1'bz;
            wait_5_clocks();
        end
        SDA <= 1'b0;
        SCL <= 1'b0;
        @(posedge clock)
        SCL <= 1'b1;
        @(posedge clock)
        SDA <= 1'b1;
    endtask

    initial begin
        SDA = 1'b1;
        SCL = 1'b1;
        wt(5);
        
    end

endmodule