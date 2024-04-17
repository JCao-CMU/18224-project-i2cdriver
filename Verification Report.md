# Verification Report

## Github Repo

You are seeing it now...

## Verification Methodology

COCOTB testbench. Use the `testbench.mk` to get result. It generate a series of bit vectors to read and write, and it self checks the content of the output of the DUT. For slave read master write, Data was sent through I2C, and output as a bit array at the downstream of DUT, which we can conveniently compare what we fed to TB and what we got from DUT. For slave-write-master-read, we collect the bit at the master TB's side, while send in a byte to DUT's upstream input. Then we compare. 

## RTL Implementation

RTL Done. Utilization is low...

```
=== toplevel_chip ===
   Number of wires:                207
   Number of wire bits:            233
   Number of public wires:          45
   Number of public wire bits:      71
   Number of memories:               0
   Number of memory bits:            0
   Number of processes:              0
   Number of cells:                219
     sky130_fd_sc_hd__a2111o_2       1
     sky130_fd_sc_hd__a2111oi_2      1
     sky130_fd_sc_hd__a211o_2        1
     sky130_fd_sc_hd__a211oi_2       2
     sky130_fd_sc_hd__a21o_2         2
     sky130_fd_sc_hd__a21oi_2        1
     sky130_fd_sc_hd__a22o_2         9
     sky130_fd_sc_hd__a311o_2        1
     sky130_fd_sc_hd__a31o_2         3
     sky130_fd_sc_hd__a32o_2         2
     sky130_fd_sc_hd__a41o_2         1
     sky130_fd_sc_hd__and2_2         4
     sky130_fd_sc_hd__and2b_2        3
     sky130_fd_sc_hd__and3_2         2
     sky130_fd_sc_hd__and3b_2        1
     sky130_fd_sc_hd__and4b_2        1
     sky130_fd_sc_hd__and4bb_2       4
     sky130_fd_sc_hd__buf_1         48
     sky130_fd_sc_hd__buf_2          4
     sky130_fd_sc_hd__conb_1         2
     sky130_fd_sc_hd__dfrtp_2       38
     sky130_fd_sc_hd__dfstp_2        3
     sky130_fd_sc_hd__inv_2          5
     sky130_fd_sc_hd__mux2_2        27
     sky130_fd_sc_hd__nand2_2        5
     sky130_fd_sc_hd__nand3b_2       1
     sky130_fd_sc_hd__nor2_2        10
     sky130_fd_sc_hd__nor3_2         1
     sky130_fd_sc_hd__nor3b_2        1
     sky130_fd_sc_hd__o211a_2        3
     sky130_fd_sc_hd__o21a_2         2
     sky130_fd_sc_hd__o21ai_2        1
     sky130_fd_sc_hd__o21ba_2        3
     sky130_fd_sc_hd__o221a_2        1
     sky130_fd_sc_hd__o311a_2        1
     sky130_fd_sc_hd__o31a_2         1
     sky130_fd_sc_hd__o31ai_2        2
     sky130_fd_sc_hd__o32a_2         2
     sky130_fd_sc_hd__or2_2          2
     sky130_fd_sc_hd__or2b_2         5
     sky130_fd_sc_hd__or3_2          2
     sky130_fd_sc_hd__or3b_2         4
     sky130_fd_sc_hd__or4_2          1
     sky130_fd_sc_hd__or4b_2         4
     sky130_fd_sc_hd__xnor2_2        1
   Chip area for module '\toplevel_chip': 2466.115200
```

Critical Path
```
Fanout     Cap    Slew   Delay    Time   Description
-----------------------------------------------------------------------------
                  0.15    0.00    0.00   clock io_in[12] (rise edge)
                          0.00    0.00   clock network delay (ideal)
                          6.00    6.00 v input external delay
                  0.02    0.01    6.01 v io_in[1] (in)
     3    0.01                           io_in[1] (net)
                  0.02    0.00    6.01 v _172_/A (sky130_fd_sc_hd__or2b_2)
                  0.06    0.30    6.31 v _172_/X (sky130_fd_sc_hd__or2b_2)
     2    0.00                           _038_ (net)
                  0.06    0.00    6.31 v _173_/A (sky130_fd_sc_hd__buf_1)
                  0.10    0.15    6.46 v _173_/X (sky130_fd_sc_hd__buf_1)
     5    0.02                           _039_ (net)
                  0.10    0.01    6.47 v _187_/A (sky130_fd_sc_hd__nor2_2)
                  0.13    0.17    6.64 ^ _187_/Y (sky130_fd_sc_hd__nor2_2)
     2    0.01                           _053_ (net)
                  0.13    0.01    6.65 ^ _188_/B (sky130_fd_sc_hd__nand2_2)
                  0.08    0.11    6.75 v _188_/Y (sky130_fd_sc_hd__nand2_2)
     5    0.02                           _054_ (net)
                  0.08    0.00    6.76 v _189_/A (sky130_fd_sc_hd__buf_1)
                  0.09    0.16    6.92 v _189_/X (sky130_fd_sc_hd__buf_1)
     5    0.01                           _055_ (net)
                  0.09    0.00    6.92 v _190_/C (sky130_fd_sc_hd__and3_2)
                  0.04    0.23    7.15 v _190_/X (sky130_fd_sc_hd__and3_2)
     1    0.00                           _056_ (net)
                  0.04    0.00    7.15 v _191_/A (sky130_fd_sc_hd__buf_1)
                  0.02    0.08    7.24 v _191_/X (sky130_fd_sc_hd__buf_1)
     1    0.00                           mchip.slv.SDA_out (net)
                  0.02    0.00    7.24 v _377_/A (sky130_fd_sc_hd__buf_2)
                  0.11    0.16    7.40 v _377_/X (sky130_fd_sc_hd__buf_2)
     1    0.03                           io_out[0] (net)
                  0.11    0.00    7.40 v io_out[0] (out)
                                  7.40   data arrival time
                  0.15   30.00   30.00   clock io_in[12] (rise edge)
                          0.00   30.00   clock network delay (ideal)
                         -0.25   29.75   clock uncertainty
                          0.00   29.75   clock reconvergence pessimism
                         -6.00   23.75   output external delay
                                 23.75   data required time
-----------------------------------------------------------------------------
                                 23.75   data required time
                                 -7.40   data arrival time
-----------------------------------------------------------------------------
                                 16.35   slack (MET)
```