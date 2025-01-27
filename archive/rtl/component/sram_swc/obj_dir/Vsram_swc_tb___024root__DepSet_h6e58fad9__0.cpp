// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsram_swc_tb__Syms.h"
#include "Vsram_swc_tb___024root.h"

VlCoroutine Vsram_swc_tb___024root___eval_initial__TOP__0(Vsram_swc_tb___024root* vlSelf);
VlCoroutine Vsram_swc_tb___024root___eval_initial__TOP__1(Vsram_swc_tb___024root* vlSelf);
VlCoroutine Vsram_swc_tb___024root___eval_initial__TOP__2(Vsram_swc_tb___024root* vlSelf);

void Vsram_swc_tb___024root___eval_initial(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_initial\n"); );
    // Body
    Vsram_swc_tb___024root___eval_initial__TOP__0(vlSelf);
    Vsram_swc_tb___024root___eval_initial__TOP__1(vlSelf);
    Vsram_swc_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__sram_swc_tb__DOT__clk__0 
        = vlSelf->sram_swc_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vsram_swc_tb___024root___eval_initial__TOP__0(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->sram_swc_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "sram_swc_tb.v", 
                                           31);
        vlSelf->sram_swc_tb__DOT__clk = (1U & (~ (IData)(vlSelf->sram_swc_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vsram_swc_tb___024root___eval_initial__TOP__2(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x11111111U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       45);
    vlSelf->sram_swc_tb__DOT__addr = 1U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x22222222U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       46);
    vlSelf->sram_swc_tb__DOT__addr = 2U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x33333333U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       47);
    vlSelf->sram_swc_tb__DOT__addr = 3U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x44444444U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       48);
    vlSelf->sram_swc_tb__DOT__addr = 4U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x55555555U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       49);
    vlSelf->sram_swc_tb__DOT__addr = 5U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x66666666U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       50);
    vlSelf->sram_swc_tb__DOT__addr = 6U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x77777777U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       51);
    vlSelf->sram_swc_tb__DOT__addr = 7U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x88888888U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       52);
    vlSelf->sram_swc_tb__DOT__addr = 8U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x99999999U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       53);
    vlSelf->sram_swc_tb__DOT__addr = 9U;
    vlSelf->sram_swc_tb__DOT__data_in = 0xaaaaaaaaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       54);
    vlSelf->sram_swc_tb__DOT__addr = 0xaU;
    vlSelf->sram_swc_tb__DOT__data_in = 0xbbbbbbbbU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       55);
    vlSelf->sram_swc_tb__DOT__addr = 0xbU;
    vlSelf->sram_swc_tb__DOT__data_in = 0xccccccccU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       56);
    vlSelf->sram_swc_tb__DOT__addr = 0xcU;
    vlSelf->sram_swc_tb__DOT__data_in = 0xddddddddU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       57);
    vlSelf->sram_swc_tb__DOT__addr = 0xdU;
    vlSelf->sram_swc_tb__DOT__data_in = 0xeeeeeeeeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       58);
    vlSelf->sram_swc_tb__DOT__addr = 0xeU;
    vlSelf->sram_swc_tb__DOT__data_in = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       59);
    vlSelf->sram_swc_tb__DOT__addr = 0xfU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x10101010U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       60);
    vlSelf->sram_swc_tb__DOT__addr = 0x10U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x11111111U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       61);
    vlSelf->sram_swc_tb__DOT__addr = 0x11U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x12121212U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       62);
    vlSelf->sram_swc_tb__DOT__addr = 0x12U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x13131313U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       63);
    vlSelf->sram_swc_tb__DOT__addr = 0x13U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x14141414U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       64);
    vlSelf->sram_swc_tb__DOT__addr = 0x14U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x15151515U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       65);
    vlSelf->sram_swc_tb__DOT__addr = 0x15U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x16161616U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       66);
    vlSelf->sram_swc_tb__DOT__addr = 0x16U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x17171717U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       67);
    vlSelf->sram_swc_tb__DOT__addr = 0x17U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x18181818U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       68);
    vlSelf->sram_swc_tb__DOT__addr = 0x18U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x19191919U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       69);
    vlSelf->sram_swc_tb__DOT__addr = 0x19U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x1a1a1a1aU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       70);
    vlSelf->sram_swc_tb__DOT__addr = 0x1aU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x1b1b1b1bU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       71);
    vlSelf->sram_swc_tb__DOT__addr = 0x1bU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x1c1c1c1cU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       72);
    vlSelf->sram_swc_tb__DOT__addr = 0x1cU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x1d1d1d1dU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       73);
    vlSelf->sram_swc_tb__DOT__addr = 0x1dU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x1e1e1e1eU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       74);
    vlSelf->sram_swc_tb__DOT__addr = 0x1eU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x1f1f1f1fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       75);
    vlSelf->sram_swc_tb__DOT__addr = 0x1fU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x20202020U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       76);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       80);
    vlSelf->sram_swc_tb__DOT__addr = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       81);
    vlSelf->sram_swc_tb__DOT__addr = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       82);
    vlSelf->sram_swc_tb__DOT__addr = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       83);
    vlSelf->sram_swc_tb__DOT__addr = 4U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       84);
    vlSelf->sram_swc_tb__DOT__addr = 5U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       85);
    vlSelf->sram_swc_tb__DOT__addr = 6U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       86);
    vlSelf->sram_swc_tb__DOT__addr = 7U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       87);
    vlSelf->sram_swc_tb__DOT__addr = 8U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       88);
    vlSelf->sram_swc_tb__DOT__addr = 9U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       89);
    vlSelf->sram_swc_tb__DOT__addr = 0xaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       90);
    vlSelf->sram_swc_tb__DOT__addr = 0xbU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       91);
    vlSelf->sram_swc_tb__DOT__addr = 0xcU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       92);
    vlSelf->sram_swc_tb__DOT__addr = 0xdU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       93);
    vlSelf->sram_swc_tb__DOT__addr = 0xeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       94);
    vlSelf->sram_swc_tb__DOT__addr = 0xfU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       95);
    vlSelf->sram_swc_tb__DOT__addr = 0x10U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       96);
    vlSelf->sram_swc_tb__DOT__addr = 0x11U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       97);
    vlSelf->sram_swc_tb__DOT__addr = 0x12U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       98);
    vlSelf->sram_swc_tb__DOT__addr = 0x13U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       99);
    vlSelf->sram_swc_tb__DOT__addr = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       100);
    vlSelf->sram_swc_tb__DOT__addr = 0x15U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       101);
    vlSelf->sram_swc_tb__DOT__addr = 0x16U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       102);
    vlSelf->sram_swc_tb__DOT__addr = 0x17U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       103);
    vlSelf->sram_swc_tb__DOT__addr = 0x18U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       104);
    vlSelf->sram_swc_tb__DOT__addr = 0x19U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       105);
    vlSelf->sram_swc_tb__DOT__addr = 0x1aU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       106);
    vlSelf->sram_swc_tb__DOT__addr = 0x1bU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       107);
    vlSelf->sram_swc_tb__DOT__addr = 0x1cU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       108);
    vlSelf->sram_swc_tb__DOT__addr = 0x1dU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       109);
    vlSelf->sram_swc_tb__DOT__addr = 0x1eU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       110);
    vlSelf->sram_swc_tb__DOT__addr = 0x1fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       111);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x20U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x21212121U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       114);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x20U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       114);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x21U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x22222222U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       115);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x21U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       115);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x22U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x23232323U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       116);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x22U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       116);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x23U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x24242424U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       117);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x23U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       117);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x24U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x25252525U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       118);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x24U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       118);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x25U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x26262626U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       119);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x25U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       119);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x26U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x27272727U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       120);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x26U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       120);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x27U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x28282828U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       121);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x27U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       121);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x28U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x29292929U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       122);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x28U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       122);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x29U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x2a2a2a2aU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       123);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x29U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       123);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2aU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x2b2b2b2bU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       124);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2aU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       124);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2bU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x2c2c2c2cU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       125);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2bU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       125);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2cU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x2d2d2d2dU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       126);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2cU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       126);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2dU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x2e2e2e2eU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       127);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2dU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       127);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2eU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x2f2f2f2fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       128);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2eU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       128);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2fU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x30303030U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       129);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x2fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       129);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x30U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x31313131U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       130);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x30U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       130);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x31U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x32323232U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       131);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x31U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       131);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x32U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x33333333U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       132);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x32U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       132);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x33U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x34343434U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       133);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x33U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       133);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x34U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x35353535U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       134);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x34U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       134);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x35U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x36363636U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       135);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x35U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       135);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x36U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x37373737U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       136);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x36U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       136);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x37U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x38383838U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       137);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x37U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       137);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x38U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x39393939U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       138);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x38U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       138);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x39U;
    vlSelf->sram_swc_tb__DOT__data_in = 0x3a3a3a3aU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       139);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x39U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       139);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3aU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x3b3b3b3bU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       140);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3aU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       140);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3bU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x3c3c3c3cU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       141);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3bU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       141);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3cU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x3d3d3d3dU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       142);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3cU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       142);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3dU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x3e3e3e3eU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       143);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3dU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       143);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3eU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x3f3f3f3fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       144);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3eU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       144);
    vlSelf->sram_swc_tb__DOT__we = 1U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3fU;
    vlSelf->sram_swc_tb__DOT__data_in = 0x40404040U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       145);
    vlSelf->sram_swc_tb__DOT__we = 0U;
    vlSelf->sram_swc_tb__DOT__addr = 0x3fU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       145);
}

void Vsram_swc_tb___024root___eval_act(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsram_swc_tb___024root___nba_sequent__TOP__0(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0;
    __Vdlyvdim0__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0;
    __Vdlyvval__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0;
    __Vdlyvset__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 = 0;
    // Body
    __Vdlyvset__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 = 0U;
    if (vlSelf->sram_swc_tb__DOT__we) {
        if (vlSelf->sram_swc_tb__DOT__we) {
            __Vdlyvval__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 
                = vlSelf->sram_swc_tb__DOT__data_in;
            __Vdlyvset__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 = 1U;
            __Vdlyvdim0__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0 
                = vlSelf->sram_swc_tb__DOT__addr;
        }
    }
    if ((1U & (~ (IData)(vlSelf->sram_swc_tb__DOT__we)))) {
        vlSelf->sram_swc_tb__DOT__data_out = vlSelf->sram_swc_tb__DOT__sram_instance__DOT__mem_array
            [vlSelf->sram_swc_tb__DOT__addr];
    }
    if (__Vdlyvset__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0) {
        vlSelf->sram_swc_tb__DOT__sram_instance__DOT__mem_array[__Vdlyvdim0__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0] 
            = __Vdlyvval__sram_swc_tb__DOT__sram_instance__DOT__mem_array__v0;
    }
}

void Vsram_swc_tb___024root___eval_nba(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsram_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vsram_swc_tb___024root___eval_triggers__act(Vsram_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram_swc_tb___024root___dump_triggers__act(Vsram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsram_swc_tb___024root___timing_resume(Vsram_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram_swc_tb___024root___dump_triggers__nba(Vsram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsram_swc_tb___024root___eval(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            Vsram_swc_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsram_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sram_swc_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsram_swc_tb___024root___timing_resume(vlSelf);
                Vsram_swc_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsram_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sram_swc_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsram_swc_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vsram_swc_tb___024root___timing_resume(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vsram_swc_tb___024root___eval_debug_assertions(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
