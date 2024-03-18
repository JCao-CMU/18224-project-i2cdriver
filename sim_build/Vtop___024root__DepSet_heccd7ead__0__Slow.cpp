// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/user/Desktop/18224-project-i2cdriver/i2c.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SDA_in = VL_RAND_RESET_I(1);
    vlSelf->SDA_out = VL_RAND_RESET_I(1);
    vlSelf->SCL = VL_RAND_RESET_I(1);
    vlSelf->wr_up = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->writeOK = VL_RAND_RESET_I(1);
    vlSelf->wr_down = VL_RAND_RESET_I(1);
    vlSelf->data_incoming = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__SDA_in = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__SDA_out = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__SCL = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__wr_up = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__writeOK = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__wr_down = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__data_incoming = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__scl_state = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__scl_nextstate = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__scl_rise = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__scl_fall = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__scl_high = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__scl_low = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sda_state = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sda_nextstate = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sda_rise = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sda_fall = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sda_high = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sda_low = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__start_state = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__start_nextstate = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__i2c_start = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__stop_state = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__stop_nextstate = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__i2c_stop = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sipo_load = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sipo_full = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sipo_clear = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__sipo_out = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__register_out = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__piso_load = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__piso_spit = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__piso_empty = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__piso_out = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__is_correct_address = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__r1w0 = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->I2C_slave__DOT__nextstate = VL_RAND_RESET_I(4);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_sipo__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->I2C_slave__DOT__the_reg__DOT__in = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__the_reg__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__the_reg__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_reg__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_reg__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->I2C_slave__DOT__the_piso__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__spit = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->I2C_slave__DOT__the_piso__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->I2C_slave__DOT__the_piso__DOT__register = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
