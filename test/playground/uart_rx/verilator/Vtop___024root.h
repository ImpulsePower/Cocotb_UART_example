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
    VL_IN8(CLKip,0,0);
    VL_IN8(RSTi,0,0);
    VL_IN8(RXi,0,0);
    VL_IN8(BAUD_RATE_RDi,0,0);
    VL_IN8(BAUD_RATE_WEi,0,0);
    VL_OUT8(DONEo,0,0);
    VL_OUT8(READYo,0,0);
    VL_OUT8(DATAo,7,0);
    CData/*0:0*/ uart_rx__DOT__CLKip;
    CData/*0:0*/ uart_rx__DOT__RSTi;
    CData/*0:0*/ uart_rx__DOT__RXi;
    CData/*0:0*/ uart_rx__DOT__BAUD_RATE_RDi;
    CData/*0:0*/ uart_rx__DOT__BAUD_RATE_WEi;
    CData/*0:0*/ uart_rx__DOT__DONEo;
    CData/*0:0*/ uart_rx__DOT__READYo;
    CData/*7:0*/ uart_rx__DOT__DATAo;
    CData/*0:0*/ uart_rx__DOT__half_rx_strb;
    CData/*0:0*/ uart_rx__DOT__rx_strb;
    CData/*3:0*/ uart_rx__DOT__bit_idx;
    CData/*7:0*/ uart_rx__DOT__data;
    CData/*0:0*/ uart_rx__DOT__rx;
    CData/*0:0*/ uart_rx__DOT__rst;
    CData/*0:0*/ uart_rx__DOT__done;
    CData/*0:0*/ uart_rx__DOT__ready;
    CData/*0:0*/ uart_rx__DOT__baud_rate_read;
    CData/*0:0*/ uart_rx__DOT__baud_rate_we;
    CData/*1:0*/ uart_rx__DOT__STATE;
    CData/*0:0*/ uart_rx__DOT__rx_stab__DOT__CLKip;
    CData/*0:0*/ uart_rx__DOT__rx_stab__DOT__SIGi;
    CData/*0:0*/ uart_rx__DOT__rx_stab__DOT__SIGo;
    CData/*0:0*/ uart_rx__DOT__rx_stab__DOT__meta_sig;
    CData/*0:0*/ uart_rx__DOT__rst_stab__DOT__CLKip;
    CData/*0:0*/ uart_rx__DOT__rst_stab__DOT__SIGi;
    CData/*0:0*/ uart_rx__DOT__rst_stab__DOT__SIGo;
    CData/*0:0*/ uart_rx__DOT__rst_stab__DOT__meta_sig;
    CData/*0:0*/ uart_rx__DOT__br_we_stab__DOT__CLKip;
    CData/*0:0*/ uart_rx__DOT__br_we_stab__DOT__SIGi;
    CData/*0:0*/ uart_rx__DOT__br_we_stab__DOT__SIGo;
    CData/*0:0*/ uart_rx__DOT__br_we_stab__DOT__meta_sig;
    CData/*0:0*/ uart_rx__DOT__br_rd_stab__DOT__CLKip;
    CData/*0:0*/ uart_rx__DOT__br_rd_stab__DOT__SIGi;
    CData/*0:0*/ uart_rx__DOT__br_rd_stab__DOT__SIGo;
    CData/*0:0*/ uart_rx__DOT__br_rd_stab__DOT__meta_sig;
    CData/*0:0*/ uart_rx__DOT__baud_rate_mem__DOT__CLKip;
    CData/*0:0*/ uart_rx__DOT__baud_rate_mem__DOT__RDi;
    CData/*0:0*/ uart_rx__DOT__baud_rate_mem__DOT__WEi;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLKip__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(BAUD_RATEi,31,0);
    IData/*31:0*/ uart_rx__DOT__BAUD_RATEi;
    IData/*31:0*/ uart_rx__DOT__baud_rate;
    IData/*31:0*/ uart_rx__DOT__bit_cntr;
    IData/*31:0*/ uart_rx__DOT__half_bit_cntr;
    IData/*31:0*/ uart_rx__DOT__clk_count;
    IData/*31:0*/ uart_rx__DOT__br;
    IData/*31:0*/ uart_rx__DOT__baud_rate_mem__DOT__DATAi;
    IData/*31:0*/ uart_rx__DOT__baud_rate_mem__DOT__Qo;
    IData/*31:0*/ uart_rx__DOT__baud_rate_mem__DOT__ram;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ uart_rx__DOT__FREQ_CLK = 0x05f5e100U;
    static constexpr IData/*31:0*/ uart_rx__DOT__DATA_WDTH = 8U;
    static constexpr IData/*31:0*/ uart_rx__DOT__baud_rate_mem__DOT__DATA_WIDTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
