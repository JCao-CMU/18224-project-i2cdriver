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
    dut.SCL.value = 1
    await FallingEdge(dut.clock)
    dut.SDA_in.value = 0
    await FallingEdge(dut.clock)
    dut.SCL.value = 0
    wt(2)
    for i in hex_to_binarray(address):
        send_bit(i)
    send_bit(0)
    #! RELEASE_WIRE, wait, and assert SDA_out is low and wr_up is high
    wt(2)
    dut.SCL.value = 1
    wt(5)
    dut.SCL.value = 0
    for subarray in array:
        for element in subarray:
            send_bit(element)
        #! RELEASE_WIRE, wait, and assert SDA_out is low and wr_up is high
        wt(2)
        dut.SCL.value = 1
        wt(5)
        dut.SCL.value = 0
        wt(5)
        payload = int("".join(str(x) for x in subarray), 2)
        assert(dut.data_out.value == payload)
    dut.SCL.value = 0
    wt(1)
    dut.SCL.value = 1
    wt(1)
    dut.SDA.value = 1

async def read_bit():
    wt(3)
    wt(2)
    dut.SCL.value = 1
    wt(2)
    value = dut.SDA_out.value
    wt(3)
    dut.SCL.value = 0
    return value

async def recv_data(address, array):
    # Address: int, array: array of bytes
    dut.SDA_in.value = 1
    dut.SCL.value = 1
    await FallingEdge(dut.clock)
    dut.SDA_in.value = 0
    await FallingEdge(dut.clock)
    dut.SCL.value = 0
    wt(2)
    for i in hex_to_binarray(address):
        send_bit(i)
    send_bit(0)
    #! RELEASE_WIRE, wait, and assert SDA_out is low and wr_up is high

    # todo: put thing in array.
    for i in range(len(array)):
        received_bit = []
        wt(2)
        dut.SCL.value = 1
        dut.data_in.value = array[i]
        wt(5)
        dut.SCL.value = 0
        for i in range(8):
            bit = send_bit(element)
            received_bit.append(bit)
        #! DUT Releases wire, wait, and assert SDA_out is low and wr_up is high
        if (i == len(array)-1):
            dut.SDA_in.value = 1
        else:
            dut.SDA_in.value = 0
        wt(2)
        dut.SCL.value = 1
        wt(5)
        dut.SCL.value = 0
        wt(2)
        payload = int("".join(str(x) for x in received_bit), 2)
        assert(array[i] == payload)
    dut.SCL.value = 0
    wt(1)
    dut.SCL.value = 1
    wt(1)
    dut.SDA.value = 1

def generate_down_packet():
    rand_packet_count = random.randint(PACKNUM_FLOOR, PACKNUM_CEIL+1)
    arr = []
    for i in range (rand_packet_count):
        packet = []
        for i in range(8):
            bit = np.random.choice([0,1]) 
            packet.append(bit)
        arr.append(packet)
    return arr

def generate_up_packet():
    rand_packet_count = random.randint(PACKNUM_FLOOR, PACKNUM_CEIL+1)
    arr = []
    for i in range (rand_packet_count):
        packet = random.randint(0, 2**8)
        arr.append(packet)
    return arr
    

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

    for i in range(20):
        package_down = generate_down_packet()
        send_data(0x49, package_down)
        package_up = generate_up_packet()
        recv_data(0x49, package_up)
