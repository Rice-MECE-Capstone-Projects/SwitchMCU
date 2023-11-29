// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasyncfifo_swc_tb__Syms.h"


void Vasyncfifo_swc_tb___024root__trace_chg_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vasyncfifo_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vasyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasyncfifo_swc_tb___024root*>(voidSelf);
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vasyncfifo_swc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vasyncfifo_swc_tb___024root__trace_chg_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->asyncfifo_swc_tb__DOT__rdata),16);
        bufp->chgCData(oldp+1,((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr))),8);
        bufp->chgSData(oldp+2,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr),9);
        bufp->chgSData(oldp+3,((0x1ffU & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr) 
                                           >> 1U) ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr)))),9);
        bufp->chgSData(oldp+4,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_r),9);
        bufp->chgSData(oldp+5,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr),9);
        bufp->chgSData(oldp+6,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+7,((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr))),8);
        bufp->chgSData(oldp+8,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr),9);
        bufp->chgSData(oldp+9,((0x1ffU & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr) 
                                           >> 1U) ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr)))),9);
        bufp->chgSData(oldp+10,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_r),9);
        bufp->chgSData(oldp+11,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr),9);
        bufp->chgSData(oldp+12,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore),9);
    }
    bufp->chgBit(oldp+13,(vlSelf->asyncfifo_swc_tb__DOT__rstn));
    bufp->chgBit(oldp+14,(vlSelf->asyncfifo_swc_tb__DOT__wclk));
    bufp->chgBit(oldp+15,(vlSelf->asyncfifo_swc_tb__DOT__reg_wen));
    bufp->chgSData(oldp+16,(vlSelf->asyncfifo_swc_tb__DOT__wdata),16);
    bufp->chgBit(oldp+17,(vlSelf->asyncfifo_swc_tb__DOT__full));
    bufp->chgBit(oldp+18,(vlSelf->asyncfifo_swc_tb__DOT__rclk));
    bufp->chgBit(oldp+19,(vlSelf->asyncfifo_swc_tb__DOT__ren));
    bufp->chgBit(oldp+20,(vlSelf->asyncfifo_swc_tb__DOT__empty));
}

void Vasyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vasyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasyncfifo_swc_tb___024root*>(voidSelf);
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
