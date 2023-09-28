// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_swc_tb__Syms.h"
#include "Vahb2apb_swc_tb___024root.h"

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_initial__TOP(Vahb2apb_swc_tb___024root* vlSelf);
VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__0(Vahb2apb_swc_tb___024root* vlSelf);
VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__1(Vahb2apb_swc_tb___024root* vlSelf);
VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__2(Vahb2apb_swc_tb___024root* vlSelf);

void Vahb2apb_swc_tb___024root___eval_initial(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial\n"); );
    // Body
    Vahb2apb_swc_tb___024root___eval_initial__TOP(vlSelf);
    Vahb2apb_swc_tb___024root___eval_initial__TOP__0(vlSelf);
    Vahb2apb_swc_tb___024root___eval_initial__TOP__1(vlSelf);
    Vahb2apb_swc_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0 
        = vlSelf->ahb2apb_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0 
        = vlSelf->ahb2apb_swc_tb__DOT__pclk;
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__0(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__addr = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       125);
    vlSelf->ahb2apb_swc_tb__DOT__rstn = 0U;
    co_await vlSelf->__VdlySched.delay(0xf0ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       127);
    vlSelf->ahb2apb_swc_tb__DOT__rstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xf0ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       129);
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr = 0x100000U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data = 0x10U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       118);
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1e0ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       132);
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data = 0x12U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       118);
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1e0ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       135);
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data = 0x16U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       118);
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1e0ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       138);
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data = 0x20U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       118);
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1e0ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       141);
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__data = 0x24U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       118);
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "ahb2apb_swc_tb.v", 
                                       144);
    VL_FINISH_MT("ahb2apb_swc_tb.v", 155, "");
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__1(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x16ULL, 
                                           nullptr, 
                                           "ahb2apb_swc_tb.v", 
                                           106);
        vlSelf->ahb2apb_swc_tb__DOT__pclk = (1U & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__2(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xcULL, 
                                           nullptr, 
                                           "ahb2apb_swc_tb.v", 
                                           105);
        vlSelf->ahb2apb_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__hclk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vahb2apb_swc_tb__ConstPool__TABLE_h7b6f35a3_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___act_sequent__TOP__0(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                     << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__rreq) 
                                << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                                            << 2U) 
                                           | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state)))));
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h7b6f35a3_0
        [__Vtableidx1];
}

void Vahb2apb_swc_tb___024root___eval_act(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__0(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__pwdata;
    __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__paddr;
    __Vdly__ahb2apb_swc_tb__DOT__paddr = 0;
    CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__pwrite;
    __Vdly__ahb2apb_swc_tb__DOT__pwrite = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0;
    IData/*31:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0;
    // Body
    __Vdly__ahb2apb_swc_tb__DOT__pwrite = vlSelf->ahb2apb_swc_tb__DOT__pwrite;
    __Vdly__ahb2apb_swc_tb__DOT__pwdata = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__paddr = vlSelf->ahb2apb_swc_tb__DOT__paddr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter 
            = ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate))
                ? (0x7ffU & ((0xfU == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter))
                              ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter)
                              : ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter))))
                : 0U);
        if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
        } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) {
                __Vdly__ahb2apb_swc_tb__DOT__pwdata 
                    = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
                __Vdly__ahb2apb_swc_tb__DOT__paddr 
                    = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
            } else {
                __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
                __Vdly__ahb2apb_swc_tb__DOT__paddr 
                    = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm)
                        ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr
                        : 0U);
            }
        } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = vlSelf->ahb2apb_swc_tb__DOT__paddr;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
        }
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100004U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR);
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR);
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_wdata 
            = ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_wdata);
        if (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__ren) 
             & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty)))) {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr)));
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata 
                = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
                [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))];
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr));
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata = 0U;
        }
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)));
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (1U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [1U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (2U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [2U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (3U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [3U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (4U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [4U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (5U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [5U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (6U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [6U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (7U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [7U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (8U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [8U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (9U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [9U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0xaU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xaU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0xbU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xbU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0xcU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xcU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0xdU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xdU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0xeU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xeU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full))) 
                & (0xfU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xfU]);
        if ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
               & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
              & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
             & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full)))) {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR 
                = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata 
                = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR 
                = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR;
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata = 0U;
        }
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))
                ? (((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                    & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready))
                    ? vlSelf->ahb2apb_swc_tb__DOT__prdata
                    : 0U) : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__prdata = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                & (0x100000U 
                                                   == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR
                                                : (
                                                   (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                                     & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                    & (0x100004U 
                                                       == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                    ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR
                                                    : 
                                                   ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                                      & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                     & (0x100008U 
                                                        == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                     ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR
                                                     : 0U)));
        __Vdly__ahb2apb_swc_tb__DOT__pwrite = ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                                                   ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread 
            = ((0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
               & ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread 
            = ((0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
               & ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready)));
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
               & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r;
    } else {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR = 2U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_wdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__prdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__pwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr = 0U;
    }
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xaU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xbU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xcU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xdU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xeU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xfU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    vlSelf->ahb2apb_swc_tb__DOT__pwdata = __Vdly__ahb2apb_swc_tb__DOT__pwdata;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR;
    vlSelf->ahb2apb_swc_tb__DOT__paddr = __Vdly__ahb2apb_swc_tb__DOT__paddr;
    vlSelf->ahb2apb_swc_tb__DOT__pwrite = __Vdly__ahb2apb_swc_tb__DOT__pwrite;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__penable = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                            & ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate 
            = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty)
                ? 0U : 1U);
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = 2U;
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = 4U;
    } else if ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate 
            = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty)
                ? ((0xfU == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter))
                    ? 0U : 4U) : 1U);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_swc_tb__ConstPool__TABLE_h2dc6e503_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__1(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__haddr;
    __Vdly__ahb2apb_swc_tb__DOT__haddr = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0;
    CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0;
    CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly = 0;
    CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = 0;
    CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
    __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
    __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr = 0;
    // Body
    __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
        = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
    __Vdly__ahb2apb_swc_tb__DOT__haddr = vlSelf->ahb2apb_swc_tb__DOT__haddr;
    __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
        = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                ? vlSelf->ahb2apb_swc_tb__DOT__hwdata
                : ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                    ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata
                    : 0U));
        if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
                = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag));
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
                = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
        } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->ahb2apb_swc_tb__DOT__wreq) {
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                    = vlSelf->ahb2apb_swc_tb__DOT__wbuffdata;
                __Vdly__ahb2apb_swc_tb__DOT__haddr 
                    = vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr;
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 1U;
            } else {
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
                if (vlSelf->ahb2apb_swc_tb__DOT__rreq) {
                    __Vdly__ahb2apb_swc_tb__DOT__haddr 
                        = vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr;
                }
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0U;
            }
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 2U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
                = vlSelf->ahb2apb_swc_tb__DOT__rreq;
        } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
            __Vdly__ahb2apb_swc_tb__DOT__haddr = vlSelf->ahb2apb_swc_tb__DOT__haddr;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = vlSelf->ahb2apb_swc_tb__DOT__htrans;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = 0U;
        }
        if ((5U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            if ((6U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
                __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
                    = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
            }
        }
        __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
            = ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                ? vlSelf->ahb2apb_swc_tb__DOT__haddr
                : ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                    ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr
                    : ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                        ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr
                        : 0U)));
        if (vlSelf->ahb2apb_swc_tb__DOT__hready) {
            vlSelf->ahb2apb_swc_tb__DOT__hwdata = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        } else {
            vlSelf->ahb2apb_swc_tb__DOT__hwdata = vlSelf->ahb2apb_swc_tb__DOT__hwdata;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
        }
        vlSelf->ahb2apb_swc_tb__DOT__rbuffdata = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly))
                                                   ? vlSelf->ahb2apb_swc_tb__DOT__hrdata
                                                   : vlSelf->ahb2apb_swc_tb__DOT__rbuffdata);
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate;
        if ((5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr 
                = vlSelf->ahb2apb_swc_tb__DOT__haddr;
        } else if ((6U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr = 0U;
        }
        vlSelf->ahb2apb_swc_tb__DOT__hrdata = ((7U 
                                                == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                                                ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata
                                                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__hwrite = ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                                                   ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite))));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge 
            = (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs)
                      ? (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge))
                      : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge 
            = (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs)
                      ? (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge))
                      : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge)));
        vlSelf->ahb2apb_swc_tb__DOT__rbuffread = ((0U 
                                                   != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                     & (IData)(vlSelf->ahb2apb_swc_tb__DOT__rreq)));
        vlSelf->ahb2apb_swc_tb__DOT__wbuffread = ((0U 
                                                   != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                     & (IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq)));
        vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly));
        vlSelf->ahb2apb_swc_tb__DOT__done = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                             & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly) 
                                                | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly)));
        vlSelf->ahb2apb_swc_tb__DOT__resp = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                              & (IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp)) 
                                             & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly) 
                                                | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
            = __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
        vlSelf->ahb2apb_swc_tb__DOT__haddr = __Vdly__ahb2apb_swc_tb__DOT__haddr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs 
            = (5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs 
            = (2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate));
        vlSelf->ahb2apb_swc_tb__DOT__hready = ((0U 
                                                == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                                               | ((4U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                                                  | (7U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r;
    } else {
        __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hwdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hrdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__wbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__done = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__resp = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
            = __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
            = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
        vlSelf->ahb2apb_swc_tb__DOT__haddr = __Vdly__ahb2apb_swc_tb__DOT__haddr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hready = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr = 0U;
    }
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
        = __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
    __Vtableidx2 = ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr)) 
                     << 6U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite) 
                                << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h2dc6e503_0
        [__Vtableidx2];
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_swc_tb__ConstPool__TABLE_hf61d7ca7_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__2(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
              & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready)));
    vlSelf->ahb2apb_swc_tb__DOT__pready = (1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx));
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__pselx = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                                                    ? 1U
                                                    : 0U)));
    } else {
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__pselx = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                     << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                << 3U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                           << 2U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_hf61d7ca7_0
        [__Vtableidx3];
}

void Vahb2apb_swc_tb___024root___eval_nba(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vahb2apb_swc_tb___024root___eval_triggers__act(Vahb2apb_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__act(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vahb2apb_swc_tb___024root___timing_resume(Vahb2apb_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__nba(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb2apb_swc_tb___024root___eval(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval\n"); );
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
            Vahb2apb_swc_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vahb2apb_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ahb2apb_swc_tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vahb2apb_swc_tb___024root___timing_resume(vlSelf);
                Vahb2apb_swc_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vahb2apb_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ahb2apb_swc_tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vahb2apb_swc_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vahb2apb_swc_tb___024root___timing_resume(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vahb2apb_swc_tb___024root___eval_debug_assertions(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
