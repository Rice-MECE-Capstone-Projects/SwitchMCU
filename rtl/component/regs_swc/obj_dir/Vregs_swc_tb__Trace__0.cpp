// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregs_swc_tb__Syms.h"


void Vregs_swc_tb___024root__trace_chg_sub_0(Vregs_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregs_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vregs_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregs_swc_tb___024root*>(voidSelf);
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregs_swc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vregs_swc_tb___024root__trace_chg_sub_0(Vregs_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->regs_swc_tb__DOT__rstn));
        bufp->chgBit(oldp+1,(vlSelf->regs_swc_tb__DOT__write));
        bufp->chgCData(oldp+2,(vlSelf->regs_swc_tb__DOT__waddr),7);
        bufp->chgIData(oldp+3,(vlSelf->regs_swc_tb__DOT__wdata),32);
        bufp->chgBit(oldp+4,(vlSelf->regs_swc_tb__DOT__read));
        bufp->chgCData(oldp+5,(vlSelf->regs_swc_tb__DOT__raddr),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,(vlSelf->regs_swc_tb__DOT__rdata),32);
        bufp->chgWData(oldp+7,(vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs),320);
    }
    bufp->chgBit(oldp+17,(vlSelf->regs_swc_tb__DOT__clk));
}

void Vregs_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vregs_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregs_swc_tb___024root*>(voidSelf);
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
