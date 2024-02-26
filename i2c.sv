`default_nettype none

module I2C_slave (
    // in every circuit
    input logic clock, reset, 

    // interface with I2C
    inout tri SDA, 
    input logic SCL, // We are fast enough, no need to do clock stretching

    // interface with downstream thread
    inout tri [7:0] data, 
    output logic writeOK, 
    input logic data_in
);

    parameter I2C_ADDRESS = 7'h49;

    // ==================================================================
    // ============= Four little FSM for Pattern Detection: =============
    // ==================================================================

    enum logic {SCL0, SCL1} scl_state, scl_nextstate;
    logic scl_rise, scl_fall, scl_high, scl_low;

    enum logic {SDA0, SDA1} sda_state, sda_nextstate;
    logic sda_rise, sda_fall, sda_high, sda_low;

    enum logic {WAIT_START, SDAFALL} start_state, start_nextstate;
    logic i2c_start;

    enum logic {WAIT_STOP, SCLRISE} stop_state, stop_nextstate;
    logic i2c_stop;

    always_comb begin : SCLstate
        scl_rise = 1'b0;
        scl_fall = 1'b0;
        scl_high = 1'b0;
        scl_low  = 1'b0;
        case (scl_state)
            SCL0: begin
                if (SCL) begin
                    scl_rise = 1'b1;
                    scl_high = 1'b1;
                    scl_nextstate = SCL1;
                end
                else begin
                    scl_low = 1'b1;
                    scl_nextstate = SCL0;
                end
            end
            SCL1: begin
                if (~SCL) begin
                    scl_fall = 1'b1;
                    scl_low = 1'b1;
                    scl_nextstate = SCL0;
                end
                else begin
                    scl_high = 1'b1;
                    scl_nextstate = SCL1;
                end
            end
            default: scl_nextstate = SCL0;
        endcase
    end

    always_comb begin : SDAstate
        sda_rise = 1'b0;
        sda_fall = 1'b0;
        sda_high = 1'b0;
        sda_low  = 1'b0;
        case (sda_state)
            SDA0: begin
                if (SDA) begin
                    sda_rise = 1'b1;
                    sda_high = 1'b1;
                    sda_nextstate = SDA1;
                end
                else begin
                    sda_low = 1'b1;
                    sda_nextstate = SDA0;
                end
            end
            SDA1: begin
                if (~SDA) begin
                    sda_fall = 1'b1;
                    sda_low = 1'b1;
                    sda_nextstate = SDA0;
                end
                else begin
                    sda_high = 1'b1;
                    sda_nextstate = SDA1;
                end
            end
            default: sda_nextstate = SCL0;
        endcase
    end

    always_comb begin : STARTstate
        i2c_start = 1'b0;
        case (start_state)
            WAIT_START: begin
                if (sda_fall && scl_high) begin
                    start_nextstate = SDAFALL;
                end
                else begin
                    start_nextstate = WAIT_START;
                end
            end
            SDAFALL: begin
                if (scl_fall && sda_low) begin
                    i2c_start = 1'b1;
                    start_nextstate = WAIT_START;
                end
                else if (scl_fall && sda_high) begin
                    start_nextstate = WAIT_START;
                end
                else begin
                    start_nextstate = SDAFALL;
                end
            end
            default: start_nextstate = WAIT_START;
        endcase
    end

    always_comb begin : STOPstate
        i2c_stop = 1'b0;
        case (stop_state)
            WAIT_STOP: begin
                if (scl_rise && sda_low) begin
                    stop_nextstate = SCLRISE;
                end
                else begin
                    stop_nextstate = WAIT_STOP;
                end
            end
            SCLRISE: begin
                if (sda_rise & scl_high) begin
                    i2c_stop = 1'b1;
                    stop_nextstate = WAIT_STOP;
                end
                else if (scl_fall) begin
                    stop_nextstate = WAIT_STOP;
                end
                else begin
                    stop_nextstate = SCLRISE;
                end
            end
            default: stop_nextstate = WAIT_STOP;
        endcase
    end

    always_ff @(posedge clock, posedge reset) begin
        if (reset) begin
            scl_state <= SCL1; // B/c i2c lines were pulled UP, so by default
            sda_state <= SDA1; // they are 1.
            start_state <= WAIT_START;
            stop_state <= WAIT_STOP;
        end
        else begin
            scl_state <= scl_nextstate; // B/c i2c lines were pulled UP, so by default
            sda_state <= sda_nextstate; // they are 1.
            start_state <= start_nextstate;
            stop_state <= stop_nextstate;
        end
    end

    // ====================================================
    // ============= All Submodule Initiation =============
    // ====================================================

    logic sipo_load, sipo_full, sipo_clear;
    logic [7:0] sipo_out;

    SIPO the_sipo (.clock, .reset, .data_in(SDA), .clear(sipo_clear), 
                   .load(sipo_load), .out(sipo_out), .full(sipo_full));

    logic store;
    logic [7:0] register_out;

    Register the_reg (.clock, .reset, .in(sipo_out), .out(register_out), 
                      .enable(store));

    logic piso_load, piso_spit, piso_empty;
    logic piso_out;

    PISO the_piso (.clock, .reset, .data_in(data), .spit(piso_spit), 
                   .load(piso_load), .out(piso_out), .empty(piso_empty));

    logic is_correct_address;

    assign is_correct_address = sipo_out[7:1] == I2C_ADDRESS;

    logic r1w0;

    assign r1w0 = sipo_out[0];

    logic ack, wr_up, wr_down;

    assign SDA = ack ? 1'b0 : (wr_up ? piso_out : 1'bz);

    assign data = wr_down ? register_out : 8'bz;

    assign writeOK = ~wr_down & empty;

    assign piso_load = ~wr_down & data_in & empty;
    
    // ====================================================
    // =============== The Main Control FSM ===============
    // ====================================================

    enum logic [3:0] {IDLE, ADDR_RD, WAIT_END, 
                      READ, READ_ACK, READ_PRELD, READ_LOAD, 
                      WRITE, WRITE_ACK, WRITE_PRELD, WRITE_SEND, WRITE_RELEASE, 
                      WRITE_CHECK_ACK} 
                      state, nextstate;

    always_comb begin : main_FSM
        sipo_clear = 1'b0;
        sipo_load = 1'b0;
        ack = 1'b0;
        store = 1'b0;
        wr_down = 1'b0;
        piso_spit = 1'b0;
        wr_up = 1'b0;
        unique case (state)
            IDLE: begin
                if (i2c_start) begin
                    sipo_clear = 1'b1;
                    nextstate = ADDR_RD;
                end
                else begin
                    nextstate = IDLE;
                end
            end
            ADDR_RD: begin
                if (scl_rise && ~sipo_full) begin
                    sipo_load = 1'b1;
                end
                else if (sipo_full && ~is_correct_address) begin 
                    // we remove scl_rise here since when sipo is full and scl rise, 
                    // we need to pull the ACK line. this will make us run out of 
                    // time for checking address and RW
                    nextstate = WAIT_END;
                end
                else if (sipo_full && is_correct_address && ~r1w0) begin
                    // State READ is withrespect to slave, where i2c signal 
                    // r1w0 is with respect to master. so need to flip this part. 
                    nextstate = READ;
                end
                else if (sipo_full && is_correct_address && r1w0) begin
                    nextstate = WRITE;
                end
                else begin
                    nextstate = ADDR_RD;
                end
            end
            WAIT_END: begin 
                // This state is to made sure that this line don't 
                // hijack the line in the middle of the i2c. 
                if (i2c_stop)
                    nextstate = IDLE;
                else
                    nextstate = WAIT_END;
            end

            /* READ SIDE */

            READ: begin
                if (scl_fall) begin
                    ack = 1'b1;
                    nextstate = READ_ACK;
                end else begin
                    nextstate = READ;
                end
            end
            READ_ACK: begin
                wr_down = 1'b1;
                if (scl_fall) begin
                    sipo_clear = 1'b1;
                    nextstate = READ_PRELD;
                end else begin
                    ack = 1'b1;
                    nextstate = READ_ACK;
                end
            end
            READ_PRELD: begin
                wr_down = 1'b1;
                if (scl_rise) begin
                    sipo_load = 1'b1;
                    nextstate = READ_LOAD;
                end else begin
                    nextstate = READ_PRELD;
                end
            end
            READ_LOAD: begin
                wr_down = 1'b1;
                if (scl_rise && ~sipo_full) begin
                    sipo_load = 1'b1;
                    nextstate = READ_LOAD;
                end
                else if (scl_fall && ~sipo_full) begin
                    ack = 1'b1;
                    store = 1'b1;
                    nextstate = READ_ACK; 
                    // end of communication, send acknowledgement
                end
                else if (sda_rise && scl_high) begin
                    // sda change value during scl_low. if sda_rise and scl_high
                    nextstate = IDLE;
                end
            end

            /* WRITE SIDE */

            WRITE: begin
                if (scl_fall) begin
                    ack = 1'b1;
                    nextstate = WRITE_ACK;
                end else begin
                    nextstate = WRITE;
                end
            end
            WRITE_ACK: begin
                if (scl_fall) begin
                    nextstate = WRITE_PRELD;
                end else begin
                    ack = 1'b1;
                    nextstate = WRITE_ACK;
                end
            end
            WRITE_PRELD: begin
                if (scl_rise) begin
                    piso_spit = 1'b1;
                    wr_up = 1'b1;
                    nextstate = WRITE_SEND;
                end else begin
                    nextstate = WRITE_PRELD;
                end
            end
            WRITE_SEND: begin
                if (scl_rise && ~piso_empty) begin
                    piso_spit = 1'b1;
                    wr_up = 1'b1;
                    nextstate = WRITE_SEND;
                end
                else if (scl_fall && piso_empty) begin
                    nextstate = WRITE_RELEASE;
                end
                else begin
                    wr_up = 1'b1; // we need to hold this line. 
                end
            end
            WRITE_RELEASE: begin // this state releases the SDA line
                if (scl_rise) begin
                    nextstate = WRITE_CHECK_ACK;
                end
                else begin
                    nextstate = WRITE_RELEASE;
                end
            end
            WRITE_CHECK_ACK: begin // This is a short check on master's ACK
                if (sda_low) begin // ACKED
                    nextstate = WRITE_PRELD;
                end
                else begin // NACKED
                    nextstate = IDLE; // Communication end. no need to check STOP
                end
            end

            default: nextstate = IDLE;
        endcase
    end

    always_ff @(posedge clock, posedge reset) begin
        if (reset)
            state = IDLE;
        else
            state <= nextstate;
    end

endmodule

module SIPO #(
    parameter SIZE = 8, 
    parameter UNIT = 1
) (
    input  logic [UNIT-1:0] data_in, 
    input  logic            clock, reset, 
    input  logic            clear, load, 
    output logic [SIZE-1:0] out, 
    output logic            full
);

    logic [$clog2(SIZE):0] counter;

    assign full = counter == SIZE;

    always_ff @(posedge clock, posedge reset) begin
        if (reset || clear) begin
            out <= 'b0;
            counter <= 'b0;
        end
        else begin
            if (load && counter != SIZE) begin
                out <= {out[SIZE-UNIT-1:0], data_in};
                counter <= counter + 'd1;
            end
        end
    end
    
endmodule: SIPO

module PISO #(
    parameter SIZE = 8, 
    parameter UNIT = 1
) (
    input  logic [SIZE-1:0] data_in, 
    input  logic            clock, reset, 
    input  logic            spit, load, 
    output logic [UNIT-1:0] out, 
    output logic            empty
);

    logic [$clog2(SIZE):0] counter;

    logic [SIZE-1:0] register;

    assign empty = counter == SIZE;
    assign out   = register[SIZE-1]; // NOTE here we are sending MSB first

    always_ff @(posedge clock, posedge reset) begin
        if (reset) begin
            register <= 'b0;
            counter <= 'b0;
        end
        else begin
            if (load) begin
                register <= data_in;
                counter <= 'd0;
            end 
            else if (spit && counter != SIZE) begin
                register <= {register[SIZE-UNIT-1:0], {UNIT{1'b0}}};
                counter <= counter + 1;
            end
        end
    end
    
endmodule

module Register #(
    parameter SIZE = 8
) (
    input  logic [SIZE-1:0] in, 
    output logic [SIZE-1:0] out, 
    input  logic            clock, reset, 
    input  logic            enable
);

    always_ff @(posedge clock, posedge reset) begin
        if (reset)
            out <= 'b0;
        else if (enable) begin
            out <= in;
        end
    end
    
endmodule