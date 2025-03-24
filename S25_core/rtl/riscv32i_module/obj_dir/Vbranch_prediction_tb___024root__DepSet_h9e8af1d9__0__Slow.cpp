// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_prediction_tb.h for the primary calling header

#include "Vbranch_prediction_tb__pch.h"
#include "Vbranch_prediction_tb___024root.h"

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_static(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_final(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_settle(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_prediction_tb___024root___dump_triggers__act(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge branch_prediction_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge branch_prediction_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_prediction_tb___024root___dump_triggers__nba(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge branch_prediction_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge branch_prediction_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbranch_prediction_tb___024root___ctor_var_reset(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->branch_prediction_tb__DOT__predict_trigger = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__prediction_type = VL_RAND_RESET_I(2);
    vlSelf->branch_prediction_tb__DOT__actual_branch_trigger = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__curr_branch_temp = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__temp_imm = VL_RAND_RESET_I(32);
    vlSelf->branch_prediction_tb__DOT__temp_pc_o = VL_RAND_RESET_I(32);
    vlSelf->branch_prediction_tb__DOT__temp_pc = VL_RAND_RESET_I(32);
    vlSelf->branch_prediction_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__prediction = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__old_branch = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp = VL_RAND_RESET_I(32);
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__predict_trigger_prev = VL_RAND_RESET_I(1);
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__actual_branch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10000000; ++__Vi0) {
        vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__branch_prediction_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
