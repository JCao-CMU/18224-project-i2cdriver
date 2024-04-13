// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->SDA_in));
    bufp->chgBit(oldp+3,(vlSelf->SDA_out));
    bufp->chgBit(oldp+4,(vlSelf->SCL));
    bufp->chgBit(oldp+5,(vlSelf->wr_up));
    bufp->chgCData(oldp+6,(vlSelf->data_in),8);
    bufp->chgCData(oldp+7,(vlSelf->data_out),8);
    bufp->chgBit(oldp+8,(vlSelf->writeOK));
    bufp->chgBit(oldp+9,(vlSelf->wr_down));
    bufp->chgBit(oldp+10,(vlSelf->data_incoming));
    bufp->chgBit(oldp+11,(vlSelf->I2C_slave__DOT__clock));
    bufp->chgBit(oldp+12,(vlSelf->I2C_slave__DOT__reset));
    bufp->chgBit(oldp+13,(vlSelf->I2C_slave__DOT__SDA_in));
    bufp->chgBit(oldp+14,(vlSelf->I2C_slave__DOT__SDA_out));
    bufp->chgBit(oldp+15,(vlSelf->I2C_slave__DOT__SCL));
    bufp->chgBit(oldp+16,(vlSelf->I2C_slave__DOT__wr_up));
    bufp->chgCData(oldp+17,(vlSelf->I2C_slave__DOT__data_in),8);
    bufp->chgCData(oldp+18,(vlSelf->I2C_slave__DOT__data_out),8);
    bufp->chgBit(oldp+19,(vlSelf->I2C_slave__DOT__writeOK));
    bufp->chgBit(oldp+20,(vlSelf->I2C_slave__DOT__wr_down));
    bufp->chgBit(oldp+21,(vlSelf->I2C_slave__DOT__data_incoming));
    bufp->chgBit(oldp+22,(vlSelf->I2C_slave__DOT__scl_state));
    bufp->chgBit(oldp+23,(vlSelf->I2C_slave__DOT__scl_nextstate));
    bufp->chgBit(oldp+24,(vlSelf->I2C_slave__DOT__scl_rise));
    bufp->chgBit(oldp+25,(vlSelf->I2C_slave__DOT__scl_fall));
    bufp->chgBit(oldp+26,(vlSelf->I2C_slave__DOT__scl_high));
    bufp->chgBit(oldp+27,(vlSelf->I2C_slave__DOT__scl_low));
    bufp->chgBit(oldp+28,(vlSelf->I2C_slave__DOT__sda_state));
    bufp->chgBit(oldp+29,(vlSelf->I2C_slave__DOT__sda_nextstate));
    bufp->chgBit(oldp+30,(vlSelf->I2C_slave__DOT__sda_rise));
    bufp->chgBit(oldp+31,(vlSelf->I2C_slave__DOT__sda_fall));
    bufp->chgBit(oldp+32,(vlSelf->I2C_slave__DOT__sda_high));
    bufp->chgBit(oldp+33,(vlSelf->I2C_slave__DOT__sda_low));
    bufp->chgBit(oldp+34,(vlSelf->I2C_slave__DOT__start_state));
    bufp->chgBit(oldp+35,(vlSelf->I2C_slave__DOT__start_nextstate));
    bufp->chgBit(oldp+36,(vlSelf->I2C_slave__DOT__i2c_start));
    bufp->chgBit(oldp+37,(vlSelf->I2C_slave__DOT__stop_state));
    bufp->chgBit(oldp+38,(vlSelf->I2C_slave__DOT__stop_nextstate));
    bufp->chgBit(oldp+39,(vlSelf->I2C_slave__DOT__i2c_stop));
    bufp->chgBit(oldp+40,(vlSelf->I2C_slave__DOT__sipo_load));
    bufp->chgBit(oldp+41,(vlSelf->I2C_slave__DOT__sipo_full));
    bufp->chgBit(oldp+42,(vlSelf->I2C_slave__DOT__sipo_clear));
    bufp->chgCData(oldp+43,(vlSelf->I2C_slave__DOT__sipo_out),8);
    bufp->chgBit(oldp+44,(vlSelf->I2C_slave__DOT__store));
    bufp->chgCData(oldp+45,(vlSelf->I2C_slave__DOT__register_out),8);
    bufp->chgBit(oldp+46,(vlSelf->I2C_slave__DOT__piso_load));
    bufp->chgBit(oldp+47,(vlSelf->I2C_slave__DOT__piso_spit));
    bufp->chgBit(oldp+48,(vlSelf->I2C_slave__DOT__piso_empty));
    bufp->chgBit(oldp+49,(vlSelf->I2C_slave__DOT__piso_out));
    bufp->chgBit(oldp+50,(vlSelf->I2C_slave__DOT__is_correct_address));
    bufp->chgBit(oldp+51,(vlSelf->I2C_slave__DOT__r1w0));
    bufp->chgBit(oldp+52,(vlSelf->I2C_slave__DOT__ack));
    bufp->chgCData(oldp+53,(vlSelf->I2C_slave__DOT__state),4);
    bufp->chgCData(oldp+54,(vlSelf->I2C_slave__DOT__nextstate),4);
    bufp->chgCData(oldp+55,(vlSelf->I2C_slave__DOT__the_piso__DOT__data_in),8);
    bufp->chgBit(oldp+56,(vlSelf->I2C_slave__DOT__the_piso__DOT__clock));
    bufp->chgBit(oldp+57,(vlSelf->I2C_slave__DOT__the_piso__DOT__reset));
    bufp->chgBit(oldp+58,(vlSelf->I2C_slave__DOT__the_piso__DOT__spit));
    bufp->chgBit(oldp+59,(vlSelf->I2C_slave__DOT__the_piso__DOT__load));
    bufp->chgBit(oldp+60,(vlSelf->I2C_slave__DOT__the_piso__DOT__out));
    bufp->chgBit(oldp+61,(vlSelf->I2C_slave__DOT__the_piso__DOT__empty));
    bufp->chgCData(oldp+62,(vlSelf->I2C_slave__DOT__the_piso__DOT__counter),4);
    bufp->chgCData(oldp+63,(vlSelf->I2C_slave__DOT__the_piso__DOT__counter_plus_1),4);
    bufp->chgCData(oldp+64,(vlSelf->I2C_slave__DOT__the_piso__DOT__register),8);
    bufp->chgBit(oldp+65,(vlSelf->I2C_slave__DOT__the_piso__DOT__shift));
    bufp->chgCData(oldp+66,(vlSelf->I2C_slave__DOT__the_reg__DOT__in),8);
    bufp->chgCData(oldp+67,(vlSelf->I2C_slave__DOT__the_reg__DOT__out),8);
    bufp->chgBit(oldp+68,(vlSelf->I2C_slave__DOT__the_reg__DOT__clock));
    bufp->chgBit(oldp+69,(vlSelf->I2C_slave__DOT__the_reg__DOT__reset));
    bufp->chgBit(oldp+70,(vlSelf->I2C_slave__DOT__the_reg__DOT__enable));
    bufp->chgBit(oldp+71,(vlSelf->I2C_slave__DOT__the_sipo__DOT__data_in));
    bufp->chgBit(oldp+72,(vlSelf->I2C_slave__DOT__the_sipo__DOT__clock));
    bufp->chgBit(oldp+73,(vlSelf->I2C_slave__DOT__the_sipo__DOT__reset));
    bufp->chgBit(oldp+74,(vlSelf->I2C_slave__DOT__the_sipo__DOT__clear));
    bufp->chgBit(oldp+75,(vlSelf->I2C_slave__DOT__the_sipo__DOT__load));
    bufp->chgCData(oldp+76,(vlSelf->I2C_slave__DOT__the_sipo__DOT__out),8);
    bufp->chgBit(oldp+77,(vlSelf->I2C_slave__DOT__the_sipo__DOT__full));
    bufp->chgCData(oldp+78,(vlSelf->I2C_slave__DOT__the_sipo__DOT__counter),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
