// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_store_tb.h for the primary calling header

#include "Vexu_store_tb__pch.h"
#include "Vexu_store_tb___024root.h"

VL_ATTR_COLD void Vexu_store_tb___024root___eval_static(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vexu_store_tb___024root___eval_final(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vexu_store_tb___024root___eval_settle(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_store_tb___024root___dump_triggers__act(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge exu_store_tb.hclk or negedge exu_store_tb.hrstn)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge exu_store_tb.hclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_store_tb___024root___dump_triggers__nba(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge exu_store_tb.hclk or negedge exu_store_tb.hrstn)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge exu_store_tb.hclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexu_store_tb___024root___ctor_var_reset(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->exu_store_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->exu_store_tb__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->exu_store_tb__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->exu_store_tb__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->exu_store_tb__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->exu_store_tb__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->exu_store_tb__DOT__exu_stall = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__exu_store_addr = VL_RAND_RESET_I(32);
    vlSelf->exu_store_tb__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->exu_store_tb__DOT__exu_store_en = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__exu_store_size = VL_RAND_RESET_I(2);
    vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_addr_buff = VL_RAND_RESET_I(32);
    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff = VL_RAND_RESET_I(32);
    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_en_buff = VL_RAND_RESET_I(1);
    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__exu_store_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__exu_store_tb__DOT__hrstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
