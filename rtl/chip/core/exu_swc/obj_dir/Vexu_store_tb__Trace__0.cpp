// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_store_tb__Syms.h"


void Vexu_store_tb___024root__trace_chg_0_sub_0(Vexu_store_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexu_store_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root__trace_chg_0\n"); );
    // Init
    Vexu_store_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_store_tb___024root*>(voidSelf);
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexu_store_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexu_store_tb___024root__trace_chg_0_sub_0(Vexu_store_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->exu_store_tb__DOT__hrstn));
        bufp->chgCData(oldp+1,(vlSelf->exu_store_tb__DOT__cycle_cnt),4);
        bufp->chgBit(oldp+2,(vlSelf->exu_store_tb__DOT__dec_store_en));
        bufp->chgBit(oldp+3,(vlSelf->exu_store_tb__DOT__dec_sb));
        bufp->chgBit(oldp+4,(vlSelf->exu_store_tb__DOT__dec_sh));
        bufp->chgBit(oldp+5,(vlSelf->exu_store_tb__DOT__dec_sw));
        bufp->chgSData(oldp+6,(vlSelf->exu_store_tb__DOT__dec_imm_type_s),12);
        bufp->chgCData(oldp+7,(vlSelf->exu_store_tb__DOT__dec_rs1),5);
        bufp->chgCData(oldp+8,(vlSelf->exu_store_tb__DOT__dec_rs2),5);
        bufp->chgIData(oldp+9,(vlSelf->exu_store_tb__DOT__reg_rdata_1),32);
        bufp->chgIData(oldp+10,(vlSelf->exu_store_tb__DOT__reg_rdata_2),32);
        bufp->chgBit(oldp+11,(vlSelf->exu_store_tb__DOT__exu_stall));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+12,(vlSelf->exu_store_tb__DOT__exu_store_addr),32);
        bufp->chgIData(oldp+13,(vlSelf->exu_store_tb__DOT__exu_store_data),32);
        bufp->chgBit(oldp+14,(vlSelf->exu_store_tb__DOT__exu_store_en));
        bufp->chgCData(oldp+15,(vlSelf->exu_store_tb__DOT__exu_store_size),2);
        bufp->chgCData(oldp+16,(((IData)(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_1)
                                  ? (IData)(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1)
                                  : 0U)),5);
        bufp->chgBit(oldp+17,(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+18,(((IData)(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_2)
                                  ? (IData)(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2)
                                  : 0U)),5);
        bufp->chgBit(oldp+19,(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_2));
        bufp->chgCData(oldp+20,(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1),5);
        bufp->chgCData(oldp+21,(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2),5);
        bufp->chgIData(oldp+22,(vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_addr_buff),32);
        bufp->chgIData(oldp+23,(vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff),32);
        bufp->chgBit(oldp+24,(vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_en_buff));
        bufp->chgCData(oldp+25,(vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff),2);
    }
    bufp->chgBit(oldp+26,(vlSelf->exu_store_tb__DOT__hclk));
}

void Vexu_store_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root__trace_cleanup\n"); );
    // Init
    Vexu_store_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_store_tb___024root*>(voidSelf);
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
