// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_swc_tb.h for the primary calling header

#include "Vdec_swc_tb__pch.h"
#include "Vdec_swc_tb___024root.h"

VlCoroutine Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vdec_swc_tb___024root* vlSelf);
VlCoroutine Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vdec_swc_tb___024root* vlSelf);

void Vdec_swc_tb___024root___eval_initial(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_initial\n"); );
    // Body
    Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hclk__0 
        = vlSelf->dec_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hrstn__0 
        = vlSelf->dec_swc_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "dec_swc_tb.v", 
                                           18);
        vlSelf->dec_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->dec_swc_tb__DOT__hclk)));
    }
}

void Vdec_swc_tb___024root___eval_act(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_act\n"); );
}

void Vdec_swc_tb___024root___nba_sequent__TOP__0(Vdec_swc_tb___024root* vlSelf);
void Vdec_swc_tb___024root___nba_sequent__TOP__1(Vdec_swc_tb___024root* vlSelf);
void Vdec_swc_tb___024root___nba_sequent__TOP__2(Vdec_swc_tb___024root* vlSelf);

void Vdec_swc_tb___024root___eval_nba(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdec_swc_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vdec_swc_tb___024root___nba_sequent__TOP__0(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__dec_swc_tb__DOT__cycle_cnt = vlSelf->dec_swc_tb__DOT__cycle_cnt;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12;
    vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 
        = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0;
    if (vlSelf->dec_swc_tb__DOT__hrstn) {
        vlSelf->__Vdly__dec_swc_tb__DOT__cycle_cnt 
            = ((4U == (IData)(vlSelf->dec_swc_tb__DOT__cycle_cnt))
                ? 1U : (0xfU & ((IData)(1U) + (IData)(vlSelf->dec_swc_tb__DOT__cycle_cnt))));
        if ((1U == (IData)(vlSelf->dec_swc_tb__DOT__cycle_cnt))) {
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 
                = (0x1fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                            >> 7U));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 
                = (0x1fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                            >> 0xfU));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 
                = (0xfU & (vlSelf->dec_swc_tb__DOT__inst_in 
                           >> 0x1cU));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 
                = (0xfffU & (vlSelf->dec_swc_tb__DOT__inst_in 
                             >> 0x14U));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 
                = (0x7fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                            >> 0x19U));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 
                = (7U & (vlSelf->dec_swc_tb__DOT__inst_in 
                         >> 0xcU));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 
                = (0x7fU & vlSelf->dec_swc_tb__DOT__inst_in);
        } else {
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 
                = (0x1fU & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 
                = (0x1fU & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 
                = (0xfU & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 
                = (0xfffU & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 
                = (0x7fU & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 
                = (7U & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 
                = (0x7fU & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
        }
    } else {
        vlSelf->__Vdly__dec_swc_tb__DOT__cycle_cnt = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 = 0U;
        vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->dec_swc_tb__DOT__hrstn)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__ifu_dec_stall)))) {
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_store_en = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_j = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_u = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_b = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_s = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_i = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rd = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs1 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs2 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_load_en = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_branch_en = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_en = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_reg_en = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jump_en = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_upper_en = 0U;
    } else if ((4U == (IData)(vlSelf->dec_swc_tb__DOT__cycle_cnt))) {
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_store_en 
            = (((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb) 
                | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_j 
            = ((0x100000U & (vlSelf->dec_swc_tb__DOT__inst_in 
                             >> 0xbU)) | ((0xff000U 
                                           & vlSelf->dec_swc_tb__DOT__inst_in) 
                                          | ((0x800U 
                                              & (vlSelf->dec_swc_tb__DOT__inst_in 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->dec_swc_tb__DOT__inst_in 
                                                   >> 0x14U)))));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_u 
            = (vlSelf->dec_swc_tb__DOT__inst_in >> 0xcU);
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_b 
            = ((0x1000U & (vlSelf->dec_swc_tb__DOT__inst_in 
                           >> 0x13U)) | ((0x800U & 
                                          (vlSelf->dec_swc_tb__DOT__inst_in 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->dec_swc_tb__DOT__inst_in 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->dec_swc_tb__DOT__inst_in 
                                                  >> 7U)))));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_s 
            = ((0xfe0U & (vlSelf->dec_swc_tb__DOT__inst_in 
                          >> 0x14U)) | (0x1fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                                                 >> 7U)));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_i 
            = (vlSelf->dec_swc_tb__DOT__inst_in >> 0x14U);
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rd 
            = (0x1fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                        >> 7U));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs1 
            = (0x1fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                        >> 0xfU));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs2 
            = (0x1fU & (vlSelf->dec_swc_tb__DOT__inst_in 
                        >> 0x14U));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_load_en 
            = (((((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb) 
                  | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh)) 
                 | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw)) 
                | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_branch_en 
            = ((((((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq) 
                   | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne)) 
                  | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt)) 
                 | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge)) 
                | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_en 
            = (((((((((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi) 
                      | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti)) 
                     | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu)) 
                    | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori)) 
                   | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori)) 
                  | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi)) 
                 | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli)) 
                | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_reg_en 
            = ((((((((((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add) 
                       | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub)) 
                      | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll)) 
                     | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt)) 
                    | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu)) 
                   | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor)) 
                  | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl)) 
                 | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra)) 
                | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jump_en 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_upper_en 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111) 
               | (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111));
    }
}

VL_INLINE_OPT void Vdec_swc_tb___024root___nba_sequent__TOP__1(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___nba_sequent__TOP__1\n"); );
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
    if ((1U & ((~ (IData)(vlSelf->dec_swc_tb__DOT__hrstn)) 
               | (IData)(vlSelf->dec_swc_tb__DOT__ifu_dec_stall)))) {
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sra = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srl = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sll = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sub = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lh = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lb = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bgeu = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bltu = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bge = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_blt = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bne = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_beq = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jalr = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lw = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lbu = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lhu = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sb = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sh = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sw = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_addi = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slti = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltiu = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xori = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ori = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_andi = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slli = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srli = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srai = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_add = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_and = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_or = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xor = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltu = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slt = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_out = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jal = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_auipc = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lui = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence_i = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ecall = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrc = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrci = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrsi = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrs = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrw = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrwi = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ebreak = 0U;
    } else if ((4U == (IData)(vlSelf->dec_swc_tb__DOT__cycle_cnt))) {
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sra 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srl 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sll 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sub 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lh 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lb 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bgeu 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bltu 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bge 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_blt 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bne 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_beq 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jalr 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lw 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lbu 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lhu 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sb 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sh 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sw 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_addi 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slti 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltiu 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xori 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ori 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_andi 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slli 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srli 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srai 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_add 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_and 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_or 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xor 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltu 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slt 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_out 
            = vlSelf->dec_swc_tb__DOT__inst_in;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jal 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_auipc 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lui 
            = vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence_i 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
               & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                  & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1)));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ecall 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
               & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                  & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0)));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrc 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
               & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrci 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
               & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrsi 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
               & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrs 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
               & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrw 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
               & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrwi 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
               & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
               & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                  & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                     & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1))));
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ebreak 
            = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
               & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                  & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                     & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0))));
    }
    if (vlSelf->dec_swc_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->dec_swc_tb__DOT__cycle_cnt))) {
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 
                = (0U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 
                = (0U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 
                = (0x67U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 
                = (0xfU == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 
                = (0x20U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 
                = (0x23U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 
                = (4U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 
                = (3U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 
                = (0x63U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 
                = (0x13U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 
                = (0U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 
                = (0x33U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 
                = (0x6fU == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 
                = (0x17U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 
                = (0x37U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 
                = (3U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 
                = (7U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 
                = (6U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 
                = (2U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 
                = (1U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 
                = (0x73U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 
                = (5U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 
                = (0U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 
                = (1U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 
                = (0U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15));
            vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 
                = (0U == (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 = 0U;
        vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 = 0U;
    }
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
              & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi 
        = ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
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

VL_INLINE_OPT void Vdec_swc_tb___024root___nba_sequent__TOP__2(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7;
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25;
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0;
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28;
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20;
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15;
    vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12 
        = vlSelf->__Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12;
    vlSelf->dec_swc_tb__DOT__cycle_cnt = vlSelf->__Vdly__dec_swc_tb__DOT__cycle_cnt;
}

void Vdec_swc_tb___024root___timing_resume(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vdec_swc_tb___024root___eval_triggers__act(Vdec_swc_tb___024root* vlSelf);

bool Vdec_swc_tb___024root___eval_phase__act(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdec_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdec_swc_tb___024root___timing_resume(vlSelf);
        Vdec_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdec_swc_tb___024root___eval_phase__nba(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdec_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__nba(Vdec_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__act(Vdec_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdec_swc_tb___024root___eval(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdec_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dec_swc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdec_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dec_swc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdec_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdec_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdec_swc_tb___024root___eval_debug_assertions(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
