`default_nettype none

module I2C_slave (
    // in every circuit
    input logic clock, reset, 

    // interface with I2C
    inout logic SDA, 
    input logic SCL, // We are fast enough, no need to do clock stretching

    // interface with downstream thread
    inout logic [7:0] data, 
    output logic writeOK, 
    input logic data_in
);

    
    
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