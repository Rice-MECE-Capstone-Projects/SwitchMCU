// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahb2apb_ahbs_swc__Syms.h"


VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_init_sub__TOP__0(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,"rstn", false,-1);
    tracep->declBit(c+16,"hclk", false,-1);
    tracep->declBus(c+17,"haddr", false,-1, 31,0);
    tracep->declBus(c+18,"hprot", false,-1, 6,0);
    tracep->declBus(c+19,"hsize", false,-1, 2,0);
    tracep->declBus(c+20,"htrans", false,-1, 1,0);
    tracep->declBus(c+21,"hwdata", false,-1, 31,0);
    tracep->declBus(c+22,"hrdata", false,-1, 31,0);
    tracep->declBit(c+23,"hwrite", false,-1);
    tracep->declBit(c+24,"hready", false,-1);
    tracep->declBit(c+25,"hresp", false,-1);
    tracep->declBit(c+26,"pclk", false,-1);
    tracep->declBus(c+27,"paddr", false,-1, 31,0);
    tracep->declBus(c+28,"pselx", false,-1, 2,0);
    tracep->declBit(c+29,"penable", false,-1);
    tracep->declBit(c+30,"pwrite", false,-1);
    tracep->declBus(c+31,"pwdata", false,-1, 31,0);
    tracep->declBit(c+32,"pready", false,-1);
    tracep->declBus(c+33,"prdata", false,-1, 31,0);
    tracep->declBit(c+34,"pslverr", false,-1);
    tracep->pushNamePrefix("ahb2apb_swc ");
    tracep->declBit(c+15,"rstn", false,-1);
    tracep->declBit(c+16,"hclk", false,-1);
    tracep->declBit(c+15,"hrstn", false,-1);
    tracep->declBus(c+17,"haddr", false,-1, 31,0);
    tracep->declBus(c+18,"hprot", false,-1, 6,0);
    tracep->declBus(c+19,"hsize", false,-1, 2,0);
    tracep->declBus(c+20,"htrans", false,-1, 1,0);
    tracep->declBus(c+21,"hwdata", false,-1, 31,0);
    tracep->declBus(c+22,"hrdata", false,-1, 31,0);
    tracep->declBit(c+23,"hwrite", false,-1);
    tracep->declBit(c+24,"hready", false,-1);
    tracep->declBit(c+25,"hresp", false,-1);
    tracep->declBus(c+38,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+26,"pclk", false,-1);
    tracep->declBit(c+15,"prstn", false,-1);
    tracep->declBus(c+27,"paddr", false,-1, 31,0);
    tracep->declBus(c+28,"pselx", false,-1, 2,0);
    tracep->declBit(c+29,"penable", false,-1);
    tracep->declBit(c+30,"pwrite", false,-1);
    tracep->declBus(c+31,"pwdata", false,-1, 31,0);
    tracep->declBit(c+32,"pready", false,-1);
    tracep->declBus(c+33,"prdata", false,-1, 31,0);
    tracep->declBit(c+34,"pslverr", false,-1);
    tracep->declBit(c+1,"wbuffread", false,-1);
    tracep->declBit(c+12,"wreq_ahbs", false,-1);
    tracep->declBit(c+2,"wreq_r", false,-1);
    tracep->declBit(c+3,"wreq_rr", false,-1);
    tracep->declBit(c+4,"wreq_rrr", false,-1);
    tracep->declBit(c+5,"wreq_apbm", false,-1);
    tracep->declBus(c+13,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+14,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+6,"rbuffread", false,-1);
    tracep->declBit(c+7,"rbuffwrite", false,-1);
    tracep->declBit(c+39,"rreq", false,-1);
    tracep->declBus(c+8,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+40,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+9,"done", false,-1);
    tracep->declBit(c+10,"resp", false,-1);
    tracep->pushNamePrefix("ahb2apb_ahbs_swc_inst ");
    tracep->declBit(c+16,"hclk", false,-1);
    tracep->declBit(c+15,"hrstn", false,-1);
    tracep->declBus(c+17,"haddr", false,-1, 31,0);
    tracep->declBus(c+18,"hprot", false,-1, 6,0);
    tracep->declBus(c+19,"hsize", false,-1, 2,0);
    tracep->declBus(c+20,"htrans", false,-1, 1,0);
    tracep->declBus(c+21,"hwdata", false,-1, 31,0);
    tracep->declBus(c+22,"hrdata", false,-1, 31,0);
    tracep->declBit(c+23,"hwrite", false,-1);
    tracep->declBit(c+24,"hready", false,-1);
    tracep->declBit(c+25,"hresp", false,-1);
    tracep->declBit(c+12,"wreq", false,-1);
    tracep->declBus(c+13,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+14,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+9,"done", false,-1);
    tracep->declBus(c+41,"HTRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+42,"HTRANS_BUSY", false,-1, 31,0);
    tracep->declBus(c+43,"HTRANS_NONSEQ", false,-1, 31,0);
    tracep->declBus(c+38,"HTRANS_SEQ", false,-1, 31,0);
    tracep->declBus(c+41,"IDLE", false,-1, 31,0);
    tracep->declBus(c+42,"WSATRT", false,-1, 31,0);
    tracep->declBus(c+43,"WWAIT", false,-1, 31,0);
    tracep->declBus(c+38,"WDONE", false,-1, 31,0);
    tracep->declBus(c+44,"RSTART", false,-1, 31,0);
    tracep->declBus(c+45,"RWAIT", false,-1, 31,0);
    tracep->declBus(c+46,"RDONE", false,-1, 31,0);
    tracep->declBus(c+35,"state", false,-1, 2,0);
    tracep->declBus(c+36,"nextstate", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ahb2apb_apbm_swc_inst ");
    tracep->declBus(c+38,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+26,"pclk", false,-1);
    tracep->declBit(c+15,"prstn", false,-1);
    tracep->declBus(c+27,"paddr", false,-1, 31,0);
    tracep->declBus(c+28,"pselx", false,-1, 2,0);
    tracep->declBit(c+29,"penable", false,-1);
    tracep->declBit(c+30,"pwrite", false,-1);
    tracep->declBus(c+31,"pwdata", false,-1, 31,0);
    tracep->declBit(c+32,"pready", false,-1);
    tracep->declBus(c+33,"prdata", false,-1, 31,0);
    tracep->declBit(c+34,"pslverr", false,-1);
    tracep->declBit(c+1,"wbuffread", false,-1);
    tracep->declBit(c+5,"wreq", false,-1);
    tracep->declBus(c+13,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+14,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+6,"rbuffread", false,-1);
    tracep->declBit(c+7,"rbuffwrite", false,-1);
    tracep->declBit(c+39,"rreq", false,-1);
    tracep->declBus(c+8,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+40,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+9,"done", false,-1);
    tracep->declBit(c+10,"resp", false,-1);
    tracep->declBus(c+41,"IDLE", false,-1, 31,0);
    tracep->declBus(c+42,"STEUP", false,-1, 31,0);
    tracep->declBus(c+43,"ACCESS", false,-1, 31,0);
    tracep->declBus(c+11,"state", false,-1, 1,0);
    tracep->declBus(c+37,"nextstate", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_init_top(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_init_top\n"); );
    // Body
    Vahb2apb_ahbs_swc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahb2apb_ahbs_swc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahb2apb_ahbs_swc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_register(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vahb2apb_ahbs_swc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vahb2apb_ahbs_swc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vahb2apb_ahbs_swc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_full_sub_0(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_full_top_0\n"); );
    // Init
    Vahb2apb_ahbs_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_ahbs_swc___024root*>(voidSelf);
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahb2apb_ahbs_swc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_full_sub_0(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ahb2apb_swc__DOT__wbuffread));
    bufp->fullBit(oldp+2,(vlSelf->ahb2apb_swc__DOT__wreq_r));
    bufp->fullBit(oldp+3,(vlSelf->ahb2apb_swc__DOT__wreq_rr));
    bufp->fullBit(oldp+4,(vlSelf->ahb2apb_swc__DOT__wreq_rrr));
    bufp->fullBit(oldp+5,(vlSelf->ahb2apb_swc__DOT__wreq_apbm));
    bufp->fullBit(oldp+6,(vlSelf->ahb2apb_swc__DOT__rbuffread));
    bufp->fullBit(oldp+7,(vlSelf->ahb2apb_swc__DOT__rbuffwrite));
    bufp->fullIData(oldp+8,(vlSelf->ahb2apb_swc__DOT__rbuffdata),32);
    bufp->fullBit(oldp+9,(vlSelf->ahb2apb_swc__DOT__done));
    bufp->fullBit(oldp+10,(vlSelf->ahb2apb_swc__DOT__resp));
    bufp->fullCData(oldp+11,(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
    bufp->fullBit(oldp+12,(vlSelf->ahb2apb_swc__DOT__wreq_ahbs));
    bufp->fullIData(oldp+13,(vlSelf->ahb2apb_swc__DOT__wbuffdata),32);
    bufp->fullIData(oldp+14,(vlSelf->ahb2apb_swc__DOT__wbuffaddr),32);
    bufp->fullBit(oldp+15,(vlSelf->rstn));
    bufp->fullBit(oldp+16,(vlSelf->hclk));
    bufp->fullIData(oldp+17,(vlSelf->haddr),32);
    bufp->fullCData(oldp+18,(vlSelf->hprot),7);
    bufp->fullCData(oldp+19,(vlSelf->hsize),3);
    bufp->fullCData(oldp+20,(vlSelf->htrans),2);
    bufp->fullIData(oldp+21,(vlSelf->hwdata),32);
    bufp->fullIData(oldp+22,(vlSelf->hrdata),32);
    bufp->fullBit(oldp+23,(vlSelf->hwrite));
    bufp->fullBit(oldp+24,(vlSelf->hready));
    bufp->fullBit(oldp+25,(vlSelf->hresp));
    bufp->fullBit(oldp+26,(vlSelf->pclk));
    bufp->fullIData(oldp+27,(vlSelf->paddr),32);
    bufp->fullCData(oldp+28,(vlSelf->pselx),3);
    bufp->fullBit(oldp+29,(vlSelf->penable));
    bufp->fullBit(oldp+30,(vlSelf->pwrite));
    bufp->fullIData(oldp+31,(vlSelf->pwdata),32);
    bufp->fullBit(oldp+32,(vlSelf->pready));
    bufp->fullIData(oldp+33,(vlSelf->prdata),32);
    bufp->fullBit(oldp+34,(vlSelf->pslverr));
    bufp->fullCData(oldp+35,(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state),3);
    bufp->fullCData(oldp+36,(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
    bufp->fullCData(oldp+37,(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
    bufp->fullIData(oldp+38,(3U),32);
    bufp->fullBit(oldp+39,(vlSelf->ahb2apb_swc__DOT__rreq));
    bufp->fullIData(oldp+40,(vlSelf->ahb2apb_swc__DOT__rbuffaddr),32);
    bufp->fullIData(oldp+41,(0U),32);
    bufp->fullIData(oldp+42,(1U),32);
    bufp->fullIData(oldp+43,(2U),32);
    bufp->fullIData(oldp+44,(4U),32);
    bufp->fullIData(oldp+45,(5U),32);
    bufp->fullIData(oldp+46,(6U),32);
}
