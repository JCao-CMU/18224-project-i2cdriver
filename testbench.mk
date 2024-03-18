TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/i2c.sv
TOPLEVEL = I2C_slave
MODULE = testbench
SIM = verilator
EXTRA_ARGS += --trace --trace-structs -Wno-fatal
include $(shell cocotb-config --makefiles)/Makefile.sim