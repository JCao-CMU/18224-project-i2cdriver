import os
import logging
import random
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import *

PACKNUM_CEIL = 20
PACKNUM_FLOOR = 1

# Determinism
random.seed(42)

ADDRESS = 0x49

def hex_to_binarray(n):
    return [1 if digit=='1' else 0 for digit in bin(n)[2:]]

async def wt(n):
    for _ in range(n):
        await FallingEdge(dut.clock)

async def send_bit(bit):
    wt(3)
    dut.SDA_in.value = bit
    wt(2)
    dut.SCL.value = 1
    wt(5)
    dut.SCL.value = 0

async def send_data(address, array):
    # Address: int, array: data array of bits
    dut.SDA_in.value = 1
    dut.SCL_in.value = 1
    await FallingEdge(dut.clock)
    dut.SDA_in.value = 0
    await FallingEdge(dut.clock)
    dut.SCL_in.value = 0
    wt(2)
    for i in hex_to_binarray(address):
        send_bit(i)
    send_bit(0)
    #! RELEASE_WIRE, wait, and assert SDA_out is low and wr_up is high
    wt(2)
    dut.SCL_in.value = 1
    wt(5)
    dut.SCL_in.value = 0
    
    
    # task send_bytes (input logic [6:0] address, input logic [7:0] payload []);
    #     SDA_in = 1'b1;
    #     SCL = 1'b1;
    #     @(posedge clock)
    #     SDA_in <= 1'b0;
    #     @(posedge clock)
    #     SCL <= 1'b0;
    #     @(posedge clock);
    #     @(posedge clock);
    #     for (int i = 6; i >= 0; i--) begin
    #         set_value(address[i]);
    #     end
    #     set_value(1'b0); // WRITE, so read from slave's perspective
    #     SDA_in <= 1'bz;
    #     wt(3);
    #     assert (SDA_out == 1'b0) 
    #         else $error("Failure to ACKNOWLEDGE: SDA=%b", SDA);
    #     @(posedge clock);
    #     @(posedge clock);
    #     SCL <= 1'b1;
    #     wait_5_clocks();
    #     SCL <= 1'b0;
    #     wait_5_clocks();
    #     foreach (payload[k]) begin
    #         for (int j = 7; j >= 0; j--) begin
    #             set_value(payload[k][j]);
    #         end
    #         SDA <= 1'bz;
    #         wt(3);
    #         assert (SDA == 1'b0) 
    #             else $error("Failure to ACKNOWLEDGE: SDA=%b", SDA);
    #         @(posedge clock);
    #         @(posedge clock);
    #         SCL <= 1'b1;
    #         wait_5_clocks();
    #         SCL <= 1'b0;
    #         wait_5_clocks();
    #         assert (data == payload[k]) 
    #             else $error("Received %h, Send %h", data, payload[k]);
    #     end
    #     SDA <= 1'b0;
    #     SCL <= 1'b0;
    #     @(posedge clock)
    #     SCL <= 1'b1;
    #     @(posedge clock)
    #     SDA <= 1'b1;
    # endtask
    pass

def generate_packet():
    rand_packet_count = random.randint(PACKNUM_FLOOR, PACKNUM_CEIL+1)
    arr = []
    for i in range (rand_packet_count):
        packet = []
        for i in range(8)
            bit = np.random.choice([0,1]) 
            packet.append(bit)
        arr.append(packet)


@cocotb.test()
async def basic_test(dut):
    print("============== STARTING TEST ==============")

    # Run the clock
    cocotb.start_soon(Clock(dut.clock, 10, units="ns").start())

    # Since our circuit is on the rising edge,
    # we can feed inputs on the falling edge
    # This makes things easier to read and visualize
    await FallingEdge(dut.clock)

    # Reset the DUT
    dut.reset.value = True
    await FallingEdge(dut.clock)
    await FallingEdge(dut.clock)
    dut.reset.value = False

    dut.data_in.value = 32
    dut.go.value = True
    await FallingEdge(dut.clock)
    dut.go.value = False

    dut.data_in.value = 32
    await FallingEdge(dut.clock)
    dut.data_in.value = 13
    await FallingEdge(dut.clock)
    dut.data_in.value = 79
    await FallingEdge(dut.clock)

    dut.data_in.value = 40
    dut.finish.value = 1
    await FallingEdge(dut.clock)
    print(dut.finish.value)
    print(dut.range.value)
    assert dut.range.value == 66
