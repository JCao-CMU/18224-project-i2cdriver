// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_hb34e3fe2_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_hf6164e5c_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_hb34b0496_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_h0f79695a_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->I2C_slave__DOT__SCL = vlSelf->SCL;
    vlSelf->I2C_slave__DOT__data_incoming = vlSelf->data_incoming;
    vlSelf->I2C_slave__DOT__SDA_in = vlSelf->SDA_in;
    vlSelf->I2C_slave__DOT__data_in = vlSelf->data_in;
    vlSelf->I2C_slave__DOT__sipo_out = vlSelf->I2C_slave__DOT__the_sipo__DOT__out;
    vlSelf->data_out = vlSelf->I2C_slave__DOT__the_reg__DOT__out;
    vlSelf->I2C_slave__DOT__clock = vlSelf->clock;
    vlSelf->I2C_slave__DOT__reset = vlSelf->reset;
    vlSelf->I2C_slave__DOT__piso_out = (1U & ((IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__register) 
                                              >> 7U));
    vlSelf->I2C_slave__DOT__is_correct_address = (0x49U 
                                                  == 
                                                  (0x7fU 
                                                   & ((IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__out) 
                                                      >> 1U)));
    vlSelf->I2C_slave__DOT__r1w0 = (1U & (IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__out));
    vlSelf->I2C_slave__DOT__wr_down = 0U;
    vlSelf->I2C_slave__DOT__sipo_full = (8U == (IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__counter));
    vlSelf->I2C_slave__DOT__piso_empty = (8U == (IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__counter));
    __Vtableidx2 = (((IData)(vlSelf->SDA_in) << 1U) 
                    | (IData)(vlSelf->I2C_slave__DOT__sda_state));
    vlSelf->I2C_slave__DOT__sda_rise = Vtop__ConstPool__TABLE_hb34e3fe2_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_fall = Vtop__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_high = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_low = Vtop__ConstPool__TABLE_h0f79695a_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_nextstate = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->SCL) << 1U) | (IData)(vlSelf->I2C_slave__DOT__scl_state));
    vlSelf->I2C_slave__DOT__scl_rise = Vtop__ConstPool__TABLE_hb34e3fe2_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_fall = Vtop__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_high = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_low = Vtop__ConstPool__TABLE_h0f79695a_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_nextstate = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__the_sipo__DOT__data_in 
        = vlSelf->I2C_slave__DOT__SDA_in;
    vlSelf->I2C_slave__DOT__the_piso__DOT__data_in 
        = vlSelf->I2C_slave__DOT__data_in;
    vlSelf->I2C_slave__DOT__the_reg__DOT__in = vlSelf->I2C_slave__DOT__sipo_out;
    vlSelf->I2C_slave__DOT__data_out = vlSelf->data_out;
    vlSelf->I2C_slave__DOT__register_out = vlSelf->data_out;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__clock = vlSelf->I2C_slave__DOT__clock;
    vlSelf->I2C_slave__DOT__the_reg__DOT__clock = vlSelf->I2C_slave__DOT__clock;
    vlSelf->I2C_slave__DOT__the_piso__DOT__clock = vlSelf->I2C_slave__DOT__clock;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__reset = vlSelf->I2C_slave__DOT__reset;
    vlSelf->I2C_slave__DOT__the_reg__DOT__reset = vlSelf->I2C_slave__DOT__reset;
    vlSelf->I2C_slave__DOT__the_piso__DOT__reset = vlSelf->I2C_slave__DOT__reset;
    vlSelf->I2C_slave__DOT__the_piso__DOT__out = vlSelf->I2C_slave__DOT__piso_out;
    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    vlSelf->I2C_slave__DOT__wr_down = 1U;
                }
            } else {
                vlSelf->I2C_slave__DOT__wr_down = 1U;
            }
        }
    }
    vlSelf->wr_down = vlSelf->I2C_slave__DOT__wr_down;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__full = vlSelf->I2C_slave__DOT__sipo_full;
    vlSelf->I2C_slave__DOT__the_piso__DOT__empty = vlSelf->I2C_slave__DOT__piso_empty;
    vlSelf->writeOK = ((~ (IData)(vlSelf->I2C_slave__DOT__wr_down)) 
                       & (IData)(vlSelf->I2C_slave__DOT__piso_empty));
    vlSelf->I2C_slave__DOT__piso_load = ((~ (IData)(vlSelf->I2C_slave__DOT__wr_down)) 
                                         & ((IData)(vlSelf->data_incoming) 
                                            & (IData)(vlSelf->I2C_slave__DOT__piso_empty)));
    vlSelf->I2C_slave__DOT__i2c_stop = 0U;
    if (vlSelf->I2C_slave__DOT__stop_state) {
        if (vlSelf->I2C_slave__DOT__stop_state) {
            if (((IData)(vlSelf->I2C_slave__DOT__sda_rise) 
                 & (IData)(vlSelf->I2C_slave__DOT__scl_high))) {
                vlSelf->I2C_slave__DOT__i2c_stop = 1U;
            }
        }
        vlSelf->I2C_slave__DOT__stop_nextstate = ((IData)(vlSelf->I2C_slave__DOT__stop_state) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->I2C_slave__DOT__sda_rise) 
                                                           & (IData)(vlSelf->I2C_slave__DOT__scl_high)))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->I2C_slave__DOT__scl_fall)))));
    } else {
        vlSelf->I2C_slave__DOT__stop_nextstate = ((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                  & (IData)(vlSelf->I2C_slave__DOT__sda_low));
    }
    vlSelf->I2C_slave__DOT__sipo_load = 0U;
    vlSelf->I2C_slave__DOT__wr_up = 0U;
    vlSelf->I2C_slave__DOT__piso_spit = 0U;
    vlSelf->I2C_slave__DOT__store = 0U;
    vlSelf->I2C_slave__DOT__ack = 0U;
    vlSelf->I2C_slave__DOT__i2c_start = 0U;
    if (vlSelf->I2C_slave__DOT__start_state) {
        vlSelf->I2C_slave__DOT__start_nextstate = ((IData)(vlSelf->I2C_slave__DOT__start_state) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                            & (IData)(vlSelf->I2C_slave__DOT__sda_low)))) 
                                                       && (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                               & (IData)(vlSelf->I2C_slave__DOT__sda_high))))));
        if (vlSelf->I2C_slave__DOT__start_state) {
            if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                 & (IData)(vlSelf->I2C_slave__DOT__sda_low))) {
                vlSelf->I2C_slave__DOT__i2c_start = 1U;
            }
        }
    } else {
        vlSelf->I2C_slave__DOT__start_nextstate = ((IData)(vlSelf->I2C_slave__DOT__sda_fall) 
                                                   & (IData)(vlSelf->I2C_slave__DOT__scl_high));
    }
    if ((8U & (IData)(vlSelf->I2C_slave__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                         & (~ (IData)(vlSelf->I2C_slave__DOT__piso_empty)))) {
                        vlSelf->I2C_slave__DOT__wr_up = 1U;
                        vlSelf->I2C_slave__DOT__piso_spit = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                         & (IData)(vlSelf->I2C_slave__DOT__piso_empty))))) {
                        vlSelf->I2C_slave__DOT__wr_up = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (vlSelf->I2C_slave__DOT__scl_fall) {
                    vlSelf->I2C_slave__DOT__wr_up = 1U;
                    vlSelf->I2C_slave__DOT__piso_spit = 1U;
                }
            } else if (vlSelf->I2C_slave__DOT__scl_fall) {
                vlSelf->I2C_slave__DOT__wr_up = 1U;
                vlSelf->I2C_slave__DOT__piso_spit = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__scl_fall)))) {
                        vlSelf->I2C_slave__DOT__ack = 1U;
                    }
                }
            }
        }
        vlSelf->I2C_slave__DOT__nextstate = ((4U & (IData)(vlSelf->I2C_slave__DOT__state))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->I2C_slave__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->I2C_slave__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                    & (IData)(vlSelf->I2C_slave__DOT__sda_low))
                                                    ? 9U
                                                    : 
                                                   (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__sda_high))
                                                     ? 0U
                                                     : 0xbU))
                                                   : 
                                                  (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                    & (~ (IData)(vlSelf->I2C_slave__DOT__piso_empty)))
                                                    ? 0xaU
                                                    : 
                                                   (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__piso_empty))
                                                     ? 0xbU
                                                     : 0xaU)))
                                               : ((1U 
                                                   & (IData)(vlSelf->I2C_slave__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->I2C_slave__DOT__scl_fall)
                                                    ? 0xaU
                                                    : 9U)
                                                   : 
                                                  ((IData)(vlSelf->I2C_slave__DOT__scl_fall)
                                                    ? 9U
                                                    : 8U))));
    } else if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
        if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (vlSelf->I2C_slave__DOT__scl_fall) {
                    vlSelf->I2C_slave__DOT__ack = 1U;
                    vlSelf->I2C_slave__DOT__nextstate = 8U;
                } else {
                    vlSelf->I2C_slave__DOT__nextstate = 7U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                              & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))))) {
                    if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                         & (IData)(vlSelf->I2C_slave__DOT__sipo_full))) {
                        vlSelf->I2C_slave__DOT__ack = 1U;
                    }
                }
                vlSelf->I2C_slave__DOT__nextstate = 
                    (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                      & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))
                      ? 6U : (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                               & (IData)(vlSelf->I2C_slave__DOT__sipo_full))
                               ? 4U : (((IData)(vlSelf->I2C_slave__DOT__sda_rise) 
                                        & (IData)(vlSelf->I2C_slave__DOT__scl_high))
                                        ? 0U : 6U)));
            }
        } else {
            if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__scl_fall)))) {
                    vlSelf->I2C_slave__DOT__ack = 1U;
                }
            }
            vlSelf->I2C_slave__DOT__nextstate = ((1U 
                                                  & (IData)(vlSelf->I2C_slave__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->I2C_slave__DOT__scl_rise)
                                                   ? 6U
                                                   : 5U)
                                                  : 
                                                 ((IData)(vlSelf->I2C_slave__DOT__scl_fall)
                                                   ? 5U
                                                   : 4U));
        }
    } else if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
        if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if (vlSelf->I2C_slave__DOT__scl_fall) {
                vlSelf->I2C_slave__DOT__ack = 1U;
                vlSelf->I2C_slave__DOT__nextstate = 4U;
            } else {
                vlSelf->I2C_slave__DOT__nextstate = 3U;
            }
        } else {
            vlSelf->I2C_slave__DOT__nextstate = ((IData)(vlSelf->I2C_slave__DOT__i2c_stop)
                                                  ? 0U
                                                  : 2U);
        }
    } else {
        vlSelf->I2C_slave__DOT__nextstate = ((1U & (IData)(vlSelf->I2C_slave__DOT__state))
                                              ? (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                  & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->I2C_slave__DOT__sipo_full) 
                                                   & (~ (IData)(vlSelf->I2C_slave__DOT__is_correct_address)))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->I2C_slave__DOT__sipo_full) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__is_correct_address)) 
                                                    & (~ (IData)(vlSelf->I2C_slave__DOT__r1w0)))
                                                    ? 3U
                                                    : 
                                                   ((((IData)(vlSelf->I2C_slave__DOT__sipo_full) 
                                                      & (IData)(vlSelf->I2C_slave__DOT__is_correct_address)) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__r1w0))
                                                     ? 7U
                                                     : 1U))))
                                              : ((IData)(vlSelf->I2C_slave__DOT__i2c_start)
                                                  ? 1U
                                                  : 0U));
    }
    vlSelf->I2C_slave__DOT__writeOK = vlSelf->writeOK;
    vlSelf->I2C_slave__DOT__the_piso__DOT__load = vlSelf->I2C_slave__DOT__piso_load;
    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                         & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))) {
                        vlSelf->I2C_slave__DOT__sipo_load = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                  & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))))) {
                        if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                             & (IData)(vlSelf->I2C_slave__DOT__sipo_full))) {
                            vlSelf->I2C_slave__DOT__store = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (vlSelf->I2C_slave__DOT__scl_rise) {
                    vlSelf->I2C_slave__DOT__sipo_load = 1U;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                     & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))) {
                    vlSelf->I2C_slave__DOT__sipo_load = 1U;
                }
            }
        }
        vlSelf->I2C_slave__DOT__the_sipo__DOT__load 
            = vlSelf->I2C_slave__DOT__sipo_load;
        vlSelf->wr_up = vlSelf->I2C_slave__DOT__wr_up;
        vlSelf->I2C_slave__DOT__the_piso__DOT__spit 
            = vlSelf->I2C_slave__DOT__piso_spit;
    } else {
        vlSelf->I2C_slave__DOT__the_sipo__DOT__load 
            = vlSelf->I2C_slave__DOT__sipo_load;
        vlSelf->wr_up = vlSelf->I2C_slave__DOT__wr_up;
        vlSelf->I2C_slave__DOT__the_piso__DOT__spit 
            = vlSelf->I2C_slave__DOT__piso_spit;
    }
    vlSelf->I2C_slave__DOT__the_reg__DOT__enable = vlSelf->I2C_slave__DOT__store;
    vlSelf->SDA_out = ((~ (IData)(vlSelf->I2C_slave__DOT__ack)) 
                       & (IData)(vlSelf->I2C_slave__DOT__piso_out));
    vlSelf->I2C_slave__DOT__sipo_clear = 0U;
    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if (vlSelf->I2C_slave__DOT__scl_fall) {
                        vlSelf->I2C_slave__DOT__sipo_clear = 1U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                if (vlSelf->I2C_slave__DOT__i2c_start) {
                    vlSelf->I2C_slave__DOT__sipo_clear = 1U;
                }
            }
        }
    }
    vlSelf->I2C_slave__DOT__SDA_out = vlSelf->SDA_out;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__clear = vlSelf->I2C_slave__DOT__sipo_clear;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__I2C_slave__DOT__the_sipo__DOT__out;
    __Vdly__I2C_slave__DOT__the_sipo__DOT__out = 0;
    CData/*3:0*/ __Vdly__I2C_slave__DOT__the_sipo__DOT__counter;
    __Vdly__I2C_slave__DOT__the_sipo__DOT__counter = 0;
    CData/*7:0*/ __Vdly__I2C_slave__DOT__the_piso__DOT__register;
    __Vdly__I2C_slave__DOT__the_piso__DOT__register = 0;
    CData/*3:0*/ __Vdly__I2C_slave__DOT__the_piso__DOT__counter;
    __Vdly__I2C_slave__DOT__the_piso__DOT__counter = 0;
    // Body
    __Vdly__I2C_slave__DOT__the_piso__DOT__register 
        = vlSelf->I2C_slave__DOT__the_piso__DOT__register;
    __Vdly__I2C_slave__DOT__the_piso__DOT__counter 
        = vlSelf->I2C_slave__DOT__the_piso__DOT__counter;
    __Vdly__I2C_slave__DOT__the_sipo__DOT__out = vlSelf->I2C_slave__DOT__the_sipo__DOT__out;
    __Vdly__I2C_slave__DOT__the_sipo__DOT__counter 
        = vlSelf->I2C_slave__DOT__the_sipo__DOT__counter;
    if (vlSelf->reset) {
        __Vdly__I2C_slave__DOT__the_piso__DOT__register = 0U;
        __Vdly__I2C_slave__DOT__the_piso__DOT__counter = 0U;
        vlSelf->I2C_slave__DOT__the_reg__DOT__out = 0U;
        vlSelf->I2C_slave__DOT__state = 0U;
    } else {
        if (vlSelf->I2C_slave__DOT__piso_load) {
            __Vdly__I2C_slave__DOT__the_piso__DOT__register 
                = vlSelf->data_in;
            __Vdly__I2C_slave__DOT__the_piso__DOT__counter = 0U;
        } else if (((IData)(vlSelf->I2C_slave__DOT__piso_spit) 
                    & (8U != (IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__counter)))) {
            __Vdly__I2C_slave__DOT__the_piso__DOT__register 
                = (0xfeU & ((IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__register) 
                            << 1U));
            __Vdly__I2C_slave__DOT__the_piso__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__counter)));
        }
        if (vlSelf->I2C_slave__DOT__store) {
            vlSelf->I2C_slave__DOT__the_reg__DOT__out 
                = vlSelf->I2C_slave__DOT__sipo_out;
        }
        vlSelf->I2C_slave__DOT__state = vlSelf->I2C_slave__DOT__nextstate;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->I2C_slave__DOT__sipo_clear))) {
        __Vdly__I2C_slave__DOT__the_sipo__DOT__out = 0U;
        __Vdly__I2C_slave__DOT__the_sipo__DOT__counter = 0U;
    } else if (((IData)(vlSelf->I2C_slave__DOT__sipo_load) 
                & (8U != (IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__counter)))) {
        __Vdly__I2C_slave__DOT__the_sipo__DOT__out 
            = ((0xfeU & ((IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__out) 
                         << 1U)) | (IData)(vlSelf->SDA_in));
        __Vdly__I2C_slave__DOT__the_sipo__DOT__counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__counter)));
    }
    vlSelf->I2C_slave__DOT__stop_state = ((1U & (~ (IData)(vlSelf->reset))) 
                                          && (IData)(vlSelf->I2C_slave__DOT__stop_nextstate));
    vlSelf->I2C_slave__DOT__start_state = ((1U & (~ (IData)(vlSelf->reset))) 
                                           && (IData)(vlSelf->I2C_slave__DOT__start_nextstate));
    vlSelf->I2C_slave__DOT__sda_state = ((IData)(vlSelf->reset) 
                                         || (IData)(vlSelf->I2C_slave__DOT__sda_nextstate));
    vlSelf->I2C_slave__DOT__scl_state = ((IData)(vlSelf->reset) 
                                         || (IData)(vlSelf->I2C_slave__DOT__scl_nextstate));
    vlSelf->I2C_slave__DOT__the_piso__DOT__register 
        = __Vdly__I2C_slave__DOT__the_piso__DOT__register;
    vlSelf->I2C_slave__DOT__the_piso__DOT__counter 
        = __Vdly__I2C_slave__DOT__the_piso__DOT__counter;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__out = __Vdly__I2C_slave__DOT__the_sipo__DOT__out;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__counter 
        = __Vdly__I2C_slave__DOT__the_sipo__DOT__counter;
    vlSelf->I2C_slave__DOT__piso_out = (1U & ((IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__register) 
                                              >> 7U));
    vlSelf->I2C_slave__DOT__piso_empty = (8U == (IData)(vlSelf->I2C_slave__DOT__the_piso__DOT__counter));
    vlSelf->I2C_slave__DOT__sipo_out = vlSelf->I2C_slave__DOT__the_sipo__DOT__out;
    vlSelf->I2C_slave__DOT__is_correct_address = (0x49U 
                                                  == 
                                                  (0x7fU 
                                                   & ((IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__out) 
                                                      >> 1U)));
    vlSelf->I2C_slave__DOT__r1w0 = (1U & (IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__out));
    vlSelf->I2C_slave__DOT__sipo_full = (8U == (IData)(vlSelf->I2C_slave__DOT__the_sipo__DOT__counter));
    vlSelf->data_out = vlSelf->I2C_slave__DOT__the_reg__DOT__out;
    vlSelf->I2C_slave__DOT__wr_down = 0U;
    __Vtableidx2 = (((IData)(vlSelf->SDA_in) << 1U) 
                    | (IData)(vlSelf->I2C_slave__DOT__sda_state));
    vlSelf->I2C_slave__DOT__sda_rise = Vtop__ConstPool__TABLE_hb34e3fe2_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_fall = Vtop__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_high = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_low = Vtop__ConstPool__TABLE_h0f79695a_0
        [__Vtableidx2];
    vlSelf->I2C_slave__DOT__sda_nextstate = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->SCL) << 1U) | (IData)(vlSelf->I2C_slave__DOT__scl_state));
    vlSelf->I2C_slave__DOT__scl_rise = Vtop__ConstPool__TABLE_hb34e3fe2_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_fall = Vtop__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_high = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_low = Vtop__ConstPool__TABLE_h0f79695a_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__scl_nextstate = Vtop__ConstPool__TABLE_hb34b0496_0
        [__Vtableidx1];
    vlSelf->I2C_slave__DOT__the_piso__DOT__out = vlSelf->I2C_slave__DOT__piso_out;
    vlSelf->I2C_slave__DOT__the_piso__DOT__empty = vlSelf->I2C_slave__DOT__piso_empty;
    vlSelf->I2C_slave__DOT__the_reg__DOT__in = vlSelf->I2C_slave__DOT__sipo_out;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__full = vlSelf->I2C_slave__DOT__sipo_full;
    vlSelf->I2C_slave__DOT__data_out = vlSelf->data_out;
    vlSelf->I2C_slave__DOT__register_out = vlSelf->data_out;
    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    vlSelf->I2C_slave__DOT__wr_down = 1U;
                }
            } else {
                vlSelf->I2C_slave__DOT__wr_down = 1U;
            }
        }
    }
    vlSelf->wr_down = vlSelf->I2C_slave__DOT__wr_down;
    vlSelf->writeOK = ((~ (IData)(vlSelf->I2C_slave__DOT__wr_down)) 
                       & (IData)(vlSelf->I2C_slave__DOT__piso_empty));
    vlSelf->I2C_slave__DOT__piso_load = ((~ (IData)(vlSelf->I2C_slave__DOT__wr_down)) 
                                         & ((IData)(vlSelf->data_incoming) 
                                            & (IData)(vlSelf->I2C_slave__DOT__piso_empty)));
    vlSelf->I2C_slave__DOT__i2c_stop = 0U;
    if (vlSelf->I2C_slave__DOT__stop_state) {
        if (vlSelf->I2C_slave__DOT__stop_state) {
            if (((IData)(vlSelf->I2C_slave__DOT__sda_rise) 
                 & (IData)(vlSelf->I2C_slave__DOT__scl_high))) {
                vlSelf->I2C_slave__DOT__i2c_stop = 1U;
            }
        }
        vlSelf->I2C_slave__DOT__stop_nextstate = ((IData)(vlSelf->I2C_slave__DOT__stop_state) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->I2C_slave__DOT__sda_rise) 
                                                           & (IData)(vlSelf->I2C_slave__DOT__scl_high)))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->I2C_slave__DOT__scl_fall)))));
    } else {
        vlSelf->I2C_slave__DOT__stop_nextstate = ((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                  & (IData)(vlSelf->I2C_slave__DOT__sda_low));
    }
    vlSelf->I2C_slave__DOT__sipo_load = 0U;
    vlSelf->I2C_slave__DOT__wr_up = 0U;
    vlSelf->I2C_slave__DOT__piso_spit = 0U;
    vlSelf->I2C_slave__DOT__store = 0U;
    vlSelf->I2C_slave__DOT__ack = 0U;
    vlSelf->I2C_slave__DOT__i2c_start = 0U;
    if (vlSelf->I2C_slave__DOT__start_state) {
        vlSelf->I2C_slave__DOT__start_nextstate = ((IData)(vlSelf->I2C_slave__DOT__start_state) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                            & (IData)(vlSelf->I2C_slave__DOT__sda_low)))) 
                                                       && (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                               & (IData)(vlSelf->I2C_slave__DOT__sda_high))))));
        if (vlSelf->I2C_slave__DOT__start_state) {
            if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                 & (IData)(vlSelf->I2C_slave__DOT__sda_low))) {
                vlSelf->I2C_slave__DOT__i2c_start = 1U;
            }
        }
    } else {
        vlSelf->I2C_slave__DOT__start_nextstate = ((IData)(vlSelf->I2C_slave__DOT__sda_fall) 
                                                   & (IData)(vlSelf->I2C_slave__DOT__scl_high));
    }
    if ((8U & (IData)(vlSelf->I2C_slave__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                         & (~ (IData)(vlSelf->I2C_slave__DOT__piso_empty)))) {
                        vlSelf->I2C_slave__DOT__wr_up = 1U;
                        vlSelf->I2C_slave__DOT__piso_spit = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                         & (IData)(vlSelf->I2C_slave__DOT__piso_empty))))) {
                        vlSelf->I2C_slave__DOT__wr_up = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (vlSelf->I2C_slave__DOT__scl_fall) {
                    vlSelf->I2C_slave__DOT__wr_up = 1U;
                    vlSelf->I2C_slave__DOT__piso_spit = 1U;
                }
            } else if (vlSelf->I2C_slave__DOT__scl_fall) {
                vlSelf->I2C_slave__DOT__wr_up = 1U;
                vlSelf->I2C_slave__DOT__piso_spit = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__scl_fall)))) {
                        vlSelf->I2C_slave__DOT__ack = 1U;
                    }
                }
            }
        }
        vlSelf->I2C_slave__DOT__nextstate = ((4U & (IData)(vlSelf->I2C_slave__DOT__state))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->I2C_slave__DOT__state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->I2C_slave__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                    & (IData)(vlSelf->I2C_slave__DOT__sda_low))
                                                    ? 9U
                                                    : 
                                                   (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__sda_high))
                                                     ? 0U
                                                     : 0xbU))
                                                   : 
                                                  (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                    & (~ (IData)(vlSelf->I2C_slave__DOT__piso_empty)))
                                                    ? 0xaU
                                                    : 
                                                   (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__piso_empty))
                                                     ? 0xbU
                                                     : 0xaU)))
                                               : ((1U 
                                                   & (IData)(vlSelf->I2C_slave__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->I2C_slave__DOT__scl_fall)
                                                    ? 0xaU
                                                    : 9U)
                                                   : 
                                                  ((IData)(vlSelf->I2C_slave__DOT__scl_fall)
                                                    ? 9U
                                                    : 8U))));
    } else if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
        if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (vlSelf->I2C_slave__DOT__scl_fall) {
                    vlSelf->I2C_slave__DOT__ack = 1U;
                    vlSelf->I2C_slave__DOT__nextstate = 8U;
                } else {
                    vlSelf->I2C_slave__DOT__nextstate = 7U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                              & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))))) {
                    if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                         & (IData)(vlSelf->I2C_slave__DOT__sipo_full))) {
                        vlSelf->I2C_slave__DOT__ack = 1U;
                    }
                }
                vlSelf->I2C_slave__DOT__nextstate = 
                    (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                      & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))
                      ? 6U : (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                               & (IData)(vlSelf->I2C_slave__DOT__sipo_full))
                               ? 4U : (((IData)(vlSelf->I2C_slave__DOT__sda_rise) 
                                        & (IData)(vlSelf->I2C_slave__DOT__scl_high))
                                        ? 0U : 6U)));
            }
        } else {
            if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__scl_fall)))) {
                    vlSelf->I2C_slave__DOT__ack = 1U;
                }
            }
            vlSelf->I2C_slave__DOT__nextstate = ((1U 
                                                  & (IData)(vlSelf->I2C_slave__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->I2C_slave__DOT__scl_rise)
                                                   ? 6U
                                                   : 5U)
                                                  : 
                                                 ((IData)(vlSelf->I2C_slave__DOT__scl_fall)
                                                   ? 5U
                                                   : 4U));
        }
    } else if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
        if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if (vlSelf->I2C_slave__DOT__scl_fall) {
                vlSelf->I2C_slave__DOT__ack = 1U;
                vlSelf->I2C_slave__DOT__nextstate = 4U;
            } else {
                vlSelf->I2C_slave__DOT__nextstate = 3U;
            }
        } else {
            vlSelf->I2C_slave__DOT__nextstate = ((IData)(vlSelf->I2C_slave__DOT__i2c_stop)
                                                  ? 0U
                                                  : 2U);
        }
    } else {
        vlSelf->I2C_slave__DOT__nextstate = ((1U & (IData)(vlSelf->I2C_slave__DOT__state))
                                              ? (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                                  & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->I2C_slave__DOT__sipo_full) 
                                                   & (~ (IData)(vlSelf->I2C_slave__DOT__is_correct_address)))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->I2C_slave__DOT__sipo_full) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__is_correct_address)) 
                                                    & (~ (IData)(vlSelf->I2C_slave__DOT__r1w0)))
                                                    ? 3U
                                                    : 
                                                   ((((IData)(vlSelf->I2C_slave__DOT__sipo_full) 
                                                      & (IData)(vlSelf->I2C_slave__DOT__is_correct_address)) 
                                                     & (IData)(vlSelf->I2C_slave__DOT__r1w0))
                                                     ? 7U
                                                     : 1U))))
                                              : ((IData)(vlSelf->I2C_slave__DOT__i2c_start)
                                                  ? 1U
                                                  : 0U));
    }
    vlSelf->I2C_slave__DOT__writeOK = vlSelf->writeOK;
    vlSelf->I2C_slave__DOT__the_piso__DOT__load = vlSelf->I2C_slave__DOT__piso_load;
    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((2U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                         & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))) {
                        vlSelf->I2C_slave__DOT__sipo_load = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                                  & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))))) {
                        if (((IData)(vlSelf->I2C_slave__DOT__scl_fall) 
                             & (IData)(vlSelf->I2C_slave__DOT__sipo_full))) {
                            vlSelf->I2C_slave__DOT__store = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (vlSelf->I2C_slave__DOT__scl_rise) {
                    vlSelf->I2C_slave__DOT__sipo_load = 1U;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->I2C_slave__DOT__state))) {
                if (((IData)(vlSelf->I2C_slave__DOT__scl_rise) 
                     & (~ (IData)(vlSelf->I2C_slave__DOT__sipo_full)))) {
                    vlSelf->I2C_slave__DOT__sipo_load = 1U;
                }
            }
        }
        vlSelf->I2C_slave__DOT__the_sipo__DOT__load 
            = vlSelf->I2C_slave__DOT__sipo_load;
        vlSelf->wr_up = vlSelf->I2C_slave__DOT__wr_up;
        vlSelf->I2C_slave__DOT__the_piso__DOT__spit 
            = vlSelf->I2C_slave__DOT__piso_spit;
    } else {
        vlSelf->I2C_slave__DOT__the_sipo__DOT__load 
            = vlSelf->I2C_slave__DOT__sipo_load;
        vlSelf->wr_up = vlSelf->I2C_slave__DOT__wr_up;
        vlSelf->I2C_slave__DOT__the_piso__DOT__spit 
            = vlSelf->I2C_slave__DOT__piso_spit;
    }
    vlSelf->I2C_slave__DOT__the_reg__DOT__enable = vlSelf->I2C_slave__DOT__store;
    vlSelf->SDA_out = ((~ (IData)(vlSelf->I2C_slave__DOT__ack)) 
                       & (IData)(vlSelf->I2C_slave__DOT__piso_out));
    vlSelf->I2C_slave__DOT__sipo_clear = 0U;
    if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->I2C_slave__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                    if (vlSelf->I2C_slave__DOT__scl_fall) {
                        vlSelf->I2C_slave__DOT__sipo_clear = 1U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->I2C_slave__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->I2C_slave__DOT__state)))) {
                if (vlSelf->I2C_slave__DOT__i2c_start) {
                    vlSelf->I2C_slave__DOT__sipo_clear = 1U;
                }
            }
        }
    }
    vlSelf->I2C_slave__DOT__SDA_out = vlSelf->SDA_out;
    vlSelf->I2C_slave__DOT__the_sipo__DOT__clear = vlSelf->I2C_slave__DOT__sipo_clear;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/user/Desktop/18224-project-i2cdriver/i2c.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/user/Desktop/18224-project-i2cdriver/i2c.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/user/Desktop/18224-project-i2cdriver/i2c.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->SDA_in & 0xfeU))) {
        Verilated::overWidthError("SDA_in");}
    if (VL_UNLIKELY((vlSelf->SCL & 0xfeU))) {
        Verilated::overWidthError("SCL");}
    if (VL_UNLIKELY((vlSelf->data_incoming & 0xfeU))) {
        Verilated::overWidthError("data_incoming");}
}
#endif  // VL_DEBUG
