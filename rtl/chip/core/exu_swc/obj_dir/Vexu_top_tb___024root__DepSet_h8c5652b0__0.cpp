// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_top_tb.h for the primary calling header

#include "Vexu_top_tb__pch.h"
#include "Vexu_top_tb___024root.h"

VL_ATTR_COLD void Vexu_top_tb___024root___eval_initial__TOP(Vexu_top_tb___024root* vlSelf);
VlCoroutine Vexu_top_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_top_tb___024root* vlSelf);
VlCoroutine Vexu_top_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_top_tb___024root* vlSelf);

void Vexu_top_tb___024root___eval_initial(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_initial\n"); );
    // Body
    Vexu_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vexu_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_top_tb__DOT__hclk__0 
        = vlSelf->exu_top_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_top_tb__DOT__hrstn__0 
        = vlSelf->exu_top_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vexu_top_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_top_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       226);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "exu_top_tb.v", 
                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_upper_en = 1U;
    vlSelf->exu_top_tb__DOT__dec_lui = 1U;
    vlSelf->exu_top_tb__DOT__dec_auipc = 0U;
    vlSelf->exu_top_tb__DOT__dec_imm_type_u = 0x101U;
    vlSelf->exu_top_tb__DOT__dec_rd = 3U;
    vlSelf->exu_top_tb__DOT__dec_rs1 = 2U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       238);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_lui = 0U;
    vlSelf->exu_top_tb__DOT__dec_auipc = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       242);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_auipc = 0U;
    vlSelf->exu_top_tb__DOT__dec_upper_en = 0U;
    vlSelf->exu_top_tb__DOT__dec_imm_en = 1U;
    vlSelf->exu_top_tb__DOT__dec_xori = 1U;
    vlSelf->exu_top_tb__DOT__reg_rdata_1 = 0x1001010U;
    vlSelf->exu_top_tb__DOT__dec_imm_type_i = 0x121U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_xori = 0U;
    vlSelf->exu_top_tb__DOT__dec_slli = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       256);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_slli = 0U;
    vlSelf->exu_top_tb__DOT__dec_imm_en = 0U;
    vlSelf->exu_top_tb__DOT__dec_reg_en = 1U;
    vlSelf->exu_top_tb__DOT__dec_sub = 1U;
    vlSelf->exu_top_tb__DOT__dec_rs2 = 5U;
    vlSelf->exu_top_tb__DOT__reg_rdata_2 = 0x36U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       267);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_sub = 0U;
    vlSelf->exu_top_tb__DOT__dec_slt = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       271);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__reg_rdata_2 = 0x10111010U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       273);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_slt = 0U;
    vlSelf->exu_top_tb__DOT__dec_jump_en = 1U;
    vlSelf->exu_top_tb__DOT__dec_jal = 1U;
    vlSelf->exu_top_tb__DOT__dec_imm_type_j = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       282);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_top_tb__DOT__dec_jal = 0U;
    vlSelf->exu_top_tb__DOT__dec_jalr = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "exu_top_tb.v", 
                                       287);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("exu_top_tb.v", 288, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vexu_top_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_top_tb.v", 
                                           194);
        vlSelf->exu_top_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->exu_top_tb__DOT__hclk)));
    }
}

void Vexu_top_tb___024root___act_sequent__TOP__0(Vexu_top_tb___024root* vlSelf);

void Vexu_top_tb___024root___eval_act(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vexu_top_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vexu_top_tb__ConstPool__TABLE_h73a4683d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vexu_top_tb__ConstPool__TABLE_hc8dcc04c_0;

VL_INLINE_OPT void Vexu_top_tb___024root___act_sequent__TOP__0(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_upper_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_imm_en));
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
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_jump_en));
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

void Vexu_top_tb___024root___nba_sequent__TOP__0(Vexu_top_tb___024root* vlSelf);
void Vexu_top_tb___024root___nba_sequent__TOP__1(Vexu_top_tb___024root* vlSelf);
void Vexu_top_tb___024root___nba_sequent__TOP__2(Vexu_top_tb___024root* vlSelf);
void Vexu_top_tb___024root___nba_sequent__TOP__3(Vexu_top_tb___024root* vlSelf);
void Vexu_top_tb___024root___nba_comb__TOP__0(Vexu_top_tb___024root* vlSelf);
void Vexu_top_tb___024root___nba_comb__TOP__1(Vexu_top_tb___024root* vlSelf);
void Vexu_top_tb___024root___nba_comb__TOP__2(Vexu_top_tb___024root* vlSelf);

void Vexu_top_tb___024root___eval_nba(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_top_tb___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_sequent__TOP__0(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    __Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = 0;
    // Body
    __Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
    vlSelf->__Vdly__exu_top_tb__DOT__exu_load_en = vlSelf->exu_top_tb__DOT__exu_load_en;
    if (vlSelf->exu_top_tb__DOT__hrstn) {
        if ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
            vlSelf->exu_top_tb__DOT__exu_load_size 
                = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff;
            vlSelf->exu_top_tb__DOT__exu_load_offset 
                = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
            vlSelf->exu_top_tb__DOT__exu_load_base_addr 
                = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
            vlSelf->exu_top_tb__DOT__exu_load_rd = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
            vlSelf->exu_top_tb__DOT__inst_out = vlSelf->exu_top_tb__DOT__inst_in;
            vlSelf->exu_top_tb__DOT__exu_store_en = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff;
            vlSelf->exu_top_tb__DOT__exu_store_addr 
                = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff;
            vlSelf->exu_top_tb__DOT__exu_store_size 
                = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
            vlSelf->exu_top_tb__DOT__exu_store_data 
                = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff;
        } else {
            vlSelf->exu_top_tb__DOT__exu_load_size 
                = vlSelf->exu_top_tb__DOT__exu_load_size;
            vlSelf->exu_top_tb__DOT__exu_load_offset 
                = vlSelf->exu_top_tb__DOT__exu_load_offset;
            vlSelf->exu_top_tb__DOT__exu_load_base_addr 
                = vlSelf->exu_top_tb__DOT__exu_load_base_addr;
            vlSelf->exu_top_tb__DOT__exu_load_rd = vlSelf->exu_top_tb__DOT__exu_load_rd;
        }
        if (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) {
            if ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = (((- (IData)((1U & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i));
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->exu_top_tb__DOT__reg_rdata_1;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->exu_top_tb__DOT__dec_rd;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (((IData)(vlSelf->exu_top_tb__DOT__dec_lb) 
                              | (IData)(vlSelf->exu_top_tb__DOT__dec_lbu))
                              ? 1U : (((IData)(vlSelf->exu_top_tb__DOT__dec_lh) 
                                       | (IData)(vlSelf->exu_top_tb__DOT__dec_lhu))
                                       ? 2U : ((IData)(vlSelf->exu_top_tb__DOT__dec_lw)
                                                ? 3U
                                                : 0U))));
            } else if ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff));
            } else {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & 0U);
            }
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 
                = ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                    ? (IData)(vlSelf->exu_top_tb__DOT__dec_rs1)
                    : 0U);
        } else {
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15) {
            if ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = (((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                         != ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                            - (IData)(8U)))) 
                        & (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                           != ((IData)(8U) + (vlSelf->exu_top_tb__DOT__pc 
                                              - (IData)(8U)))))
                        ? vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next
                        : 0U);
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = ((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                        == ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                           - (IData)(8U))))
                        ? 0U : ((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                                 == ((IData)(8U) + 
                                     (vlSelf->exu_top_tb__DOT__pc 
                                      - (IData)(8U))))
                                 ? 1U : 2U));
            } else if ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            }
            if ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 
                    = ((IData)(vlSelf->exu_top_tb__DOT__dec_jalr)
                        ? (IData)(vlSelf->exu_top_tb__DOT__dec_rs1)
                        : 0U);
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
            } else {
                if ((2U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_top_tb__DOT__dec_rd;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata 
                        = ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                          - (IData)(8U)));
                } else {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23) {
            if ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                if (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch) {
                    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                        = (((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                             != ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                                - (IData)(8U)))) 
                            & (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                               != ((IData)(8U) + (vlSelf->exu_top_tb__DOT__pc 
                                                  - (IData)(8U)))))
                            ? vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next
                            : 0U);
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                        = ((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            == ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                               - (IData)(8U))))
                            ? 0U : ((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                                     == ((IData)(8U) 
                                         + (vlSelf->exu_top_tb__DOT__pc 
                                            - (IData)(8U))))
                                     ? 1U : 2U));
                } else {
                    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
                }
            } else if ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                    = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            }
            if ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_top_tb__DOT__dec_rs2;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_top_tb__DOT__dec_rs1;
            } else {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) {
            if ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr 
                    = vlSelf->exu_top_tb__DOT__dec_rd;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata 
                    = ((IData)(vlSelf->exu_top_tb__DOT__dec_lui)
                        ? (vlSelf->exu_top_tb__DOT__dec_imm_type_u 
                           << 0xcU) : ((IData)(vlSelf->exu_top_tb__DOT__dec_auipc)
                                        ? ((vlSelf->exu_top_tb__DOT__dec_imm_type_u 
                                            << 0xcU) 
                                           + (vlSelf->exu_top_tb__DOT__pc 
                                              - (IData)(8U)))
                                        : 0U));
            } else {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
            }
        } else {
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) {
            if ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_top_tb__DOT__dec_rs1;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
            } else {
                if ((2U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
                } else if ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_top_tb__DOT__dec_rd;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata 
                        = ((IData)(vlSelf->exu_top_tb__DOT__dec_addi)
                            ? ((((- (IData)((1U & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                                   >> 0xbU)))) 
                                 << 0xcU) | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)) 
                               + vlSelf->exu_top_tb__DOT__reg_rdata_1)
                            : ((IData)(vlSelf->exu_top_tb__DOT__dec_slti)
                                ? VL_LTS_III(32, vlSelf->exu_top_tb__DOT__reg_rdata_1, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                                              >> 0xbU)))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                : ((IData)(vlSelf->exu_top_tb__DOT__dec_sltiu)
                                    ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                       < (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                                          >> 0xbU)))) 
                                           << 0xcU) 
                                          | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                    : ((IData)(vlSelf->exu_top_tb__DOT__dec_xori)
                                        ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                           ^ (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                                              >> 0xbU)))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                        : ((IData)(vlSelf->exu_top_tb__DOT__dec_ori)
                                            ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                                                  >> 0xbU)))) 
                                                   << 0xcU) 
                                                  | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                            : ((IData)(vlSelf->exu_top_tb__DOT__dec_andi)
                                                ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                   & (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i) 
                                                                      >> 0xbU)))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                                : ((IData)(vlSelf->exu_top_tb__DOT__dec_slli)
                                                    ? 
                                                   (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                                    : 
                                                   ((IData)(vlSelf->exu_top_tb__DOT__dec_srli)
                                                     ? 
                                                    (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                                     : 
                                                    ((IData)(vlSelf->exu_top_tb__DOT__dec_srai)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->exu_top_tb__DOT__reg_rdata_1, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_i)))
                                                      : 0U)))))))));
                } else {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        }
        if (((IData)(vlSelf->exu_top_tb__DOT__dec_reg_en) 
             & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)))) {
            if ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_top_tb__DOT__dec_rs2;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_top_tb__DOT__dec_rs1;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
            } else {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                if ((2U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
                } else if ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_top_tb__DOT__dec_rd;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata 
                        = ((IData)(vlSelf->exu_top_tb__DOT__dec_add)
                            ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                               + vlSelf->exu_top_tb__DOT__reg_rdata_2)
                            : ((IData)(vlSelf->exu_top_tb__DOT__dec_sub)
                                ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                   - vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                : ((IData)(vlSelf->exu_top_tb__DOT__dec_sll)
                                    ? VL_SHIFTL_III(32,32,32, vlSelf->exu_top_tb__DOT__reg_rdata_1, vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                    : ((IData)(vlSelf->exu_top_tb__DOT__dec_slt)
                                        ? VL_LTS_III(32, vlSelf->exu_top_tb__DOT__reg_rdata_1, vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                        : ((IData)(vlSelf->exu_top_tb__DOT__dec_sltu)
                                            ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                               < vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                            : ((IData)(vlSelf->exu_top_tb__DOT__dec_xor)
                                                ? (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                   ^ vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                                : ((IData)(vlSelf->exu_top_tb__DOT__dec_srl)
                                                    ? 
                                                   (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->exu_top_tb__DOT__reg_rdata_2))
                                                    : 
                                                   ((IData)(vlSelf->exu_top_tb__DOT__dec_sra)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->exu_top_tb__DOT__reg_rdata_1, 
                                                                   (0x1fU 
                                                                    & vlSelf->exu_top_tb__DOT__reg_rdata_2))
                                                     : 
                                                    ((IData)(vlSelf->exu_top_tb__DOT__dec_or)
                                                      ? 
                                                     (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                      | vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                                      : 
                                                     ((IData)(vlSelf->exu_top_tb__DOT__dec_and)
                                                       ? 
                                                      (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                                                       & vlSelf->exu_top_tb__DOT__reg_rdata_2)
                                                       : 0U))))))))));
                } else {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
        }
        if (((IData)(vlSelf->exu_top_tb__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)))) {
            if ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_top_tb__DOT__dec_rs2;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_top_tb__DOT__dec_rs1;
            } else {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
            if ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = 1U;
                vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff 
                    = (vlSelf->exu_top_tb__DOT__reg_rdata_1 
                       + (((- (IData)((1U & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_s) 
                                             >> 0xbU)))) 
                           << 0xcU) | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_s)));
                if (vlSelf->exu_top_tb__DOT__dec_sb) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 0U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = (0xffU & vlSelf->exu_top_tb__DOT__reg_rdata_2);
                } else if (vlSelf->exu_top_tb__DOT__dec_sh) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 1U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = (0xffffU & vlSelf->exu_top_tb__DOT__reg_rdata_2);
                } else if (vlSelf->exu_top_tb__DOT__dec_sw) {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 2U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = vlSelf->exu_top_tb__DOT__reg_rdata_2;
                } else {
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
                    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
                }
            }
        } else {
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
    } else {
        vlSelf->exu_top_tb__DOT__exu_load_size = 0U;
        vlSelf->exu_top_tb__DOT__exu_load_offset = 0U;
        vlSelf->exu_top_tb__DOT__exu_load_base_addr = 0U;
        vlSelf->exu_top_tb__DOT__exu_load_rd = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
        vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
        vlSelf->exu_top_tb__DOT__inst_out = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_top_tb__DOT__exu_store_en = 0U;
        vlSelf->exu_top_tb__DOT__exu_store_addr = 0U;
        vlSelf->exu_top_tb__DOT__exu_store_size = 3U;
        vlSelf->exu_top_tb__DOT__exu_store_data = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
    }
    vlSelf->exu_top_tb__DOT__exu_load_sext = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
                                              && ((4U 
                                                   == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                                                   ? (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff)
                                                   : (IData)(vlSelf->exu_top_tb__DOT__exu_load_sext)));
    __Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               && ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                   || ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff)))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               && ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                    ? (((IData)(vlSelf->exu_top_tb__DOT__dec_lb) 
                        | (IData)(vlSelf->exu_top_tb__DOT__dec_lh)) 
                       | (IData)(vlSelf->exu_top_tb__DOT__dec_lw))
                    : ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff)))));
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15) 
               && ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                    ? ((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                        != ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                           - (IData)(8U)))) 
                       & (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                          != ((IData)(8U) + (vlSelf->exu_top_tb__DOT__pc 
                                             - (IData)(8U)))))
                    : ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)))));
    vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23) 
               && ((3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                    ? ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch) 
                       && ((vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            != ((IData)(4U) + (vlSelf->exu_top_tb__DOT__pc 
                                               - (IData)(8U)))) 
                           & (vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                              != ((IData)(8U) + (vlSelf->exu_top_tb__DOT__pc 
                                                 - (IData)(8U))))))
                    : ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write)))));
    vlSelf->__Vdly__exu_top_tb__DOT__exu_load_en = 
        ((IData)(vlSelf->exu_top_tb__DOT__hrstn) && 
         ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
           ? (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff)
           : (IData)(vlSelf->exu_top_tb__DOT__exu_load_en)));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
               && ((1U != (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                   && ((2U != (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                       && (3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15) 
               && ((1U != (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                   && (2U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15) 
               && ((1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                   && (IData)(vlSelf->exu_top_tb__DOT__dec_jalr))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_top_tb__DOT__dec_reg_en) 
                & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall))) 
               && ((1U != (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                   && ((2U != (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt)) 
                       && (3U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_top_tb__DOT__dec_reg_en) 
                & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_top_tb__DOT__dec_reg_en) 
                & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_top_tb__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_top_tb__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = __Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_sequent__TOP__1(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__exu_top_tb__DOT__cycle_cnt;
    __Vdly__exu_top_tb__DOT__cycle_cnt = 0;
    // Body
    __Vdly__exu_top_tb__DOT__cycle_cnt = vlSelf->exu_top_tb__DOT__cycle_cnt;
    if (vlSelf->exu_top_tb__DOT__hrstn) {
        __Vdly__exu_top_tb__DOT__cycle_cnt = ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                                               ? 1U
                                               : (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))));
        vlSelf->exu_top_tb__DOT__pc = ((IData)(vlSelf->exu_top_tb__DOT__exu_load_en)
                                        ? vlSelf->exu_top_tb__DOT__pc
                                        : ((4U == (IData)(vlSelf->exu_top_tb__DOT__cycle_cnt))
                                            ? ((((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15) 
                                                 | (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)) 
                                                & (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15) 
                                                    & (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
                                                   | ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23) 
                                                      & (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))))
                                                ? (
                                                   (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                                                      ? 0xffffffffU
                                                      : 0U) 
                                                    | ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                                                        ? 0xffffffffU
                                                        : 0U)) 
                                                   & ((((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                                                         ? 0xffffffffU
                                                         : 0U) 
                                                       & (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                                                            ? vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                                            : 0U) 
                                                          & ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15)
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                                      | (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                                                           ? 0xffffffffU
                                                           : 0U) 
                                                         & (((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                                                              ? vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                              : 0U) 
                                                            & ((IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23)
                                                                ? 0xffffffffU
                                                                : 0U)))))
                                                : ((IData)(4U) 
                                                   + vlSelf->exu_top_tb__DOT__pc))
                                            : vlSelf->exu_top_tb__DOT__pc));
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state 
            = vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate;
    } else {
        __Vdly__exu_top_tb__DOT__cycle_cnt = 0U;
        vlSelf->exu_top_tb__DOT__pc = 0U;
        vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state = 0U;
    }
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__flush_stall 
        = ((IData)(vlSelf->exu_top_tb__DOT__hrstn) 
           && (0U != (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate)));
    vlSelf->exu_top_tb__DOT__cycle_cnt = __Vdly__exu_top_tb__DOT__cycle_cnt;
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
        = ((vlSelf->exu_top_tb__DOT__pc - (IData)(8U)) 
           + (((- (IData)((1U & ((IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_b) 
                                 >> 0xbU)))) << 0xdU) 
              | (IData)(vlSelf->exu_top_tb__DOT__dec_imm_type_b)));
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_sequent__TOP__2(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
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
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_sequent__TOP__3(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->__Vdly__exu_top_tb__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
    vlSelf->exu_top_tb__DOT__exu_load_en = vlSelf->__Vdly__exu_top_tb__DOT__exu_load_en;
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_comb__TOP__0(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_comb__TOP__0\n"); );
    // Body
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
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_comb__TOP__1(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall 
        = ((IData)(vlSelf->exu_top_tb__DOT__exu_load_en) 
           | (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__flush_stall));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_load_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en23 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_branch_en));
}

VL_INLINE_OPT void Vexu_top_tb___024root___nba_comb__TOP__2(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_upper_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_imm_en));
    vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->exu_top_tb__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_top_tb__DOT__dec_jump_en));
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

void Vexu_top_tb___024root___timing_resume(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_top_tb___024root___eval_triggers__act(Vexu_top_tb___024root* vlSelf);

bool Vexu_top_tb___024root___eval_phase__act(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_top_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_top_tb___024root___timing_resume(vlSelf);
        Vexu_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_top_tb___024root___eval_phase__nba(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_top_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_top_tb___024root___dump_triggers__nba(Vexu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_top_tb___024root___dump_triggers__act(Vexu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_top_tb___024root___eval(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_top_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_top_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_top_tb___024root___eval_debug_assertions(Vexu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_top_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
