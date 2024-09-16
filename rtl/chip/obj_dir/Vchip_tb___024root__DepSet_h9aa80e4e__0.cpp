// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchip_tb.h for the primary calling header

#include "Vchip_tb__pch.h"
#include "Vchip_tb___024root.h"

VL_ATTR_COLD void Vchip_tb___024root___eval_initial__TOP(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__0(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__1(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__2(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__3(Vchip_tb___024root* vlSelf);

void Vchip_tb___024root___eval_initial(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial\n"); );
    // Body
    Vchip_tb___024root___eval_initial__TOP(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hclk__0 
        = vlSelf->chip_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hrstn__0 
        = vlSelf->chip_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__0(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->chip_tb__DOT__itcm_ready = 0U;
    vlSelf->chip_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "chip_tb.v", 
                                       28);
    vlSelf->chip_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "chip_tb.v", 
                                       30);
    vlSelf->chip_tb__DOT__itcm_ready = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "chip_tb.v", 
                                       32);
    VL_FINISH_MT("chip_tb.v", 33, "");
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__1(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "lib/sram_swc/sram_swc.v", 
                                       115);
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x6c696e6bU;
    __Vtemp_1[2U] = 0x726f6d5fU;
    __Vtemp_1[3U] = 0x6669672fU;
    __Vtemp_1[4U] = 0x2e636f6eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram)
                 , 0, ~0ULL);
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__2(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "lib/sram_swc/sram_swc.v", 
                                       115);
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x6c696e6bU;
    __Vtemp_1[2U] = 0x726f6d5fU;
    __Vtemp_1[3U] = 0x6669672fU;
    __Vtemp_1[4U] = 0x2e636f6eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram)
                 , 0, ~0ULL);
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__Vtiming__3(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "chip_tb.v", 
                                           23);
        vlSelf->chip_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->chip_tb__DOT__hclk)));
    }
}

void Vchip_tb___024root___act_sequent__TOP__0(Vchip_tb___024root* vlSelf);

void Vchip_tb___024root___eval_act(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vchip_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vchip_tb__ConstPool__TABLE_hd2fe163e_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vchip_tb__ConstPool__TABLE_he4b832ad_0;

VL_INLINE_OPT void Vchip_tb___024root___act_sequent__TOP__0(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->chip_tb__DOT__hrstn) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_hd2fe163e_0[__Vtableidx1];
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram_addr_error 
        = (1U & ((0U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                          ? 2U : 0U)) ? (0xfffU < (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                                   - (IData)(0x200000U)))
                  : ((1U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                              ? 2U : 0U)) ? (0xffeU 
                                             < (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                                - (IData)(0x200000U)))
                      : ((2U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                  ? 2U : 0U)) ? (0xffcU 
                                                 < 
                                                 (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                                  - (IData)(0x200000U)))
                          : 1U))));
    __Vtableidx3 = (((IData)(vlSelf->chip_tb__DOT__hrstn) 
                     << 9U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en) 
                                << 8U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
                                           << 7U) | 
                                          (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                            << 3U) 
                                           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_he4b832ad_0[__Vtableidx3];
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans)) 
           & ((2U < ((IData)(vlSelf->chip_tb__DOT__hrstn)
                      ? 2U : 0U)) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram_addr_error)));
}

void Vchip_tb___024root___nba_sequent__TOP__0(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_sequent__TOP__1(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_sequent__TOP__2(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_comb__TOP__0(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_comb__TOP__1(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_sequent__TOP__3(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_comb__TOP__2(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_comb__TOP__3(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___nba_comb__TOP__4(Vchip_tb___024root* vlSelf);

void Vchip_tb___024root___eval_nba(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__0(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0;
    CData/*0:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = 0;
    CData/*1:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 0;
    CData/*0:0*/ __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1 = 0;
    // Body
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0U;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1 = 0U;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
    if ((1U & (~ (IData)(vlSelf->chip_tb__DOT__hrstn)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x20U;
    }
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff)
             : (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext)));
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
            && ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                || ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff)
             : (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en)));
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
            && ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                 ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                     != ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                        - (IData)(8U)))) 
                    & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                       != ((IData)(8U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                          - (IData)(8U)))))
                 : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)))));
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
            && ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                 ? ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch) 
                    && ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                         != ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                            - (IData)(8U)))) 
                        & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                           != ((IData)(8U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                              - (IData)(8U))))))
                 : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write)))));
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff)
             : (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
            && ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                || ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
            && ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                 ? (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb) 
                     | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh)) 
                    | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw))
                 : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
            && ((1U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                && ((2U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
            && ((1U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                && (2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)))));
    if (vlSelf->chip_tb__DOT__hrstn) {
        __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen)
                ? ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
                   [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr]
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata)
                : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
               [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr]);
        __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
        __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 1U;
        if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out;
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = (((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                         != ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                            - (IData)(8U)))) 
                        & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                           != ((IData)(8U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                              - (IData)(8U)))))
                        ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next
                        : 0U);
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                        == ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                           - (IData)(8U))))
                        ? 0U : ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                                 == ((IData)(8U) + 
                                     (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                      - (IData)(8U))))
                                 ? 1U : 2U));
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            }
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 
                    = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr)
                        ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1)
                        : 0U);
            } else {
                if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata 
                        = ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                          - (IData)(8U)));
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
                } else {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                }
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch) {
                    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                        = (((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                             != ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                                - (IData)(8U)))) 
                            & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                               != ((IData)(8U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                                  - (IData)(8U)))))
                            ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next
                            : 0U);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                        = ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            == ((IData)(4U) + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                               - (IData)(8U))))
                            ? 0U : ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                                     == ((IData)(8U) 
                                         + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                            - (IData)(8U))))
                                     ? 1U : 2U));
                } else {
                    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
                }
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            }
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i));
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb) 
                              | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu))
                              ? 1U : (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh) 
                                       | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu))
                                       ? 2U : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw)
                                                ? 3U
                                                : 0U))));
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1;
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff));
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & 0U);
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
            }
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 
                = ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                    ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1)
                    : 0U);
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
        if (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)))) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb) {
                    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                        = (3U & 0U);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2);
                } else if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh) {
                    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                        = (3U & 1U);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = (0xffffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2);
                } else if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw) {
                    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                        = (3U & 2U);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2;
                } else {
                    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                        = (3U & 3U);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
                }
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff 
                    = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                       + (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s) 
                                             >> 0xbU)))) 
                           << 0xcU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s)));
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                    = (3U & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff));
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff;
            } else {
                __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                    = (3U & 3U);
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
            }
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 
                = (0x67U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 
                = (0xfU == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 
                = (0x20U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 
                = (0x23U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 
                = (4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 
                = (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 
                = (0x63U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 
                = (0x13U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 
                = (0x33U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en) {
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata = 0U;
            }
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) {
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata 
                    = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui)
                        ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u 
                           << 0xcU) : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc)
                                        ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u 
                                            << 0xcU) 
                                           + (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                              - (IData)(8U)))
                                        : 0U));
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
            }
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) {
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
            } else {
                if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
                } else if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr 
                        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata 
                        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi)
                            ? ((((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                   >> 0xbU)))) 
                                 << 0xcU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)) 
                               + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1)
                            : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti)
                                ? VL_LTS_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                              >> 0xbU)))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu)
                                    ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                       < (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                          >> 0xbU)))) 
                                           << 0xcU) 
                                          | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                    : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori)
                                        ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                           ^ (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                              >> 0xbU)))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                        : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori)
                                            ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                                  >> 0xbU)))) 
                                                   << 0xcU) 
                                                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                            : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi)
                                                ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                   & (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                                      >> 0xbU)))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                                : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli)
                                                    ? 
                                                   (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                                    : 
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli)
                                                     ? 
                                                    (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                                     : 
                                                    ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))
                                                      : 0U)))))))));
                } else {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        }
        if (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)))) {
            if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
                if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
                } else if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata 
                        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add)
                            ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                               + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                            : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub)
                                ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                   - vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll)
                                    ? VL_SHIFTL_III(32,32,32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                    : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt)
                                        ? VL_LTS_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                        : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu)
                                            ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                               < vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                            : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor)
                                                ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                   ^ vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                                : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl)
                                                    ? 
                                                   (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2))
                                                    : 
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, 
                                                                   (0x1fU 
                                                                    & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2))
                                                     : 
                                                    ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or)
                                                      ? 
                                                     (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                      | vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                                      : 
                                                     ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and)
                                                       ? 
                                                      (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                       & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                                       : 0U))))))))));
                } else {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
        }
    } else {
        __VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1 = 1U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                  & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                  & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 
                = (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 
                = (7U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 
                = (6U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 
                = (2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 
                = (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 
                = (0x73U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 
                = (5U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                  & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1))));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                  & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0))));
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 
                = (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2 
            = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
                | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)))
                ? (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen) 
                    & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2) 
                       == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr)))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
                   [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2])
                : 0U);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
            = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                 | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                    | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                       | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                          | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                             | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)))))) 
                & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                   | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                      | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                         | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                            | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)))))))
                ? (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen) 
                    & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1) 
                       == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr)))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
                   [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1])
                : 0U);
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 = 0U;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
            && ((1U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                && ((2U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                    && (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
    if (__VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    }
    if (__VdlySet__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[1U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[2U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[3U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[4U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[5U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[6U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[7U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[8U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[9U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0xaU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0xbU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0xcU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0xdU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0xeU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0xfU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x10U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x11U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x12U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x13U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x14U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x15U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x16U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x17U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x18U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x19U] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x1aU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x1bU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x1cU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x1dU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x1eU] = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0x1fU] = 0U;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen 
        = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen) 
            | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen) 
               | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)) 
                  & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen) 
                     | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen))))) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr 
        = (((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
               ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                  ? 0x1fU : 0U) | (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                     ? 0x1fU
                                                     : 0U) 
                                                   | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                       ? 0x1fU
                                                       : 0U)))) 
            & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                  ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                     ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr)
                                     : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                               ? 0x1fU
                                               : 0U))) 
               | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                     ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                        ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr)
                                        : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                  ? 0x1fU
                                                  : 0U))) 
                  | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                        ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                           ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr)
                                           : 0U) & 
                                         ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                           ? 0x1fU : 0U))) 
                     | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                          ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr)
                                             : 0U) 
                                           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                               ? 0x1fU
                                               : 0U))))))) 
           | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                   ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr)
                                   : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                             ? 0x1fU
                                             : 0U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata 
        = (((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
               ? 0xffffffffU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                        ? 0xffffffffU
                                        : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                     ? 0xffffffffU
                                                     : 0U)))) 
            & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                  ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                           ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata
                                           : 0U) & 
                                         ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                           ? 0xffffffffU
                                           : 0U))) 
               | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                     ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                              ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata
                                              : 0U) 
                                            & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                ? 0xffffffffU
                                                : 0U))) 
                  | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                        ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                 ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata
                                                 : 0U) 
                                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U))) 
                     | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                          ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                   ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata
                                                   : 0U) 
                                                 & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                     ? 0xffffffffU
                                                     : 0U))))))) 
           | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                         ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata
                                         : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch 
        = (1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq)
                  ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                     == vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                  : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne)
                      ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                         != vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                      : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt)
                          ? VL_LTS_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                          : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge)
                              ? VL_GTES_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                              : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu)
                                  ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                     < vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                  : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu)
                                      ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                         >= vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                      : 0U)))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
            && ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr))));
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_addi;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slti;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltiu;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xori;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ori;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_andi;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slli;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_add;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slt;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltu;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xor;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_or;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_and;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
            && (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
              ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                 ? 0x1fU : 0U) | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                                                   ? 0x1fU
                                                   : 0U))) 
           & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                 ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                                    ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2)
                                    : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                                              ? 0x1fU
                                              : 0U))) 
              | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                    ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                       ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2)
                                       : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                                 ? 0x1fU
                                                 : 0U))) 
                 | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                      ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                                         ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2)
                                         : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                                                   ? 0x1fU
                                                   : 0U))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
              ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                                 ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                                    ? 0x1fU
                                                    : 0U) 
                                                  | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                                       ? 0x1fU
                                                       : 0U) 
                                                     | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                                                            ? 0x1fU
                                                            : 0U)))))) 
           & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                 ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                                    ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1)
                                    : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                                              ? 0x1fU
                                              : 0U))) 
              | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                    ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                       ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1)
                                       : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                                 ? 0x1fU
                                                 : 0U))) 
                 | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                       ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                          ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1)
                                          : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                                    ? 0x1fU
                                                    : 0U))) 
                    | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                          ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1)
                                             : 0U) 
                                           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                               ? 0x1fU
                                               : 0U))) 
                       | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                             ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                                ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1)
                                                : 0U) 
                                              & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                                  ? 0x1fU
                                                  : 0U))) 
                          | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                               ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                                                  ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1)
                                                  : 0U) 
                                                & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                                                    ? 0x1fU
                                                    : 0U)))))))));
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__1(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6;
    __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 = 0;
    SData/*11:0*/ __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6;
    __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 = 0;
    IData/*31:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc = 0;
    IData/*31:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out = 0;
    CData/*0:0*/ __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0;
    IData/*31:0*/ __Vtemp_14;
    // Body
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0U;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0U;
    __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0U;
    if ((1U & (~ (IData)(vlSelf->chip_tb__DOT__hrstn)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i = 0U;
        while (VL_GTS_III(32, 0x1000U, vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i)) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[(0xfffU 
                                                                                & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i)] = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i 
                = ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i);
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i = 0U;
        while (VL_GTS_III(32, 0x1000U, vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i)) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[(0xfffU 
                                                                                & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i)] = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i 
                = ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i);
        }
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)
             : (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en)));
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)))) {
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b 
            = ((0x1000U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                           >> 0x13U)) | ((0x800U & 
                                          (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                                  >> 7U)))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en 
            = (((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb) 
                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh)) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw)) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j 
            = ((0x100000U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                             >> 0xbU)) | ((0xff000U 
                                           & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out) 
                                          | ((0x800U 
                                              & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                                   >> 0x14U)))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en 
            = ((((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne)) 
                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt)) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge)) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en 
            = (((((((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_addi) 
                      | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slti)) 
                     | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltiu)) 
                    | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xori)) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ori)) 
                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_andi)) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slli)) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s 
            = ((0xfe0U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                          >> 0x14U)) | (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                                 >> 7U)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2 
            = (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                        >> 0x14U));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd 
            = (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                        >> 7U));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1 
            = (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                        >> 0xfU));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u 
            = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
               >> 0xcU);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i 
            = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
               >> 0x14U);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en 
            = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en 
            = ((((((((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_add) 
                       | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub)) 
                      | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll)) 
                     | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slt)) 
                    | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltu)) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xor)) 
                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl)) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra)) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_or)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_and));
    } else {
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff;
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
        }
        if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7 
                = (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                            >> 7U));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15 
                = (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                            >> 0xfU));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28 
                = (0xfU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                           >> 0x1cU));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20 
                = (0xfffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                             >> 0x14U));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25 
                = (0x7fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                            >> 0x19U));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12 
                = (7U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                         >> 0xcU));
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 
                = (0x7fU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out);
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7 
                = (0x1fU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15 
                = (0x1fU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28 
                = (0xfU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20 
                = (0xfffU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25 
                = (0x7fU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12 
                = (7U & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 
                = (0x7fU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
        }
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en)
                ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc
                : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                    ? ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
                         | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)) 
                        & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
                            & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
                           | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
                              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))))
                        ? ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                              ? 0xffffffffU : 0U) | 
                            ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                              ? 0xffffffffU : 0U)) 
                           & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                 ? 0xffffffffU : 0U) 
                               & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                    : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                              ? 0xffffffffU
                                              : 0U))) 
                              | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                   ? 0xffffffffU : 0U) 
                                 & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                      ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                      : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                ? 0xffffffffU
                                                : 0U)))))
                        : ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc))
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc));
        if (((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)) 
             & (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
            __Vtemp_14 = (((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext))
                           ? (((- (IData)((1U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata 
                                                 >> 7U)))) 
                               << 8U) | (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata))
                           : (((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext))
                               ? (((- (IData)((1U & 
                                               (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata 
                                                >> 0xfU)))) 
                                   << 0x10U) | (0xffffU 
                                                & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata))
                               : (((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                   & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext))
                                   ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata
                                   : (((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                       & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext)))
                                       ? (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata)
                                       : (((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                           & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext)))
                                           ? (0xffffU 
                                              & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata)
                                           : 0U)))));
        } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff = 0U;
            __Vtemp_14 = 0U;
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff;
            __Vtemp_14 = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff;
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff 
            = (((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)) 
                & (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate)))
                ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata
                : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff);
        if (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error)))) {
            if ((0U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                         ? 2U : 0U))) {
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata);
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr);
                __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 1U;
            } else if ((1U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                ? 2U : 0U))) {
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                                >> 8U));
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 
                    = (0xfffU & ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 1U;
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata);
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr);
            } else if ((2U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                ? 2U : 0U))) {
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 
                    = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                       >> 0x18U);
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 
                    = (0xfffU & ((IData)(3U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 1U;
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                                >> 0x10U));
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 
                    = (0xfffU & ((IData)(2U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                                >> 8U));
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 
                    = (0xfffU & ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata);
                __VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr);
            }
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans 
            = (((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)) 
                | (4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)))
                ? 2U : 0U);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error)
                ? 0U : ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                         [(0xfffU & ((IData)(3U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                         << 0x18U) | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                       [(0xfffU & ((IData)(2U) 
                                                   + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                                       << 0x10U) | 
                                      ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                        [(0xfffU & 
                                          ((IData)(1U) 
                                           + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                                        << 8U) | vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                       [(0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)]))));
        if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans = 2U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans = 0U;
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
            = ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate))
                ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data
                : 0U);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata 
            = ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite)) 
                      & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error))))
                ? ((0U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                            ? 2U : 0U)) ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                   [(0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)]
                    : ((1U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                ? 2U : 0U)) ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                [(0xfffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                                << 8U) 
                                               | vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                               [(0xfffU 
                                                 & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)])
                        : ((2U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                    ? 2U : 0U)) ? (
                                                   (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                       [
                                                       (0xfffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                          [
                                                          (0xfffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                                          << 8U) 
                                                         | vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                         [
                                                         (0xfffU 
                                                          & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)])))
                            : 0U))) : 0U);
        if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr 
                   + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset);
        } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr = 0U;
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12 = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 = 0U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff = 0U;
        __Vtemp_14 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr = 0U;
    }
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt 
        = ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
                  | (~ (IData)(vlSelf->chip_tb__DOT__itcm_ready))))
            ? 0U : (0xfU & ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                             ? ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle)
                                 ? 1U : (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                             : ((IData)(1U) + (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff 
        = __Vtemp_14;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate)));
    if (__VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    }
    if (__VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2;
    }
    if (__VdlySet__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__VdlyDim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6] 
            = __VdlyVal__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) && 
           (4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans)) 
           & (0xffcU < (vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr 
                        - (IData)(0x100000U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
        = ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
            - (IData)(8U)) + (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b) 
                                                 >> 0xbU)))) 
                               << 0xdU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b)));
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__2(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_addi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slti 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltiu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xori 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ori 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_andi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slli 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_add 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_3));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_6) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_5) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_4) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slt 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xor 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_or 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_and 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    if (vlSelf->chip_tb__DOT__hrstn) {
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 
                = (0x6fU == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 
                = (0x37U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 
                = (0x17U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
        }
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 = 0U;
    }
}

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__0(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal)
            ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                - (IData)(8U)) + (((- (IData)((1U & 
                                               (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j 
                                                >> 0x13U)))) 
                                   << 0x15U) | vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j))
            : (0xfffffffeU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                              + (((- (IData)((1U & 
                                              ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en));
}

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__1(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram_addr_error 
        = (1U & ((0U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                          ? 2U : 0U)) ? (0xfffU < (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                                   - (IData)(0x200000U)))
                  : ((1U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                              ? 2U : 0U)) ? (0xffeU 
                                             < (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                                - (IData)(0x200000U)))
                      : ((2U == ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                  ? 2U : 0U)) ? (0xffcU 
                                                 < 
                                                 (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                                  - (IData)(0x200000U)))
                          : 1U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans)) 
           & ((2U < ((IData)(vlSelf->chip_tb__DOT__hrstn)
                      ? 2U : 0U)) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram_addr_error)));
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__3(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
}

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__2(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->chip_tb__DOT__hrstn) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_hd2fe163e_0[__Vtableidx1];
}

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__3(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__3\n"); );
    // Init
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->chip_tb__DOT__hrstn) 
                     << 9U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en) 
                                << 8U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
                                           << 7U) | 
                                          (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                            << 3U) 
                                           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_he4b832ad_0[__Vtableidx3];
}

extern const VlUnpacked<CData/*0:0*/, 256> Vchip_tb__ConstPool__TABLE_h73a4683d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vchip_tb__ConstPool__TABLE_hc8dcc04c_0;

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__4(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                         ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                         ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                         : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                   ? 3U
                                                   : 0U))) 
                      | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                           ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                           ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                           : 0U) & 
                                         ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                           ? 3U : 0U)))) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state)));
    if (Vchip_tb__ConstPool__TABLE_h73a4683d_0[__Vtableidx2]) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate 
            = Vchip_tb__ConstPool__TABLE_hc8dcc04c_0
            [__Vtableidx2];
    }
}

void Vchip_tb___024root___timing_resume(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vchip_tb___024root___eval_triggers__act(Vchip_tb___024root* vlSelf);

bool Vchip_tb___024root___eval_phase__act(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vchip_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vchip_tb___024root___timing_resume(vlSelf);
        Vchip_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vchip_tb___024root___eval_phase__nba(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vchip_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__nba(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__act(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vchip_tb___024root___eval(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vchip_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("chip_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vchip_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("chip_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vchip_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vchip_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vchip_tb___024root___eval_debug_assertions(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
