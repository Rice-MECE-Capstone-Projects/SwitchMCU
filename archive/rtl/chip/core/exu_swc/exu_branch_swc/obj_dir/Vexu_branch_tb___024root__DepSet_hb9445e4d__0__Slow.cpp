// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_branch_tb.h for the primary calling header

#include "Vexu_branch_tb__pch.h"
#include "Vexu_branch_tb___024root.h"

VL_ATTR_COLD void Vexu_branch_tb___024root___eval_static(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vexu_branch_tb___024root___eval_final(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_branch_tb___024root___dump_triggers__stl(Vexu_branch_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vexu_branch_tb___024root___eval_phase__stl(Vexu_branch_tb___024root* vlSelf);

VL_ATTR_COLD void Vexu_branch_tb___024root___eval_settle(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vexu_branch_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("exu_branch_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vexu_branch_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_branch_tb___024root___dump_triggers__stl(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vexu_branch_tb___024root___act_sequent__TOP__0(Vexu_branch_tb___024root* vlSelf);

VL_ATTR_COLD void Vexu_branch_tb___024root___eval_stl(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vexu_branch_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vexu_branch_tb___024root___eval_triggers__stl(Vexu_branch_tb___024root* vlSelf);

VL_ATTR_COLD bool Vexu_branch_tb___024root___eval_phase__stl(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vexu_branch_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vexu_branch_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_branch_tb___024root___dump_triggers__act(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge exu_branch_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge exu_branch_tb.hclk or negedge exu_branch_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_branch_tb___024root___dump_triggers__nba(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge exu_branch_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge exu_branch_tb.hclk or negedge exu_branch_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexu_branch_tb___024root___ctor_var_reset(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->exu_branch_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->exu_branch_tb__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->exu_branch_tb__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->exu_branch_tb__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->exu_branch_tb__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->exu_branch_tb__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->exu_branch_tb__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->exu_branch_tb__DOT__reg_raddr_1__strong__out11 = VL_RAND_RESET_I(5);
    vlSelf->exu_branch_tb__DOT__reg_ren_1__strong__out13 = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__reg_raddr_2__strong__out15 = VL_RAND_RESET_I(5);
    vlSelf->exu_branch_tb__DOT__reg_ren_2__strong__out17 = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__exu_branch_tb__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__exu_branch_tb__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__exu_branch_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__exu_branch_tb__DOT__hrstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
