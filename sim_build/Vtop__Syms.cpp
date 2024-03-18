// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_I2C_slave);
    __Vhier.remove(&__Vscope_I2C_slave, &__Vscope_I2C_slave__the_piso);
    __Vhier.remove(&__Vscope_I2C_slave, &__Vscope_I2C_slave__the_reg);
    __Vhier.remove(&__Vscope_I2C_slave, &__Vscope_I2C_slave__the_sipo);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_I2C_slave.configure(this, name(), "I2C_slave", "I2C_slave", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_I2C_slave__the_piso.configure(this, name(), "I2C_slave.the_piso", "the_piso", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_I2C_slave__the_reg.configure(this, name(), "I2C_slave.the_reg", "the_reg", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_I2C_slave__the_sipo.configure(this, name(), "I2C_slave.the_sipo", "the_sipo", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_I2C_slave);
    __Vhier.add(&__Vscope_I2C_slave, &__Vscope_I2C_slave__the_piso);
    __Vhier.add(&__Vscope_I2C_slave, &__Vscope_I2C_slave__the_reg);
    __Vhier.add(&__Vscope_I2C_slave, &__Vscope_I2C_slave__the_sipo);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_I2C_slave.varInsert(__Vfinal,"I2C_ADDRESS", const_cast<void*>(static_cast<const void*>(&(TOP.I2C_slave__DOT__I2C_ADDRESS))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"SCL", &(TOP.I2C_slave__DOT__SCL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"SDA_in", &(TOP.I2C_slave__DOT__SDA_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"SDA_out", &(TOP.I2C_slave__DOT__SDA_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"ack", &(TOP.I2C_slave__DOT__ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"clock", &(TOP.I2C_slave__DOT__clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"data_in", &(TOP.I2C_slave__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"data_incoming", &(TOP.I2C_slave__DOT__data_incoming), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"data_out", &(TOP.I2C_slave__DOT__data_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"i2c_start", &(TOP.I2C_slave__DOT__i2c_start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"i2c_stop", &(TOP.I2C_slave__DOT__i2c_stop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"is_correct_address", &(TOP.I2C_slave__DOT__is_correct_address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"nextstate", &(TOP.I2C_slave__DOT__nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"piso_empty", &(TOP.I2C_slave__DOT__piso_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"piso_load", &(TOP.I2C_slave__DOT__piso_load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"piso_out", &(TOP.I2C_slave__DOT__piso_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"piso_spit", &(TOP.I2C_slave__DOT__piso_spit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"r1w0", &(TOP.I2C_slave__DOT__r1w0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"register_out", &(TOP.I2C_slave__DOT__register_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"reset", &(TOP.I2C_slave__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"scl_fall", &(TOP.I2C_slave__DOT__scl_fall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"scl_high", &(TOP.I2C_slave__DOT__scl_high), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"scl_low", &(TOP.I2C_slave__DOT__scl_low), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"scl_nextstate", &(TOP.I2C_slave__DOT__scl_nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"scl_rise", &(TOP.I2C_slave__DOT__scl_rise), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"scl_state", &(TOP.I2C_slave__DOT__scl_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sda_fall", &(TOP.I2C_slave__DOT__sda_fall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sda_high", &(TOP.I2C_slave__DOT__sda_high), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sda_low", &(TOP.I2C_slave__DOT__sda_low), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sda_nextstate", &(TOP.I2C_slave__DOT__sda_nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sda_rise", &(TOP.I2C_slave__DOT__sda_rise), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sda_state", &(TOP.I2C_slave__DOT__sda_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sipo_clear", &(TOP.I2C_slave__DOT__sipo_clear), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sipo_full", &(TOP.I2C_slave__DOT__sipo_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sipo_load", &(TOP.I2C_slave__DOT__sipo_load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"sipo_out", &(TOP.I2C_slave__DOT__sipo_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"start_nextstate", &(TOP.I2C_slave__DOT__start_nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"start_state", &(TOP.I2C_slave__DOT__start_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"state", &(TOP.I2C_slave__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"stop_nextstate", &(TOP.I2C_slave__DOT__stop_nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"stop_state", &(TOP.I2C_slave__DOT__stop_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"store", &(TOP.I2C_slave__DOT__store), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"wr_down", &(TOP.I2C_slave__DOT__wr_down), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"wr_up", &(TOP.I2C_slave__DOT__wr_up), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave.varInsert(__Vfinal,"writeOK", &(TOP.I2C_slave__DOT__writeOK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.I2C_slave__DOT__the_piso__DOT__SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"UNIT", const_cast<void*>(static_cast<const void*>(&(TOP.I2C_slave__DOT__the_piso__DOT__UNIT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"clock", &(TOP.I2C_slave__DOT__the_piso__DOT__clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"counter", &(TOP.I2C_slave__DOT__the_piso__DOT__counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"data_in", &(TOP.I2C_slave__DOT__the_piso__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"empty", &(TOP.I2C_slave__DOT__the_piso__DOT__empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"load", &(TOP.I2C_slave__DOT__the_piso__DOT__load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"out", &(TOP.I2C_slave__DOT__the_piso__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"register", &(TOP.I2C_slave__DOT__the_piso__DOT__register), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"reset", &(TOP.I2C_slave__DOT__the_piso__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_piso.varInsert(__Vfinal,"spit", &(TOP.I2C_slave__DOT__the_piso__DOT__spit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_reg.varInsert(__Vfinal,"SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.I2C_slave__DOT__the_reg__DOT__SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_I2C_slave__the_reg.varInsert(__Vfinal,"clock", &(TOP.I2C_slave__DOT__the_reg__DOT__clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_reg.varInsert(__Vfinal,"enable", &(TOP.I2C_slave__DOT__the_reg__DOT__enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_reg.varInsert(__Vfinal,"in", &(TOP.I2C_slave__DOT__the_reg__DOT__in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave__the_reg.varInsert(__Vfinal,"out", &(TOP.I2C_slave__DOT__the_reg__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave__the_reg.varInsert(__Vfinal,"reset", &(TOP.I2C_slave__DOT__the_reg__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.I2C_slave__DOT__the_sipo__DOT__SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"UNIT", const_cast<void*>(static_cast<const void*>(&(TOP.I2C_slave__DOT__the_sipo__DOT__UNIT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"clear", &(TOP.I2C_slave__DOT__the_sipo__DOT__clear), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"clock", &(TOP.I2C_slave__DOT__the_sipo__DOT__clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"counter", &(TOP.I2C_slave__DOT__the_sipo__DOT__counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"data_in", &(TOP.I2C_slave__DOT__the_sipo__DOT__data_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"full", &(TOP.I2C_slave__DOT__the_sipo__DOT__full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"load", &(TOP.I2C_slave__DOT__the_sipo__DOT__load), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"out", &(TOP.I2C_slave__DOT__the_sipo__DOT__out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_slave__the_sipo.varInsert(__Vfinal,"reset", &(TOP.I2C_slave__DOT__the_sipo__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"SCL", &(TOP.SCL), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"SDA_in", &(TOP.SDA_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"SDA_out", &(TOP.SDA_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clock", &(TOP.clock), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_in", &(TOP.data_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_incoming", &(TOP.data_incoming), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_out", &(TOP.data_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"wr_down", &(TOP.wr_down), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"wr_up", &(TOP.wr_up), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"writeOK", &(TOP.writeOK), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
    }
}
