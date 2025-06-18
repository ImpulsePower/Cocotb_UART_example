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
    bufp->chgIData(oldp+3,(vlSelfRef.BAUD_RATEi),32);
    bufp->chgBit(oldp+4,(vlSelfRef.BAUD_RATE_WEi));
    bufp->chgBit(oldp+5,(vlSelfRef.BAUD_RATE_RDi));
    bufp->chgBit(oldp+6,(vlSelfRef.DONEo));
    bufp->chgBit(oldp+7,(vlSelfRef.RDi));
    bufp->chgCData(oldp+8,(vlSelfRef.DATAo),8);
    bufp->chgBit(oldp+9,(vlSelfRef.EMPTYo));
    bufp->chgBit(oldp+10,(vlSelfRef.FULLo));
    bufp->chgBit(oldp+11,(vlSelfRef.uart__DOT__CLKip));
    bufp->chgBit(oldp+12,(vlSelfRef.uart__DOT__RSTi));
    bufp->chgBit(oldp+13,(vlSelfRef.uart__DOT__RXi));
    bufp->chgIData(oldp+14,(vlSelfRef.uart__DOT__BAUD_RATEi),32);
    bufp->chgBit(oldp+15,(vlSelfRef.uart__DOT__BAUD_RATE_WEi));
    bufp->chgBit(oldp+16,(vlSelfRef.uart__DOT__BAUD_RATE_RDi));
    bufp->chgBit(oldp+17,(vlSelfRef.uart__DOT__DONEo));
    bufp->chgBit(oldp+18,(vlSelfRef.uart__DOT__RDi));
    bufp->chgCData(oldp+19,(vlSelfRef.uart__DOT__DATAo),8);
    bufp->chgBit(oldp+20,(vlSelfRef.uart__DOT__EMPTYo));
    bufp->chgBit(oldp+21,(vlSelfRef.uart__DOT__FULLo));
    bufp->chgCData(oldp+22,(vlSelfRef.uart__DOT__data),8);
    bufp->chgBit(oldp+23,(vlSelfRef.uart__DOT__done));
    bufp->chgBit(oldp+24,(vlSelfRef.uart__DOT__ready));
    bufp->chgBit(oldp+25,(vlSelfRef.uart__DOT__fifo_inst__DOT__CLKip));
    bufp->chgBit(oldp+26,(vlSelfRef.uart__DOT__fifo_inst__DOT__RSTi));
    bufp->chgCData(oldp+27,(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAi),8);
    bufp->chgBit(oldp+28,(vlSelfRef.uart__DOT__fifo_inst__DOT__WEi));
    bufp->chgBit(oldp+29,(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo));
    bufp->chgCData(oldp+30,(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo),8);
    bufp->chgBit(oldp+31,(vlSelfRef.uart__DOT__fifo_inst__DOT__RDi));
    bufp->chgBit(oldp+32,(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo));
    bufp->chgCData(oldp+33,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[0]),8);
    bufp->chgCData(oldp+34,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[1]),8);
    bufp->chgCData(oldp+35,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[2]),8);
    bufp->chgCData(oldp+36,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[3]),8);
    bufp->chgCData(oldp+37,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[4]),8);
    bufp->chgCData(oldp+38,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[5]),8);
    bufp->chgCData(oldp+39,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[6]),8);
    bufp->chgCData(oldp+40,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[7]),8);
    bufp->chgCData(oldp+41,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[8]),8);
    bufp->chgCData(oldp+42,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[9]),8);
    bufp->chgCData(oldp+43,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[10]),8);
    bufp->chgCData(oldp+44,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[11]),8);
    bufp->chgCData(oldp+45,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[12]),8);
    bufp->chgCData(oldp+46,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[13]),8);
    bufp->chgCData(oldp+47,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[14]),8);
    bufp->chgCData(oldp+48,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[15]),8);
    bufp->chgCData(oldp+49,(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr),4);
    bufp->chgCData(oldp+50,(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr),4);
    bufp->chgCData(oldp+51,(vlSelfRef.uart__DOT__fifo_inst__DOT__count),5);
    bufp->chgBit(oldp+52,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip));
    bufp->chgBit(oldp+53,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__RSTi));
    bufp->chgBit(oldp+54,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__RXi));
    bufp->chgBit(oldp+55,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_RDi));
    bufp->chgBit(oldp+56,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_WEi));
    bufp->chgIData(oldp+57,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATEi),32);
    bufp->chgBit(oldp+58,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo));
    bufp->chgBit(oldp+59,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo));
    bufp->chgCData(oldp+60,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo),8);
    bufp->chgIData(oldp+61,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate),32);
    bufp->chgIData(oldp+62,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_cntr),32);
    bufp->chgIData(oldp+63,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_bit_cntr),32);
    bufp->chgBit(oldp+64,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb));
    bufp->chgBit(oldp+65,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb));
    bufp->chgIData(oldp+66,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count),32);
    bufp->chgCData(oldp+67,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx),4);
    bufp->chgCData(oldp+68,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data),8);
    bufp->chgBit(oldp+69,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx));
    bufp->chgBit(oldp+70,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst));
    bufp->chgBit(oldp+71,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__done));
    bufp->chgBit(oldp+72,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready));
    bufp->chgBit(oldp+73,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read));
    bufp->chgBit(oldp+74,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we));
    bufp->chgIData(oldp+75,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br),32);
    bufp->chgCData(oldp+76,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE),2);
    bufp->chgBit(oldp+77,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__CLKip));
    bufp->chgBit(oldp+78,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__RDi));
    bufp->chgBit(oldp+79,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__WEi));
    bufp->chgIData(oldp+80,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__DATAi),32);
    bufp->chgIData(oldp+81,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo),32);
    bufp->chgIData(oldp+82,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram),32);
    bufp->chgBit(oldp+83,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__CLKip));
    bufp->chgBit(oldp+84,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGi));
    bufp->chgBit(oldp+85,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo));
    bufp->chgBit(oldp+86,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig));
    bufp->chgBit(oldp+87,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__CLKip));
    bufp->chgBit(oldp+88,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGi));
    bufp->chgBit(oldp+89,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo));
    bufp->chgBit(oldp+90,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig));
    bufp->chgBit(oldp+91,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__CLKip));
    bufp->chgBit(oldp+92,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGi));
    bufp->chgBit(oldp+93,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo));
    bufp->chgBit(oldp+94,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig));
    bufp->chgBit(oldp+95,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__CLKip));
    bufp->chgBit(oldp+96,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGi));
    bufp->chgBit(oldp+97,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo));
    bufp->chgBit(oldp+98,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig));
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
