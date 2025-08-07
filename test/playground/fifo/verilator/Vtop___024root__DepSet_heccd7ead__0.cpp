// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo__DOT__CLKip = vlSelfRef.CLKip;
    vlSelfRef.fifo__DOT__RSTi = vlSelfRef.RSTi;
    vlSelfRef.fifo__DOT__WEi = vlSelfRef.WEi;
    vlSelfRef.fifo__DOT__DATAi = vlSelfRef.DATAi;
    vlSelfRef.fifo__DOT__RDi = vlSelfRef.RDi;
    vlSelfRef.DATAo = vlSelfRef.fifo__DOT__DATAo;
    vlSelfRef.fifo__DOT__FULLo = (0x10U == (IData)(vlSelfRef.fifo__DOT__count));
    vlSelfRef.fifo__DOT__EMPTYo = (0U == (IData)(vlSelfRef.fifo__DOT__count));
    vlSelfRef.FULLo = vlSelfRef.fifo__DOT__FULLo;
    vlSelfRef.EMPTYo = vlSelfRef.fifo__DOT__EMPTYo;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__fifo__DOT__wr_ptr;
    __Vdly__fifo__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__fifo__DOT__rd_ptr;
    __Vdly__fifo__DOT__rd_ptr = 0;
    CData/*0:0*/ __VdlySet__fifo__DOT__memory__v0;
    __VdlySet__fifo__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__fifo__DOT__memory__v1;
    __VdlyVal__fifo__DOT__memory__v1 = 0;
    CData/*3:0*/ __VdlyDim0__fifo__DOT__memory__v1;
    __VdlyDim0__fifo__DOT__memory__v1 = 0;
    CData/*0:0*/ __VdlySet__fifo__DOT__memory__v1;
    __VdlySet__fifo__DOT__memory__v1 = 0;
    // Body
    __Vdly__fifo__DOT__rd_ptr = vlSelfRef.fifo__DOT__rd_ptr;
    __Vdly__fifo__DOT__wr_ptr = vlSelfRef.fifo__DOT__wr_ptr;
    __VdlySet__fifo__DOT__memory__v0 = 0U;
    __VdlySet__fifo__DOT__memory__v1 = 0U;
    if (vlSelfRef.RSTi) {
        __Vdly__fifo__DOT__wr_ptr = 0U;
        __VdlySet__fifo__DOT__memory__v0 = 1U;
        vlSelfRef.fifo__DOT__count = 0U;
        vlSelfRef.fifo__DOT__count_state = 0U;
        __Vdly__fifo__DOT__rd_ptr = 0U;
    } else {
        if (((IData)(vlSelfRef.WEi) & (~ (IData)(vlSelfRef.fifo__DOT__FULLo)))) {
            __VdlyVal__fifo__DOT__memory__v1 = vlSelfRef.DATAi;
            __VdlyDim0__fifo__DOT__memory__v1 = vlSelfRef.fifo__DOT__wr_ptr;
            __VdlySet__fifo__DOT__memory__v1 = 1U;
            __Vdly__fifo__DOT__wr_ptr = ((0xfU == (IData)(vlSelfRef.fifo__DOT__wr_ptr))
                                          ? 0U : (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.fifo__DOT__wr_ptr))));
        }
        vlSelfRef.fifo__DOT__count = (0x1fU & ((1U 
                                                == 
                                                ((((IData)(vlSelfRef.WEi) 
                                                   & (~ (IData)(vlSelfRef.fifo__DOT__FULLo))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.RDi) 
                                                    & (~ (IData)(vlSelfRef.fifo__DOT__EMPTYo)))))
                                                ? ((IData)(vlSelfRef.fifo__DOT__count) 
                                                   - (IData)(1U))
                                                : (
                                                   (2U 
                                                    == 
                                                    ((((IData)(vlSelfRef.WEi) 
                                                       & (~ (IData)(vlSelfRef.fifo__DOT__FULLo))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.RDi) 
                                                        & (~ (IData)(vlSelfRef.fifo__DOT__EMPTYo)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.fifo__DOT__count))
                                                    : (IData)(vlSelfRef.fifo__DOT__count))));
        if (((IData)(vlSelfRef.RDi) & (~ (IData)(vlSelfRef.fifo__DOT__EMPTYo)))) {
            vlSelfRef.fifo__DOT__DATAo = vlSelfRef.fifo__DOT__memory
                [vlSelfRef.fifo__DOT__rd_ptr];
            __Vdly__fifo__DOT__rd_ptr = ((0xfU == (IData)(vlSelfRef.fifo__DOT__rd_ptr))
                                          ? 0U : (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.fifo__DOT__rd_ptr))));
        }
    }
    vlSelfRef.fifo__DOT__wr_ptr = __Vdly__fifo__DOT__wr_ptr;
    vlSelfRef.fifo__DOT__rd_ptr = __Vdly__fifo__DOT__rd_ptr;
    if (__VdlySet__fifo__DOT__memory__v0) {
        vlSelfRef.fifo__DOT__memory[0U] = 0U;
    }
    if (__VdlySet__fifo__DOT__memory__v1) {
        vlSelfRef.fifo__DOT__memory[__VdlyDim0__fifo__DOT__memory__v1] 
            = __VdlyVal__fifo__DOT__memory__v1;
    }
    vlSelfRef.fifo__DOT__FULLo = (0x10U == (IData)(vlSelfRef.fifo__DOT__count));
    vlSelfRef.fifo__DOT__EMPTYo = (0U == (IData)(vlSelfRef.fifo__DOT__count));
    vlSelfRef.DATAo = vlSelfRef.fifo__DOT__DATAo;
    vlSelfRef.FULLo = vlSelfRef.fifo__DOT__FULLo;
    vlSelfRef.EMPTYo = vlSelfRef.fifo__DOT__EMPTYo;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/imp/work/uart/src/fifo.sv", 14, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/imp/work/uart/src/fifo.sv", 14, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/imp/work/uart/src/fifo.sv", 14, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLKip & 0xfeU)))) {
        Verilated::overWidthError("CLKip");}
    if (VL_UNLIKELY(((vlSelfRef.RSTi & 0xfeU)))) {
        Verilated::overWidthError("RSTi");}
    if (VL_UNLIKELY(((vlSelfRef.WEi & 0xfeU)))) {
        Verilated::overWidthError("WEi");}
    if (VL_UNLIKELY(((vlSelfRef.RDi & 0xfeU)))) {
        Verilated::overWidthError("RDi");}
}
#endif  // VL_DEBUG
