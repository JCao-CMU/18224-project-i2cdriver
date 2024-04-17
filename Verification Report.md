# Verification Report

## Github Repo

You are seeing it now...

## Verification Methodology

COCOTB testbench. Use the `testbench.mk` to get result. It generate a series of bit vectors to read and write, and it self checks the content of the output of the DUT. For slave read master write, Data was sent through I2C, and output as a bit array at the downstream of DUT, which we can conveniently compare what we fed to TB and what we got from DUT. For slave-write-master-read, we collect the bit at the master TB's side, while send in a byte to DUT's upstream input. Then we compare. 

## RTL Implementation

RTLDone