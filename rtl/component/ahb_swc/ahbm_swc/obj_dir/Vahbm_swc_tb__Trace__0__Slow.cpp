// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahbm_swc_tb__Syms.h"


VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_init_sub__TOP__0(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ahbm_swc_tb ");
    tracep->declBit(c+22,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+9,"haddr", false,-1, 31,0);
    tracep->declBit(c+24,"hmastlock", false,-1);
    tracep->declBus(c+25,"hprot", false,-1, 6,0);
    tracep->declBus(c+26,"hsize", false,-1, 2,0);
    tracep->declBus(c+10,"htrans", false,-1, 1,0);
    tracep->declBus(c+11,"hwdata", false,-1, 31,0);
    tracep->declBus(c+2,"hrdata", false,-1, 31,0);
    tracep->declBit(c+12,"hwrite", false,-1);
    tracep->declBit(c+3,"hready", false,-1);
    tracep->declBit(c+27,"hresp", false,-1);
    tracep->declBit(c+28,"wbuffread", false,-1);
    tracep->declBit(c+4,"wreq", false,-1);
    tracep->declBus(c+5,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+6,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+29,"rbuffwrite", false,-1);
    tracep->declBit(c+7,"rreq", false,-1);
    tracep->declBus(c+13,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+8,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+14,"done", false,-1);
    tracep->declBit(c+15,"resp", false,-1);
    tracep->pushNamePrefix("ahbm_swc_inst ");
    tracep->declBit(c+22,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+9,"haddr", false,-1, 31,0);
    tracep->declBit(c+24,"hmastlock", false,-1);
    tracep->declBus(c+25,"hprot", false,-1, 6,0);
    tracep->declBus(c+26,"hsize", false,-1, 2,0);
    tracep->declBus(c+10,"htrans", false,-1, 1,0);
    tracep->declBus(c+11,"hwdata", false,-1, 31,0);
    tracep->declBus(c+2,"hrdata", false,-1, 31,0);
    tracep->declBit(c+12,"hwrite", false,-1);
    tracep->declBit(c+3,"hready", false,-1);
    tracep->declBit(c+27,"hresp", false,-1);
    tracep->declBit(c+28,"wbuffread", false,-1);
    tracep->declBit(c+4,"wreq", false,-1);
    tracep->declBus(c+5,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+6,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+29,"rbuffwrite", false,-1);
    tracep->declBit(c+7,"rreq", false,-1);
    tracep->declBus(c+13,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+8,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+14,"done", false,-1);
    tracep->declBit(c+15,"resp", false,-1);
    tracep->declBus(c+30,"IDLE", false,-1, 31,0);
    tracep->declBus(c+31,"STEUP", false,-1, 31,0);
    tracep->declBus(c+32,"WAIT", false,-1, 31,0);
    tracep->declBus(c+30,"HTRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+31,"HTRANS_BUSY", false,-1, 31,0);
    tracep->declBus(c+32,"HTRANS_NONSEQ", false,-1, 31,0);
    tracep->declBus(c+33,"HTRANS_SEQ", false,-1, 31,0);
    tracep->declBus(c+16,"state", false,-1, 1,0);
    tracep->declBus(c+23,"nextstate", false,-1, 1,0);
    tracep->declBus(c+17,"hwdatabuff", false,-1, 31,0);
    tracep->declBit(c+18,"wpendingflag", false,-1);
    tracep->declBit(c+19,"wpendingflagdly", false,-1);
    tracep->declBit(c+20,"rpendingflag", false,-1);
    tracep->declBit(c+21,"rpendingflagdly", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_init_top(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vahbm_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahbm_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahbm_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_register(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vahbm_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vahbm_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vahbm_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_full_sub_0(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vahbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc_tb___024root*>(voidSelf);
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahbm_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_full_sub_0(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ahbm_swc_tb__DOT__hrstn));
    bufp->fullIData(oldp+2,(vlSelf->ahbm_swc_tb__DOT__hrdata),32);
    bufp->fullBit(oldp+3,(vlSelf->ahbm_swc_tb__DOT__hready));
    bufp->fullBit(oldp+4,(vlSelf->ahbm_swc_tb__DOT__wreq));
    bufp->fullIData(oldp+5,(vlSelf->ahbm_swc_tb__DOT__wbuffdata),32);
    bufp->fullIData(oldp+6,(vlSelf->ahbm_swc_tb__DOT__wbuffaddr),32);
    bufp->fullBit(oldp+7,(vlSelf->ahbm_swc_tb__DOT__rreq));
    bufp->fullIData(oldp+8,(vlSelf->ahbm_swc_tb__DOT__rbuffaddr),32);
    bufp->fullIData(oldp+9,(vlSelf->ahbm_swc_tb__DOT__haddr),32);
    bufp->fullCData(oldp+10,(vlSelf->ahbm_swc_tb__DOT__htrans),2);
    bufp->fullIData(oldp+11,(vlSelf->ahbm_swc_tb__DOT__hwdata),32);
    bufp->fullBit(oldp+12,(vlSelf->ahbm_swc_tb__DOT__hwrite));
    bufp->fullIData(oldp+13,(vlSelf->ahbm_swc_tb__DOT__rbuffdata),32);
    bufp->fullBit(oldp+14,(vlSelf->ahbm_swc_tb__DOT__done));
    bufp->fullBit(oldp+15,(vlSelf->ahbm_swc_tb__DOT__resp));
    bufp->fullCData(oldp+16,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__state),2);
    bufp->fullIData(oldp+17,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff),32);
    bufp->fullBit(oldp+18,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag));
    bufp->fullBit(oldp+19,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly));
    bufp->fullBit(oldp+20,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
    bufp->fullBit(oldp+21,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly));
    bufp->fullBit(oldp+22,(vlSelf->ahbm_swc_tb__DOT__hclk));
    bufp->fullCData(oldp+23,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
    bufp->fullBit(oldp+24,(vlSelf->ahbm_swc_tb__DOT__hmastlock));
    bufp->fullCData(oldp+25,(vlSelf->ahbm_swc_tb__DOT__hprot),7);
    bufp->fullCData(oldp+26,(vlSelf->ahbm_swc_tb__DOT__hsize),3);
    bufp->fullBit(oldp+27,(vlSelf->ahbm_swc_tb__DOT__hresp));
    bufp->fullBit(oldp+28,(vlSelf->ahbm_swc_tb__DOT__wbuffread));
    bufp->fullBit(oldp+29,(vlSelf->ahbm_swc_tb__DOT__rbuffwrite));
    bufp->fullIData(oldp+30,(0U),32);
    bufp->fullIData(oldp+31,(1U),32);
    bufp->fullIData(oldp+32,(2U),32);
    bufp->fullIData(oldp+33,(3U),32);
}
