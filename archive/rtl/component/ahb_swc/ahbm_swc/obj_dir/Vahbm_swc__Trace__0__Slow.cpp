// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahbm_swc__Syms.h"


VL_ATTR_COLD void Vahbm_swc___024root__trace_init_sub__TOP__0(Vahbm_swc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"hclk", false,-1);
    tracep->declBit(c+2,"hrstn", false,-1);
    tracep->declBus(c+3,"haddr", false,-1, 31,0);
    tracep->declBit(c+4,"hmastlock", false,-1);
    tracep->declBus(c+5,"hprot", false,-1, 6,0);
    tracep->declBus(c+6,"hsize", false,-1, 2,0);
    tracep->declBus(c+7,"htrans", false,-1, 1,0);
    tracep->declBus(c+8,"hwdata", false,-1, 31,0);
    tracep->declBit(c+9,"hwrite", false,-1);
    tracep->declBit(c+10,"hready", false,-1);
    tracep->declBit(c+11,"hresp", false,-1);
    tracep->declBit(c+12,"wbuffread", false,-1);
    tracep->declBit(c+13,"wreq", false,-1);
    tracep->declBus(c+14,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+15,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+16,"rbuffwrite", false,-1);
    tracep->declBit(c+17,"rreq", false,-1);
    tracep->declBus(c+18,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+19,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+20,"done", false,-1);
    tracep->declBit(c+21,"resp", false,-1);
    tracep->pushNamePrefix("ahbm_swc ");
    tracep->declBit(c+1,"hclk", false,-1);
    tracep->declBit(c+2,"hrstn", false,-1);
    tracep->declBus(c+3,"haddr", false,-1, 31,0);
    tracep->declBit(c+4,"hmastlock", false,-1);
    tracep->declBus(c+5,"hprot", false,-1, 6,0);
    tracep->declBus(c+6,"hsize", false,-1, 2,0);
    tracep->declBus(c+7,"htrans", false,-1, 1,0);
    tracep->declBus(c+8,"hwdata", false,-1, 31,0);
    tracep->declBit(c+9,"hwrite", false,-1);
    tracep->declBit(c+10,"hready", false,-1);
    tracep->declBit(c+11,"hresp", false,-1);
    tracep->declBit(c+12,"wbuffread", false,-1);
    tracep->declBit(c+13,"wreq", false,-1);
    tracep->declBus(c+14,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+15,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+16,"rbuffwrite", false,-1);
    tracep->declBit(c+17,"rreq", false,-1);
    tracep->declBus(c+18,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+19,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+20,"done", false,-1);
    tracep->declBit(c+21,"resp", false,-1);
    tracep->declBus(c+25,"IDLE", false,-1, 31,0);
    tracep->declBus(c+26,"STEUP", false,-1, 31,0);
    tracep->declBus(c+27,"WAIT", false,-1, 31,0);
    tracep->declBus(c+25,"HTRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+26,"HTRANS_BUSY", false,-1, 31,0);
    tracep->declBus(c+27,"HTRANS_NONSEQ", false,-1, 31,0);
    tracep->declBus(c+28,"HTRANS_SEQ", false,-1, 31,0);
    tracep->declBus(c+22,"state", false,-1, 1,0);
    tracep->declBus(c+23,"nextstate", false,-1, 1,0);
    tracep->declBus(c+24,"hwdatabuff", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vahbm_swc___024root__trace_init_top(Vahbm_swc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_init_top\n"); );
    // Body
    Vahbm_swc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vahbm_swc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahbm_swc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahbm_swc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vahbm_swc___024root__trace_register(Vahbm_swc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vahbm_swc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vahbm_swc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vahbm_swc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vahbm_swc___024root__trace_full_sub_0(Vahbm_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahbm_swc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_full_top_0\n"); );
    // Init
    Vahbm_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc___024root*>(voidSelf);
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahbm_swc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahbm_swc___024root__trace_full_sub_0(Vahbm_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->hclk));
    bufp->fullBit(oldp+2,(vlSelf->hrstn));
    bufp->fullIData(oldp+3,(vlSelf->haddr),32);
    bufp->fullBit(oldp+4,(vlSelf->hmastlock));
    bufp->fullCData(oldp+5,(vlSelf->hprot),7);
    bufp->fullCData(oldp+6,(vlSelf->hsize),3);
    bufp->fullCData(oldp+7,(vlSelf->htrans),2);
    bufp->fullIData(oldp+8,(vlSelf->hwdata),32);
    bufp->fullBit(oldp+9,(vlSelf->hwrite));
    bufp->fullBit(oldp+10,(vlSelf->hready));
    bufp->fullBit(oldp+11,(vlSelf->hresp));
    bufp->fullBit(oldp+12,(vlSelf->wbuffread));
    bufp->fullBit(oldp+13,(vlSelf->wreq));
    bufp->fullIData(oldp+14,(vlSelf->wbuffdata),32);
    bufp->fullIData(oldp+15,(vlSelf->wbuffaddr),32);
    bufp->fullBit(oldp+16,(vlSelf->rbuffwrite));
    bufp->fullBit(oldp+17,(vlSelf->rreq));
    bufp->fullIData(oldp+18,(vlSelf->rbuffdata),32);
    bufp->fullIData(oldp+19,(vlSelf->rbuffaddr),32);
    bufp->fullBit(oldp+20,(vlSelf->done));
    bufp->fullBit(oldp+21,(vlSelf->resp));
    bufp->fullCData(oldp+22,(vlSelf->ahbm_swc__DOT__state),2);
    bufp->fullCData(oldp+23,(vlSelf->ahbm_swc__DOT__nextstate),2);
    bufp->fullIData(oldp+24,(vlSelf->ahbm_swc__DOT__hwdatabuff),32);
    bufp->fullIData(oldp+25,(0U),32);
    bufp->fullIData(oldp+26,(1U),32);
    bufp->fullIData(oldp+27,(2U),32);
    bufp->fullIData(oldp+28,(3U),32);
}
