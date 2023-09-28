// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahb2apb_ahbs_swc__Syms.h"


void Vahb2apb_ahbs_swc___024root__trace_chg_sub_0(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vahb2apb_ahbs_swc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_chg_top_0\n"); );
    // Init
    Vahb2apb_ahbs_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_ahbs_swc___024root*>(voidSelf);
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vahb2apb_ahbs_swc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vahb2apb_ahbs_swc___024root__trace_chg_sub_0(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ahb2apb_swc__DOT__wbuffread));
        bufp->chgBit(oldp+1,(vlSelf->ahb2apb_swc__DOT__wreq_r));
        bufp->chgBit(oldp+2,(vlSelf->ahb2apb_swc__DOT__wreq_rr));
        bufp->chgBit(oldp+3,(vlSelf->ahb2apb_swc__DOT__wreq_rrr));
        bufp->chgBit(oldp+4,(vlSelf->ahb2apb_swc__DOT__wreq_apbm));
        bufp->chgBit(oldp+5,(vlSelf->ahb2apb_swc__DOT__rbuffread));
        bufp->chgBit(oldp+6,(vlSelf->ahb2apb_swc__DOT__rbuffwrite));
        bufp->chgIData(oldp+7,(vlSelf->ahb2apb_swc__DOT__rbuffdata),32);
        bufp->chgBit(oldp+8,(vlSelf->ahb2apb_swc__DOT__done));
        bufp->chgBit(oldp+9,(vlSelf->ahb2apb_swc__DOT__resp));
        bufp->chgCData(oldp+10,(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+11,(vlSelf->ahb2apb_swc__DOT__wreq_ahbs));
        bufp->chgIData(oldp+12,(vlSelf->ahb2apb_swc__DOT__wbuffdata),32);
        bufp->chgIData(oldp+13,(vlSelf->ahb2apb_swc__DOT__wbuffaddr),32);
    }
    bufp->chgBit(oldp+14,(vlSelf->rstn));
    bufp->chgBit(oldp+15,(vlSelf->hclk));
    bufp->chgIData(oldp+16,(vlSelf->haddr),32);
    bufp->chgCData(oldp+17,(vlSelf->hprot),7);
    bufp->chgCData(oldp+18,(vlSelf->hsize),3);
    bufp->chgCData(oldp+19,(vlSelf->htrans),2);
    bufp->chgIData(oldp+20,(vlSelf->hwdata),32);
    bufp->chgIData(oldp+21,(vlSelf->hrdata),32);
    bufp->chgBit(oldp+22,(vlSelf->hwrite));
    bufp->chgBit(oldp+23,(vlSelf->hready));
    bufp->chgBit(oldp+24,(vlSelf->hresp));
    bufp->chgBit(oldp+25,(vlSelf->pclk));
    bufp->chgIData(oldp+26,(vlSelf->paddr),32);
    bufp->chgCData(oldp+27,(vlSelf->pselx),3);
    bufp->chgBit(oldp+28,(vlSelf->penable));
    bufp->chgBit(oldp+29,(vlSelf->pwrite));
    bufp->chgIData(oldp+30,(vlSelf->pwdata),32);
    bufp->chgBit(oldp+31,(vlSelf->pready));
    bufp->chgIData(oldp+32,(vlSelf->prdata),32);
    bufp->chgBit(oldp+33,(vlSelf->pslverr));
    bufp->chgCData(oldp+34,(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state),3);
    bufp->chgCData(oldp+35,(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
    bufp->chgCData(oldp+36,(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
}

void Vahb2apb_ahbs_swc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root__trace_cleanup\n"); );
    // Init
    Vahb2apb_ahbs_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_ahbs_swc___024root*>(voidSelf);
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
