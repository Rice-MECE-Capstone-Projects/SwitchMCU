// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapbm_swc_tb__Syms.h"


VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_init_sub__TOP__0(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("apbm_swc_tb ");
    tracep->declBus(c+15,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+11,"pclk", false,-1);
    tracep->declBit(c+12,"prstn", false,-1);
    tracep->declBus(c+1,"paddr", false,-1, 31,0);
    tracep->declBus(c+2,"pselx", false,-1, 2,0);
    tracep->declBit(c+3,"penable", false,-1);
    tracep->declBit(c+16,"pwrite", false,-1);
    tracep->declBus(c+4,"pwdata", false,-1, 31,0);
    tracep->declBit(c+5,"pready", false,-1);
    tracep->declBus(c+17,"prdata", false,-1, 31,0);
    tracep->declBit(c+18,"pslverr", false,-1);
    tracep->declBit(c+6,"wbuffread", false,-1);
    tracep->declBit(c+13,"wreq", false,-1);
    tracep->declBus(c+7,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+8,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+19,"rbuffwrite", false,-1);
    tracep->declBit(c+20,"rreq", false,-1);
    tracep->declBus(c+21,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+22,"rbuffaddr", false,-1, 31,0);
    tracep->declBus(c+9,"cnt", false,-1, 7,0);
    tracep->pushNamePrefix("apbm_swc_inst ");
    tracep->declBus(c+15,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+11,"pclk", false,-1);
    tracep->declBit(c+12,"prstn", false,-1);
    tracep->declBus(c+1,"paddr", false,-1, 31,0);
    tracep->declBus(c+2,"pselx", false,-1, 2,0);
    tracep->declBit(c+3,"penable", false,-1);
    tracep->declBit(c+16,"pwrite", false,-1);
    tracep->declBus(c+4,"pwdata", false,-1, 31,0);
    tracep->declBit(c+5,"pready", false,-1);
    tracep->declBus(c+17,"prdata", false,-1, 31,0);
    tracep->declBit(c+18,"pslverr", false,-1);
    tracep->declBit(c+6,"wbuffread", false,-1);
    tracep->declBit(c+13,"wreq", false,-1);
    tracep->declBus(c+7,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+8,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+19,"rbuffwrite", false,-1);
    tracep->declBit(c+20,"rreq", false,-1);
    tracep->declBus(c+21,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+22,"rbuffaddr", false,-1, 31,0);
    tracep->declBus(c+23,"IDLE", false,-1, 31,0);
    tracep->declBus(c+24,"STEUP", false,-1, 31,0);
    tracep->declBus(c+25,"ACCESS", false,-1, 31,0);
    tracep->declBus(c+10,"state", false,-1, 1,0);
    tracep->declBus(c+14,"nextstate", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_init_top(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vapbm_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapbm_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapbm_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_register(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vapbm_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vapbm_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vapbm_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_full_sub_0(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vapbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapbm_swc_tb___024root*>(voidSelf);
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vapbm_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_full_sub_0(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->apbm_swc_tb__DOT__paddr),32);
    bufp->fullCData(oldp+2,(vlSelf->apbm_swc_tb__DOT__pselx),3);
    bufp->fullBit(oldp+3,(vlSelf->apbm_swc_tb__DOT__penable));
    bufp->fullIData(oldp+4,(vlSelf->apbm_swc_tb__DOT__pwdata),32);
    bufp->fullBit(oldp+5,(vlSelf->apbm_swc_tb__DOT__pready));
    bufp->fullBit(oldp+6,(vlSelf->apbm_swc_tb__DOT__wbuffread));
    bufp->fullIData(oldp+7,(vlSelf->apbm_swc_tb__DOT__wbuffdata),32);
    bufp->fullIData(oldp+8,(vlSelf->apbm_swc_tb__DOT__wbuffaddr),32);
    bufp->fullCData(oldp+9,(vlSelf->apbm_swc_tb__DOT__cnt),8);
    bufp->fullCData(oldp+10,(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__state),2);
    bufp->fullBit(oldp+11,(vlSelf->apbm_swc_tb__DOT__pclk));
    bufp->fullBit(oldp+12,(vlSelf->apbm_swc_tb__DOT__prstn));
    bufp->fullBit(oldp+13,(vlSelf->apbm_swc_tb__DOT__wreq));
    bufp->fullCData(oldp+14,(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate),2);
    bufp->fullIData(oldp+15,(3U),32);
    bufp->fullBit(oldp+16,(vlSelf->apbm_swc_tb__DOT__pwrite));
    bufp->fullIData(oldp+17,(vlSelf->apbm_swc_tb__DOT__prdata),32);
    bufp->fullBit(oldp+18,(vlSelf->apbm_swc_tb__DOT__pslverr));
    bufp->fullBit(oldp+19,(vlSelf->apbm_swc_tb__DOT__rbuffwrite));
    bufp->fullBit(oldp+20,(vlSelf->apbm_swc_tb__DOT__rreq));
    bufp->fullIData(oldp+21,(vlSelf->apbm_swc_tb__DOT__rbuffdata),32);
    bufp->fullIData(oldp+22,(vlSelf->apbm_swc_tb__DOT__rbuffaddr),32);
    bufp->fullIData(oldp+23,(0U),32);
    bufp->fullIData(oldp+24,(1U),32);
    bufp->fullIData(oldp+25,(2U),32);
}
