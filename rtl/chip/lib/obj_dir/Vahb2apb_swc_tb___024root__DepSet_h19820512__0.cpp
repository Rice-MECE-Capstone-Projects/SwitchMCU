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
    vlSelf->__Vm_traceActivity[1U] = 1U;
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
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__8__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__8__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__9__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__9__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__10__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__10__addr = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       148);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rstn = 0U;
    co_await vlSelf->__VdlySched.delay(0xf0ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xf0ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr = 0x100000U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data = 0x8c4U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       155);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data = 0xaaaaU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr = 0x100000U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data = 0x8c4U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data = 0xababU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       165);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__data = 0xacacU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__4__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       169);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__data = 0xadadU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__5__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       126);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       173);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       177);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__8__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__8__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       185);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__9__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__9__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__10__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__10__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "peripherals_swc/ahb2apb_swc_tb.v", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "peripherals_swc/ahb2apb_swc_tb.v", 
                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("peripherals_swc/ahb2apb_swc_tb.v", 195, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__1(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x16ULL, 
                                           nullptr, 
                                           "peripherals_swc/ahb2apb_swc_tb.v", 
                                           114);
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
                                           "peripherals_swc/ahb2apb_swc_tb.v", 
                                           113);
        vlSelf->ahb2apb_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__hclk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vahb2apb_swc_tb__ConstPool__TABLE_hae662c23_0;

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
        = Vahb2apb_swc_tb__ConstPool__TABLE_hae662c23_0
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
    // Body
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
        = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = vlSelf->ahb2apb_swc_tb__DOT__haddr;
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge 
        = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge;
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge 
        = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge;
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
        = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
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
            vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
                = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
        } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->ahb2apb_swc_tb__DOT__wreq) {
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                    = vlSelf->ahb2apb_swc_tb__DOT__wbuffdata;
                vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr 
                    = vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr;
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 1U;
            } else {
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
                if (vlSelf->ahb2apb_swc_tb__DOT__rreq) {
                    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr 
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
            vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr 
                = vlSelf->ahb2apb_swc_tb__DOT__haddr;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = vlSelf->ahb2apb_swc_tb__DOT__htrans;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = 0U;
        }
        if ((5U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            if ((6U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
                vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
                    = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
            }
        }
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
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
        vlSelf->ahb2apb_swc_tb__DOT__hrdata = ((7U 
                                                == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                                                ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata
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
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge 
            = (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs)
                      ? (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge))
                      : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge)));
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge 
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
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm;
    } else {
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = 0U;
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hwdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hrdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hwrite = 0U;
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge = 0U;
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__wbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__done = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__resp = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr = 0U;
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
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hready = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_swc_tb__ConstPool__TABLE_h4a0e2aec_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__1(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vdly__ahb2apb_swc_tb__DOT__pselx;
    __Vdly__ahb2apb_swc_tb__DOT__pselx = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__pwdata;
    __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__paddr;
    __Vdly__ahb2apb_swc_tb__DOT__paddr = 0;
    CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__pwrite;
    __Vdly__ahb2apb_swc_tb__DOT__pwrite = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = 0;
    SData/*15:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = 0;
    // Body
    __Vdly__ahb2apb_swc_tb__DOT__pwdata = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
    __Vdly__ahb2apb_swc_tb__DOT__pwrite = vlSelf->ahb2apb_swc_tb__DOT__pwrite;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__pselx = vlSelf->ahb2apb_swc_tb__DOT__pselx;
    __Vdly__ahb2apb_swc_tb__DOT__paddr = vlSelf->ahb2apb_swc_tb__DOT__paddr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        __Vdly__ahb2apb_swc_tb__DOT__pwrite = ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                                                   ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread 
            = ((0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
               & ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread 
            = ((0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
               & ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm)));
        vlSelf->ahb2apb_swc_tb__DOT__sck = (1U & ((
                                                   (4U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state)))
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                                     ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source)
                                                     : 
                                                    (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source)))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                                     ? 
                                                    (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))
                                                     : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source)))
                                                   : 
                                                  (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                                   >> 1U)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pslverr)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready));
        if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__pselx = 0U;
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
            __Vdly__ahb2apb_swc_tb__DOT__pselx = ((
                                                   ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                                    & ((0x100000U 
                                                        <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr) 
                                                       & (0x1000ffU 
                                                          >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr))) 
                                                   | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                                      & ((0x100000U 
                                                          <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr) 
                                                         & (0x1000ffU 
                                                            >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr))))
                                                   ? 1U
                                                   : 
                                                  ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                                     & ((0x100100U 
                                                         <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr) 
                                                        & (0x1001ffU 
                                                           >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr))) 
                                                    | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                                       & ((0x100100U 
                                                           <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr) 
                                                          & (0x1001ffU 
                                                             >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr))))
                                                    ? 2U
                                                    : 0U));
        } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
            __Vdly__ahb2apb_swc_tb__DOT__pselx = vlSelf->ahb2apb_swc_tb__DOT__pselx;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = vlSelf->ahb2apb_swc_tb__DOT__paddr;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__pselx = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
        }
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt 
            = ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))
                ? (0xfffU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                              == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__maxcnt))
                              ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt)
                              : ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt))))
                : 0U);
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
            = ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR);
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)));
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (1U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [1U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (2U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [2U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (3U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [3U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (4U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [4U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (5U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [5U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (6U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [6U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (7U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [7U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (8U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [8U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (9U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [9U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0xaU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xaU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0xbU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xbU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0xcU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xcU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0xdU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xdU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0xeU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xeU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))) 
                & (0xfU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xfU]);
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata 
            = ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata)
                : ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))
                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata)
                    : 0U));
        if (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren) 
             & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)))) {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr)));
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata 
                = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
                [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))];
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr));
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata = 0U;
        }
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)));
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata 
            = (((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r)) 
                & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))
                ? ((0xfffeU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata) 
                               << 1U)) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__mosi))
                : (((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)) 
                    | (5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)))
                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata)
                    : 0U));
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (1U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [1U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (2U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [2U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (3U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [3U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (4U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [4U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (5U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [5U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (6U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [6U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (7U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [7U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (8U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [8U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (9U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [9U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0xaU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xaU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0xbU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xbU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0xcU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xcU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0xdU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xdU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0xeU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xeU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))) 
                & (0xfU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xfU]);
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen 
            = ((5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)) 
               & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full)));
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r 
            = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source;
        vlSelf->ahb2apb_swc_tb__DOT__mosi = (((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)) 
                                              | (4U 
                                                 == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))) 
                                             & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata) 
                                                >> 
                                                (0xfU 
                                                 & ((0x80U 
                                                     & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                                     ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                                      ? 
                                                     ((IData)(0xfU) 
                                                      - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex))
                                                      : 
                                                     ((IData)(7U) 
                                                      - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)))))));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))
                ? (((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                    & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready))
                    ? vlSelf->ahb2apb_swc_tb__DOT__prdata
                    : vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata)
                : vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata);
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state 
            = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata 
            = ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                 & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full)))
                ? (0xffffU & vlSelf->ahb2apb_swc_tb__DOT__pwdata)
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__prdata = ((((1U 
                                                  == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                                                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                & (0x100000U 
                                                   == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR
                                                : (
                                                   (((1U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                                                     & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                    & (0x100004U 
                                                       == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                    ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR
                                                    : 
                                                   ((((1U 
                                                       == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                                                      & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                     & (0x100008U 
                                                        == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                     ? 0U
                                                     : 
                                                    ((((1U 
                                                        == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                                                       & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                                      & (0x10000cU 
                                                         == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                                      ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata)
                                                      : 0U))));
        if (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren) 
             & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty)))) {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr)));
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata 
                = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
                [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))];
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr));
            vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata = 0U;
        }
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state 
            = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
               & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full)));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r;
        vlSelf->ahb2apb_swc_tb__DOT__pslverr = ((1U 
                                                 == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                                                & ((~ 
                                                    ((0x100000U 
                                                      == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                     | ((0x100004U 
                                                         == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                        | ((0x100008U 
                                                            == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                           | (0x10000cU 
                                                              == vlSelf->ahb2apb_swc_tb__DOT__paddr))))) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx)));
        vlSelf->ahb2apb_swc_tb__DOT__pready = (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate));
    } else {
        __Vdly__ahb2apb_swc_tb__DOT__pwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__sck = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__pselx = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata = 0U;
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
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__mosi = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__prdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__pslverr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__pready = 0U;
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
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata;
    vlSelf->ahb2apb_swc_tb__DOT__pwdata = __Vdly__ahb2apb_swc_tb__DOT__pwdata;
    vlSelf->ahb2apb_swc_tb__DOT__pwrite = __Vdly__ahb2apb_swc_tb__DOT__pwrite;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    vlSelf->ahb2apb_swc_tb__DOT__pselx = __Vdly__ahb2apb_swc_tb__DOT__pselx;
    vlSelf->ahb2apb_swc_tb__DOT__paddr = __Vdly__ahb2apb_swc_tb__DOT__paddr;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__penable = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                            & ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source 
        = (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                 >> (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                           >> 3U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex 
        = ((0xbU >= ((IData)(1U) + (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                          >> 3U))))
            ? (0xfffU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                         >> ((IData)(1U) + (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                                  >> 3U)))))
            : 0U);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__maxcnt 
        = (0xfffU & ((((IData)(0x10U) << (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                                >> 3U))) 
                      << (1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                >> 0xbU))) - (IData)(1U)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
        = ((0xfffffffcU & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR) 
           | ((2U & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)) 
                     << 1U)) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
        = ((0xffffff3fU & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR) 
           | ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                & (0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))) 
               << 7U) | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full) 
                         << 6U)));
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
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xaU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xbU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xcU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xdU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xeU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xfU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    __Vtableidx3 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                     << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                << 3U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                           << 2U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h4a0e2aec_0
        [__Vtableidx3];
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate 
        = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
            ? ((1U & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)) 
                      & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                         >> 6U))) ? 1U : 0U) : ((1U 
                                                 == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                    ? 
                                                   (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__maxcnt))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                     ? 
                                                    ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)
                                                      ? 0U
                                                      : 1U)
                                                     : 0U))))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           & (2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr));
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x10000cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? 2U : ((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                         ? 1U : 0U));
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 0U;
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_swc_tb__ConstPool__TABLE_h8085905a_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__2(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
        = vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr 
        = vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge 
        = vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge;
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge 
        = vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge;
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        if ((5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr 
                = vlSelf->ahb2apb_swc_tb__DOT__haddr;
        } else if ((6U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr = 0U;
        }
    } else {
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr = 0U;
    }
    vlSelf->ahb2apb_swc_tb__DOT__haddr = vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr;
    __Vtableidx2 = ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr)) 
                     << 6U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite) 
                                << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h8085905a_0
        [__Vtableidx2];
}

void Vahb2apb_swc_tb___024root___eval_nba(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
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
                    VL_FATAL_MT("peripherals_swc/ahb2apb_swc_tb.v", 2, "", "Active region did not converge.");
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
                VL_FATAL_MT("peripherals_swc/ahb2apb_swc_tb.v", 2, "", "NBA region did not converge.");
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
