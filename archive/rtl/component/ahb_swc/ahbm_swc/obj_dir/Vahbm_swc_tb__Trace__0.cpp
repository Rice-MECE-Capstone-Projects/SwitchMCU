// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahbm_swc_tb__Syms.h"


void Vahbm_swc_tb___024root__trace_chg_0_sub_0(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vahbm_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_chg_0\n"); );
    // Init
    Vahbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc_tb___024root*>(voidSelf);
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vahbm_swc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vahbm_swc_tb___024root__trace_chg_0_sub_0(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ahbm_swc_tb__DOT__hrstn));
        bufp->chgIData(oldp+1,(vlSelf->ahbm_swc_tb__DOT__hrdata),32);
        bufp->chgBit(oldp+2,(vlSelf->ahbm_swc_tb__DOT__hready));
        bufp->chgBit(oldp+3,(vlSelf->ahbm_swc_tb__DOT__wreq));
        bufp->chgIData(oldp+4,(vlSelf->ahbm_swc_tb__DOT__wbuffdata),32);
        bufp->chgIData(oldp+5,(vlSelf->ahbm_swc_tb__DOT__wbuffaddr),32);
        bufp->chgBit(oldp+6,(vlSelf->ahbm_swc_tb__DOT__rreq));
        bufp->chgIData(oldp+7,(vlSelf->ahbm_swc_tb__DOT__rbuffaddr),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+8,(vlSelf->ahbm_swc_tb__DOT__haddr),32);
        bufp->chgCData(oldp+9,(vlSelf->ahbm_swc_tb__DOT__htrans),2);
        bufp->chgIData(oldp+10,(vlSelf->ahbm_swc_tb__DOT__hwdata),32);
        bufp->chgBit(oldp+11,(vlSelf->ahbm_swc_tb__DOT__hwrite));
        bufp->chgIData(oldp+12,(vlSelf->ahbm_swc_tb__DOT__rbuffdata),32);
        bufp->chgBit(oldp+13,(vlSelf->ahbm_swc_tb__DOT__done));
        bufp->chgBit(oldp+14,(vlSelf->ahbm_swc_tb__DOT__resp));
        bufp->chgCData(oldp+15,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__state),2);
        bufp->chgIData(oldp+16,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff),32);
        bufp->chgBit(oldp+17,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag));
        bufp->chgBit(oldp+18,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly));
        bufp->chgBit(oldp+19,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
        bufp->chgBit(oldp+20,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly));
    }
    bufp->chgBit(oldp+21,(vlSelf->ahbm_swc_tb__DOT__hclk));
    bufp->chgCData(oldp+22,(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
}

void Vahbm_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vahbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc_tb___024root*>(voidSelf);
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
