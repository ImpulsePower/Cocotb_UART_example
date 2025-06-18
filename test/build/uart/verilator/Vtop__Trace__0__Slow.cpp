// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"RSTi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"RXi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"BAUD_RATEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"BAUD_RATE_WEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"BAUD_RATE_RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"DONEo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"DATAo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"EMPTYo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"FULLo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"RSTi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"RXi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"BAUD_RATEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"BAUD_RATE_WEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"BAUD_RATE_RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"DONEo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"DATAo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+21,0,"EMPTYo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"FULLo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"RSTi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"DATAi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"WEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"FULLo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"DATAo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"EMPTYo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+50,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("uart_rx_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"FREQ_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"DATA_WDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"RSTi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"RXi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"BAUD_RATE_RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"BAUD_RATE_WEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"BAUD_RATEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"DONEo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"READYo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"DATAo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"baud_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+63,0,"bit_cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+64,0,"half_bit_cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+65,0,"half_rx_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rx_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+68,0,"bit_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+70,0,"rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"baud_rate_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"baud_rate_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"br",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+77,0,"STATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("baud_rate_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"RDi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"WEi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"DATAi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"Qo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("br_rd_stab", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"SIGi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"SIGo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"meta_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("br_we_stab", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+88,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"SIGi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"SIGo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"meta_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rst_stab", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"SIGi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"SIGo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"meta_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rx_stab", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+96,0,"CLKip",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"SIGi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"SIGo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"meta_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+100,(0x5f5e100U),32);
    bufp->fullIData(oldp+101,(8U),32);
    bufp->fullIData(oldp+102,(0x10U),32);
    bufp->fullIData(oldp+103,(0x20U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.CLKip));
    bufp->fullBit(oldp+2,(vlSelfRef.RSTi));
    bufp->fullBit(oldp+3,(vlSelfRef.RXi));
    bufp->fullIData(oldp+4,(vlSelfRef.BAUD_RATEi),32);
    bufp->fullBit(oldp+5,(vlSelfRef.BAUD_RATE_WEi));
    bufp->fullBit(oldp+6,(vlSelfRef.BAUD_RATE_RDi));
    bufp->fullBit(oldp+7,(vlSelfRef.DONEo));
    bufp->fullBit(oldp+8,(vlSelfRef.RDi));
    bufp->fullCData(oldp+9,(vlSelfRef.DATAo),8);
    bufp->fullBit(oldp+10,(vlSelfRef.EMPTYo));
    bufp->fullBit(oldp+11,(vlSelfRef.FULLo));
    bufp->fullBit(oldp+12,(vlSelfRef.uart__DOT__CLKip));
    bufp->fullBit(oldp+13,(vlSelfRef.uart__DOT__RSTi));
    bufp->fullBit(oldp+14,(vlSelfRef.uart__DOT__RXi));
    bufp->fullIData(oldp+15,(vlSelfRef.uart__DOT__BAUD_RATEi),32);
    bufp->fullBit(oldp+16,(vlSelfRef.uart__DOT__BAUD_RATE_WEi));
    bufp->fullBit(oldp+17,(vlSelfRef.uart__DOT__BAUD_RATE_RDi));
    bufp->fullBit(oldp+18,(vlSelfRef.uart__DOT__DONEo));
    bufp->fullBit(oldp+19,(vlSelfRef.uart__DOT__RDi));
    bufp->fullCData(oldp+20,(vlSelfRef.uart__DOT__DATAo),8);
    bufp->fullBit(oldp+21,(vlSelfRef.uart__DOT__EMPTYo));
    bufp->fullBit(oldp+22,(vlSelfRef.uart__DOT__FULLo));
    bufp->fullCData(oldp+23,(vlSelfRef.uart__DOT__data),8);
    bufp->fullBit(oldp+24,(vlSelfRef.uart__DOT__done));
    bufp->fullBit(oldp+25,(vlSelfRef.uart__DOT__ready));
    bufp->fullBit(oldp+26,(vlSelfRef.uart__DOT__fifo_inst__DOT__CLKip));
    bufp->fullBit(oldp+27,(vlSelfRef.uart__DOT__fifo_inst__DOT__RSTi));
    bufp->fullCData(oldp+28,(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAi),8);
    bufp->fullBit(oldp+29,(vlSelfRef.uart__DOT__fifo_inst__DOT__WEi));
    bufp->fullBit(oldp+30,(vlSelfRef.uart__DOT__fifo_inst__DOT__FULLo));
    bufp->fullCData(oldp+31,(vlSelfRef.uart__DOT__fifo_inst__DOT__DATAo),8);
    bufp->fullBit(oldp+32,(vlSelfRef.uart__DOT__fifo_inst__DOT__RDi));
    bufp->fullBit(oldp+33,(vlSelfRef.uart__DOT__fifo_inst__DOT__EMPTYo));
    bufp->fullCData(oldp+34,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[0]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[1]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[2]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[3]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[4]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[5]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[6]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[7]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[8]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[9]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[10]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[11]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[12]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[13]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[14]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.uart__DOT__fifo_inst__DOT__fifo_mem[15]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.uart__DOT__fifo_inst__DOT__wr_ptr),4);
    bufp->fullCData(oldp+51,(vlSelfRef.uart__DOT__fifo_inst__DOT__rd_ptr),4);
    bufp->fullCData(oldp+52,(vlSelfRef.uart__DOT__fifo_inst__DOT__count),5);
    bufp->fullBit(oldp+53,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__CLKip));
    bufp->fullBit(oldp+54,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__RSTi));
    bufp->fullBit(oldp+55,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__RXi));
    bufp->fullBit(oldp+56,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_RDi));
    bufp->fullBit(oldp+57,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATE_WEi));
    bufp->fullIData(oldp+58,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__BAUD_RATEi),32);
    bufp->fullBit(oldp+59,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DONEo));
    bufp->fullBit(oldp+60,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__READYo));
    bufp->fullCData(oldp+61,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__DATAo),8);
    bufp->fullIData(oldp+62,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate),32);
    bufp->fullIData(oldp+63,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_cntr),32);
    bufp->fullIData(oldp+64,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_bit_cntr),32);
    bufp->fullBit(oldp+65,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__half_rx_strb));
    bufp->fullBit(oldp+66,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_strb));
    bufp->fullIData(oldp+67,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__clk_count),32);
    bufp->fullCData(oldp+68,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__bit_idx),4);
    bufp->fullCData(oldp+69,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__data),8);
    bufp->fullBit(oldp+70,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx));
    bufp->fullBit(oldp+71,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst));
    bufp->fullBit(oldp+72,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__done));
    bufp->fullBit(oldp+73,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__ready));
    bufp->fullBit(oldp+74,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_read));
    bufp->fullBit(oldp+75,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_we));
    bufp->fullIData(oldp+76,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br),32);
    bufp->fullCData(oldp+77,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__STATE),2);
    bufp->fullBit(oldp+78,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__CLKip));
    bufp->fullBit(oldp+79,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__RDi));
    bufp->fullBit(oldp+80,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__WEi));
    bufp->fullIData(oldp+81,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__DATAi),32);
    bufp->fullIData(oldp+82,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__Qo),32);
    bufp->fullIData(oldp+83,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__baud_rate_mem__DOT__ram),32);
    bufp->fullBit(oldp+84,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__CLKip));
    bufp->fullBit(oldp+85,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGi));
    bufp->fullBit(oldp+86,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__SIGo));
    bufp->fullBit(oldp+87,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_rd_stab__DOT__meta_sig));
    bufp->fullBit(oldp+88,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__CLKip));
    bufp->fullBit(oldp+89,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGi));
    bufp->fullBit(oldp+90,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__SIGo));
    bufp->fullBit(oldp+91,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__br_we_stab__DOT__meta_sig));
    bufp->fullBit(oldp+92,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__CLKip));
    bufp->fullBit(oldp+93,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGi));
    bufp->fullBit(oldp+94,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__SIGo));
    bufp->fullBit(oldp+95,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rst_stab__DOT__meta_sig));
    bufp->fullBit(oldp+96,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__CLKip));
    bufp->fullBit(oldp+97,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGi));
    bufp->fullBit(oldp+98,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__SIGo));
    bufp->fullBit(oldp+99,(vlSelfRef.uart__DOT__uart_rx_inst__DOT__rx_stab__DOT__meta_sig));
}
