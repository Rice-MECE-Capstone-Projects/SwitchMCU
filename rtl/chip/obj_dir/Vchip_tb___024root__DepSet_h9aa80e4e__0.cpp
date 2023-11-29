// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchip_tb.h for the primary calling header

#include "verilated.h"

#include "Vchip_tb__Syms.h"
#include "Vchip_tb___024root.h"

VL_ATTR_COLD void Vchip_tb___024root___eval_initial__TOP(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__0(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__1(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__2(Vchip_tb___024root* vlSelf);
VlCoroutine Vchip_tb___024root___eval_initial__TOP__3(Vchip_tb___024root* vlSelf);

void Vchip_tb___024root___eval_initial(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial\n"); );
    // Body
    Vchip_tb___024root___eval_initial__TOP(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__0(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__1(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__2(vlSelf);
    Vchip_tb___024root___eval_initial__TOP__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hclk__0 
        = vlSelf->chip_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hrstn__0 
        = vlSelf->chip_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__0(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->chip_tb__DOT__itcm_ready = 0U;
    vlSelf->chip_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "chip_tb.v", 
                                       26);
    vlSelf->chip_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "chip_tb.v", 
                                       28);
    vlSelf->chip_tb__DOT__itcm_ready = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "chip_tb.v", 
                                       30);
    VL_FINISH_MT("chip_tb.v", 31, "");
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__1(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h2283c6a0__0;
    // Body
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "lib/sram_swc/sram_swc.v", 
                                       107);
    __Vtemp_h2283c6a0__0[0U] = 0x2e747874U;
    __Vtemp_h2283c6a0__0[1U] = 0x6c696e6bU;
    __Vtemp_h2283c6a0__0[2U] = 0x726f6d5fU;
    __Vtemp_h2283c6a0__0[3U] = 0x6669672fU;
    __Vtemp_h2283c6a0__0[4U] = 0x2e636f6eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h2283c6a0__0)
                 ,  &(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram)
                 , 0, ~0ULL);
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__2(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__2\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h2283c6a0__0;
    // Body
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "lib/sram_swc/sram_swc.v", 
                                       107);
    __Vtemp_h2283c6a0__0[0U] = 0x2e747874U;
    __Vtemp_h2283c6a0__0[1U] = 0x6c696e6bU;
    __Vtemp_h2283c6a0__0[2U] = 0x726f6d5fU;
    __Vtemp_h2283c6a0__0[3U] = 0x6669672fU;
    __Vtemp_h2283c6a0__0[4U] = 0x2e636f6eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h2283c6a0__0)
                 ,  &(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram)
                 , 0, ~0ULL);
}

VL_INLINE_OPT VlCoroutine Vchip_tb___024root___eval_initial__TOP__3(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "chip_tb.v", 
                                           21);
        vlSelf->chip_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->chip_tb__DOT__hclk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vchip_tb__ConstPool__TABLE_h805b10f4_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vchip_tb__ConstPool__TABLE_h54943851_0;

VL_INLINE_OPT void Vchip_tb___024root___act_sequent__TOP__0(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__itcm_ready;
    if (vlSelf->chip_tb__DOT__hrstn) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize = 2U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready = 1U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk 
            = vlSelf->chip_tb__DOT__hclk;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn = 1U;
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk 
            = vlSelf->chip_tb__DOT__hclk;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn = 0U;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error 
        = (2U < (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error 
        = (1U & ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                  ? (0xfffU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                  : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                      ? (0xffeU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                      : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                          ? (0xffcU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                          : 1U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    __Vtableidx1 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_h805b10f4_0[__Vtableidx1];
    __Vtableidx3 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready) 
                     << 9U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en) 
                                << 8U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
                                           << 7U) | 
                                          (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                            << 3U) 
                                           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_h54943851_0[__Vtableidx3];
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans)) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst_error) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
}

void Vchip_tb___024root___eval_act(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vchip_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__0(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0 = 0;
    CData/*0:0*/ chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0 = 0;
    CData/*0:0*/ chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0;
    IData/*31:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1 = 0;
    CData/*0:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = 0;
    CData/*1:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 0;
    // Body
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 0U;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1 = 0U;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
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
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
    if ((1U & (~ (IData)(vlSelf->chip_tb__DOT__hrstn)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 1U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 2U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 3U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 4U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 5U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 6U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 7U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 8U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 9U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0xaU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0xbU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0xcU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0xdU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0xeU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0xfU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x10U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x11U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x12U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x13U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x14U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x15U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x16U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x17U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x18U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x19U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x1aU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x1bU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x1cU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x1dU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x1eU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x1fU;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = 0x20U;
    }
    if (vlSelf->chip_tb__DOT__hrstn) {
        __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen)
                ? ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
                   [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr]
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata)
                : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
               [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr]);
        __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
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
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
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
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en;
            vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = (((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                         != ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)) 
                        & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                           != ((IData)(8U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)))
                        ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next
                        : 0U);
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                        == ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real))
                        ? 0U : ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                                 == ((IData)(8U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real))
                                 ? 1U : 2U));
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
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
                        = ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr 
                        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
                } else {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
                }
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch) {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                        = (((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                             != ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)) 
                            & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                               != ((IData)(8U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)))
                            ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next
                            : 0U);
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                        = ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            == ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real))
                            ? 0U : ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                                     == ((IData)(8U) 
                                         + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real))
                                     ? 1U : 2U));
                } else {
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
                    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
                }
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
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
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1;
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
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff));
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff 
                    = (3U & 0U);
            }
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 
                = ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                    ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1)
                    : 0U);
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
        if (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)))) {
            if ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff 
                    = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                       + (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s) 
                                             >> 0xbU)))) 
                           << 0xcU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s)));
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
            } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff;
                __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                    = (3U & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff));
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff 
                    = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff;
            } else {
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
                __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
                    = (3U & 3U);
                vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
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
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
            __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        }
        if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 
                = (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 
                = (0x6fU == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 
                = (0x37U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 
                = (0x17U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 
                = (0x67U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 
                = (0x20U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 
                = (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 
                = (0x23U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 
                = (6U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 
                = (7U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 
                = (4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 
                = (0xfU == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 
                = (2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 
                = (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 
                = (0x63U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 
                = (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 
                = (5U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 
                = (0x13U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 
                = (0x73U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 
                = (0x33U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 
                = (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12));
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
                                    ? ((0x1fU >= vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                        ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                           << vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                        : 0U) : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt)
                                                  ? 
                                                 VL_LTS_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                                  : 
                                                 ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu)
                                                   ? 
                                                  (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                   < vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                                   : 
                                                  ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor)
                                                    ? 
                                                   (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                                    ^ vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                                    : 
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl)
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
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2)
                ? (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen) 
                    & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2) 
                       == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr)))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
                   [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2])
                : 0U);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1)
                ? (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen) 
                    & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1) 
                       == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr)))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile
                   [vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1])
                : 0U);
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               & ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                  | ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
               & ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                   ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                       != ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)) 
                      & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
                         != ((IData)(8U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)))
                   : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                      & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
               & ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                   ? ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch) 
                      & ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                          != ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real)) 
                         & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
                            != ((IData)(8U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real))))
                   : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                      & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff 
            = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
               & ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                  | ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               & ((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                   ? (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb) 
                       | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh)) 
                      | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw))
                   : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                      & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
               & (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en) 
               & (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
               & (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en) 
               & (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en) 
               & (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en) 
               & ((1U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                  & ((2U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                     & (3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
               & (1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
               & ((1U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                  & (2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
               & ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                  & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr)));
    } else {
        __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1 = 1U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = 0U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = 3U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 = 0U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write = 0U;
        vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall)))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr = 0U;
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
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrci;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrsi;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrwi;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrc;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrs;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrw;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ecall;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ebreak;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence_i;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jal;
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
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw;
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
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lui;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_auipc;
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
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
                                                    & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
                                                   & (1U 
                                                      == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en) 
                                                    & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
                                                   & (1U 
                                                      == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
                                                    & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
                                                   & (1U 
                                                      == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
                                                    & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
                                                   & (1U 
                                                      == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en) 
                                                    & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall))) 
                                                   & ((1U 
                                                       != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                                                      & ((2U 
                                                          != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)) 
                                                         & (3U 
                                                            == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrw 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrs 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrc 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrwi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrsi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrci 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrci 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrci 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrsi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrsi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrwi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrwi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrs 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrs 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ecall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ecall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ebreak 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ebreak 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_fence_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_fence_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_fence 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_fence 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bgeu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bgeu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bge 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bge 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_blt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_blt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bne 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bne 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_beq 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_beq 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__inst_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence_i 
        = ((IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
              & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
              & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                 & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ecall 
        = ((IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0) 
           & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ebreak 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
              & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jal;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bgeu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bgeu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bge 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bge;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_blt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_blt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bne 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bne;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_beq 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_beq;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
           | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
              | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)));
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
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v0;
    }
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile__v1) {
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
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
           | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                 | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                    | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                       | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1))))));
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
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
              ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
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
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lbu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lbu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lhu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lhu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__inst_in 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jalr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jalr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_addi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_addi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slti 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slti 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sltiu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltiu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_xori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_andi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_andi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srai 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srai 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1;
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
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_add 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_add 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sub 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sub 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sll 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sll 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srl 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srl 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sra 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sra 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_xor 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xor 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_or 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_or 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_and 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_and 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lbu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lbu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lhu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lhu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jalr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jalr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lui;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_auipc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_addi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_addi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_slti 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slti;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_sltiu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltiu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_xori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_ori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_andi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_andi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_slli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_srli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_srai 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srai;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_add 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_add;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sub 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sub;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sll 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sll;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_srl 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srl;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sra 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sra;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_slt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_xor 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xor;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_or 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_or;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_and 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_and;
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__1(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 = 0;
    SData/*11:0*/ __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6;
    __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 = 0;
    CData/*7:0*/ __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6;
    __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 = 0;
    CData/*3:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt = 0;
    IData/*31:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc = 0;
    IData/*31:0*/ __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out = 0;
    IData/*31:0*/ __Vtemp_hdd9f67c9__0;
    // Body
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 = 0U;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 = 0U;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 = 0U;
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 0U;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 0U;
    __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 0U;
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
    if ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall)))) {
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en = 0U;
    } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lui) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_auipc));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en 
            = (((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb) 
                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh)) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw)) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu));
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
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jal) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en 
            = ((((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne)) 
                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt)) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge)) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s 
            = ((0xfe0U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                          >> 0x14U)) | (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                                                 >> 7U)));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2 
            = (0x1fU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
                        >> 0x14U));
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en 
            = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb) 
                | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh)) 
               | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw));
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
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en;
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
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 
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
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 
                = (0x7fU & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0));
        }
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
            = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall)
                ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc
                : ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                    ? ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write)
                        ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata
                        : ((IData)(4U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc))
                    : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc));
        if (((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)) 
             & (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
            __Vtemp_hdd9f67c9__0 = (((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata 
                                                        >> 7U)))) 
                                         << 8U) | (0xffU 
                                                   & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata))
                                     : (((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                         & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata 
                                                            >> 0xfU)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata))
                                         : (((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                             & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext))
                                             ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata
                                             : (((1U 
                                                  == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                                 & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext)))
                                                 ? 
                                                (0xffU 
                                                 & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata)
                                                 : 
                                                (((2U 
                                                   == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size)) 
                                                  & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext)))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata)
                                                  : 0U)))));
        } else if ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))) {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff = 0U;
            __Vtemp_hdd9f67c9__0 = 0U;
        } else {
            vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff 
                = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff;
            __Vtemp_hdd9f67c9__0 = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff;
        }
        if (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwrite) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error)))) {
            if ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))) {
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata);
                __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 = 1U;
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr);
            } else if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))) {
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata 
                                >> 8U));
                __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 = 1U;
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1 
                    = (0xfffU & ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata);
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr);
            } else if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))) {
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 
                    = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata 
                       >> 0x18U);
                __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 = 1U;
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3 
                    = (0xfffU & ((IData)(3U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata 
                                >> 0x10U));
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4 
                    = (0xfffU & ((IData)(2U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata 
                                >> 8U));
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5 
                    = (0xfffU & ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata);
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr);
            }
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff 
            = (((3U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)) 
                & (0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate)))
                ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata
                : vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff);
        if (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite) 
             & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error)))) {
            if ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))) {
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata);
                __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 = 1U;
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr);
            } else if ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))) {
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                                >> 8U));
                __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 = 1U;
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1 
                    = (0xfffU & ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata);
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr);
            } else if ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))) {
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 
                    = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                       >> 0x18U);
                __Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 = 1U;
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3 
                    = (0xfffU & ((IData)(3U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                                >> 0x10U));
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4 
                    = (0xfffU & ((IData)(2U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 
                    = (0xffU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata 
                                >> 8U));
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5 
                    = (0xfffU & ((IData)(1U) + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr));
                __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 
                    = (0xffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata);
                __Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6 
                    = (0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr);
            }
        }
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans 
            = (((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)) 
                | (4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)))
                ? 2U : 0U);
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state 
            = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata 
            = ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwrite)) 
                      & (~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error))))
                ? ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                   [(0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)]
                    : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                        ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                            [(0xfffU & ((IData)(1U) 
                                        + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                            << 8U) | vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                           [(0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)])
                        : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                            ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                                << 0x18U) | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                                              << 0x10U) 
                                             | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr))] 
                                                 << 8U) 
                                                | vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram
                                                [(0xfffU 
                                                  & vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)])))
                            : 0U))) : 0U);
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
                ? ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                    ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                   [(0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)]
                    : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                        ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                            [(0xfffU & ((IData)(1U) 
                                        + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                            << 8U) | vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                           [(0xfffU & vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)])
                        : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                            ? ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                << 0x18U) | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                              << 0x10U) 
                                             | ((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr))] 
                                                 << 8U) 
                                                | vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram
                                                [(0xfffU 
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
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 = 0U;
        __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff = 0U;
        __Vtemp_hdd9f67c9__0 = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en = 0U;
    }
    __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt 
        = ((1U & ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
                  | (~ (IData)(vlSelf->chip_tb__DOT__itcm_ready))))
            ? 0U : (0xfU & ((4U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                             ? ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle)
                                 ? 1U : (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt))
                             : ((IData)(1U) + (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff 
        = __Vtemp_hdd9f67c9__0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (0U 
                                                   != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (0U 
                                                   == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__flush_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_upper_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_upper_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_b 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_b 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__sext_imm_type_b 
        = (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b) 
                              >> 0xbU)))) << 0xdU) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_j 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_j 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_j 
        = (((- (IData)((1U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j 
                              >> 0x13U)))) << 0x15U) 
           | vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jump_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jump_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_s 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_s 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_u 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_u 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_in 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_i 
        = (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_reg_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_reg_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v0;
    }
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v1;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v2;
    }
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v3;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v4;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v5;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram__v6;
    }
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v0;
    }
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v1;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v2;
    }
    if (__Vdlyvset__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v3;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v4;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v5;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vdlyvdim0__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6] 
            = __Vdlyvval__chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram__v6;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_imm_type_b 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_b;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_imm_type_j 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_j;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_imm_type_s 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_s;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_imm_type_u 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_u;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_reg_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__ifu_idle 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) & (4U 
                                                   == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
        = __Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr_error 
        = (1U & ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                  ? (0xfffU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)
                  : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                      ? (0xffeU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)
                      : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                          ? (0xffcU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)
                          : 1U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real 
        = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
           - (IData)(8U));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_real 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
        = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real 
           + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__sext_imm_type_b);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_haddr;
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__2(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__itcm_ready;
    if (vlSelf->chip_tb__DOT__hrstn) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready = 1U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk 
            = vlSelf->chip_tb__DOT__hclk;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn = 1U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize = 2U;
    } else {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk 
            = vlSelf->chip_tb__DOT__hclk;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn = 0U;
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize = 0U;
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error 
        = (2U < (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__3(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111;
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
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
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
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0) 
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
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset 
        = vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ifu_dec_stall;
}

extern const VlUnpacked<CData/*0:0*/, 256> Vchip_tb__ConstPool__TABLE_h02dcf0d6_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vchip_tb__ConstPool__TABLE_h74d24f31_0;

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__0(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal)
            ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real 
               + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_j)
            : (0xfffffffeU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                              + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_i)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__exu_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__exu_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall;
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
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_upper_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jump_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write 
        = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
            | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)) 
           & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
                 & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
              ? 0xffffffffU : 0U) | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                      ? 0xffffffffU
                                      : 0U)) & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                      ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                                      : 0U) 
                                                    & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                                | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                     ? 0xffffffffU
                                                     : 0U) 
                                                   & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                        ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                        : 0U) 
                                                      & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                          ? 0xffffffffU
                                                          : 0U)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
              ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                              ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                              : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                        ? 3U : 0U))) 
           | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                          ? 3U : 0U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__flush 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__flush 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__flush 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush;
    __Vtableidx2 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state)));
    if (Vchip_tb__ConstPool__TABLE_h02dcf0d6_0[__Vtableidx2]) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate 
            = Vchip_tb__ConstPool__TABLE_h74d24f31_0
            [__Vtableidx2];
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata;
}

VL_INLINE_OPT void Vchip_tb___024root___nba_sequent__TOP__4(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans)) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hburst_error) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hsize_error) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr_error))));
}

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__1(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_h805b10f4_0[__Vtableidx1];
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error 
        = (1U & ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                  ? (0xfffU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                  : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                      ? (0xffeU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                      : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                          ? (0xffcU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                          : 1U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans)) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst_error) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error))));
}

VL_INLINE_OPT void Vchip_tb___024root___nba_comb__TOP__2(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___nba_comb__TOP__2\n"); );
    // Init
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready) 
                     << 9U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en) 
                                << 8U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
                                           << 7U) | 
                                          (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                            << 3U) 
                                           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_h54943851_0[__Vtableidx3];
}

void Vchip_tb___024root___eval_nba(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchip_tb___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vchip_tb___024root___eval_triggers__act(Vchip_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__act(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vchip_tb___024root___timing_resume(Vchip_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__nba(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vchip_tb___024root___eval(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vchip_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vchip_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("chip_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vchip_tb___024root___timing_resume(vlSelf);
                Vchip_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vchip_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("chip_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vchip_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vchip_tb___024root___timing_resume(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vchip_tb___024root___eval_debug_assertions(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
