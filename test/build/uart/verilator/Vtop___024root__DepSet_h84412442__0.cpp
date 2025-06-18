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
    if (((IData)(vlSelfRef.CLKip) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__CLKip))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.uart__DOT____Vtogcov__CLKip = vlSelfRef.CLKip;
    }
    if (((IData)(vlSelfRef.RSTi) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__RSTi))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.uart__DOT____Vtogcov__RSTi = vlSelfRef.RSTi;
    }
    if (((IData)(vlSelfRef.RXi) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__RXi))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.uart__DOT____Vtogcov__RXi = vlSelfRef.RXi;
    }
    if (((IData)(vlSelfRef.BAUD_RATE_WEi) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__BAUD_RATE_WEi))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATE_WEi 
            = vlSelfRef.BAUD_RATE_WEi;
    }
    if (((IData)(vlSelfRef.BAUD_RATE_RDi) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__BAUD_RATE_RDi))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATE_RDi 
            = vlSelfRef.BAUD_RATE_RDi;
    }
    if (((IData)(vlSelfRef.uart__DOT__DONEo) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DONEo))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.uart__DOT____Vtogcov__DONEo = vlSelfRef.uart__DOT__DONEo;
    }
    if (((IData)(vlSelfRef.RDi) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__RDi))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.uart__DOT____Vtogcov__RDi = vlSelfRef.RDi;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__half_rx_strb))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__half_rx_strb 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx_strb))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx_strb 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__done) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__done 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__done;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__ready 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig;
    }
    vlSelfRef.DONEo = vlSelfRef.uart__DOT__DONEo;
    vlSelfRef.DATAo = vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE 
            = ((2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE 
            = ((1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE)));
    }
    vlSelfRef.uart__DOT__BAUD_RATEi = vlSelfRef.BAUD_RATEi;
    vlSelfRef.uart__DOT__RDi = vlSelfRef.RDi;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((0xeU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((0xdU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((0xbU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((0xeU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((0xdU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((0xbU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((7U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((0xeU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((0xdU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((0xbU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((7U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x1eU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x1dU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x1bU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x17U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0xfU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    vlSelfRef.uart__DOT__RXi = vlSelfRef.RXi;
    vlSelfRef.uart__DOT__BAUD_RATE_WEi = vlSelfRef.BAUD_RATE_WEi;
    vlSelfRef.uart__DOT__BAUD_RATE_RDi = vlSelfRef.BAUD_RATE_RDi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xfeU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xfdU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xfbU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xf7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xefU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xdfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x20U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xbfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x40U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0x7fU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x80U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xfeU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xfdU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xfbU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xf7U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xefU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xdfU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x20U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xbfU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x40U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0x7fU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x80U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    vlSelfRef.uart__DOT__RSTi = vlSelfRef.RSTi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo = vlSelfRef.uart__DOT__uart_rx_inst__DOT__done;
    vlSelfRef.uart__DOT__EMPTYo = (0U == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count));
    vlSelfRef.uart__DOT__FULLo = (0x10U == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count));
    vlSelfRef.uart__DOT__CLKip = vlSelfRef.CLKip;
    if ((1U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffffeU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (1U & vlSelfRef.BAUD_RATEi));
    }
    if ((2U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffffdU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (2U & vlSelfRef.BAUD_RATEi));
    }
    if ((4U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffffbU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (4U & vlSelfRef.BAUD_RATEi));
    }
    if ((8U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffff7U & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (8U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x10U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffffefU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x10U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x20U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffffdfU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x20U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x40U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffffbfU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x40U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x80U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffff7fU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x80U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x100U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffeffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x100U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x200U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffdffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x200U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x400U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffffbffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x400U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x800U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffff7ffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x800U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x1000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffefffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x1000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x2000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffdfffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x2000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x4000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffffbfffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x4000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x8000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffff7fffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x8000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x10000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffeffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x10000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x20000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffdffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x20000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x40000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfffbffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x40000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x80000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfff7ffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x80000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x100000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffefffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x100000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x200000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffdfffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x200000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x400000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xffbfffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x400000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x800000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xff7fffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x800000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x1000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfeffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x1000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x2000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfdffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x2000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x4000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xfbffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x4000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x8000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xf7ffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x8000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x10000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xefffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x10000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x20000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xdfffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x20000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((0x40000000U & (vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0xbfffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x40000000U & vlSelfRef.BAUD_RATEi));
    }
    if (((vlSelfRef.BAUD_RATEi ^ vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi 
            = ((0x7fffffffU & vlSelfRef.uart__DOT____Vtogcov__BAUD_RATEi) 
               | (0x80000000U & vlSelfRef.BAUD_RATEi));
    }
    if ((1U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffeU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (1U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((2U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffdU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (2U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((4U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffbU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (4U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((8U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffff7U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (8U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffefU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffdfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffbfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffff7fU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffeffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffdffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffbffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffff7ffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffefffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffdfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffbfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffff7fffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffeffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffdffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffbffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfff7ffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffefffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffdfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffbfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xff7fffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfeffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfdffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfbffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xf7ffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xefffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xdfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xbfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if (((vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
          ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0x7fffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((1U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffeU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (1U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((2U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffdU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (2U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((4U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffbU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (4U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((8U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffff7U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (8U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffefU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffdfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffbfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffff7fU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffeffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffdffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffbffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffff7ffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffefffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffdfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffbfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffff7fffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffeffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffdffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffbffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfff7ffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffefffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffdfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffbfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xff7fffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfeffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfdffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfbffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xf7ffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xefffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xdfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xbfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if (((vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
          ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0x7fffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    vlSelfRef.uart__DOT__DATAo = vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo;
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo = vlSelfRef.uart__DOT__uart_rx_inst__DOT__data;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
        = vlSelfRef.BAUD_RATEi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_cntr 
        = VL_DIV_III(32, (IData)(0x5f5e100U), vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate);
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_bit_cntr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_cntr, 1U);
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATEi 
        = vlSelfRef.uart__DOT__BAUD_RATEi;
    vlSelfRef.uart__DOT__fifo_inst__DOT__RDi = vlSelfRef.uart__DOT__RDi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rst 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__RXi = vlSelfRef.uart__DOT__RXi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_WEi 
        = vlSelfRef.uart__DOT__BAUD_RATE_WEi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_RDi 
        = vlSelfRef.uart__DOT__BAUD_RATE_RDi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_read))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_read 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__RDi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_we))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_we 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__WEi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we;
    vlSelfRef.uart__DOT__fifo_inst__DOT__RSTi = vlSelfRef.uart__DOT__RSTi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__RSTi = vlSelfRef.uart__DOT__RSTi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__READYo))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__READYo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo;
    }
    vlSelfRef.uart__DOT__ready = vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DONEo))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DONEo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo;
    }
    vlSelfRef.uart__DOT__done = vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo;
    if (((IData)(vlSelfRef.uart__DOT__EMPTYo) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__EMPTYo))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.uart__DOT____Vtogcov__EMPTYo = vlSelfRef.uart__DOT__EMPTYo;
    }
    vlSelfRef.EMPTYo = vlSelfRef.uart__DOT__EMPTYo;
    vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo = vlSelfRef.uart__DOT__EMPTYo;
    if (((IData)(vlSelfRef.uart__DOT__FULLo) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__FULLo))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.uart__DOT____Vtogcov__FULLo = vlSelfRef.uart__DOT__FULLo;
    }
    vlSelfRef.FULLo = vlSelfRef.uart__DOT__FULLo;
    vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo = vlSelfRef.uart__DOT__FULLo;
    vlSelfRef.uart__DOT__fifo_inst__DOT__CLKip = vlSelfRef.uart__DOT__CLKip;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip = vlSelfRef.uart__DOT__CLKip;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xfeU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xfdU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (2U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xfbU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (4U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xf7U 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (8U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xefU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xdfU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xbfU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0x7fU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xfeU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xfdU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xfbU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xf7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xefU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xdfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x20U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xbfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x40U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0x7fU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x80U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    vlSelfRef.uart__DOT__data = vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__DATAi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate;
    if ((1U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffffeU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (1U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((2U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffffdU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (2U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((4U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffffbU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (4U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((8U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffff7U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (8U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffffefU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x10U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffffdfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x20U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffffbfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x40U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffff7fU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x80U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x100U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffeffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x100U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x200U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffdffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x200U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x400U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffffbffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x400U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x800U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffff7ffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x800U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x1000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffefffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x1000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x2000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffdfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x2000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x4000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffffbfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x4000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x8000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffff7fffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x8000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x10000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffeffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x10000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x20000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffdffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x20000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x40000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfffbffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x40000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x80000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfff7ffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x80000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x100000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffefffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x100000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x200000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffdfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x200000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x400000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xffbfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x400000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x800000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xff7fffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x800000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x1000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfeffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x1000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x2000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfdffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x2000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x4000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xfbffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x4000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x8000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xf7ffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x8000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x10000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xefffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x10000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x20000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xdfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x20000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if ((0x40000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0xbfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x40000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    if (((vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate 
          ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi 
            = ((0x7fffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__DATAi) 
               | (0x80000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate));
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__RXi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_WEi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_RDi;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__RSTi;
    if (((IData)(vlSelfRef.uart__DOT__ready) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.uart__DOT____Vtogcov__ready = vlSelfRef.uart__DOT__ready;
    }
    if (((IData)(vlSelfRef.uart__DOT__done) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.uart__DOT____Vtogcov__done = vlSelfRef.uart__DOT__done;
    }
    vlSelfRef.uart__DOT__fifo_inst__DOT__WEi = vlSelfRef.uart__DOT__done;
    if (((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo) 
         ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__EMPTYo))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__EMPTYo 
            = vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo;
    }
    if (((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo) 
         ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__FULLo))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__FULLo 
            = vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__CLKip 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__CLKip 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__CLKip 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__CLKip 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__CLKip 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip;
    vlSelfRef.uart__DOT__fifo_inst__DOT__DATAi = vlSelfRef.uart__DOT__data;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xfeU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xfdU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (2U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xfbU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (4U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xf7U 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (8U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xefU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x10U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xdfU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x20U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xbfU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x40U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0x7fU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x80U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
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
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.RSTi) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RSTi__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLKip__0 = vlSelfRef.CLKip;
    vlSelfRef.__Vtrigprevexpr___TOP__RSTi__0 = vlSelfRef.RSTi;
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
    IData/*31:0*/ __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count;
    __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0;
    CData/*3:0*/ __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx;
    __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx = 0;
    CData/*1:0*/ __Vdly__uart__DOT__uart_rx_inst__DOT__STATE;
    __Vdly__uart__DOT__uart_rx_inst__DOT__STATE = 0;
    // Body
    ++(vlSymsp->__Vcoverage[135]);
    ++(vlSymsp->__Vcoverage[136]);
    ++(vlSymsp->__Vcoverage[139]);
    ++(vlSymsp->__Vcoverage[140]);
    ++(vlSymsp->__Vcoverage[143]);
    ++(vlSymsp->__Vcoverage[144]);
    ++(vlSymsp->__Vcoverage[147]);
    ++(vlSymsp->__Vcoverage[148]);
    __Vdly__uart__DOT__uart_rx_inst__DOT__STATE = vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE;
    __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx = vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx;
    __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig;
    if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst) {
        ++(vlSymsp->__Vcoverage[129]);
        __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx = 0U;
        __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE))) {
            if ((1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE))) {
                if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb) {
                    if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb) {
                        ++(vlSymsp->__Vcoverage[123]);
                    }
                    __Vdly__uart__DOT__uart_rx_inst__DOT__STATE 
                        = ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb)
                            ? 0U : 3U);
                    if ((1U & (~ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb)))) {
                        ++(vlSymsp->__Vcoverage[124]);
                    }
                    ++(vlSymsp->__Vcoverage[125]);
                } else {
                    ++(vlSymsp->__Vcoverage[126]);
                }
                ++(vlSymsp->__Vcoverage[127]);
            } else {
                if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb) {
                    vlSelfRef.uart__DOT__uart_rx_inst__DOT__data 
                        = (((~ ((IData)(1U) << (7U 
                                                & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)))) 
                            & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)) 
                           | (0xffU & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) 
                                       << (7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)))));
                    if ((7U > (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx))) {
                        __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
                        ++(vlSymsp->__Vcoverage[118]);
                    } else {
                        ++(vlSymsp->__Vcoverage[119]);
                        __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx = 0U;
                        __Vdly__uart__DOT__uart_rx_inst__DOT__STATE = 3U;
                        vlSelfRef.uart__DOT__uart_rx_inst__DOT__done = 1U;
                    }
                    ++(vlSymsp->__Vcoverage[120]);
                } else {
                    ++(vlSymsp->__Vcoverage[121]);
                    __Vdly__uart__DOT__uart_rx_inst__DOT__STATE = 2U;
                }
                ++(vlSymsp->__Vcoverage[122]);
            }
        } else if ((1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE))) {
            vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready = 0U;
            if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb) {
                if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) {
                    ++(vlSymsp->__Vcoverage[114]);
                } else {
                    if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) {
                        ++(vlSymsp->__Vcoverage[111]);
                    }
                    __Vdly__uart__DOT__uart_rx_inst__DOT__STATE 
                        = ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx)
                            ? 0U : 2U);
                    if ((1U & (~ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx)))) {
                        ++(vlSymsp->__Vcoverage[112]);
                    }
                    ++(vlSymsp->__Vcoverage[113]);
                }
                ++(vlSymsp->__Vcoverage[115]);
            } else {
                ++(vlSymsp->__Vcoverage[116]);
                __Vdly__uart__DOT__uart_rx_inst__DOT__STATE = 1U;
            }
            ++(vlSymsp->__Vcoverage[117]);
        } else {
            vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready = 1U;
            vlSelfRef.uart__DOT__uart_rx_inst__DOT__done = 0U;
            if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) {
                ++(vlSymsp->__Vcoverage[109]);
            } else {
                if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) {
                    ++(vlSymsp->__Vcoverage[106]);
                }
                __Vdly__uart__DOT__uart_rx_inst__DOT__STATE 
                    = ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx)
                        ? 0U : 1U);
                if ((1U & (~ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx)))) {
                    ++(vlSymsp->__Vcoverage[107]);
                }
                ++(vlSymsp->__Vcoverage[108]);
            }
            ++(vlSymsp->__Vcoverage[110]);
        }
        ++(vlSymsp->__Vcoverage[130]);
    }
    ++(vlSymsp->__Vcoverage[131]);
    if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram;
    } else {
        ++(vlSymsp->__Vcoverage[249]);
    }
    ++(vlSymsp->__Vcoverage[250]);
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx 
        = __Vdly__uart__DOT__uart_rx_inst__DOT__bit_idx;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig 
        = vlSelfRef.RXi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig 
        = vlSelfRef.RSTi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig 
        = vlSelfRef.BAUD_RATE_WEi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__SIGo))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__SIGo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig 
        = vlSelfRef.BAUD_RATE_RDi;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__ready 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__done) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__done 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__done;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo = vlSelfRef.uart__DOT__uart_rx_inst__DOT__done;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((0xeU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((0xdU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((0xbU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx 
            = ((7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__bit_idx)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xfeU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xfdU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xfbU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xf7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xefU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xdfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x20U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0xbfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x40U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data 
            = ((0x7fU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__data)) 
               | (0x80U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data)));
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo = vlSelfRef.uart__DOT__uart_rx_inst__DOT__data;
    if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst) {
        ++(vlSymsp->__Vcoverage[103]);
        __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0U;
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb = 0U;
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE))) {
            if ((1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE))) {
                if ((vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count 
                     == vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_cntr)) {
                    ++(vlSymsp->__Vcoverage[99]);
                    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb = 1U;
                    __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0U;
                } else {
                    __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count 
                        = ((IData)(1U) + vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count);
                    ++(vlSymsp->__Vcoverage[100]);
                    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb = 0U;
                }
                ++(vlSymsp->__Vcoverage[101]);
            } else {
                if ((vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count 
                     == vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_cntr)) {
                    ++(vlSymsp->__Vcoverage[96]);
                    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb = 1U;
                    __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0U;
                } else {
                    __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count 
                        = ((IData)(1U) + vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count);
                    ++(vlSymsp->__Vcoverage[97]);
                    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb = 0U;
                }
                ++(vlSymsp->__Vcoverage[98]);
            }
        } else if ((1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE))) {
            if ((vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count 
                 == vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_bit_cntr)) {
                ++(vlSymsp->__Vcoverage[93]);
                vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb = 1U;
                __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0U;
            } else {
                __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count 
                    = ((IData)(1U) + vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count);
                ++(vlSymsp->__Vcoverage[94]);
                vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb = 0U;
            }
            ++(vlSymsp->__Vcoverage[95]);
        } else {
            ++(vlSymsp->__Vcoverage[92]);
            __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count = 0U;
            vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb = 0U;
            vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb = 0U;
        }
        ++(vlSymsp->__Vcoverage[104]);
    }
    ++(vlSymsp->__Vcoverage[105]);
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__br = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo;
    if ((1U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffeU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (1U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((2U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffdU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (2U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((4U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffffbU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (4U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((8U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffff7U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (8U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffefU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffdfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffffbfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffff7fU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffeffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffdffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffffbffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffff7ffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffefffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffdfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffffbfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffff7fffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffeffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffdffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfffbffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x80000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfff7ffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x100000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffefffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x100000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x200000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffdfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x200000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x400000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xffbfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x400000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x800000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xff7fffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x800000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x1000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfeffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x1000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x2000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfdffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x2000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x4000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xfbffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x4000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x8000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xf7ffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x8000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x10000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xefffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x10000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x20000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xdfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x20000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if ((0x40000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0xbfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x40000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if (((vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo 
          ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo 
            = ((0x7fffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__Qo) 
               | (0x80000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo));
    }
    if (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate;
    } else {
        ++(vlSymsp->__Vcoverage[246]);
    }
    ++(vlSymsp->__Vcoverage[247]);
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_read))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_read 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__RDi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__READYo))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__READYo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo;
    }
    vlSelfRef.uart__DOT__ready = vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DONEo))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DONEo 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo;
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xfeU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xfdU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xfbU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xf7U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xefU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xdfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x20U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0xbfU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x40U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo 
            = ((0x7fU & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__DATAo)) 
               | (0x80U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo)));
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count 
        = __Vdly__uart__DOT__uart_rx_inst__DOT__clk_count;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE = __Vdly__uart__DOT__uart_rx_inst__DOT__STATE;
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo;
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__meta_sig))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT____Vtogcov__meta_sig 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig;
    }
    if (((IData)(vlSelfRef.uart__DOT__ready) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.uart__DOT____Vtogcov__ready = vlSelfRef.uart__DOT__ready;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rst 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__half_rx_strb))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__half_rx_strb 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb;
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx_strb))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__rx_strb 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb;
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE 
            = ((2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE) 
               ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE 
            = ((1U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__STATE)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE)));
    }
    if (((IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we) 
         ^ (IData)(vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_we))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT____Vtogcov__baud_rate_we 
            = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we;
    }
    vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__WEi 
        = vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we;
    if ((1U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffeU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (1U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((2U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffdU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (2U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((4U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffffbU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (4U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((8U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
               ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffff7U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (8U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffefU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffdfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffffbfU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                  ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffff7fU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffeffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffdffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffffbffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                   ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffff7ffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffefffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffdfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffffbfffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                    ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffff7fffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffeffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffdffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfffbffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x80000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                     ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfff7ffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x100000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffefffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x100000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x200000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffdfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x200000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x400000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xffbfffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x400000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x800000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                      ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xff7fffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x800000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x1000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfeffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x1000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x2000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfdffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x2000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x4000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xfbffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x4000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x8000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                       ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xf7ffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x8000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x10000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xefffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x10000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x20000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xdfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x20000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if ((0x40000000U & (vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
                        ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0xbfffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x40000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
    if (((vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram 
          ^ vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram 
            = ((0x7fffffffU & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT____Vtogcov__ram) 
               | (0x80000000U & vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__uart__DOT__fifo_inst__DOT__wr_ptr;
    __Vdly__uart__DOT__fifo_inst__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__uart__DOT__fifo_inst__DOT__rd_ptr;
    __Vdly__uart__DOT__fifo_inst__DOT__rd_ptr = 0;
    CData/*4:0*/ __Vdly__uart__DOT__fifo_inst__DOT__count;
    __Vdly__uart__DOT__fifo_inst__DOT__count = 0;
    CData/*7:0*/ __VdlyVal__uart__DOT__fifo_inst__DOT__fifo_mem__v0;
    __VdlyVal__uart__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart__DOT__fifo_inst__DOT__fifo_mem__v0;
    __VdlyDim0__uart__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__uart__DOT__fifo_inst__DOT__fifo_mem__v0;
    __VdlySet__uart__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    // Body
    __Vdly__uart__DOT__fifo_inst__DOT__wr_ptr = vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr;
    __Vdly__uart__DOT__fifo_inst__DOT__rd_ptr = vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr;
    __Vdly__uart__DOT__fifo_inst__DOT__count = vlSelfRef.uart__DOT__fifo_inst__DOT__count;
    __VdlySet__uart__DOT__fifo_inst__DOT__fifo_mem__v0 = 0U;
    if (vlSelfRef.RSTi) {
        ++(vlSymsp->__Vcoverage[429]);
        __Vdly__uart__DOT__fifo_inst__DOT__wr_ptr = 0U;
        __Vdly__uart__DOT__fifo_inst__DOT__rd_ptr = 0U;
        __Vdly__uart__DOT__fifo_inst__DOT__count = 0U;
    } else {
        if (((IData)(vlSelfRef.uart__DOT__done) & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo)))) {
            __VdlyVal__uart__DOT__fifo_inst__DOT__fifo_mem__v0 
                = vlSelfRef.uart__DOT__data;
            __VdlyDim0__uart__DOT__fifo_inst__DOT__fifo_mem__v0 
                = vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr;
            __VdlySet__uart__DOT__fifo_inst__DOT__fifo_mem__v0 = 1U;
            __Vdly__uart__DOT__fifo_inst__DOT__wr_ptr 
                = ((0xfU == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr))));
            if ((0xfU == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr))) {
                ++(vlSymsp->__Vcoverage[405]);
            }
            if ((0xfU != (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr))) {
                ++(vlSymsp->__Vcoverage[406]);
            }
            ++(vlSymsp->__Vcoverage[407]);
        } else {
            ++(vlSymsp->__Vcoverage[408]);
        }
        if (((IData)(vlSelfRef.RDi) & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo)))) {
            vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo 
                = vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                [vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr];
            __Vdly__uart__DOT__fifo_inst__DOT__rd_ptr 
                = ((0xfU == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr))));
            if ((0xfU == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr))) {
                ++(vlSymsp->__Vcoverage[412]);
            }
            if ((0xfU != (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr))) {
                ++(vlSymsp->__Vcoverage[413]);
            }
            ++(vlSymsp->__Vcoverage[414]);
        } else {
            ++(vlSymsp->__Vcoverage[415]);
        }
        if ((1U == ((((IData)(vlSelfRef.uart__DOT__done) 
                      & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo))) 
                     << 1U) | ((IData)(vlSelfRef.RDi) 
                               & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo)))))) {
            __Vdly__uart__DOT__fifo_inst__DOT__count 
                = (0x1fU & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
                            - (IData)(1U)));
            ++(vlSymsp->__Vcoverage[425]);
        } else if ((2U == ((((IData)(vlSelfRef.uart__DOT__done) 
                             & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo))) 
                            << 1U) | ((IData)(vlSelfRef.RDi) 
                                      & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo)))))) {
            __Vdly__uart__DOT__fifo_inst__DOT__count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
            ++(vlSymsp->__Vcoverage[426]);
        } else if ((3U == ((((IData)(vlSelfRef.uart__DOT__done) 
                             & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo))) 
                            << 1U) | ((IData)(vlSelfRef.RDi) 
                                      & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo)))))) {
            __Vdly__uart__DOT__fifo_inst__DOT__count 
                = vlSelfRef.uart__DOT__fifo_inst__DOT__count;
            ++(vlSymsp->__Vcoverage[427]);
        } else {
            ++(vlSymsp->__Vcoverage[428]);
        }
        if (((IData)(vlSelfRef.uart__DOT__done) & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo)))) {
            ++(vlSymsp->__Vcoverage[409]);
        }
        if (vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo) {
            ++(vlSymsp->__Vcoverage[410]);
        }
        if ((1U & (~ (IData)(vlSelfRef.uart__DOT__done)))) {
            ++(vlSymsp->__Vcoverage[411]);
        }
        if (((IData)(vlSelfRef.RDi) & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo)))) {
            ++(vlSymsp->__Vcoverage[416]);
        }
        if (vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo) {
            ++(vlSymsp->__Vcoverage[417]);
        }
        if ((1U & (~ (IData)(vlSelfRef.RDi)))) {
            ++(vlSymsp->__Vcoverage[418]);
        }
        if (((IData)(vlSelfRef.uart__DOT__done) & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo)))) {
            ++(vlSymsp->__Vcoverage[419]);
        }
        if (vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo) {
            ++(vlSymsp->__Vcoverage[420]);
        }
        if ((1U & (~ (IData)(vlSelfRef.uart__DOT__done)))) {
            ++(vlSymsp->__Vcoverage[421]);
        }
        if (((IData)(vlSelfRef.RDi) & (~ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo)))) {
            ++(vlSymsp->__Vcoverage[422]);
        }
        if (vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo) {
            ++(vlSymsp->__Vcoverage[423]);
        }
        if ((1U & (~ (IData)(vlSelfRef.RDi)))) {
            ++(vlSymsp->__Vcoverage[424]);
        }
        ++(vlSymsp->__Vcoverage[430]);
    }
    ++(vlSymsp->__Vcoverage[431]);
    vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr = __Vdly__uart__DOT__fifo_inst__DOT__wr_ptr;
    vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr = __Vdly__uart__DOT__fifo_inst__DOT__rd_ptr;
    vlSelfRef.uart__DOT__fifo_inst__DOT__count = __Vdly__uart__DOT__fifo_inst__DOT__count;
    if (__VdlySet__uart__DOT__fifo_inst__DOT__fifo_mem__v0) {
        vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[__VdlyDim0__uart__DOT__fifo_inst__DOT__fifo_mem__v0] 
            = __VdlyVal__uart__DOT__fifo_inst__DOT__fifo_mem__v0;
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((0xeU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((0xdU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((0xbU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr 
            = ((7U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__wr_ptr)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((0xeU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((0xdU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((0xbU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr 
            = ((7U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__rd_ptr)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr)));
    }
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x1eU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x1dU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x1bU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0x17U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count 
            = ((0xfU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__count)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count)));
    }
    vlSelfRef.uart__DOT__EMPTYo = (0U == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count));
    vlSelfRef.uart__DOT__FULLo = (0x10U == (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__count));
    vlSelfRef.DATAo = vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xfeU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (1U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xfdU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (2U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xfbU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (4U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xf7U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (8U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xefU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x10U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xdfU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x20U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0xbfU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x40U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo 
            = ((0x7fU & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__DATAo)) 
               | (0x80U & (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo)));
    }
    vlSelfRef.uart__DOT__DATAo = vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo;
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [0U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [1U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [1U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[1U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [1U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [1U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [2U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [2U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[2U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [2U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [2U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [3U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [3U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[3U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [3U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [3U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [4U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [4U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[4U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [4U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [4U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [5U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [5U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[5U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [5U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [5U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [6U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [6U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[6U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [6U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [6U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [7U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [7U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[7U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [7U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [7U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [8U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [8U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[8U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [8U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [8U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [9U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [9U] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[9U] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [9U]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                         [9U]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xaU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xaU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xaU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xaU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xbU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xbU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xbU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xbU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xcU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xcU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xcU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xcU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xdU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xdU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xdU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xdU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xeU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xeU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xeU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xeU]));
    }
    if ((1U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xfeU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (1U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((2U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xfdU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (2U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((4U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xfbU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (4U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((8U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
               [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xf7U & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (8U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x10U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xefU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x10U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x20U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xdfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x20U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x40U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0xbfU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x40U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if ((0x80U & (vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                  [0xfU] ^ vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem[0xfU] 
            = ((0x7fU & vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__fifo_mem
                [0xfU]) | (0x80U & vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem
                           [0xfU]));
    }
    if (((IData)(vlSelfRef.uart__DOT__EMPTYo) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__EMPTYo))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.uart__DOT____Vtogcov__EMPTYo = vlSelfRef.uart__DOT__EMPTYo;
    }
    vlSelfRef.EMPTYo = vlSelfRef.uart__DOT__EMPTYo;
    vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo = vlSelfRef.uart__DOT__EMPTYo;
    if (((IData)(vlSelfRef.uart__DOT__FULLo) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__FULLo))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.uart__DOT____Vtogcov__FULLo = vlSelfRef.uart__DOT__FULLo;
    }
    vlSelfRef.FULLo = vlSelfRef.uart__DOT__FULLo;
    vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo = vlSelfRef.uart__DOT__FULLo;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xfeU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xfdU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (2U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xfbU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (4U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
               ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xf7U 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (8U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xefU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xdfU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0xbfU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__DATAo) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.uart__DOT____Vtogcov__DATAo = ((0x7fU 
                                                  & (IData)(vlSelfRef.uart__DOT____Vtogcov__DATAo)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelfRef.uart__DOT__DATAo)));
    }
    if (((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo) 
         ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__EMPTYo))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__EMPTYo 
            = vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo;
    }
    if (((IData)(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo) 
         ^ (IData)(vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__FULLo))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.uart__DOT__fifo_inst__DOT____Vtogcov__FULLo 
            = vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart__DOT__done = vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo;
    vlSelfRef.uart__DOT__data = vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo;
    if (((IData)(vlSelfRef.uart__DOT__done) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.uart__DOT____Vtogcov__done = vlSelfRef.uart__DOT__done;
    }
    vlSelfRef.uart__DOT__fifo_inst__DOT__WEi = vlSelfRef.uart__DOT__done;
    vlSelfRef.uart__DOT__fifo_inst__DOT__DATAi = vlSelfRef.uart__DOT__data;
    if ((1U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xfeU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((2U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xfdU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (2U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((4U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xfbU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (4U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((8U & ((IData)(vlSelfRef.uart__DOT__data) ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xf7U 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (8U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xefU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x10U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xdfU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x20U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0xbfU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x40U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.uart__DOT__data) 
                  ^ (IData)(vlSelfRef.uart__DOT____Vtogcov__data)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.uart__DOT____Vtogcov__data = ((0x7fU 
                                                 & (IData)(vlSelfRef.uart__DOT____Vtogcov__data)) 
                                                | (0x80U 
                                                   & (IData)(vlSelfRef.uart__DOT__data)));
    }
}
