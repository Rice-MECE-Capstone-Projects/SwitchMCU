// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_upper_tb__Syms.h"


void Vexu_upper_tb___024root__trace_chg_0_sub_0(Vexu_upper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexu_upper_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_chg_0\n"); );
    // Init
    Vexu_upper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_upper_tb___024root*>(voidSelf);
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexu_upper_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexu_upper_tb___024root__trace_chg_0_sub_0(Vexu_upper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->exu_upper_tb__DOT__hrstn));
        bufp->chgCData(oldp+1,(vlSelf->exu_upper_tb__DOT__cycle_cnt),4);
        bufp->chgBit(oldp+2,(vlSelf->exu_upper_tb__DOT__dec_upper_en));
        bufp->chgBit(oldp+3,(vlSelf->exu_upper_tb__DOT__dec_lui));
        bufp->chgBit(oldp+4,(vlSelf->exu_upper_tb__DOT__dec_auipc));
        bufp->chgIData(oldp+5,(vlSelf->exu_upper_tb__DOT__dec_imm_type_u),20);
        bufp->chgCData(oldp+6,(vlSelf->exu_upper_tb__DOT__dec_rd),5);
        bufp->chgIData(oldp+7,(vlSelf->exu_upper_tb__DOT__pc),32);
        bufp->chgBit(oldp+8,(vlSelf->exu_upper_tb__DOT__exu_stall));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+9,((((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                  ? 0x1fU : 0U) & (
                                                   ((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                                     ? (IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr)
                                                     : 0U) 
                                                   & ((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                                       ? 0x1fU
                                                       : 0U)))),5);
        bufp->chgBit(oldp+10,(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen));
        bufp->chgIData(oldp+11,((((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                   ? 0xffffffffU : 0U) 
                                 & (((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                      ? vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata
                                      : 0U) & ((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                                ? 0xffffffffU
                                                : 0U)))),32);
        bufp->chgCData(oldp+12,(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr),5);
        bufp->chgIData(oldp+13,(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata),32);
    }
    bufp->chgBit(oldp+14,(vlSelf->exu_upper_tb__DOT__hclk));
}

void Vexu_upper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_cleanup\n"); );
    // Init
    Vexu_upper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_upper_tb___024root*>(voidSelf);
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
