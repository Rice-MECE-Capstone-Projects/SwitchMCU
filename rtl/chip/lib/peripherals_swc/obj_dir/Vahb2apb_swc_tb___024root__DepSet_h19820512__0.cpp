// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "Vahb2apb_swc_tb__pch.h"
#include "Vahb2apb_swc_tb___024root.h"

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_initial__TOP(Vahb2apb_swc_tb___024root* vlSelf);
VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vahb2apb_swc_tb___024root* vlSelf);
VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vahb2apb_swc_tb___024root* vlSelf);
VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vahb2apb_swc_tb___024root* vlSelf);

void Vahb2apb_swc_tb___024root___eval_initial(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial\n"); );
    // Body
    Vahb2apb_swc_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0 
        = vlSelf->ahb2apb_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0 
        = vlSelf->ahb2apb_swc_tb__DOT__pclk;
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
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
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__4__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__4__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__5__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__5__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__data;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__data = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__14__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__14__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__15__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__15__addr = 0;
    IData/*31:0*/ __Vtask_ahb2apb_swc_tb__DOT__perform_read__16__addr;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__16__addr = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rstn = 0U;
    co_await vlSelf->__VdlySched.delay(0xf0ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xf0ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr = 0x100000U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data = 0x8c4U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__0__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       180);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data = 0xababU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__1__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data = 0xacacU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__2__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       188);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr = 0x100008U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data = 0xadadU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__3__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       192);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__4__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__4__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__5__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__5__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       200);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__6__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       204);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr = 0x10000cU;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__7__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       208);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__addr = 0x100110U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__data = 0x3400U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__8__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__addr = 0x100114U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__data = 0x2000U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__9__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       216);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__addr = 0x10010cU;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__data = 3U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__10__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       220);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__addr = 0x100104U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__data = 0x1abU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__11__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       224);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__addr = 0x100104U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__data = 0x1acU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__12__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__addr = 0x100104U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__data = 0x1adU;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__data;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_write__13__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__wreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__14__addr = 0x100108U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__14__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       236);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__15__addr = 0x100108U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__15__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb80ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       240);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_ahb2apb_swc_tb__DOT__perform_read__16__addr = 0x100108U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = __Vtask_ahb2apb_swc_tb__DOT__perform_read__16__addr;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__rreq = 0U;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                       244);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 246, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x16ULL, 
                                           nullptr, 
                                           "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                           130);
        vlSelf->ahb2apb_swc_tb__DOT__pclk = (1U & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xcULL, 
                                           nullptr, 
                                           "/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 
                                           129);
        vlSelf->ahb2apb_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__hclk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vahb2apb_swc_tb__ConstPool__TABLE_hb0b052cf_0;

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
        = Vahb2apb_swc_tb__ConstPool__TABLE_hb0b052cf_0
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

extern const VlUnpacked<CData/*0:0*/, 64> Vahb2apb_swc_tb__ConstPool__TABLE_h8785a2ee_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__0(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    if (VL_UNLIKELY(vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite)) {
        VL_WRITEF("The data read is: %x\n",32,vlSelf->ahb2apb_swc_tb__DOT__rbuffdata);
    }
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                ? vlSelf->ahb2apb_swc_tb__DOT__hwdata
                : ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))
                    ? vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata
                    : 0U));
        if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
        } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->ahb2apb_swc_tb__DOT__wreq) {
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                    = vlSelf->ahb2apb_swc_tb__DOT__wbuffdata;
                vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr 
                    = vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr;
            } else {
                __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
                if (vlSelf->ahb2apb_swc_tb__DOT__rreq) {
                    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr 
                        = vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr;
                }
            }
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 2U;
        } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                = vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
            vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr 
                = vlSelf->ahb2apb_swc_tb__DOT__haddr;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = vlSelf->ahb2apb_swc_tb__DOT__htrans;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
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
        vlSelf->ahb2apb_swc_tb__DOT__hwdata = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready)
                                                ? vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff
                                                : vlSelf->ahb2apb_swc_tb__DOT__hwdata);
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
    } else {
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__htrans = 0U;
        vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hwdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__hrdata = 0U;
    }
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                ? ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                   && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag))
                : ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__rreq)
                    : ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                       && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag)))));
    __Vtableidx2 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq) 
                     << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag) 
                                << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate) 
                                            << 1U) 
                                           | (IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn)))));
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h8785a2ee_0
        [__Vtableidx2];
    vlSelf->ahb2apb_swc_tb__DOT__hwrite = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                           && ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                               && ((1U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                                                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                    && (IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite)))));
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs)
                      ? (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge))
                      : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge))));
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs)
                      ? (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge))
                      : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge))));
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready)
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag)
                : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly)));
    __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready)
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag)
                : (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly)));
    vlSelf->ahb2apb_swc_tb__DOT__rbuffread = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                              && ((0U 
                                                   != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                  && ((1U 
                                                       == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                      && (IData)(vlSelf->ahb2apb_swc_tb__DOT__rreq))));
    vlSelf->ahb2apb_swc_tb__DOT__wbuffread = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                              && ((0U 
                                                   != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                  && ((1U 
                                                       == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                      && (IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq))));
    vlSelf->ahb2apb_swc_tb__DOT__done = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                         && ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                             & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly) 
                                                | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly))));
    vlSelf->ahb2apb_swc_tb__DOT__resp = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                         && (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                              & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly) 
                                                 | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly))) 
                                             && ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr));
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
        = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
        = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
        = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
    vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                               && ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly)));
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = __Vdly__ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r));
    vlSelf->ahb2apb_swc_tb__DOT__hready = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                           && ((0U 
                                                == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                                               || ((4U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                                                   || (7U 
                                                       == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_swc_tb__ConstPool__TABLE_he9652106_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__1(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 = 0;
    IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3 = 0;
    SData/*15:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff = 0;
    SData/*15:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt = 0;
    CData/*3:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt = 0;
    SData/*15:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt = 0;
    SData/*15:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0;
    SData/*15:0*/ __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = 0;
    CData/*4:0*/ __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = 0;
    // Body
    __Vdly__ahb2apb_swc_tb__DOT__pwdata = vlSelf->ahb2apb_swc_tb__DOT__pwdata;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt;
    __Vdly__ahb2apb_swc_tb__DOT__pwrite = vlSelf->ahb2apb_swc_tb__DOT__pwrite;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__paddr = vlSelf->ahb2apb_swc_tb__DOT__paddr;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__pselx = vlSelf->ahb2apb_swc_tb__DOT__pselx;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full;
    __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__ahb2apb_swc_tb__DOT__pwrite = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                           && ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               && ((1U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                                                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                    && (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
               && ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                   && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
               && ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                   && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm))));
    vlSelf->ahb2apb_swc_tb__DOT__sck = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                        && (1U & ((
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
                                                   >> 1U))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               && ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__tx));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               && ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                   && (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                        & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff)) 
                       | (IData)((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                   >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff)))))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
               && (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready)));
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__pselx = 0U;
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
            __Vdly__ahb2apb_swc_tb__DOT__paddr = vlSelf->ahb2apb_swc_tb__DOT__paddr;
            __Vdly__ahb2apb_swc_tb__DOT__pselx = vlSelf->ahb2apb_swc_tb__DOT__pselx;
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__pselx = 0U;
        }
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt 
            = ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))
                ? (0xfffU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                              == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt))
                              ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt)
                              : ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt))))
                : 0U);
        if ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate))) {
            if (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt) 
                 == ((0xffffU & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR) 
                     - (IData)(1U)))) {
                __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt = 0U;
                __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt 
                    = (0xfU & ((((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt)) 
                                == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits))
                                ? 0U : ((IData)(1U) 
                                        + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt))));
            } else {
                __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt)));
                __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt 
                    = (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt));
            }
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt = 0U;
            __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt = 0U;
        }
        if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate))) {
            if (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt) 
                 == ((0xffffU & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR) 
                     - (IData)(1U)))) {
                __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt = 0U;
                vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt 
                    = (0xfU & ((((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt)) 
                                == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits))
                                ? 0U : ((IData)(1U) 
                                        + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt))));
            } else {
                __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt)));
                vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt 
                    = (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt));
            }
        } else {
            __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt = 0U;
            vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt = 0U;
        }
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt 
            = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr)));
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr)));
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr)));
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr)));
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)));
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3 
            = ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100118U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3);
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR 
            = ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x10010cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR);
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR);
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
            = ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100114U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2);
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)));
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
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
            = ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100110U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__pwdata
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1);
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata 
            = ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata)
                : ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))
                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata)
                    : 0U));
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff 
            = ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate))
                ? ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0))
                    ? (0xfc00U | (0x3ffU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))
                    : ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0))
                        ? (0xf800U | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit) 
                                       << 0xaU) | (0x3ffU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U))))
                        : ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0))
                            ? (0xfe00U | (0x1ffU & 
                                          VL_SHIFTL_III(9,9,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))
                            : (0xfc00U | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit) 
                                           << 9U) | 
                                          (0x1ffU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))))))
                : ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate))
                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff)
                    : 0U));
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (1U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [1U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (2U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [2U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (3U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [3U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (4U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [4U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (5U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [5U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (6U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [6U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (7U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [7U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (8U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [8U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (9U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [9U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0xaU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xaU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0xbU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xbU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0xcU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xcU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0xdU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xdU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0xeU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xeU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & (0xfU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xfU]);
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full 
            = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt) 
                == (0xffffU & VL_SHIFTR_III(16,16,32, 
                                            (0xffffU 
                                             & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR), 1U)))
                ? (((IData)(vlSelf->ahb2apb_swc_tb__DOT__tx) 
                    << 0xfU) | (0x7fffU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                           >> 1U)))
                : (((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate)) 
                    | (2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate)))
                    ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full)
                    : 0U));
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt 
            = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)));
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full)))
                         ? ((IData)(1U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)));
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata 
            = (((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly)) 
                & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))
                ? ((0x80U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                    ? (((IData)(vlSelf->ahb2apb_swc_tb__DOT__mosi) 
                        << 0xfU) | (0x7fffU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata) 
                                               >> 1U)))
                    : ((0xfffeU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata) 
                                   << 1U)) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__mosi)))
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
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (1U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [1U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (2U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [2U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (3U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [3U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (4U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [4U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (5U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [5U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (6U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [6U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (7U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [7U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (8U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [8U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (9U == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [9U]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0xaU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xaU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0xbU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xbU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0xcU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xcU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0xdU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xdU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0xeU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xeU]);
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))) 
                & (0xfU == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))))
                ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata)
                : vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [0xfU]);
    } else {
        __Vdly__ahb2apb_swc_tb__DOT__pwdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt 
            = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__paddr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__pselx = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3 = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
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
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr 
            = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt 
            = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt;
        __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
        __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = 0U;
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
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14 = 0U;
        __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15 = 0U;
    }
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((5U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)) 
               & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate)) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full))) 
                & ((~ (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                       >> 0xaU)) | ((0x200U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                     ? (1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata))
                                     : (~ (1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata)))))) 
               & ((2U == (3U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                >> 0xcU))) ? (3U == 
                                              (3U & 
                                               ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                                >> 0xeU)))
                   : ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                      >> 0xfU))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source));
    vlSelf->ahb2apb_swc_tb__DOT__mosi = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                         && (((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)) 
                                              | (4U 
                                                 == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))) 
                                             && (1U 
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
                                                          - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)))))))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
               & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                & (0x100104U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
               & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r));
    vlSelf->ahb2apb_swc_tb__DOT__tx = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                       && ((1U & (~ 
                                                  ((4U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate)) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))))) 
                                           || (1U & 
                                               ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff) 
                                                >> (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt)))));
    if (vlSelf->ahb2apb_swc_tb__DOT__rstn) {
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata 
            = ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))
                ? (((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                    & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pready))
                    ? ((((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                          ? 0xffffffffU : 0U) & (((1U 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                   ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff
                                                   : 0U) 
                                                 & ((1U 
                                                     & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                     ? 0xffffffffU
                                                     : 0U))) 
                       | (((2U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                            ? 0xffffffffU : 0U) & (
                                                   ((2U 
                                                     & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                     ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff
                                                     : 0U) 
                                                   & ((2U 
                                                       & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                       ? 0xffffffffU
                                                       : 0U))))
                    : vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata)
                : vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata);
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state 
            = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state 
            = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state 
            = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata 
            = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))]
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata 
            = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty)))
                ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram
               [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))]
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata 
            = ((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                 & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full)))
                ? (0xffffU & vlSelf->ahb2apb_swc_tb__DOT__pwdata)
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata 
            = (((((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                    >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)) 
                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite)) 
                 & (0x100104U == vlSelf->ahb2apb_swc_tb__DOT__paddr)) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full)))
                ? (0xffffU & vlSelf->ahb2apb_swc_tb__DOT__pwdata)
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff 
            = ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x100100U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_SR
                : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                     & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                    & (0x100104U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                    ? 0U : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                              & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                             & (0x100108U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                             ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata)
                             : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                                  & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                 & (0x10010cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                 ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR
                                 : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                                      & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                     & (0x100110U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                     ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1
                                     : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                                          & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                         & (0x100114U 
                                            == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                         ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2
                                         : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
                                              & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                             & (0x100118U 
                                                == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                             ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3
                                             : 0U)))))));
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff 
            = ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR
                : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                     & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                    & (0x100004U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                    ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR
                    : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                         & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                        & (0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                        ? 0U : ((((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
                                  & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                                 & (0x10000cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                                 ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata)
                                 : 0U))));
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state 
            = vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata 
            = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty)))
                ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))]
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata 
            = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren) 
                & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty)))
                ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram
               [(0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))]
                : 0U);
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state 
            = vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate;
    } else {
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata = 0U;
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state = 0U;
    }
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)) 
               && (1U & ((~ ((0x100100U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                             | ((0x100104U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                | ((0x100108U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                   | ((0x10010cU == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                      | ((0x100110U 
                                          == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                         | ((0x100114U 
                                             == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                            | (0x100118U 
                                               == vlSelf->ahb2apb_swc_tb__DOT__paddr)))))))) 
                         & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                            >> 1U)))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)) 
               && (1U & ((~ ((0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                             | ((0x100004U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                | ((0x100008U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                   | (0x10000cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))))) 
                         & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx)))));
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
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xaU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xbU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xcU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xdU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xeU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0xfU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata;
    vlSelf->ahb2apb_swc_tb__DOT__pwdata = __Vdly__ahb2apb_swc_tb__DOT__pwdata;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1;
    vlSelf->ahb2apb_swc_tb__DOT__pwrite = __Vdly__ahb2apb_swc_tb__DOT__pwrite;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
        = __Vdly__ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt;
    vlSelf->ahb2apb_swc_tb__DOT__paddr = __Vdly__ahb2apb_swc_tb__DOT__paddr;
    vlSelf->ahb2apb_swc_tb__DOT__pselx = __Vdly__ahb2apb_swc_tb__DOT__pselx;
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__penable = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
                                            && ((0U 
                                                 != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                && ((1U 
                                                     != (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                    && (2U 
                                                        == (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0 
        = ((2U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                  >> 0xbU)) | (1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                     >> 0xaU)));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit 
        = (1U & ((0x200U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                  ? VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata)
                  : (~ VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start 
        = (0xfU & (((2U == (3U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                  >> 0xcU))) ? 2U : 1U) 
                   + ((0x400U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                       ? 1U : 0U)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source 
        = (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                 >> (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                           >> 3U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex 
        = (0xfffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt), 
                                  ((IData)(1U) + (7U 
                                                  & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                                     >> 3U)))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt 
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
                && (0U != (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate))) 
               << 7U) | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full) 
                         << 6U)));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
    vlSelf->ahb2apb_swc_tb__DOT__pready = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                            & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff)) 
                                           | (IData)(
                                                     (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata 
        = (0xffffU & ((0xffffU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                  << (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start))) 
                      >> ((0x1000U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                           ? 7U : 8U)));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits 
        = (0xfU & ((IData)(1U) + (((0x1000U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                    ? 9U : 8U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr 
        = __Vdly__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v0;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v1;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v2;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v3;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v4;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v5;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v6;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v7;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v8;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9U] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v9;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xaU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v10;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xbU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v11;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xcU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v12;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xdU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v13;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xeU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v14;
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0xfU] 
        = __Vdlyvval__ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram__v15;
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
    __Vtableidx4 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                     << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                << 3U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                           << 2U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_he9652106_0
        [__Vtableidx4];
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate 
        = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state))
            ? ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__tx)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly)) 
                & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                   >> 0xdU)) ? 1U : 0U) : ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state))
                                            ? ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt) 
                                                 == 
                                                 ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits) 
                                                  - (IData)(1U))) 
                                                & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt) 
                                                   == 
                                                   ((0xffffU 
                                                     & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR) 
                                                    - (IData)(1U))))
                                                ? 2U
                                                : 1U)
                                            : 0U));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate)));
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
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt))
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
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__rstn) 
           && (2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate)));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate 
        = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
            ? ((1U & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty)) 
                      & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                         >> 0xdU))) ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                      ? 
                                                     ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt) 
                                                        == 
                                                        ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits) 
                                                         - (IData)(1U))) 
                                                       & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt) 
                                                          == 
                                                          ((0xffffU 
                                                            & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR) 
                                                           - (IData)(1U))))
                                                       ? 0U
                                                       : 4U)
                                                      : 0U)))));
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  >> 1U) & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x100108U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? 2U : ((2U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                         ? 1U : 0U));
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = 0U;
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = 1U;
    }
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x10000cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? 2U : ((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                         ? 1U : 0U));
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate 
            = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)
                ? 0U : 1U);
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_swc_tb__ConstPool__TABLE_h9b2e284d_0;

VL_INLINE_OPT void Vahb2apb_swc_tb___024root___nba_sequent__TOP__2(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
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
    __Vtableidx3 = ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr)) 
                     << 6U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite) 
                                << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h9b2e284d_0
        [__Vtableidx3];
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

void Vahb2apb_swc_tb___024root___timing_resume(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vahb2apb_swc_tb___024root___eval_triggers__act(Vahb2apb_swc_tb___024root* vlSelf);

bool Vahb2apb_swc_tb___024root___eval_phase__act(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vahb2apb_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vahb2apb_swc_tb___024root___timing_resume(vlSelf);
        Vahb2apb_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vahb2apb_swc_tb___024root___eval_phase__nba(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vahb2apb_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__nba(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__act(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb2apb_swc_tb___024root___eval(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vahb2apb_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vahb2apb_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/nand/mcu_backup/rtl/chip/lib/peripherals_swc/ahb2apb_swc_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vahb2apb_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vahb2apb_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vahb2apb_swc_tb___024root___eval_debug_assertions(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
