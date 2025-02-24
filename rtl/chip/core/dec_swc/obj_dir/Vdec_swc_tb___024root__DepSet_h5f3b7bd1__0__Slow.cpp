// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_swc_tb.h for the primary calling header

#include "Vdec_swc_tb__pch.h"
#include "Vdec_swc_tb___024root.h"

VL_ATTR_COLD void Vdec_swc_tb___024root___eval_static(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdec_swc_tb___024root___eval_final(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__stl(Vdec_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdec_swc_tb___024root___eval_phase__stl(Vdec_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vdec_swc_tb___024root___eval_settle(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_settle\n"); );
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
            Vdec_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dec_swc_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdec_swc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__stl(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdec_swc_tb___024root___stl_sequent__TOP__0(Vdec_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vdec_swc_tb___024root___eval_stl(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdec_swc_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vdec_swc_tb___024root___stl_sequent__TOP__0(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3;
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3 = 0;
    CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4;
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4 = 0;
    CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5;
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5 = 0;
    CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6;
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6 = 0;
    // Body
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli 
        = ((IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll 
        = ((IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli 
        = ((IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl 
        = ((IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai 
        = ((IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra 
        = ((IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & (IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000) 
           & (IData)(dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3));
}

VL_ATTR_COLD void Vdec_swc_tb___024root___eval_triggers__stl(Vdec_swc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdec_swc_tb___024root___eval_phase__stl(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdec_swc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdec_swc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__act(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge dec_swc_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge dec_swc_tb.hclk or negedge dec_swc_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__nba(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge dec_swc_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge dec_swc_tb.hclk or negedge dec_swc_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdec_swc_tb___024root___ctor_var_reset(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->dec_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->dec_swc_tb__DOT__inst_in = VL_RAND_RESET_I(32);
    vlSelf->dec_swc_tb__DOT__ifu_dec_stall = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lui = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_auipc = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jal = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jalr = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lb = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lh = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lw = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lbu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lhu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_addi = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slti = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltiu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xori = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ori = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_andi = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slli = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srli = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srai = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_add = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sub = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sll = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slt = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xor = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srl = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sra = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_or = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_and = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence_i = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ecall = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ebreak = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrw = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrs = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrc = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrci = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_reg_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jump_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_u = VL_RAND_RESET_I(20);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_j = VL_RAND_RESET_I(21);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 = VL_RAND_RESET_I(4);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 = VL_RAND_RESET_I(7);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 = VL_RAND_RESET_I(12);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 = VL_RAND_RESET_I(5);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 = VL_RAND_RESET_I(3);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 = VL_RAND_RESET_I(5);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 = VL_RAND_RESET_I(7);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1 = VL_RAND_RESET_I(1);
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dec_swc_tb__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hrstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
