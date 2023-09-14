// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_swc_tb__Syms.h"


VL_ATTR_COLD void Vapb_swc_tb___024root__trace_init_sub__TOP__0(Vapb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("apb_swc_tb ");
    tracep->declBus(c+20,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+18,"pclk", false,-1);
    tracep->declBit(c+1,"prstn", false,-1);
    tracep->declBus(c+7,"paddr", false,-1, 31,0);
    tracep->declBus(c+8,"pselx", false,-1, 2,0);
    tracep->declBit(c+9,"penable", false,-1);
    tracep->declBit(c+10,"pwrite", false,-1);
    tracep->declBus(c+11,"pwdata", false,-1, 31,0);
    tracep->declBit(c+12,"pready", false,-1);
    tracep->declBus(c+13,"prdata", false,-1, 31,0);
    tracep->declBit(c+21,"pslverr", false,-1);
    tracep->declBit(c+14,"wbuffread", false,-1);
    tracep->declBit(c+2,"wreq", false,-1);
    tracep->declBus(c+3,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+4,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+22,"rbuffwrite", false,-1);
    tracep->declBit(c+5,"rreq", false,-1);
    tracep->declBus(c+23,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+6,"rbuffaddr", false,-1, 31,0);
    tracep->declBus(c+24,"cnt", false,-1, 7,0);
    tracep->pushNamePrefix("apbm_swc_inst ");
    tracep->declBus(c+20,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+18,"pclk", false,-1);
    tracep->declBit(c+1,"prstn", false,-1);
    tracep->declBus(c+7,"paddr", false,-1, 31,0);
    tracep->declBus(c+8,"pselx", false,-1, 2,0);
    tracep->declBit(c+9,"penable", false,-1);
    tracep->declBit(c+10,"pwrite", false,-1);
    tracep->declBus(c+11,"pwdata", false,-1, 31,0);
    tracep->declBit(c+12,"pready", false,-1);
    tracep->declBus(c+13,"prdata", false,-1, 31,0);
    tracep->declBit(c+21,"pslverr", false,-1);
    tracep->declBit(c+14,"wbuffread", false,-1);
    tracep->declBit(c+2,"wreq", false,-1);
    tracep->declBus(c+3,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+4,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+22,"rbuffwrite", false,-1);
    tracep->declBit(c+5,"rreq", false,-1);
    tracep->declBus(c+23,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+6,"rbuffaddr", false,-1, 31,0);
    tracep->declBus(c+25,"IDLE", false,-1, 31,0);
    tracep->declBus(c+26,"STEUP", false,-1, 31,0);
    tracep->declBus(c+27,"ACCESS", false,-1, 31,0);
    tracep->declBus(c+15,"state", false,-1, 1,0);
    tracep->declBus(c+19,"nextstate", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbs_swc_inst ");
    tracep->declBus(c+20,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+18,"pclk", false,-1);
    tracep->declBit(c+1,"prstn", false,-1);
    tracep->declBus(c+7,"paddr", false,-1, 31,0);
    tracep->declBit(c+16,"psel", false,-1);
    tracep->declBit(c+9,"penable", false,-1);
    tracep->declBit(c+10,"pwrite", false,-1);
    tracep->declBus(c+11,"pwdata", false,-1, 31,0);
    tracep->declBit(c+12,"pready", false,-1);
    tracep->declBus(c+13,"prdata", false,-1, 31,0);
    tracep->declBit(c+21,"pslverr", false,-1);
    tracep->declBus(c+17,"SPI_CR", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vapb_swc_tb___024root__trace_init_top(Vapb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vapb_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vapb_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vapb_swc_tb___024root__trace_register(Vapb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vapb_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vapb_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vapb_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vapb_swc_tb___024root__trace_full_sub_0(Vapb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vapb_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vapb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_swc_tb___024root*>(voidSelf);
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vapb_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vapb_swc_tb___024root__trace_full_sub_0(Vapb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->apb_swc_tb__DOT__prstn));
    bufp->fullBit(oldp+2,(vlSelf->apb_swc_tb__DOT__wreq));
    bufp->fullIData(oldp+3,(vlSelf->apb_swc_tb__DOT__wbuffdata),32);
    bufp->fullIData(oldp+4,(vlSelf->apb_swc_tb__DOT__wbuffaddr),32);
    bufp->fullBit(oldp+5,(vlSelf->apb_swc_tb__DOT__rreq));
    bufp->fullIData(oldp+6,(vlSelf->apb_swc_tb__DOT__rbuffaddr),32);
    bufp->fullIData(oldp+7,(vlSelf->apb_swc_tb__DOT__paddr),32);
    bufp->fullCData(oldp+8,(vlSelf->apb_swc_tb__DOT__pselx),3);
    bufp->fullBit(oldp+9,(vlSelf->apb_swc_tb__DOT__penable));
    bufp->fullBit(oldp+10,(vlSelf->apb_swc_tb__DOT__pwrite));
    bufp->fullIData(oldp+11,(vlSelf->apb_swc_tb__DOT__pwdata),32);
    bufp->fullBit(oldp+12,(vlSelf->apb_swc_tb__DOT__pready));
    bufp->fullIData(oldp+13,(vlSelf->apb_swc_tb__DOT__prdata),32);
    bufp->fullBit(oldp+14,(vlSelf->apb_swc_tb__DOT__wbuffread));
    bufp->fullCData(oldp+15,(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state),2);
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelf->apb_swc_tb__DOT__pselx))));
    bufp->fullIData(oldp+17,(vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR),32);
    bufp->fullBit(oldp+18,(vlSelf->apb_swc_tb__DOT__pclk));
    bufp->fullCData(oldp+19,(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate),2);
    bufp->fullIData(oldp+20,(3U),32);
    bufp->fullBit(oldp+21,(0U));
    bufp->fullBit(oldp+22,(vlSelf->apb_swc_tb__DOT__rbuffwrite));
    bufp->fullIData(oldp+23,(vlSelf->apb_swc_tb__DOT__rbuffdata),32);
    bufp->fullCData(oldp+24,(vlSelf->apb_swc_tb__DOT__cnt),8);
    bufp->fullIData(oldp+25,(0U),32);
    bufp->fullIData(oldp+26,(1U),32);
    bufp->fullIData(oldp+27,(2U),32);
}
