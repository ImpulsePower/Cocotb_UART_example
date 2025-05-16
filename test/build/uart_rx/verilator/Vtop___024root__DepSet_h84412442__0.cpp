// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_rx__DOT__BAUD_RATEi = vlSelfRef.BAUD_RATEi;
    if (((IData)(vlSelfRef.CLKip) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__CLKip))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.uart_rx__DOT____Vtogcov__CLKip = vlSelfRef.CLKip;
    }
    if (((IData)(vlSelfRef.RSTi) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__RSTi))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.uart_rx__DOT____Vtogcov__RSTi = vlSelfRef.RSTi;
    }
    if (((IData)(vlSelfRef.RXi) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__RXi))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.uart_rx__DOT____Vtogcov__RXi = vlSelfRef.RXi;
    }
    if (((IData)(vlSelfRef.BAUD_RATE_RDi) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATE_RDi))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATE_RDi 
            = vlSelfRef.BAUD_RATE_RDi;
    }
    if (((IData)(vlSelfRef.BAUD_RATE_WEi) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATE_WEi))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATE_WEi 
            = vlSelfRef.BAUD_RATE_WEi;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__half_rx_strb) 
         ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__half_rx_strb))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.uart_rx__DOT____Vtogcov__half_rx_strb 
            = vlSelfRef.uart_rx__DOT__half_rx_strb;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rx_strb) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__rx_strb))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.uart_rx__DOT____Vtogcov__rx_strb 
            = vlSelfRef.uart_rx__DOT__rx_strb;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__done) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.uart_rx__DOT____Vtogcov__done = vlSelfRef.uart_rx__DOT__done;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__ready) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.uart_rx__DOT____Vtogcov__ready = vlSelfRef.uart_rx__DOT__ready;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig;
    }
    vlSelfRef.uart_rx__DOT__br = vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo;
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.uart_rx__DOT____Vtogcov__STATE = 
            ((2U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)) 
             | (1U & (IData)(vlSelfRef.uart_rx__DOT__STATE)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.uart_rx__DOT____Vtogcov__STATE = 
            ((1U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)) 
             | (2U & (IData)(vlSelfRef.uart_rx__DOT__STATE)));
    }
    vlSelfRef.uart_rx__DOT__RSTi = vlSelfRef.RSTi;
    vlSelfRef.uart_rx__DOT__RXi = vlSelfRef.RXi;
    vlSelfRef.uart_rx__DOT__BAUD_RATE_RDi = vlSelfRef.BAUD_RATE_RDi;
    vlSelfRef.uart_rx__DOT__BAUD_RATE_WEi = vlSelfRef.BAUD_RATE_WEi;
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((0xeU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (1U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((0xdU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (2U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((4U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((0xbU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (4U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((8U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((7U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (8U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    vlSelfRef.uart_rx__DOT__rst = vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__rx = vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__READYo = vlSelfRef.uart_rx__DOT__ready;
    vlSelfRef.uart_rx__DOT__DONEo = vlSelfRef.uart_rx__DOT__done;
    vlSelfRef.uart_rx__DOT__baud_rate_read = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__baud_rate_we = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo;
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xfdU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (2U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((4U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xfbU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (4U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((8U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xf7U 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (8U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xdfU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xbfU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    vlSelfRef.uart_rx__DOT__CLKip = vlSelfRef.CLKip;
    if ((1U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffffeU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (1U & vlSelfRef.BAUD_RATEi));
    }
    if ((2U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffffdU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (2U & vlSelfRef.BAUD_RATEi));
    }
    if ((4U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffffbU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (4U & vlSelfRef.BAUD_RATEi));
    }
    if ((8U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffff7U & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (8U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x10U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffffefU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x10U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x20U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffffdfU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x20U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x40U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffffbfU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x40U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x80U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffff7fU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x80U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x100U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffeffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x100U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x200U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffdffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x200U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x400U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffbffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x400U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x800U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffff7ffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x800U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x1000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffefffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x1000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x2000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffdfffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x2000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x4000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffbfffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x4000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x8000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffff7fffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x8000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x10000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffeffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x10000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x20000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffdffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x20000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x40000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffbffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x40000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x80000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfff7ffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x80000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x100000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffefffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x100000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x200000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffdfffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x200000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x400000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffbfffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x400000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x800000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xff7fffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x800000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x1000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfeffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x1000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x2000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfdffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x2000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x4000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfbffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x4000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x8000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xf7ffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x8000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x10000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xefffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x10000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x20000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xdfffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x20000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x40000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0xbfffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x40000000U & vlSelfRef.BAUD_RATEi));
    }
    if (((vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi 
            = ((0x7fffffffU & vlSelfRef.uart_rx__DOT____Vtogcov__BAUD_RATEi) 
               | (0x80000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((1U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffeU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (1U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((2U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffdU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (2U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((4U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffbU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (4U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((8U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffff7U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (8U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffefU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffdfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffbfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffff7fU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffeffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffdffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffbffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffff7ffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffefffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffdfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffbfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffff7fffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffeffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffdffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffbffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfff7ffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffefffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffdfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffbfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xff7fffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfeffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfdffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfbffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xf7ffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xefffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xdfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xbfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if (((vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
          ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0x7fffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((1U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffeU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (1U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((2U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffdU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (2U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((4U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffbU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (4U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((8U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffff7U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (8U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffefU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffdfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffbfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffff7fU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffeffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffdffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffbffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffff7ffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffefffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffdfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffbfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffff7fffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffeffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffdffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffbffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfff7ffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffefffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffdfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffbfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xff7fffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfeffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfdffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfbffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xf7ffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xefffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xdfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xbfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if (((vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
          ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0x7fffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    vlSelfRef.uart_rx__DOT__DATAo = vlSelfRef.uart_rx__DOT__data;
    vlSelfRef.uart_rx__DOT__baud_rate = vlSelfRef.BAUD_RATEi;
    vlSelfRef.uart_rx__DOT__bit_cntr = VL_DIV_III(32, (IData)(0x5f5e100U), vlSelfRef.uart_rx__DOT__baud_rate);
    vlSelfRef.uart_rx__DOT__half_bit_cntr = VL_SHIFTR_III(32,32,32, vlSelfRef.uart_rx__DOT__bit_cntr, 1U);
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__RSTi;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__RXi;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__BAUD_RATE_RDi;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGi = vlSelfRef.uart_rx__DOT__BAUD_RATE_WEi;
    if (((IData)(vlSelfRef.uart_rx__DOT__rst) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.uart_rx__DOT____Vtogcov__rst = vlSelfRef.uart_rx__DOT__rst;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rx) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__rx))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.uart_rx__DOT____Vtogcov__rx = vlSelfRef.uart_rx__DOT__rx;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__READYo) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__READYo))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.uart_rx__DOT____Vtogcov__READYo = vlSelfRef.uart_rx__DOT__READYo;
    }
    vlSelfRef.READYo = vlSelfRef.uart_rx__DOT__READYo;
    if (((IData)(vlSelfRef.uart_rx__DOT__DONEo) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DONEo))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DONEo = vlSelfRef.uart_rx__DOT__DONEo;
    }
    vlSelfRef.DONEo = vlSelfRef.uart_rx__DOT__DONEo;
    if (((IData)(vlSelfRef.uart_rx__DOT__baud_rate_read) 
         ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_read))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_read 
            = vlSelfRef.uart_rx__DOT__baud_rate_read;
    }
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__RDi 
        = vlSelfRef.uart_rx__DOT__baud_rate_read;
    if (((IData)(vlSelfRef.uart_rx__DOT__baud_rate_we) 
         ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_we))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_we 
            = vlSelfRef.uart_rx__DOT__baud_rate_we;
    }
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__WEi 
        = vlSelfRef.uart_rx__DOT__baud_rate_we;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__CLKip = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__CLKip = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__CLKip 
        = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__CLKip 
        = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__CLKip 
        = vlSelfRef.uart_rx__DOT__CLKip;
    vlSelfRef.DATAo = vlSelfRef.uart_rx__DOT__DATAo;
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xfeU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (1U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xfdU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (2U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xfbU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (4U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xf7U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (8U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xefU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x10U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xdfU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x20U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xbfU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x40U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0x7fU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x80U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__DATAi 
        = vlSelfRef.uart_rx__DOT__baud_rate;
    if ((1U & (vlSelfRef.uart_rx__DOT__baud_rate ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffffeU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (1U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((2U & (vlSelfRef.uart_rx__DOT__baud_rate ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffffdU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (2U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((4U & (vlSelfRef.uart_rx__DOT__baud_rate ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffffbU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (4U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((8U & (vlSelfRef.uart_rx__DOT__baud_rate ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffff7U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (8U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x10U & (vlSelfRef.uart_rx__DOT__baud_rate 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffffefU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x10U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x20U & (vlSelfRef.uart_rx__DOT__baud_rate 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffffdfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x20U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x40U & (vlSelfRef.uart_rx__DOT__baud_rate 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffffbfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x40U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x80U & (vlSelfRef.uart_rx__DOT__baud_rate 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffff7fU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x80U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x100U & (vlSelfRef.uart_rx__DOT__baud_rate 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffeffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x100U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x200U & (vlSelfRef.uart_rx__DOT__baud_rate 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffdffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x200U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x400U & (vlSelfRef.uart_rx__DOT__baud_rate 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffbffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x400U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x800U & (vlSelfRef.uart_rx__DOT__baud_rate 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffff7ffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x800U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x1000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffefffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x1000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x2000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffdfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x2000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x4000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffbfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x4000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x8000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffff7fffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x8000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x10000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffeffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x10000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x20000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffdffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x20000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x40000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffbffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x40000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x80000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfff7ffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x80000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x100000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffefffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x100000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x200000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffdfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x200000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x400000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffbfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x400000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x800000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xff7fffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x800000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x1000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfeffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x1000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x2000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfdffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x2000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x4000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfbffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x4000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x8000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xf7ffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x8000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x10000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xefffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x10000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x20000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xdfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x20000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if ((0x40000000U & (vlSelfRef.uart_rx__DOT__baud_rate 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xbfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x40000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
    if (((vlSelfRef.uart_rx__DOT__baud_rate ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0x7fffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x80000000U & vlSelfRef.uart_rx__DOT__baud_rate));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.CLKip) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLKip__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLKip__0 = vlSelfRef.CLKip;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
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
    ++(vlSymsp->__Vcoverage[113]);
    ++(vlSymsp->__Vcoverage[114]);
    ++(vlSymsp->__Vcoverage[117]);
    ++(vlSymsp->__Vcoverage[118]);
    ++(vlSymsp->__Vcoverage[121]);
    ++(vlSymsp->__Vcoverage[122]);
    ++(vlSymsp->__Vcoverage[125]);
    ++(vlSymsp->__Vcoverage[126]);
    __Vdly__uart_rx__DOT__STATE = vlSelfRef.uart_rx__DOT__STATE;
    __Vdly__uart_rx__DOT__bit_idx = vlSelfRef.uart_rx__DOT__bit_idx;
    __Vdly__uart_rx__DOT__clk_count = vlSelfRef.uart_rx__DOT__clk_count;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig;
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig;
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig;
    if (vlSelfRef.uart_rx__DOT__rst) {
        ++(vlSymsp->__Vcoverage[107]);
        __Vdly__uart_rx__DOT__bit_idx = 0U;
        __Vdly__uart_rx__DOT__clk_count = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
            if ((1U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
                if (vlSelfRef.uart_rx__DOT__rx_strb) {
                    if (vlSelfRef.uart_rx__DOT__rx_strb) {
                        ++(vlSymsp->__Vcoverage[101]);
                    }
                    __Vdly__uart_rx__DOT__STATE = ((IData)(vlSelfRef.uart_rx__DOT__rx_strb)
                                                    ? 0U
                                                    : 3U);
                    if ((1U & (~ (IData)(vlSelfRef.uart_rx__DOT__rx_strb)))) {
                        ++(vlSymsp->__Vcoverage[102]);
                    }
                    ++(vlSymsp->__Vcoverage[103]);
                } else {
                    ++(vlSymsp->__Vcoverage[104]);
                }
                ++(vlSymsp->__Vcoverage[105]);
            } else {
                if (vlSelfRef.uart_rx__DOT__rx_strb) {
                    vlSelfRef.uart_rx__DOT__data = 
                        (((~ ((IData)(1U) << (7U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)))) 
                          & (IData)(vlSelfRef.uart_rx__DOT__data)) 
                         | (0xffU & ((IData)(vlSelfRef.uart_rx__DOT__rx) 
                                     << (7U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)))));
                    if ((7U > (IData)(vlSelfRef.uart_rx__DOT__bit_idx))) {
                        __Vdly__uart_rx__DOT__bit_idx 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
                        ++(vlSymsp->__Vcoverage[96]);
                    } else {
                        ++(vlSymsp->__Vcoverage[97]);
                        __Vdly__uart_rx__DOT__bit_idx = 0U;
                        __Vdly__uart_rx__DOT__STATE = 3U;
                        vlSelfRef.uart_rx__DOT__done = 1U;
                    }
                    ++(vlSymsp->__Vcoverage[98]);
                } else {
                    ++(vlSymsp->__Vcoverage[99]);
                    __Vdly__uart_rx__DOT__STATE = 2U;
                }
                ++(vlSymsp->__Vcoverage[100]);
            }
        } else if ((1U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
            vlSelfRef.uart_rx__DOT__ready = 0U;
            if (vlSelfRef.uart_rx__DOT__half_rx_strb) {
                if (vlSelfRef.uart_rx__DOT__rx) {
                    ++(vlSymsp->__Vcoverage[92]);
                } else {
                    if (vlSelfRef.uart_rx__DOT__rx) {
                        ++(vlSymsp->__Vcoverage[89]);
                    }
                    __Vdly__uart_rx__DOT__STATE = ((IData)(vlSelfRef.uart_rx__DOT__rx)
                                                    ? 0U
                                                    : 2U);
                    if ((1U & (~ (IData)(vlSelfRef.uart_rx__DOT__rx)))) {
                        ++(vlSymsp->__Vcoverage[90]);
                    }
                    ++(vlSymsp->__Vcoverage[91]);
                }
                ++(vlSymsp->__Vcoverage[93]);
            } else {
                ++(vlSymsp->__Vcoverage[94]);
                __Vdly__uart_rx__DOT__STATE = 1U;
            }
            ++(vlSymsp->__Vcoverage[95]);
        } else {
            vlSelfRef.uart_rx__DOT__ready = 1U;
            vlSelfRef.uart_rx__DOT__done = 0U;
            if (vlSelfRef.uart_rx__DOT__rx) {
                ++(vlSymsp->__Vcoverage[87]);
            } else {
                if (vlSelfRef.uart_rx__DOT__rx) {
                    ++(vlSymsp->__Vcoverage[84]);
                }
                __Vdly__uart_rx__DOT__STATE = ((IData)(vlSelfRef.uart_rx__DOT__rx)
                                                ? 0U
                                                : 1U);
                if ((1U & (~ (IData)(vlSelfRef.uart_rx__DOT__rx)))) {
                    ++(vlSymsp->__Vcoverage[85]);
                }
                ++(vlSymsp->__Vcoverage[86]);
            }
            ++(vlSymsp->__Vcoverage[88]);
        }
        ++(vlSymsp->__Vcoverage[108]);
    }
    ++(vlSymsp->__Vcoverage[109]);
    if (vlSelfRef.uart_rx__DOT__baud_rate_read) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
            = vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram;
    } else {
        ++(vlSymsp->__Vcoverage[227]);
    }
    ++(vlSymsp->__Vcoverage[228]);
    vlSelfRef.uart_rx__DOT__bit_idx = __Vdly__uart_rx__DOT__bit_idx;
    if (((IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo;
    }
    vlSelfRef.uart_rx__DOT__rx = vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig 
        = vlSelfRef.RXi;
    if (((IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo;
    }
    vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig 
        = vlSelfRef.RSTi;
    if (((IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo;
    }
    vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig 
        = vlSelfRef.BAUD_RATE_WEi;
    if (((IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo;
    }
    vlSelfRef.uart_rx__DOT__baud_rate_read = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig 
        = vlSelfRef.BAUD_RATE_RDi;
    if (((IData)(vlSelfRef.uart_rx__DOT__done) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.uart_rx__DOT____Vtogcov__done = vlSelfRef.uart_rx__DOT__done;
    }
    vlSelfRef.uart_rx__DOT__DONEo = vlSelfRef.uart_rx__DOT__done;
    if (((IData)(vlSelfRef.uart_rx__DOT__ready) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.uart_rx__DOT____Vtogcov__ready = vlSelfRef.uart_rx__DOT__ready;
    }
    vlSelfRef.uart_rx__DOT__READYo = vlSelfRef.uart_rx__DOT__ready;
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((0xeU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (1U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((0xdU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (2U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((4U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((0xbU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (4U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((8U & ((IData)(vlSelfRef.uart_rx__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx 
            = ((7U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__bit_idx)) 
               | (8U & (IData)(vlSelfRef.uart_rx__DOT__bit_idx)));
    }
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xfdU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (2U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((4U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xfbU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (4U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((8U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xf7U 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (8U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xdfU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0xbfU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart_rx__DOT__data) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.uart_rx__DOT____Vtogcov__data = (
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__data)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelfRef.uart_rx__DOT__data)));
    }
    vlSelfRef.uart_rx__DOT__DATAo = vlSelfRef.uart_rx__DOT__data;
    if (vlSelfRef.uart_rx__DOT__rst) {
        ++(vlSymsp->__Vcoverage[81]);
        __Vdly__uart_rx__DOT__clk_count = 0U;
        vlSelfRef.uart_rx__DOT__half_rx_strb = 0U;
        vlSelfRef.uart_rx__DOT__rx_strb = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
            if ((1U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
                if ((vlSelfRef.uart_rx__DOT__clk_count 
                     == vlSelfRef.uart_rx__DOT__bit_cntr)) {
                    ++(vlSymsp->__Vcoverage[77]);
                    vlSelfRef.uart_rx__DOT__rx_strb = 1U;
                    __Vdly__uart_rx__DOT__clk_count = 0U;
                } else {
                    __Vdly__uart_rx__DOT__clk_count 
                        = ((IData)(1U) + vlSelfRef.uart_rx__DOT__clk_count);
                    ++(vlSymsp->__Vcoverage[78]);
                    vlSelfRef.uart_rx__DOT__rx_strb = 0U;
                }
                ++(vlSymsp->__Vcoverage[79]);
            } else {
                if ((vlSelfRef.uart_rx__DOT__clk_count 
                     == vlSelfRef.uart_rx__DOT__bit_cntr)) {
                    ++(vlSymsp->__Vcoverage[74]);
                    vlSelfRef.uart_rx__DOT__rx_strb = 1U;
                    __Vdly__uart_rx__DOT__clk_count = 0U;
                } else {
                    __Vdly__uart_rx__DOT__clk_count 
                        = ((IData)(1U) + vlSelfRef.uart_rx__DOT__clk_count);
                    ++(vlSymsp->__Vcoverage[75]);
                    vlSelfRef.uart_rx__DOT__rx_strb = 0U;
                }
                ++(vlSymsp->__Vcoverage[76]);
            }
        } else if ((1U & (IData)(vlSelfRef.uart_rx__DOT__STATE))) {
            if ((vlSelfRef.uart_rx__DOT__clk_count 
                 == vlSelfRef.uart_rx__DOT__half_bit_cntr)) {
                ++(vlSymsp->__Vcoverage[71]);
                vlSelfRef.uart_rx__DOT__half_rx_strb = 1U;
                __Vdly__uart_rx__DOT__clk_count = 0U;
            } else {
                __Vdly__uart_rx__DOT__clk_count = ((IData)(1U) 
                                                   + vlSelfRef.uart_rx__DOT__clk_count);
                ++(vlSymsp->__Vcoverage[72]);
                vlSelfRef.uart_rx__DOT__half_rx_strb = 0U;
            }
            ++(vlSymsp->__Vcoverage[73]);
        } else {
            ++(vlSymsp->__Vcoverage[70]);
            __Vdly__uart_rx__DOT__clk_count = 0U;
            vlSelfRef.uart_rx__DOT__half_rx_strb = 0U;
            vlSelfRef.uart_rx__DOT__rx_strb = 0U;
        }
        ++(vlSymsp->__Vcoverage[82]);
    }
    ++(vlSymsp->__Vcoverage[83]);
    vlSelfRef.uart_rx__DOT__br = vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo;
    if ((1U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffeU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (1U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((2U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffdU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (2U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((4U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffbU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (4U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((8U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffff7U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (8U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffefU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffdfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffbfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffff7fU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffeffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffdffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffbffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffff7ffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffefffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffdfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffbfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffff7fffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffeffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffdffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffbffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfff7ffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffefffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffdfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffbfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xff7fffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfeffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfdffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfbffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xf7ffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xefffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xdfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xbfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if (((vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo 
          ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0x7fffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo));
    }
    if (vlSelfRef.uart_rx__DOT__baud_rate_we) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
            = vlSelfRef.uart_rx__DOT__baud_rate;
    } else {
        ++(vlSymsp->__Vcoverage[224]);
    }
    ++(vlSymsp->__Vcoverage[225]);
    if (((IData)(vlSelfRef.uart_rx__DOT__rx) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__rx))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.uart_rx__DOT____Vtogcov__rx = vlSelfRef.uart_rx__DOT__rx;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__baud_rate_read) 
         ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_read))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_read 
            = vlSelfRef.uart_rx__DOT__baud_rate_read;
    }
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__RDi 
        = vlSelfRef.uart_rx__DOT__baud_rate_read;
    if (((IData)(vlSelfRef.uart_rx__DOT__DONEo) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DONEo))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DONEo = vlSelfRef.uart_rx__DOT__DONEo;
    }
    vlSelfRef.DONEo = vlSelfRef.uart_rx__DOT__DONEo;
    if (((IData)(vlSelfRef.uart_rx__DOT__READYo) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__READYo))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.uart_rx__DOT____Vtogcov__READYo = vlSelfRef.uart_rx__DOT__READYo;
    }
    vlSelfRef.READYo = vlSelfRef.uart_rx__DOT__READYo;
    vlSelfRef.DATAo = vlSelfRef.uart_rx__DOT__DATAo;
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xfeU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (1U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xfdU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (2U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xfbU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (4U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xf7U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (8U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xefU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x10U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xdfU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x20U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0xbfU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x40U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart_rx__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.uart_rx__DOT____Vtogcov__DATAo = 
            ((0x7fU & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__DATAo)) 
             | (0x80U & (IData)(vlSelfRef.uart_rx__DOT__DATAo)));
    }
    vlSelfRef.uart_rx__DOT__clk_count = __Vdly__uart_rx__DOT__clk_count;
    vlSelfRef.uart_rx__DOT__rst = vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart_rx__DOT__STATE = __Vdly__uart_rx__DOT__STATE;
    vlSelfRef.uart_rx__DOT__baud_rate_we = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo;
    if (((IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.uart_rx__DOT__rx_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.uart_rx__DOT__rst_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.uart_rx__DOT__br_we_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.uart_rx__DOT__br_rd_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rst) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.uart_rx__DOT____Vtogcov__rst = vlSelfRef.uart_rx__DOT__rst;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__half_rx_strb) 
         ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__half_rx_strb))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.uart_rx__DOT____Vtogcov__half_rx_strb 
            = vlSelfRef.uart_rx__DOT__half_rx_strb;
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__rx_strb) ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__rx_strb))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.uart_rx__DOT____Vtogcov__rx_strb 
            = vlSelfRef.uart_rx__DOT__rx_strb;
    }
    if ((1U & ((IData)(vlSelfRef.uart_rx__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.uart_rx__DOT____Vtogcov__STATE = 
            ((2U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)) 
             | (1U & (IData)(vlSelfRef.uart_rx__DOT__STATE)));
    }
    if ((2U & ((IData)(vlSelfRef.uart_rx__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.uart_rx__DOT____Vtogcov__STATE = 
            ((1U & (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__STATE)) 
             | (2U & (IData)(vlSelfRef.uart_rx__DOT__STATE)));
    }
    if (((IData)(vlSelfRef.uart_rx__DOT__baud_rate_we) 
         ^ (IData)(vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_we))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.uart_rx__DOT____Vtogcov__baud_rate_we 
            = vlSelfRef.uart_rx__DOT__baud_rate_we;
    }
    vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__WEi 
        = vlSelfRef.uart_rx__DOT__baud_rate_we;
    if ((1U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffeU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (1U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((2U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffdU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (2U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((4U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffbU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (4U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((8U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffff7U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (8U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffefU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffdfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffbfU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffff7fU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffeffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffdffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffbffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffff7ffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffefffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffdfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffbfffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffff7fffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffeffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffdffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffbffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfff7ffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffefffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffdfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffbfffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xff7fffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfeffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfdffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfbffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xf7ffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xefffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xdfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000000U & (vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xbfffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
    if (((vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram 
          ^ vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0x7fffffffU & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000000U & vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram));
    }
}
