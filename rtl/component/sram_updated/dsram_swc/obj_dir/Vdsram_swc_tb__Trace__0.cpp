// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdsram_swc_tb__Syms.h"


void Vdsram_swc_tb___024root__trace_chg_0_sub_0(Vdsram_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdsram_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root__trace_chg_0\n"); );
    // Init
    Vdsram_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdsram_swc_tb___024root*>(voidSelf);
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdsram_swc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdsram_swc_tb___024root__trace_chg_0_sub_0(Vdsram_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->dsram_swc_tb__DOT__hrstn));
        bufp->chgIData(oldp+1,(vlSelf->dsram_swc_tb__DOT__haddr),32);
        bufp->chgBit(oldp+2,(vlSelf->dsram_swc_tb__DOT__hmastlock));
        bufp->chgCData(oldp+3,(vlSelf->dsram_swc_tb__DOT__hprot),7);
        bufp->chgCData(oldp+4,(vlSelf->dsram_swc_tb__DOT__hsize),3);
        bufp->chgCData(oldp+5,(vlSelf->dsram_swc_tb__DOT__htrans),2);
        bufp->chgIData(oldp+6,(vlSelf->dsram_swc_tb__DOT__hwdata),32);
        bufp->chgBit(oldp+7,(vlSelf->dsram_swc_tb__DOT__hwrite));
    }
    bufp->chgBit(oldp+8,(vlSelf->dsram_swc_tb__DOT__hclk));
    bufp->chgIData(oldp+9,(vlSelf->dsram_swc_tb__DOT__hrdata),32);
    bufp->chgCData(oldp+10,(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__state),4);
    bufp->chgCData(oldp+11,(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state),4);
}

void Vdsram_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vdsram_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdsram_swc_tb___024root*>(voidSelf);
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
