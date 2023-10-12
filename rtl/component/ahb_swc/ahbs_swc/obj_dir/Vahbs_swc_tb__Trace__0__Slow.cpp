// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahbs_swc_tb__Syms.h"


VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_init_sub__TOP__0(Vahbs_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ahbs_swc_tb ");
    tracep->declBit(c+16,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+2,"haddr", false,-1, 31,0);
    tracep->declBit(c+3,"hmastlock", false,-1);
    tracep->declBus(c+4,"hprot", false,-1, 6,0);
    tracep->declBus(c+5,"hsize", false,-1, 2,0);
    tracep->declBus(c+6,"htrans", false,-1, 1,0);
    tracep->declBus(c+7,"hwdata", false,-1, 31,0);
    tracep->declBus(c+10,"hrdata", false,-1, 31,0);
    tracep->declBit(c+8,"hwrite", false,-1);
    tracep->declBit(c+19,"hready", false,-1);
    tracep->declBit(c+20,"hresp", false,-1);
    tracep->declBit(c+11,"wreq", false,-1);
    tracep->declBus(c+12,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+13,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+14,"rreq", false,-1);
    tracep->declBus(c+9,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+15,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+21,"done", false,-1);
    tracep->declBit(c+22,"resp", false,-1);
    tracep->pushNamePrefix("ahbs_swc_inst ");
    tracep->declBit(c+16,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+2,"haddr", false,-1, 31,0);
    tracep->declBit(c+3,"hmastlock", false,-1);
    tracep->declBus(c+4,"hprot", false,-1, 6,0);
    tracep->declBus(c+5,"hsize", false,-1, 2,0);
    tracep->declBus(c+6,"htrans", false,-1, 1,0);
    tracep->declBus(c+7,"hwdata", false,-1, 31,0);
    tracep->declBus(c+10,"hrdata", false,-1, 31,0);
    tracep->declBit(c+8,"hwrite", false,-1);
    tracep->declBit(c+19,"hready", false,-1);
    tracep->declBit(c+20,"hresp", false,-1);
    tracep->declBit(c+11,"wreq", false,-1);
    tracep->declBus(c+12,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+13,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+14,"rreq", false,-1);
    tracep->declBus(c+9,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+15,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+21,"done", false,-1);
    tracep->declBit(c+22,"resp", false,-1);
    tracep->declBus(c+23,"IDLE", false,-1, 3,0);
    tracep->declBus(c+24,"READ", false,-1, 3,0);
    tracep->declBus(c+25,"WRITE", false,-1, 3,0);
    tracep->declBus(c+26,"HTRANS_IDLE", false,-1, 1,0);
    tracep->declBus(c+27,"HTRANS_BUSY", false,-1, 1,0);
    tracep->declBus(c+28,"HTRANS_NONSEQ", false,-1, 1,0);
    tracep->declBus(c+29,"HTRANS_SEQ", false,-1, 1,0);
    tracep->declBus(c+17,"state", false,-1, 3,0);
    tracep->declBus(c+18,"next_state", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_init_top(Vahbs_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vahbs_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahbs_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahbs_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_register(Vahbs_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vahbs_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vahbs_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vahbs_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_full_sub_0(Vahbs_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vahbs_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbs_swc_tb___024root*>(voidSelf);
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahbs_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahbs_swc_tb___024root__trace_full_sub_0(Vahbs_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ahbs_swc_tb__DOT__hrstn));
    bufp->fullIData(oldp+2,(vlSelf->ahbs_swc_tb__DOT__haddr),32);
    bufp->fullBit(oldp+3,(vlSelf->ahbs_swc_tb__DOT__hmastlock));
    bufp->fullCData(oldp+4,(vlSelf->ahbs_swc_tb__DOT__hprot),7);
    bufp->fullCData(oldp+5,(vlSelf->ahbs_swc_tb__DOT__hsize),3);
    bufp->fullCData(oldp+6,(vlSelf->ahbs_swc_tb__DOT__htrans),2);
    bufp->fullIData(oldp+7,(vlSelf->ahbs_swc_tb__DOT__hwdata),32);
    bufp->fullBit(oldp+8,(vlSelf->ahbs_swc_tb__DOT__hwrite));
    bufp->fullIData(oldp+9,(vlSelf->ahbs_swc_tb__DOT__rbuffdata),32);
    bufp->fullIData(oldp+10,(vlSelf->ahbs_swc_tb__DOT__hrdata),32);
    bufp->fullBit(oldp+11,(vlSelf->ahbs_swc_tb__DOT__wreq));
    bufp->fullIData(oldp+12,(vlSelf->ahbs_swc_tb__DOT__wbuffdata),32);
    bufp->fullIData(oldp+13,(vlSelf->ahbs_swc_tb__DOT__wbuffaddr),32);
    bufp->fullBit(oldp+14,(vlSelf->ahbs_swc_tb__DOT__rreq));
    bufp->fullIData(oldp+15,(vlSelf->ahbs_swc_tb__DOT__rbuffaddr),32);
    bufp->fullBit(oldp+16,(vlSelf->ahbs_swc_tb__DOT__hclk));
    bufp->fullCData(oldp+17,(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__state),4);
    bufp->fullCData(oldp+18,(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state),4);
    bufp->fullBit(oldp+19,(vlSelf->ahbs_swc_tb__DOT__hready));
    bufp->fullBit(oldp+20,(vlSelf->ahbs_swc_tb__DOT__hresp));
    bufp->fullBit(oldp+21,(vlSelf->ahbs_swc_tb__DOT__done));
    bufp->fullBit(oldp+22,(vlSelf->ahbs_swc_tb__DOT__resp));
    bufp->fullCData(oldp+23,(0U),4);
    bufp->fullCData(oldp+24,(1U),4);
    bufp->fullCData(oldp+25,(2U),4);
    bufp->fullCData(oldp+26,(0U),2);
    bufp->fullCData(oldp+27,(1U),2);
    bufp->fullCData(oldp+28,(2U),2);
    bufp->fullCData(oldp+29,(3U),2);
}
