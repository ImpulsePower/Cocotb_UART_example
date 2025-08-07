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
    CData/*0:0*/ uart_tx__DOT__rst;
    VL_IN8(RSTi,0,0);
    VL_IN8(TXi,7,0);
    VL_IN8(TX_ENi,0,0);
    VL_OUT8(BUSYo,0,0);
    VL_OUT8(DONEo,0,0);
    VL_OUT8(DATAo,0,0);
    CData/*0:0*/ uart_tx__DOT__CLKip;
    CData/*0:0*/ uart_tx__DOT__RSTi;
    CData/*7:0*/ uart_tx__DOT__TXi;
    CData/*0:0*/ uart_tx__DOT__TX_ENi;
    CData/*0:0*/ uart_tx__DOT__BUSYo;
    CData/*0:0*/ uart_tx__DOT__DONEo;
    CData/*0:0*/ uart_tx__DOT__DATAo;
    CData/*0:0*/ uart_tx__DOT__tx_strb;
    CData/*2:0*/ uart_tx__DOT__bit_idx;
    CData/*0:0*/ uart_tx__DOT__data;
    CData/*0:0*/ uart_tx__DOT__done;
    CData/*0:0*/ uart_tx__DOT__tx_en;
    CData/*0:0*/ uart_tx__DOT__busy;
    CData/*1:0*/ uart_tx__DOT__STATE;
    CData/*0:0*/ uart_tx__DOT__tx_en_stab__DOT__CLKip;
    CData/*0:0*/ uart_tx__DOT__tx_en_stab__DOT__SIGi;
    CData/*0:0*/ uart_tx__DOT__tx_en_stab__DOT__SIGo;
    CData/*0:0*/ uart_tx__DOT__tx_en_stab__DOT__meta_sig;
    CData/*0:0*/ uart_tx__DOT__rst_stab__DOT__CLKip;
    CData/*0:0*/ uart_tx__DOT__rst_stab__DOT__SIGi;
    CData/*0:0*/ uart_tx__DOT__rst_stab__DOT__SIGo;
    CData/*0:0*/ uart_tx__DOT__rst_stab__DOT__meta_sig;
    CData/*2:0*/ __Vdly__uart_tx__DOT__bit_idx;
    CData/*1:0*/ __Vdly__uart_tx__DOT__STATE;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLKip__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(BAUD_RATEi,31,0);
    IData/*31:0*/ uart_tx__DOT__BAUD_RATEi;
    IData/*31:0*/ uart_tx__DOT__baud_rate;
    IData/*31:0*/ uart_tx__DOT__bit_cntr;
    IData/*31:0*/ uart_tx__DOT__clk_count;
    IData/*31:0*/ __Vdly__uart_tx__DOT__clk_count;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ uart_tx__DOT__FREQ_CLK = 0x05f5e100U;
    static constexpr IData/*31:0*/ uart_tx__DOT__DATA_WDTH = 8U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
