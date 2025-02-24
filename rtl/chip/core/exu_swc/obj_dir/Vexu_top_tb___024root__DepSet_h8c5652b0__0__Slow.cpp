// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_top_tb.h for the primary calling header

#include "Vexu_top_tb__pch.h"
#include "Vexu_top_tb___024root.h"

VL_ATTR_COLD void Vexu_top_tb___024root___eval_static(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vexu_top_tb___024root___eval_final(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_top_tb___024root___dump_triggers__stl(Vexu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vexu_top_tb___024root___eval_phase__stl(Vexu_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vexu_top_tb___024root___eval_settle(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_settle\n"); );
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
            Vexu_top_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("exu_top_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vexu_top_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_top_tb___024root___dump_triggers__stl(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexu_top_tb___024root___stl_sequent__TOP__0(Vexu_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vexu_top_tb___024root___eval_stl(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vexu_top_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vexu_top_tb__ConstPool__TABLE_h73a4683d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vexu_top_tb__ConstPool__TABLE_hc8dcc04c_0;

VL_ATTR_COLD void Vexu_top_tb___024root___stl_sequent__TOP__0(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
        = ((vlSelf->exu_top_tb__DOT__pc - (IData)(8U)) 
           + (((- (IData)((1U & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_b) 
                                 >> 0xbU)))) << 0xdU) 
              | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_b)));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
        = ((IData)(vlSelf->exu_top_tb__DOT__dec_jal)
            ? ((vlSelf->exu_top_tb__DOT__pc - (IData)(8U)) 
               + (((- (IData)((1U & (vlSelf->exu_top_tb__DOT__dec_imm_type_j 
                                     >> 0x13U)))) << 0x15U) 
                  | vlSelf->exu_top_tb__DOT__dec_imm_type_j))
            : (0xfffffffeU & (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                              + (((- (IData)((1U & 
                                              ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch 
        = (1U & ((IData)(vlSelf->exu_top_tb__DOT__dec_beq)
                  ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                     == vlSelf->exu_top_tb__DOT__reg_rdata_2)
                  : ((IData)(vlSelf->exu_top_tb__DOT__dec_bne)
                      ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                         != vlSelf->exu_top_tb__DOT__reg_rdata_2)
                      : ((IData)(vlSelf->exu_top_tb__DOT__dec_blt)
                          ? VL_LTS_III(32, vlSelf->exu_top_tb__DOT__reg_rdata_1, vlSelf->exu_top_tb__DOT__reg_rdata_2)
                          : ((IData)(vlSelf->exu_top_tb__DOT__dec_bge)
                              ? VL_GTES_III(32, vlSelf->exu_top_tb__DOT__reg_rdata_1, vlSelf->exu_top_tb__DOT__reg_rdata_2)
                              : ((IData)(vlSelf->exu_top_tb__DOT__dec_bltu)
                                  ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                     < vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                  : ((IData)(vlSelf->exu_top_tb__DOT__dec_bgeu)
                                      ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                         >= vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                      : 0U)))))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall 
        = ((IData)(vlSelf->exu_top_tb__DOT__exu_load_en) 
           | (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__flush_stall));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_upper_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_imm_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_load_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_jump_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_branch_en));
    __Vtableidx1 = ((((((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                         ? 3U : 0U) & (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                                         ? (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                         : 0U) & ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                                                   ? 3U
                                                   : 0U))) 
                      | (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                           ? 3U : 0U) & (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                                           ? (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                           : 0U) & 
                                         ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                                           ? 3U : 0U)))) 
                     << 6U) | (((IData)(vlSelf->exu_top_tb__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state)));
    if (Vexu_top_tb__ConstPool__TABLE_h73a4683d_0[__Vtableidx1]) {
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate 
            = Vexu_top_tb__ConstPool__TABLE_hc8dcc04c_0
            [__Vtableidx1];
    }
}

VL_ATTR_COLD void Vexu_top_tb___024root___eval_triggers__stl(Vexu_top_tb___024root* vlSelf);

VL_ATTR_COLD bool Vexu_top_tb___024root___eval_phase__stl(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vexu_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vexu_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_top_tb___024root___dump_triggers__act(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge exu_top_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge exu_top_tb.hclk or negedge exu_top_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_top_tb___024root___dump_triggers__nba(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge exu_top_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge exu_top_tb.hclk or negedge exu_top_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexu_top_tb___024root___ctor_var_reset(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->exu_top_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__inst_in = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__dec_lui = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_auipc = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_jal = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_jalr = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_lb = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_lh = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_lw = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_lbu = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_lhu = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_addi = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_slti = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sltiu = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_xori = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_ori = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_andi = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_slli = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_srli = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_srai = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_add = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sub = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sll = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_slt = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sltu = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_xor = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_srl = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_sra = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_or = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_and = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_fence = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_fence_i = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_ecall = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_ebreak = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_csrrw = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_csrrs = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_csrrc = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_csrrci = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_imm_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_reg_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_jump_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->exu_top_tb__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->exu_top_tb__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->exu_top_tb__DOT__dec_imm_type_u = VL_RAND_RESET_I(20);
    vlSelf->exu_top_tb__DOT__dec_imm_type_j = VL_RAND_RESET_I(21);
    vlSelf->exu_top_tb__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_load_rd = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_load_base_addr = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_load_offset = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_load_sext = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_load_size = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_store_addr = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_store_size = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_store_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__flush_stall = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15 = 0;
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23 = 0;
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = VL_RAND_RESET_I(32);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = VL_RAND_RESET_I(1);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exu_top_tb__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__exu_top_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__exu_top_tb__DOT__hrstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
