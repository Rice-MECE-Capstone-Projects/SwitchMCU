// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_swc_tb__Syms.h"


void Vapb_swc_tb___024root__trace_chg_sub_0(Vapb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapb_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vapb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_swc_tb___024root*>(voidSelf);
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapb_swc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vapb_swc_tb___024root__trace_chg_sub_0(Vapb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->apb_swc_tb__DOT__prstn));
        bufp->chgBit(oldp+1,(vlSelf->apb_swc_tb__DOT__wreq));
        bufp->chgIData(oldp+2,(vlSelf->apb_swc_tb__DOT__wbuffdata),32);
        bufp->chgIData(oldp+3,(vlSelf->apb_swc_tb__DOT__wbuffaddr),32);
        bufp->chgBit(oldp+4,(vlSelf->apb_swc_tb__DOT__rreq));
        bufp->chgIData(oldp+5,(vlSelf->apb_swc_tb__DOT__rbuffaddr),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,(vlSelf->apb_swc_tb__DOT__paddr),32);
        bufp->chgCData(oldp+7,(vlSelf->apb_swc_tb__DOT__pselx),3);
        bufp->chgBit(oldp+8,(vlSelf->apb_swc_tb__DOT__penable));
        bufp->chgBit(oldp+9,(vlSelf->apb_swc_tb__DOT__pwrite));
        bufp->chgIData(oldp+10,(vlSelf->apb_swc_tb__DOT__pwdata),32);
        bufp->chgBit(oldp+11,(vlSelf->apb_swc_tb__DOT__pready));
        bufp->chgIData(oldp+12,(vlSelf->apb_swc_tb__DOT__prdata),32);
        bufp->chgBit(oldp+13,(vlSelf->apb_swc_tb__DOT__wbuffread));
        bufp->chgBit(oldp+14,(vlSelf->apb_swc_tb__DOT__rbuffwrite));
        bufp->chgIData(oldp+15,(vlSelf->apb_swc_tb__DOT__rbuffdata),32);
        bufp->chgCData(oldp+16,(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state),2);
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->apb_swc_tb__DOT__pselx))));
        bufp->chgIData(oldp+18,(vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR),32);
        bufp->chgIData(oldp+19,(vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR),32);
        bufp->chgIData(oldp+20,(vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR),32);
    }
    bufp->chgBit(oldp+21,(vlSelf->apb_swc_tb__DOT__pclk));
    bufp->chgCData(oldp+22,(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate),2);
}

void Vapb_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vapb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_swc_tb___024root*>(voidSelf);
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
