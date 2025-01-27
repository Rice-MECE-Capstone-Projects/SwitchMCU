// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_flush_tb__Syms.h"


void Vexu_flush_tb___024root__trace_chg_0_sub_0(Vexu_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexu_flush_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root__trace_chg_0\n"); );
    // Init
    Vexu_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_flush_tb___024root*>(voidSelf);
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexu_flush_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexu_flush_tb___024root__trace_chg_0_sub_0(Vexu_flush_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->exu_flush_tb__DOT__cycle_cnt),4);
        bufp->chgBit(oldp+1,(vlSelf->exu_flush_tb__DOT__flush_stall));
        bufp->chgCData(oldp+2,(vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__state),2);
    }
    bufp->chgBit(oldp+3,(vlSelf->exu_flush_tb__DOT__hclk));
    bufp->chgBit(oldp+4,(vlSelf->exu_flush_tb__DOT__hrstn));
    bufp->chgCData(oldp+5,(vlSelf->exu_flush_tb__DOT__flush),2);
    bufp->chgCData(oldp+6,(vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__nextstate),2);
}

void Vexu_flush_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root__trace_cleanup\n"); );
    // Init
    Vexu_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_flush_tb___024root*>(voidSelf);
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
