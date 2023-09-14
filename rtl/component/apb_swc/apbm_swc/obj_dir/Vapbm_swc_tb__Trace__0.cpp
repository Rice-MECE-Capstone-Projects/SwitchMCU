// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapbm_swc_tb__Syms.h"


void Vapbm_swc_tb___024root__trace_chg_sub_0(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapbm_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vapbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapbm_swc_tb___024root*>(voidSelf);
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapbm_swc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vapbm_swc_tb___024root__trace_chg_sub_0(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->apbm_swc_tb__DOT__paddr),32);
        bufp->chgCData(oldp+1,(vlSelf->apbm_swc_tb__DOT__pselx),3);
        bufp->chgBit(oldp+2,(vlSelf->apbm_swc_tb__DOT__penable));
        bufp->chgIData(oldp+3,(vlSelf->apbm_swc_tb__DOT__pwdata),32);
        bufp->chgBit(oldp+4,(vlSelf->apbm_swc_tb__DOT__pready));
        bufp->chgBit(oldp+5,(vlSelf->apbm_swc_tb__DOT__wbuffread));
        bufp->chgIData(oldp+6,(vlSelf->apbm_swc_tb__DOT__wbuffdata),32);
        bufp->chgIData(oldp+7,(vlSelf->apbm_swc_tb__DOT__wbuffaddr),32);
        bufp->chgCData(oldp+8,(vlSelf->apbm_swc_tb__DOT__cnt),8);
        bufp->chgCData(oldp+9,(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__state),2);
    }
    bufp->chgBit(oldp+10,(vlSelf->apbm_swc_tb__DOT__pclk));
    bufp->chgBit(oldp+11,(vlSelf->apbm_swc_tb__DOT__prstn));
    bufp->chgBit(oldp+12,(vlSelf->apbm_swc_tb__DOT__wreq));
    bufp->chgCData(oldp+13,(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate),2);
}

void Vapbm_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vapbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapbm_swc_tb___024root*>(voidSelf);
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
