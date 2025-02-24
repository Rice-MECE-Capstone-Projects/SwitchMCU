// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_reg_wbu_top_tb.h for the primary calling header

#include "Vexu_reg_wbu_top_tb__pch.h"
#include "Vexu_reg_wbu_top_tb___024root.h"

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root___eval_initial__TOP(Vexu_reg_wbu_top_tb___024root* vlSelf);
VlCoroutine Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_reg_wbu_top_tb___024root* vlSelf);
VlCoroutine Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_reg_wbu_top_tb___024root* vlSelf);

void Vexu_reg_wbu_top_tb___024root___eval_initial(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_initial\n"); );
    // Body
    Vexu_reg_wbu_top_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_reg_wbu_top_tb__DOT__hclk__0 
        = vlSelf->exu_reg_wbu_top_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_reg_wbu_top_tb__DOT__hrstn__0 
        = vlSelf->exu_reg_wbu_top_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_reg_wbu_top_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_reg_wbu_top_tb.v", 
                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "exu_reg_wbu_top_tb.v", 
                                       236);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_rd = 2U;
    vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_en = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_data = 5U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd = 3U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_add = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1 = 4U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs2 = 5U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_reg_wbu_top_tb.v", 
                                       249);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en = 0U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_jump_en = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__dec_jal = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_reg_wbu_top_tb.v", 
                                       254);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "exu_reg_wbu_top_tb.v", 
                                       259);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("exu_reg_wbu_top_tb.v", 260, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_reg_wbu_top_tb.v", 
                                           202);
        vlSelf->exu_reg_wbu_top_tb__DOT__hclk = (1U 
                                                 & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hclk)));
    }
}

void Vexu_reg_wbu_top_tb___024root___act_sequent__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf);

void Vexu_reg_wbu_top_tb___024root___eval_act(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vexu_reg_wbu_top_tb__ConstPool__TABLE_h73a4683d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vexu_reg_wbu_top_tb__ConstPool__TABLE_hc8dcc04c_0;

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___act_sequent__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jal)
            ? ((vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                - (IData)(8U)) + (((- (IData)((1U & 
                                               (vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j 
                                                >> 0x13U)))) 
                                   << 0x15U) | vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j))
            : (0xfffffffeU & (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                              + (((- (IData)((1U & 
                                              ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jump_en));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_write__en0 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
           | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_wdata__en1 
        = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
             ? 0xffffffffU : 0U) | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                     ? 0xffffffffU : 0U));
    __Vtableidx1 = ((((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                         ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                         ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                         : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                   ? 3U
                                                   : 0U))) 
                      | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                           ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                           ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                           : 0U) & 
                                         ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                           ? 3U : 0U)))) 
                     << 6U) | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state)));
    if (Vexu_reg_wbu_top_tb__ConstPool__TABLE_h73a4683d_0
        [__Vtableidx1]) {
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate 
            = Vexu_reg_wbu_top_tb__ConstPool__TABLE_hc8dcc04c_0
            [__Vtableidx1];
    }
}

void Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf);
void Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__1(Vexu_reg_wbu_top_tb___024root* vlSelf);
void Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__2(Vexu_reg_wbu_top_tb___024root* vlSelf);
void Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf);
void Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__1(Vexu_reg_wbu_top_tb___024root* vlSelf);
void Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__2(Vexu_reg_wbu_top_tb___024root* vlSelf);

void Vexu_reg_wbu_top_tb___024root___eval_nba(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_waddr__en2;
    exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_waddr__en2 = 0;
    IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wdata__en3;
    exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wdata__en3 = 0;
    CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wen__en4;
    exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wen__en4 = 0;
    CData/*0:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = 0;
    IData/*31:0*/ __VdlyVal__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0;
    __VdlyVal__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0;
    __VdlyDim0__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0;
    __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v1;
    __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v1 = 0;
    // Body
    __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 = 0U;
    __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v1 = 0U;
    __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_load_en 
        = vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en;
    if ((1U & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn)))) {
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__i = 0x20U;
    }
    if (vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) {
        __VdlyVal__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 
            = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wen)
                ? ((0U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr))
                    ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile
                   [vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr]
                    : vlSelf->exu_reg_wbu_top_tb__DOT__reg_wdata)
                : vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile
               [vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr]);
        __VdlyDim0__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 
            = vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr;
        __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0 = 1U;
        if ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_size 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_offset 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_base_addr 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_rd 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__inst_out 
                = vlSelf->exu_reg_wbu_top_tb__DOT__inst_in;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_en 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_size 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_data 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_addr 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff;
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_size 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_size;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_offset 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_offset;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_base_addr 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_base_addr;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_rd 
                = vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_rd;
        }
        if (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) {
            if ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = (((- (IData)((1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i));
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lb) 
                              | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lbu))
                              ? 1U : (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lh) 
                                       | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lhu))
                                       ? 2U : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lw)
                                                ? 3U
                                                : 0U))));
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1;
            } else if ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff));
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
            } else {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & 0U);
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
            }
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 
                = ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                    ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1)
                    : 0U);
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) {
            if ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = (((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                         != ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                            - (IData)(8U)))) 
                        & (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                           != ((IData)(8U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                              - (IData)(8U)))))
                        ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next
                        : 0U);
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = ((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                        == ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                           - (IData)(8U))))
                        ? 0U : ((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                                 == ((IData)(8U) + 
                                     (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                      - (IData)(8U))))
                                 ? 1U : 2U));
            } else if ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            }
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 
                    = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jalr)
                        ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1)
                        : 0U);
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
            } else {
                if ((2U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata 
                        = ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                          - (IData)(8U)));
                } else {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) {
            if ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                if (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch) {
                    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                        = (((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                             != ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                                - (IData)(8U)))) 
                            & (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                               != ((IData)(8U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                                  - (IData)(8U)))))
                            ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next
                            : 0U);
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                        = ((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            == ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                               - (IData)(8U))))
                            ? 0U : ((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                                     == ((IData)(8U) 
                                         + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                            - (IData)(8U))))
                                     ? 1U : 2U));
                } else {
                    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
                }
            } else if ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            }
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs2;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1;
            } else {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_en) {
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_rd;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_data;
            } else {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata = 0U;
            }
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) {
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata 
                    = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lui)
                        ? (vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_u 
                           << 0xcU) : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_auipc)
                                        ? ((vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_u 
                                            << 0xcU) 
                                           + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                              - (IData)(8U)))
                                        : 0U));
            } else {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
            }
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) {
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
            } else {
                if ((2U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
                } else if ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata 
                        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_addi)
                            ? ((((- (IData)((1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                   >> 0xbU)))) 
                                 << 0xcU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)) 
                               + vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1)
                            : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_slti)
                                ? VL_LTS_III(32, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                              >> 0xbU)))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sltiu)
                                    ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                       < (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                          >> 0xbU)))) 
                                           << 0xcU) 
                                          | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                    : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_xori)
                                        ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                           ^ (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                              >> 0xbU)))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                        : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_ori)
                                            ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                                  >> 0xbU)))) 
                                                   << 0xcU) 
                                                  | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                            : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_andi)
                                                ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                   & (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                                      >> 0xbU)))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                                : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_slli)
                                                    ? 
                                                   (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                                    : 
                                                   ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_srli)
                                                     ? 
                                                    (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                                     : 
                                                    ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_srai)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))
                                                      : 0U)))))))));
                } else {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        }
        if (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en) 
             & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)))) {
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs2;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
            } else {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                if ((2U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
                } else if ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata 
                        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_add)
                            ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                               + vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                            : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sub)
                                ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                   - vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sll)
                                    ? VL_SHIFTL_III(32,32,32, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                    : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_slt)
                                        ? VL_LTS_III(32, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                        : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sltu)
                                            ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                               < vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                            : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_xor)
                                                ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                   ^ vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                                : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_srl)
                                                    ? 
                                                   (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2))
                                                    : 
                                                   ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sra)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, 
                                                                   (0x1fU 
                                                                    & vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2))
                                                     : 
                                                    ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_or)
                                                      ? 
                                                     (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                      | vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                                      : 
                                                     ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_and)
                                                       ? 
                                                      (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                                       & vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                                       : 0U))))))))));
                } else {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
        }
        if (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)))) {
            if ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs2;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1;
            } else {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
            if ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))) {
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = 1U;
                if (vlSelf->exu_reg_wbu_top_tb__DOT__dec_sb) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 0U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = (0xffU & vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2);
                } else if (vlSelf->exu_reg_wbu_top_tb__DOT__dec_sh) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 1U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = (0xffffU & vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2);
                } else if (vlSelf->exu_reg_wbu_top_tb__DOT__dec_sw) {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 2U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2;
                } else {
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
                    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
                }
                vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff 
                    = (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                       + (((- (IData)((1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_s) 
                                             >> 0xbU)))) 
                           << 0xcU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_s)));
            }
        } else {
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2 
            = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
                | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
                   | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)))
                ? (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wen) 
                    & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_2) 
                       == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr)))
                    ? vlSelf->exu_reg_wbu_top_tb__DOT__reg_wdata
                    : vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile
                   [vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_2])
                : 0U);
        vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
            = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                   | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                      | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                         | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                            | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1))))))
                ? (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wen) 
                    & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_1) 
                       == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr)))
                    ? vlSelf->exu_reg_wbu_top_tb__DOT__reg_wdata
                    : vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile
                   [vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_1])
                : 0U);
    } else {
        __VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v1 = 1U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_size = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_offset = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_base_addr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_rd = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
        vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__inst_out = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_en = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_size = 3U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_data = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_addr = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2 = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 = 0U;
    }
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_sext 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff)
                : (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_sext)));
    __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               && ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                   || ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff)))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               && ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                    ? (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lb) 
                        | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lh)) 
                       | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lw))
                    : ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff)))));
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
               && ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                    ? ((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                        != ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                           - (IData)(8U)))) 
                       & (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                          != ((IData)(8U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                             - (IData)(8U)))))
                    : ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)))));
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) 
               && ((3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                    ? ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch) 
                       && ((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            != ((IData)(4U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                               - (IData)(8U)))) 
                           & (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                              != ((IData)(8U) + (vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                                 - (IData)(8U))))))
                    : ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write)))));
    vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_load_en 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff)
                : (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en)));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_en) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
               && ((1U != (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                   && ((2U != (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                       && (3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
               && ((1U != (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                   && (2U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en) 
                & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall))) 
               && ((1U != (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                   && ((2U != (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                       && (3U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wen__en4 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen) 
           | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen) 
              | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen) 
                 | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen))));
    exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_waddr__en2 
        = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
             ? 0x1fU : 0U) | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                ? 0x1fU : 0U) | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                   ? 0x1fU
                                                   : 0U) 
                                                 | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                     ? 0x1fU
                                                     : 0U))));
    exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wdata__en3 
        = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
             ? 0xffffffffU : 0U) | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                      ? 0xffffffffU
                                      : 0U) | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                 ? 0xffffffffU
                                                 : 0U) 
                                               | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U))));
    if (__VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0) {
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[__VdlyDim0__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0] 
            = __VdlyVal__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v0;
    }
    if (__VdlySet__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile__v1) {
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[1U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[2U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[3U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[4U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[5U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[6U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[7U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[8U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[9U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0xaU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0xbU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0xcU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0xdU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0xeU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0xfU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x10U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x11U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x12U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x13U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x14U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x15U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x16U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x17U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x18U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x19U] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x1aU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x1bU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x1cU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x1dU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x1eU] = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0x1fU] = 0U;
    }
    vlSelf->exu_reg_wbu_top_tb__DOT__reg_wen = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen) 
                                                 | (IData)(exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wen__en4)) 
                                                & (((IData)(exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wen__en4) 
                                                    & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen) 
                                                       | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen) 
                                                          | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen) 
                                                             | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen))))) 
                                                   | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)));
    vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr = (((IData)(exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_waddr__en2) 
                                                   | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                       ? 0x1fU
                                                       : 0U)) 
                                                  & (((IData)(exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_waddr__en2) 
                                                      & ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                                            ? 0x1fU
                                                            : 0U) 
                                                          & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                                               ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr)
                                                               : 0U) 
                                                             & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                                                 ? 0x1fU
                                                                 : 0U))) 
                                                         | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                               ? 0x1fU
                                                               : 0U) 
                                                             & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                                  ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr)
                                                                  : 0U) 
                                                                & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                                    ? 0x1fU
                                                                    : 0U))) 
                                                            | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                                  ? 0x1fU
                                                                  : 0U) 
                                                                & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                                     ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr)
                                                                     : 0U) 
                                                                   & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                                       ? 0x1fU
                                                                       : 0U))) 
                                                               | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                                    ? 0x1fU
                                                                    : 0U) 
                                                                  & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                                       ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr)
                                                                       : 0U) 
                                                                     & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                                         ? 0x1fU
                                                                         : 0U))))))) 
                                                     | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                          ? 0x1fU
                                                          : 0U) 
                                                        & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                             ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr)
                                                             : 0U) 
                                                           & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                               ? 0x1fU
                                                               : 0U)))));
    vlSelf->exu_reg_wbu_top_tb__DOT__reg_wdata = ((
                                                   ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                     ? 0xffffffffU
                                                     : 0U) 
                                                   | exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wdata__en3) 
                                                  & ((exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__reg_wdata__en3 
                                                      & ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                                            ? 0xffffffffU
                                                            : 0U) 
                                                          & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                                               ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata
                                                               : 0U) 
                                                             & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                                         | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                               ? 0xffffffffU
                                                               : 0U) 
                                                             & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                                  ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata
                                                                  : 0U) 
                                                                & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                            | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                                  ? 0xffffffffU
                                                                  : 0U) 
                                                                & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                                     ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata
                                                                     : 0U) 
                                                                   & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                               | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                                    ? 0xffffffffU
                                                                    : 0U) 
                                                                  & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                                       ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata
                                                                       : 0U) 
                                                                     & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                                         ? 0xffffffffU
                                                                         : 0U))))))) 
                                                     | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                          ? 0xffffffffU
                                                          : 0U) 
                                                        & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                             ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata
                                                             : 0U) 
                                                           & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen)
                                                               ? 0xffffffffU
                                                               : 0U)))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en) 
                & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch 
        = (1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_beq)
                  ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                     == vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                  : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bne)
                      ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                         != vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                      : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_blt)
                          ? VL_LTS_III(32, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                          : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bge)
                              ? VL_GTES_III(32, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1, vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                              : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bltu)
                                  ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                     < vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                  : ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bgeu)
                                      ? (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                                         >= vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2)
                                      : 0U)))))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
               && ((1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt)) 
                   && (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jalr))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en) 
                & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
    vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_2 = 
        ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
            ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                               ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2)
                               : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                                         ? 0x1fU : 0U))) 
         | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
               ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                  ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2)
                                  : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                            ? 0x1fU
                                            : 0U))) 
            | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2)
                : 0U)));
    vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_1 = 
        ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
            ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                               ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1)
                               : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                                         ? 0x1fU : 0U))) 
         | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
               ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                  ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1)
                                  : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                            ? 0x1fU
                                            : 0U))) 
            | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                  ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                     ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1)
                                     : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                               ? 0x1fU
                                               : 0U))) 
               | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                     ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                        ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1)
                                        : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                                  ? 0x1fU
                                                  : 0U))) 
                  | ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                        ? 0x1fU : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                           ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1)
                                           : 0U) & 
                                         ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                           ? 0x1fU : 0U))) 
                     | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                         ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1)
                         : 0U))))));
}

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__1(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__cycle_cnt;
    __Vdly__exu_reg_wbu_top_tb__DOT__cycle_cnt = 0;
    // Body
    __Vdly__exu_reg_wbu_top_tb__DOT__cycle_cnt = vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt;
    if (vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) {
        __Vdly__exu_reg_wbu_top_tb__DOT__cycle_cnt 
            = ((4U == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                ? 1U : (0xfU & ((IData)(1U) + (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))));
        vlSelf->exu_reg_wbu_top_tb__DOT__pc = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en)
                                                ? vlSelf->exu_reg_wbu_top_tb__DOT__pc
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt))
                                                    ? 
                                                   (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_write__en0) 
                                                     & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
                                                         & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
                                                        | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) 
                                                           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))))
                                                     ? 
                                                    (vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_wdata__en1 
                                                     & ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                           ? 0xffffffffU
                                                           : 0U) 
                                                         & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                              ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                                              : 0U) 
                                                            & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                                        | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                             ? 0xffffffffU
                                                             : 0U) 
                                                           & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                                ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                                : 0U) 
                                                              & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                                  ? 0xffffffffU
                                                                  : 0U)))))
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->exu_reg_wbu_top_tb__DOT__pc))
                                                    : vlSelf->exu_reg_wbu_top_tb__DOT__pc));
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state 
            = vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate;
    } else {
        __Vdly__exu_reg_wbu_top_tb__DOT__cycle_cnt = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__pc = 0U;
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state = 0U;
    }
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__flush_stall 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn) 
           && (0U != (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate)));
    vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt = __Vdly__exu_reg_wbu_top_tb__DOT__cycle_cnt;
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
        = ((vlSelf->exu_reg_wbu_top_tb__DOT__pc - (IData)(8U)) 
           + (((- (IData)((1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_b) 
                                 >> 0xbU)))) << 0xdU) 
              | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_b)));
}

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__2(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en = vlSelf->__Vdly__exu_reg_wbu_top_tb__DOT__exu_load_en;
}

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jal)
            ? ((vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                - (IData)(8U)) + (((- (IData)((1U & 
                                               (vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j 
                                                >> 0x13U)))) 
                                   << 0x15U) | vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j))
            : (0xfffffffeU & (vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1 
                              + (((- (IData)((1U & 
                                              ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i)))));
}

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__1(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en) 
           | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__flush_stall));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en 
        = ((~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_upper_en));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en 
        = ((~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_en));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en 
        = ((~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_load_en));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23 
        = ((~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_branch_en));
}

VL_INLINE_OPT void Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__2(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jump_en));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_write__en0 
        = ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
           | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23));
    vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_wdata__en1 
        = (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
             ? 0xffffffffU : 0U) | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                     ? 0xffffffffU : 0U));
    __Vtableidx1 = ((((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                         ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                         ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                         : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                   ? 3U
                                                   : 0U))) 
                      | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                           ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                           ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                           : 0U) & 
                                         ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                           ? 3U : 0U)))) 
                     << 6U) | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state)));
    if (Vexu_reg_wbu_top_tb__ConstPool__TABLE_h73a4683d_0
        [__Vtableidx1]) {
        vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate 
            = Vexu_reg_wbu_top_tb__ConstPool__TABLE_hc8dcc04c_0
            [__Vtableidx1];
    }
}

void Vexu_reg_wbu_top_tb___024root___timing_resume(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_reg_wbu_top_tb___024root___eval_triggers__act(Vexu_reg_wbu_top_tb___024root* vlSelf);

bool Vexu_reg_wbu_top_tb___024root___eval_phase__act(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_reg_wbu_top_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_reg_wbu_top_tb___024root___timing_resume(vlSelf);
        Vexu_reg_wbu_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_reg_wbu_top_tb___024root___eval_phase__nba(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_reg_wbu_top_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root___dump_triggers__nba(Vexu_reg_wbu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root___dump_triggers__act(Vexu_reg_wbu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_reg_wbu_top_tb___024root___eval(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_reg_wbu_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_reg_wbu_top_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_reg_wbu_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_reg_wbu_top_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_reg_wbu_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_reg_wbu_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_reg_wbu_top_tb___024root___eval_debug_assertions(Vexu_reg_wbu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
