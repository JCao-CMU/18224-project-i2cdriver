// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(SDA_in,0,0);
        VL_OUT8(SDA_out,0,0);
        VL_IN8(SCL,0,0);
        VL_OUT8(wr_up,0,0);
        VL_IN8(data_in,7,0);
        VL_OUT8(data_out,7,0);
        VL_OUT8(writeOK,0,0);
        VL_OUT8(wr_down,0,0);
        VL_IN8(data_incoming,0,0);
        CData/*0:0*/ I2C_slave__DOT__clock;
        CData/*0:0*/ I2C_slave__DOT__reset;
        CData/*0:0*/ I2C_slave__DOT__SDA_in;
        CData/*0:0*/ I2C_slave__DOT__SDA_out;
        CData/*0:0*/ I2C_slave__DOT__SCL;
        CData/*0:0*/ I2C_slave__DOT__wr_up;
        CData/*7:0*/ I2C_slave__DOT__data_in;
        CData/*7:0*/ I2C_slave__DOT__data_out;
        CData/*0:0*/ I2C_slave__DOT__writeOK;
        CData/*0:0*/ I2C_slave__DOT__wr_down;
        CData/*0:0*/ I2C_slave__DOT__data_incoming;
        CData/*0:0*/ I2C_slave__DOT__scl_state;
        CData/*0:0*/ I2C_slave__DOT__scl_nextstate;
        CData/*0:0*/ I2C_slave__DOT__scl_rise;
        CData/*0:0*/ I2C_slave__DOT__scl_fall;
        CData/*0:0*/ I2C_slave__DOT__scl_high;
        CData/*0:0*/ I2C_slave__DOT__scl_low;
        CData/*0:0*/ I2C_slave__DOT__sda_state;
        CData/*0:0*/ I2C_slave__DOT__sda_nextstate;
        CData/*0:0*/ I2C_slave__DOT__sda_rise;
        CData/*0:0*/ I2C_slave__DOT__sda_fall;
        CData/*0:0*/ I2C_slave__DOT__sda_high;
        CData/*0:0*/ I2C_slave__DOT__sda_low;
        CData/*0:0*/ I2C_slave__DOT__start_state;
        CData/*0:0*/ I2C_slave__DOT__start_nextstate;
        CData/*0:0*/ I2C_slave__DOT__i2c_start;
        CData/*0:0*/ I2C_slave__DOT__stop_state;
        CData/*0:0*/ I2C_slave__DOT__stop_nextstate;
        CData/*0:0*/ I2C_slave__DOT__i2c_stop;
        CData/*0:0*/ I2C_slave__DOT__sipo_load;
        CData/*0:0*/ I2C_slave__DOT__sipo_full;
        CData/*0:0*/ I2C_slave__DOT__sipo_clear;
        CData/*7:0*/ I2C_slave__DOT__sipo_out;
        CData/*0:0*/ I2C_slave__DOT__store;
        CData/*7:0*/ I2C_slave__DOT__register_out;
        CData/*0:0*/ I2C_slave__DOT__piso_load;
        CData/*0:0*/ I2C_slave__DOT__piso_spit;
        CData/*0:0*/ I2C_slave__DOT__piso_empty;
        CData/*0:0*/ I2C_slave__DOT__piso_out;
        CData/*0:0*/ I2C_slave__DOT__is_correct_address;
        CData/*0:0*/ I2C_slave__DOT__r1w0;
        CData/*0:0*/ I2C_slave__DOT__ack;
        CData/*3:0*/ I2C_slave__DOT__state;
        CData/*3:0*/ I2C_slave__DOT__nextstate;
        CData/*0:0*/ I2C_slave__DOT__the_sipo__DOT__data_in;
        CData/*0:0*/ I2C_slave__DOT__the_sipo__DOT__clock;
        CData/*0:0*/ I2C_slave__DOT__the_sipo__DOT__reset;
        CData/*0:0*/ I2C_slave__DOT__the_sipo__DOT__clear;
        CData/*0:0*/ I2C_slave__DOT__the_sipo__DOT__load;
        CData/*7:0*/ I2C_slave__DOT__the_sipo__DOT__out;
        CData/*0:0*/ I2C_slave__DOT__the_sipo__DOT__full;
        CData/*3:0*/ I2C_slave__DOT__the_sipo__DOT__counter;
        CData/*7:0*/ I2C_slave__DOT__the_reg__DOT__in;
    };
    struct {
        CData/*7:0*/ I2C_slave__DOT__the_reg__DOT__out;
        CData/*0:0*/ I2C_slave__DOT__the_reg__DOT__clock;
        CData/*0:0*/ I2C_slave__DOT__the_reg__DOT__reset;
        CData/*0:0*/ I2C_slave__DOT__the_reg__DOT__enable;
        CData/*7:0*/ I2C_slave__DOT__the_piso__DOT__data_in;
        CData/*0:0*/ I2C_slave__DOT__the_piso__DOT__clock;
        CData/*0:0*/ I2C_slave__DOT__the_piso__DOT__reset;
        CData/*0:0*/ I2C_slave__DOT__the_piso__DOT__spit;
        CData/*0:0*/ I2C_slave__DOT__the_piso__DOT__load;
        CData/*0:0*/ I2C_slave__DOT__the_piso__DOT__out;
        CData/*0:0*/ I2C_slave__DOT__the_piso__DOT__empty;
        CData/*3:0*/ I2C_slave__DOT__the_piso__DOT__counter;
        CData/*7:0*/ I2C_slave__DOT__the_piso__DOT__register;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*6:0*/ I2C_slave__DOT__I2C_ADDRESS = 0x49U;
    static constexpr IData/*31:0*/ I2C_slave__DOT__the_sipo__DOT__SIZE = 8U;
    static constexpr IData/*31:0*/ I2C_slave__DOT__the_sipo__DOT__UNIT = 1U;
    static constexpr IData/*31:0*/ I2C_slave__DOT__the_reg__DOT__SIZE = 8U;
    static constexpr IData/*31:0*/ I2C_slave__DOT__the_piso__DOT__SIZE = 8U;
    static constexpr IData/*31:0*/ I2C_slave__DOT__the_piso__DOT__UNIT = 1U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
