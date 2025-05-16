// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_uart_rx);
    __Vhier.remove(&__Vscope_uart_rx, &__Vscope_uart_rx__baud_rate_mem);
    __Vhier.remove(&__Vscope_uart_rx, &__Vscope_uart_rx__br_rd_stab);
    __Vhier.remove(&__Vscope_uart_rx, &__Vscope_uart_rx__br_we_stab);
    __Vhier.remove(&__Vscope_uart_rx, &__Vscope_uart_rx__rst_stab);
    __Vhier.remove(&__Vscope_uart_rx, &__Vscope_uart_rx__rx_stab);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(37);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_uart_rx.configure(this, name(), "uart_rx", "uart_rx", "uart_rx", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_uart_rx__baud_rate_mem.configure(this, name(), "uart_rx.baud_rate_mem", "baud_rate_mem", "mem", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_uart_rx__br_rd_stab.configure(this, name(), "uart_rx.br_rd_stab", "br_rd_stab", "sync", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_uart_rx__br_we_stab.configure(this, name(), "uart_rx.br_we_stab", "br_we_stab", "sync", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_uart_rx__rst_stab.configure(this, name(), "uart_rx.rst_stab", "rst_stab", "sync", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_uart_rx__rx_stab.configure(this, name(), "uart_rx.rx_stab", "rx_stab", "sync", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_uart_rx);
    __Vhier.add(&__Vscope_uart_rx, &__Vscope_uart_rx__baud_rate_mem);
    __Vhier.add(&__Vscope_uart_rx, &__Vscope_uart_rx__br_rd_stab);
    __Vhier.add(&__Vscope_uart_rx, &__Vscope_uart_rx__br_we_stab);
    __Vhier.add(&__Vscope_uart_rx, &__Vscope_uart_rx__rst_stab);
    __Vhier.add(&__Vscope_uart_rx, &__Vscope_uart_rx__rx_stab);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"BAUD_RATE_RDi", &(TOP.BAUD_RATE_RDi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"BAUD_RATE_WEi", &(TOP.BAUD_RATE_WEi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"BAUD_RATEi", &(TOP.BAUD_RATEi), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"CLKip", &(TOP.CLKip), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"DATAo", &(TOP.DATAo), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"DONEo", &(TOP.DONEo), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"READYo", &(TOP.READYo), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"RSTi", &(TOP.RSTi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"RXi", &(TOP.RXi), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"BAUD_RATE_RDi", &(TOP.uart_rx__DOT__BAUD_RATE_RDi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"BAUD_RATE_WEi", &(TOP.uart_rx__DOT__BAUD_RATE_WEi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"BAUD_RATEi", &(TOP.uart_rx__DOT__BAUD_RATEi), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"CLKip", &(TOP.uart_rx__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"DATA_WDTH", const_cast<void*>(static_cast<const void*>(&(TOP.uart_rx__DOT__DATA_WDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"DATAo", &(TOP.uart_rx__DOT__DATAo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"DONEo", &(TOP.uart_rx__DOT__DONEo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"FREQ_CLK", const_cast<void*>(static_cast<const void*>(&(TOP.uart_rx__DOT__FREQ_CLK))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"READYo", &(TOP.uart_rx__DOT__READYo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"RSTi", &(TOP.uart_rx__DOT__RSTi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"RXi", &(TOP.uart_rx__DOT__RXi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"STATE", &(TOP.uart_rx__DOT__STATE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"baud_rate", &(TOP.uart_rx__DOT__baud_rate), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"baud_rate_read", &(TOP.uart_rx__DOT__baud_rate_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"baud_rate_we", &(TOP.uart_rx__DOT__baud_rate_we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"bit_cntr", &(TOP.uart_rx__DOT__bit_cntr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"bit_idx", &(TOP.uart_rx__DOT__bit_idx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"br", &(TOP.uart_rx__DOT__br), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"clk_count", &(TOP.uart_rx__DOT__clk_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"data", &(TOP.uart_rx__DOT__data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"done", &(TOP.uart_rx__DOT__done), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"half_bit_cntr", &(TOP.uart_rx__DOT__half_bit_cntr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"half_rx_strb", &(TOP.uart_rx__DOT__half_rx_strb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"ready", &(TOP.uart_rx__DOT__ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"rst", &(TOP.uart_rx__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"rx", &(TOP.uart_rx__DOT__rx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx.varInsert(__Vfinal,"rx_strb", &(TOP.uart_rx__DOT__rx_strb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"CLKip", &(TOP.uart_rx__DOT__baud_rate_mem__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.uart_rx__DOT__baud_rate_mem__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"DATAi", &(TOP.uart_rx__DOT__baud_rate_mem__DOT__DATAi), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"Qo", &(TOP.uart_rx__DOT__baud_rate_mem__DOT__Qo), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"RDi", &(TOP.uart_rx__DOT__baud_rate_mem__DOT__RDi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"WEi", &(TOP.uart_rx__DOT__baud_rate_mem__DOT__WEi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__baud_rate_mem.varInsert(__Vfinal,"ram", &(TOP.uart_rx__DOT__baud_rate_mem__DOT__ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_uart_rx__br_rd_stab.varInsert(__Vfinal,"CLKip", &(TOP.uart_rx__DOT__br_rd_stab__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_rd_stab.varInsert(__Vfinal,"SIGi", &(TOP.uart_rx__DOT__br_rd_stab__DOT__SIGi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_rd_stab.varInsert(__Vfinal,"SIGo", &(TOP.uart_rx__DOT__br_rd_stab__DOT__SIGo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_rd_stab.varInsert(__Vfinal,"meta_sig", &(TOP.uart_rx__DOT__br_rd_stab__DOT__meta_sig), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_we_stab.varInsert(__Vfinal,"CLKip", &(TOP.uart_rx__DOT__br_we_stab__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_we_stab.varInsert(__Vfinal,"SIGi", &(TOP.uart_rx__DOT__br_we_stab__DOT__SIGi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_we_stab.varInsert(__Vfinal,"SIGo", &(TOP.uart_rx__DOT__br_we_stab__DOT__SIGo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__br_we_stab.varInsert(__Vfinal,"meta_sig", &(TOP.uart_rx__DOT__br_we_stab__DOT__meta_sig), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rst_stab.varInsert(__Vfinal,"CLKip", &(TOP.uart_rx__DOT__rst_stab__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rst_stab.varInsert(__Vfinal,"SIGi", &(TOP.uart_rx__DOT__rst_stab__DOT__SIGi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rst_stab.varInsert(__Vfinal,"SIGo", &(TOP.uart_rx__DOT__rst_stab__DOT__SIGo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rst_stab.varInsert(__Vfinal,"meta_sig", &(TOP.uart_rx__DOT__rst_stab__DOT__meta_sig), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rx_stab.varInsert(__Vfinal,"CLKip", &(TOP.uart_rx__DOT__rx_stab__DOT__CLKip), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rx_stab.varInsert(__Vfinal,"SIGi", &(TOP.uart_rx__DOT__rx_stab__DOT__SIGi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rx_stab.varInsert(__Vfinal,"SIGo", &(TOP.uart_rx__DOT__rx_stab__DOT__SIGo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_uart_rx__rx_stab.varInsert(__Vfinal,"meta_sig", &(TOP.uart_rx__DOT__rx_stab__DOT__meta_sig), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
