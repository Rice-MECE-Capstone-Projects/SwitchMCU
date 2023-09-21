// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahbm_swc__Syms.h"


void Vahbm_swc___024root__trace_chg_sub_0(Vahbm_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vahbm_swc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_chg_top_0\n"); );
    // Init
    Vahbm_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc___024root*>(voidSelf);
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vahbm_swc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vahbm_swc___024root__trace_chg_sub_0(Vahbm_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->hclk));
    bufp->chgBit(oldp+1,(vlSelf->hrstn));
    bufp->chgIData(oldp+2,(vlSelf->haddr),32);
    bufp->chgBit(oldp+3,(vlSelf->hmastlock));
    bufp->chgCData(oldp+4,(vlSelf->hprot),7);
    bufp->chgCData(oldp+5,(vlSelf->hsize),3);
    bufp->chgCData(oldp+6,(vlSelf->htrans),2);
    bufp->chgIData(oldp+7,(vlSelf->hwdata),32);
    bufp->chgBit(oldp+8,(vlSelf->hwrite));
    bufp->chgBit(oldp+9,(vlSelf->hready));
    bufp->chgBit(oldp+10,(vlSelf->hresp));
    bufp->chgBit(oldp+11,(vlSelf->wbuffread));
    bufp->chgBit(oldp+12,(vlSelf->wreq));
    bufp->chgIData(oldp+13,(vlSelf->wbuffdata),32);
    bufp->chgIData(oldp+14,(vlSelf->wbuffaddr),32);
    bufp->chgBit(oldp+15,(vlSelf->rbuffwrite));
    bufp->chgBit(oldp+16,(vlSelf->rreq));
    bufp->chgIData(oldp+17,(vlSelf->rbuffdata),32);
    bufp->chgIData(oldp+18,(vlSelf->rbuffaddr),32);
    bufp->chgBit(oldp+19,(vlSelf->done));
    bufp->chgBit(oldp+20,(vlSelf->resp));
    bufp->chgCData(oldp+21,(vlSelf->ahbm_swc__DOT__state),2);
    bufp->chgCData(oldp+22,(vlSelf->ahbm_swc__DOT__nextstate),2);
    bufp->chgIData(oldp+23,(vlSelf->ahbm_swc__DOT__hwdatabuff),32);
}

void Vahbm_swc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root__trace_cleanup\n"); );
    // Init
    Vahbm_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc___024root*>(voidSelf);
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
