#!/bin/sh

rm -r build || true

mkdir build

yosys -p 'read_verilog -sv i2c.sv; synth_ecp5 -json build/synth_out.json -top ChipInterface' 2>&1 | tee build/yosys-log.txt

nextpnr-ecp5 --12k --json build/synth_out.json --lpf ulx3s_constraints_full.lpf --textcfg build/pnr_out.config 2>&1 | tee build/nextpnr-log.txt

ecppack --compress build/pnr_out.config build/bitstream.bit

fujprog build/bitstream.bit