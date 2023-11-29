// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsyncfifo_swc_tb__Syms.h"


void Vsyncfifo_swc_tb___024root__trace_chg_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsyncfifo_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsyncfifo_swc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsyncfifo_swc_tb___024root__trace_chg_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->syncfifo_swc_tb__DOT__rdata),16);
        bufp->chgBit(oldp+1,(vlSelf->syncfifo_swc_tb__DOT__empty));
        bufp->chgCData(oldp+2,((0xffU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))),8);
        bufp->chgCData(oldp+3,((0xffU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))),8);
        bufp->chgSData(oldp+4,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr),9);
        bufp->chgSData(oldp+5,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr),9);
    }
    bufp->chgBit(oldp+6,(vlSelf->syncfifo_swc_tb__DOT__rstn));
    bufp->chgBit(oldp+7,(vlSelf->syncfifo_swc_tb__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelf->syncfifo_swc_tb__DOT__reg_wen));
    bufp->chgSData(oldp+9,(vlSelf->syncfifo_swc_tb__DOT__wdata),16);
    bufp->chgBit(oldp+10,(vlSelf->syncfifo_swc_tb__DOT__full));
    bufp->chgBit(oldp+11,(vlSelf->syncfifo_swc_tb__DOT__ren));
}

void Vsyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
