// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_fifo);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(57);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_fifo.configure(this, name(), "fifo", "fifo", "fifo", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_fifo);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"CLKip", &(TOP.CLKip), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"DATAi", &(TOP.DATAi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"DATAo", &(TOP.DATAo), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"EMPTYo", &(TOP.EMPTYo), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"FULLo", &(TOP.FULLo), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"RDi", &(TOP.RDi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"RSTi", &(TOP.RSTi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"WEi", &(TOP.WEi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"CLKip", &(TOP.fifo__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.fifo__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_fifo.varInsert(__Vfinal,"DATAi", &(TOP.fifo__DOT__DATAi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_fifo.varInsert(__Vfinal,"DATAo", &(TOP.fifo__DOT__DATAo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_fifo.varInsert(__Vfinal,"EMPTYo", &(TOP.fifo__DOT__EMPTYo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"FIFO_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.fifo__DOT__FIFO_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_fifo.varInsert(__Vfinal,"FULLo", &(TOP.fifo__DOT__FULLo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"LOG2_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.fifo__DOT__LOG2_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_fifo.varInsert(__Vfinal,"RDi", &(TOP.fifo__DOT__RDi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"RSTi", &(TOP.fifo__DOT__RSTi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"WEi", &(TOP.fifo__DOT__WEi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_fifo.varInsert(__Vfinal,"count", &(TOP.fifo__DOT__count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_fifo.varInsert(__Vfinal,"count_state", &(TOP.fifo__DOT__count_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_fifo.varInsert(__Vfinal,"memory", &(TOP.fifo__DOT__memory), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,15 ,7,0);
        __Vscope_fifo.varInsert(__Vfinal,"rd_ptr", &(TOP.fifo__DOT__rd_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_fifo.varInsert(__Vfinal,"wr_ptr", &(TOP.fifo__DOT__wr_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
    }
}
