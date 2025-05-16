// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.CLKip));
    bufp->chgBit(oldp+1,(vlSelfRef.RSTi));
    bufp->chgBit(oldp+2,(vlSelfRef.RXi));
    bufp->chgBit(oldp+3,(vlSelfRef.BAUD_RATE_RDi));
    bufp->chgBit(oldp+4,(vlSelfRef.BAUD_RATE_WEi));
    bufp->chgIData(oldp+5,(vlSelfRef.BAUD_RATEi),32);
    bufp->chgBit(oldp+6,(vlSelfRef.DONEo));
    bufp->chgBit(oldp+7,(vlSelfRef.READYo));
    bufp->chgCData(oldp+8,(vlSelfRef.DATAo),8);
    bufp->chgBit(oldp+9,(vlSelfRef.uart_rx__DOT__CLKip));
    bufp->chgBit(oldp+10,(vlSelfRef.uart_rx__DOT__RSTi));
    bufp->chgBit(oldp+11,(vlSelfRef.uart_rx__DOT__RXi));
    bufp->chgBit(oldp+12,(vlSelfRef.uart_rx__DOT__BAUD_RATE_RDi));
    bufp->chgBit(oldp+13,(vlSelfRef.uart_rx__DOT__BAUD_RATE_WEi));
    bufp->chgIData(oldp+14,(vlSelfRef.uart_rx__DOT__BAUD_RATEi),32);
    bufp->chgBit(oldp+15,(vlSelfRef.uart_rx__DOT__DONEo));
    bufp->chgBit(oldp+16,(vlSelfRef.uart_rx__DOT__READYo));
    bufp->chgCData(oldp+17,(vlSelfRef.uart_rx__DOT__DATAo),8);
    bufp->chgIData(oldp+18,(vlSelfRef.uart_rx__DOT__baud_rate),32);
    bufp->chgIData(oldp+19,(vlSelfRef.uart_rx__DOT__bit_cntr),32);
    bufp->chgIData(oldp+20,(vlSelfRef.uart_rx__DOT__half_bit_cntr),32);
    bufp->chgBit(oldp+21,(vlSelfRef.uart_rx__DOT__half_rx_strb));
    bufp->chgBit(oldp+22,(vlSelfRef.uart_rx__DOT__rx_strb));
    bufp->chgIData(oldp+23,(vlSelfRef.uart_rx__DOT__clk_count),32);
    bufp->chgCData(oldp+24,(vlSelfRef.uart_rx__DOT__bit_idx),4);
    bufp->chgCData(oldp+25,(vlSelfRef.uart_rx__DOT__data),8);
    bufp->chgBit(oldp+26,(vlSelfRef.uart_rx__DOT__rx));
    bufp->chgBit(oldp+27,(vlSelfRef.uart_rx__DOT__rst));
    bufp->chgBit(oldp+28,(vlSelfRef.uart_rx__DOT__done));
    bufp->chgBit(oldp+29,(vlSelfRef.uart_rx__DOT__ready));
    bufp->chgBit(oldp+30,(vlSelfRef.uart_rx__DOT__baud_rate_read));
    bufp->chgBit(oldp+31,(vlSelfRef.uart_rx__DOT__baud_rate_we));
    bufp->chgIData(oldp+32,(vlSelfRef.uart_rx__DOT__br),32);
    bufp->chgCData(oldp+33,(vlSelfRef.uart_rx__DOT__STATE),2);
    bufp->chgBit(oldp+34,(vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__CLKip));
    bufp->chgBit(oldp+35,(vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__RDi));
    bufp->chgBit(oldp+36,(vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__WEi));
    bufp->chgIData(oldp+37,(vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__DATAi),32);
    bufp->chgIData(oldp+38,(vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__Qo),32);
    bufp->chgIData(oldp+39,(vlSelfRef.uart_rx__DOT__baud_rate_mem__DOT__ram),32);
    bufp->chgBit(oldp+40,(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__CLKip));
    bufp->chgBit(oldp+41,(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGi));
    bufp->chgBit(oldp+42,(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__SIGo));
    bufp->chgBit(oldp+43,(vlSelfRef.uart_rx__DOT__br_rd_stab__DOT__meta_sig));
    bufp->chgBit(oldp+44,(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__CLKip));
    bufp->chgBit(oldp+45,(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGi));
    bufp->chgBit(oldp+46,(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__SIGo));
    bufp->chgBit(oldp+47,(vlSelfRef.uart_rx__DOT__br_we_stab__DOT__meta_sig));
    bufp->chgBit(oldp+48,(vlSelfRef.uart_rx__DOT__rst_stab__DOT__CLKip));
    bufp->chgBit(oldp+49,(vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGi));
    bufp->chgBit(oldp+50,(vlSelfRef.uart_rx__DOT__rst_stab__DOT__SIGo));
    bufp->chgBit(oldp+51,(vlSelfRef.uart_rx__DOT__rst_stab__DOT__meta_sig));
    bufp->chgBit(oldp+52,(vlSelfRef.uart_rx__DOT__rx_stab__DOT__CLKip));
    bufp->chgBit(oldp+53,(vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGi));
    bufp->chgBit(oldp+54,(vlSelfRef.uart_rx__DOT__rx_stab__DOT__SIGo));
    bufp->chgBit(oldp+55,(vlSelfRef.uart_rx__DOT__rx_stab__DOT__meta_sig));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
