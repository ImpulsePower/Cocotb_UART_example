// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLKip__0 = vlSelfRef.CLKip;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx__DOT__rst__0 
        = vlSelfRef.uart_tx__DOT__rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/imp/work/uart/src/uart_tx.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tx__DOT__TXi = vlSelfRef.TXi;
    vlSelfRef.uart_tx__DOT__BAUD_RATEi = vlSelfRef.BAUD_RATEi;
    vlSelfRef.uart_tx__DOT__rst = vlSelfRef.uart_tx__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart_tx__DOT__tx_en = vlSelfRef.uart_tx__DOT__tx_en_stab__DOT__SIGo;
    vlSelfRef.uart_tx__DOT__baud_rate = ((0U == vlSelfRef.BAUD_RATEi)
                                          ? 0x1c200U
                                          : vlSelfRef.BAUD_RATEi);
    vlSelfRef.uart_tx__DOT__bit_cntr = VL_DIV_III(32, (IData)(0x5f5e100U), vlSelfRef.uart_tx__DOT__baud_rate);
    vlSelfRef.uart_tx__DOT__RSTi = vlSelfRef.RSTi;
    vlSelfRef.uart_tx__DOT__TX_ENi = vlSelfRef.TX_ENi;
    vlSelfRef.uart_tx__DOT__BUSYo = vlSelfRef.uart_tx__DOT__busy;
    vlSelfRef.uart_tx__DOT__DONEo = vlSelfRef.uart_tx__DOT__done;
    vlSelfRef.uart_tx__DOT__DATAo = vlSelfRef.uart_tx__DOT__data;
    vlSelfRef.uart_tx__DOT__CLKip = vlSelfRef.CLKip;
    vlSelfRef.uart_tx__DOT__rst_stab__DOT__SIGi = vlSelfRef.uart_tx__DOT__RSTi;
    vlSelfRef.uart_tx__DOT__tx_en_stab__DOT__SIGi = vlSelfRef.uart_tx__DOT__TX_ENi;
    vlSelfRef.BUSYo = vlSelfRef.uart_tx__DOT__BUSYo;
    vlSelfRef.DONEo = vlSelfRef.uart_tx__DOT__DONEo;
    vlSelfRef.DATAo = vlSelfRef.uart_tx__DOT__DATAo;
    vlSelfRef.uart_tx__DOT__tx_en_stab__DOT__CLKip 
        = vlSelfRef.uart_tx__DOT__CLKip;
    vlSelfRef.uart_tx__DOT__rst_stab__DOT__CLKip = vlSelfRef.uart_tx__DOT__CLKip;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLKip)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge uart_tx.rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLKip)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge uart_tx.rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLKip = VL_RAND_RESET_I(1);
    vlSelf->RSTi = VL_RAND_RESET_I(1);
    vlSelf->TXi = VL_RAND_RESET_I(8);
    vlSelf->TX_ENi = VL_RAND_RESET_I(1);
    vlSelf->BAUD_RATEi = VL_RAND_RESET_I(32);
    vlSelf->BUSYo = VL_RAND_RESET_I(1);
    vlSelf->DONEo = VL_RAND_RESET_I(1);
    vlSelf->DATAo = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__CLKip = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__RSTi = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__TXi = VL_RAND_RESET_I(8);
    vlSelf->uart_tx__DOT__TX_ENi = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__BAUD_RATEi = VL_RAND_RESET_I(32);
    vlSelf->uart_tx__DOT__BUSYo = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__DONEo = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__DATAo = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__baud_rate = 0;
    vlSelf->uart_tx__DOT__bit_cntr = 0;
    vlSelf->uart_tx__DOT__tx_strb = 0;
    vlSelf->uart_tx__DOT__bit_idx = VL_RAND_RESET_I(3);
    vlSelf->uart_tx__DOT__clk_count = 0;
    vlSelf->uart_tx__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__tx_en = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__STATE = VL_RAND_RESET_I(2);
    vlSelf->uart_tx__DOT__tx_en_stab__DOT__CLKip = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__tx_en_stab__DOT__SIGi = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__tx_en_stab__DOT__SIGo = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__tx_en_stab__DOT__meta_sig = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__rst_stab__DOT__CLKip = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__rst_stab__DOT__SIGi = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__rst_stab__DOT__SIGo = VL_RAND_RESET_I(1);
    vlSelf->uart_tx__DOT__rst_stab__DOT__meta_sig = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uart_tx__DOT__clk_count = 0;
    vlSelf->__Vdly__uart_tx__DOT__bit_idx = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__uart_tx__DOT__STATE = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CLKip__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx__DOT__rst__0 = VL_RAND_RESET_I(1);
}
