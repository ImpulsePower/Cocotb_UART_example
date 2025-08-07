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
    vlSelfRef.uart_rx__DOT__BAUD_RATEi = vlSelfRef.BAUD_RATEi;
    vlSelfRef.uart_rx__DOT__rst = vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__rx = vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__br = vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo;
    vlSelfRef.uart_rx__DOT__RSTi = vlSelfRef.RSTi;
    vlSelfRef.uart_rx__DOT__RXi = vlSelfRef.RXi;
    vlSelfRef.uart_rx__DOT__BAUD_RATE_RDi = vlSelfRef.BAUD_RATE_RDi;
    vlSelfRef.uart_rx__DOT__BAUD_RATE_WEi = vlSelfRef.BAUD_RATE_WEi;
    vlSelfRef.uart_rx__DOT__DATAo = vlSelfRef.uart_rx__DOT__data;
    vlSelfRef.uart_rx__DOT__READYo = vlSelfRef.uart_rx__DOT__ready;
    vlSelfRef.uart_rx__DOT__DONEo = vlSelfRef.uart_rx__DOT__done;
    vlSelfRef.uart_rx__DOT__baud_rate_we = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__baud_rate_read = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__baud_rate = vlSelfRef.BAUD_RATEi;
    vlSelfRef.uart_rx__DOT__bit_cntr = VL_DIV_III(32, (IData)(0x5f5e100U), vlSelfRef.uart_rx__DOT__baud_rate);
    vlSelfRef.uart_rx__DOT__half_bit_cntr = VL_SHIFTR_III(32,32,32, vlSelfRef.uart_rx__DOT__bit_cntr, 1U);
    vlSelfRef.uart_rx__DOT__CLKip = vlSelfRef.CLKip;
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__RSTi;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__RXi;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__BAUD_RATE_RDi;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__BAUD_RATE_WEi;
    vlSelfRef.DATAo = vlSelfRef.uart_rx__DOT__DATAo;
    vlSelfRef.READYo = vlSelfRef.uart_rx__DOT__READYo;
    vlSelfRef.DONEo = vlSelfRef.uart_rx__DOT__DONEo;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__WEi 
        = vlSelfRef.uart_rx__DOT__baud_rate_we;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__RDi 
        = vlSelfRef.uart_rx__DOT__baud_rate_read;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__DATAi 
        = vlSelfRef.uart_rx__DOT__baud_rate;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__CLKip = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__CLKip = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__CLKip 
        = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__CLKip 
        = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__CLKip 
        = vlSelfRef.uart_rx__DOT__CLKip;
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
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__uart_rx__DOT__clk_count;
    __Vdly__uart_rx__DOT__clk_count = 0;
    CData/*3:0*/ __Vdly__uart_rx__DOT__bit_idx;
    __Vdly__uart_rx__DOT__bit_idx = 0;
    CData/*1:0*/ __Vdly__uart_rx__DOT__STATE;
    __Vdly__uart_rx__DOT__STATE = 0;
    // Body
    __Vdly__uart_rx__DOT__clk_count = vlSelfRef.uart_rx__DOT__clk_count;
    __Vdly__uart_rx__DOT__bit_idx = vlSelfRef.uart_rx__DOT__bit_idx;
    __Vdly__uart_rx__DOT__STATE = vlSelfRef.uart_rx__DOT__STATE;
    if (vlSelfRef.uart_rx__DOT__rst) {
        __Vdly__uart_rx__DOT__clk_count = 0U;
        __Vdly__uart_rx__DOT__bit_idx = 0U;
        __Vdly__uart_rx__DOT__clk_count = 0U;
        vlSelfRef.uart_rx__DOT__half_rx_strb = 0U;
        vlSelfRef.uart_rx__DOT__rx_strb = 0U;
    } else if ((2U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
        if ((1U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
            if (vlSelfRef.uart_rx__DOT__rx_strb) {
                __Vdly__uart_rx__DOT__STATE = ((IData)(vlSelfRef.uart_rx__DOT__rx_strb)
                                                ? 0U
                                                : 3U);
            }
            if ((vlSelfRef.uart_rx__DOT__clk_count 
                 == vlSelfRef.uart_rx__DOT__bit_cntr)) {
                vlSelfRef.uart_rx__DOT__rx_strb = 1U;
                __Vdly__uart_rx__DOT__clk_count = 0U;
            } else {
                __Vdly__uart_rx__DOT__clk_count = ((IData)(1U) 
                                                   + vlSelfRef.uart_rx__DOT__clk_count);
                vlSelfRef.uart_rx__DOT__rx_strb = 0U;
            }
        } else {
            if (vlSelfRef.uart_rx__DOT__rx_strb) {
                vlSelfRef.uart_rx__DOT__data = (((~ 
                                                  ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)))) 
                                                 & (IData)(vlSelfRef.uart_rx__DOT__data)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelfRef.uart_rx__DOT__rx) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)))));
                if ((7U > (IData)(vlSelfRef.uart_rx__DOT__bit_idx))) {
                    __Vdly__uart_rx__DOT__bit_idx = 
                        (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
                } else {
                    __Vdly__uart_rx__DOT__bit_idx = 0U;
                    __Vdly__uart_rx__DOT__STATE = 3U;
                    vlSelfRef.uart_rx__DOT__done = 1U;
                }
            } else {
                __Vdly__uart_rx__DOT__STATE = 2U;
            }
            if ((vlSelfRef.uart_rx__DOT__clk_count 
                 == vlSelfRef.uart_rx__DOT__bit_cntr)) {
                vlSelfRef.uart_rx__DOT__rx_strb = 1U;
                __Vdly__uart_rx__DOT__clk_count = 0U;
            } else {
                __Vdly__uart_rx__DOT__clk_count = ((IData)(1U) 
                                                   + vlSelfRef.uart_rx__DOT__clk_count);
                vlSelfRef.uart_rx__DOT__rx_strb = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
        vlSelfRef.uart_rx__DOT__ready = 0U;
        vlSelfRef.uart_rx__DOT__done = 0U;
        if (vlSelfRef.uart_rx__DOT__half_rx_strb) {
            if ((1U & (~ (IData)(vlSelfRef.uart_rx__DOT__rx)))) {
                __Vdly__uart_rx__DOT__STATE = ((IData)(vlSelfRef.uart_rx__DOT__rx)
                                                ? 0U
                                                : 2U);
            }
        } else {
            __Vdly__uart_rx__DOT__STATE = 1U;
        }
        if ((vlSelfRef.uart_rx__DOT__clk_count == vlSelfRef.uart_rx__DOT__half_bit_cntr)) {
            vlSelfRef.uart_rx__DOT__half_rx_strb = 1U;
            __Vdly__uart_rx__DOT__clk_count = 0U;
        } else {
            __Vdly__uart_rx__DOT__clk_count = ((IData)(1U) 
                                               + vlSelfRef.uart_rx__DOT__clk_count);
            vlSelfRef.uart_rx__DOT__half_rx_strb = 0U;
        }
    } else {
        vlSelfRef.uart_rx__DOT__ready = 1U;
        if ((1U & (~ (IData)(vlSelfRef.uart_rx__DOT__rx)))) {
            __Vdly__uart_rx__DOT__STATE = ((IData)(vlSelfRef.uart_rx__DOT__rx)
                                            ? 0U : 1U);
        }
        __Vdly__uart_rx__DOT__clk_count = 0U;
        vlSelfRef.uart_rx__DOT__half_rx_strb = 0U;
        vlSelfRef.uart_rx__DOT__rx_strb = 0U;
    }
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig;
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig;
    if (vlSelfRef.uart_rx__DOT__baud_rate_read) {
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
            = vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram;
    }
    vlSelfRef.uart_rx__DOT__bit_idx = __Vdly__uart_rx__DOT__bit_idx;
    vlSelfRef.uart_rx__DOT__rx = vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig 
        = vlSelfRef.RXi;
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig 
        = vlSelfRef.RSTi;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig 
        = vlSelfRef.BAUD_RATE_WEi;
    vlSelfRef.uart_rx__DOT__baud_rate_read = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig 
        = vlSelfRef.BAUD_RATE_RDi;
    vlSelfRef.uart_rx__DOT__br = vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo;
    if (vlSelfRef.uart_rx__DOT__baud_rate_we) {
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
            = vlSelfRef.uart_rx__DOT__baud_rate;
    }
    vlSelfRef.uart_rx__DOT__DATAo = vlSelfRef.uart_rx__DOT__data;
    vlSelfRef.uart_rx__DOT__DONEo = vlSelfRef.uart_rx__DOT__done;
    vlSelfRef.uart_rx__DOT__READYo = vlSelfRef.uart_rx__DOT__ready;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__RDi 
        = vlSelfRef.uart_rx__DOT__baud_rate_read;
    vlSelfRef.uart_rx__DOT__baud_rate_we = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo;
    vlSelfRef.DATAo = vlSelfRef.uart_rx__DOT__DATAo;
    vlSelfRef.DONEo = vlSelfRef.uart_rx__DOT__DONEo;
    vlSelfRef.READYo = vlSelfRef.uart_rx__DOT__READYo;
    vlSelfRef.uart_rx__DOT__STATE = __Vdly__uart_rx__DOT__STATE;
    vlSelfRef.uart_rx__DOT__rst = vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__clk_count = __Vdly__uart_rx__DOT__clk_count;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__WEi 
        = vlSelfRef.uart_rx__DOT__baud_rate_we;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            VL_FATAL_MT("/home/imp/work/uart/src/uart_rx.sv", 12, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/imp/work/uart/src/uart_rx.sv", 12, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/imp/work/uart/src/uart_rx.sv", 12, "", "Active region did not converge.");
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
    if (VL_UNLIKELY(((vlSelfRef.RXi & 0xfeU)))) {
        Verilated::overWidthError("RXi");}
    if (VL_UNLIKELY(((vlSelfRef.BAUD_RATE_RDi & 0xfeU)))) {
        Verilated::overWidthError("BAUD_RATE_RDi");}
    if (VL_UNLIKELY(((vlSelfRef.BAUD_RATE_WEi & 0xfeU)))) {
        Verilated::overWidthError("BAUD_RATE_WEi");}
}
#endif  // VL_DEBUG
