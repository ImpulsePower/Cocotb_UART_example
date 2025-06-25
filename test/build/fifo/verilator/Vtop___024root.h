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
    VL_IN8(WEi,0,0);
    VL_IN8(DATAi,7,0);
    VL_IN8(RDi,0,0);
    VL_OUT8(DATAo,7,0);
    VL_OUT8(FULLo,0,0);
    VL_OUT8(EMPTYo,0,0);
    CData/*0:0*/ fifo__DOT__CLKip;
    CData/*0:0*/ fifo__DOT__RSTi;
    CData/*0:0*/ fifo__DOT__WEi;
    CData/*7:0*/ fifo__DOT__DATAi;
    CData/*0:0*/ fifo__DOT__RDi;
    CData/*7:0*/ fifo__DOT__DATAo;
    CData/*0:0*/ fifo__DOT__FULLo;
    CData/*0:0*/ fifo__DOT__EMPTYo;
    CData/*4:0*/ fifo__DOT__count;
    CData/*3:0*/ fifo__DOT__wr_ptr;
    CData/*3:0*/ fifo__DOT__rd_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLKip__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__RSTi__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> fifo__DOT__memory;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ fifo__DOT__DATA_WIDTH = 8U;
    static constexpr IData/*31:0*/ fifo__DOT__FIFO_DEPTH = 0x00000010U;
    static constexpr IData/*31:0*/ fifo__DOT__LOG2_DEPTH = 4U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
