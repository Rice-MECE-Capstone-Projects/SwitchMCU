// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyncfifo_swc_tb.h for the primary calling header

#include "Vsyncfifo_swc_tb__pch.h"
#include "Vsyncfifo_swc_tb___024root.h"

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_initial__TOP(Vsyncfifo_swc_tb___024root* vlSelf);
VlCoroutine Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vsyncfifo_swc_tb___024root* vlSelf);
VlCoroutine Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vsyncfifo_swc_tb___024root* vlSelf);
VlCoroutine Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vsyncfifo_swc_tb___024root* vlSelf);

void Vsyncfifo_swc_tb___024root___eval_initial(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_initial\n"); );
    // Body
    Vsyncfifo_swc_tb___024root___eval_initial__TOP(vlSelf);
    Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__clk__0 
        = vlSelf->syncfifo_swc_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__rstn__0 
        = vlSelf->syncfifo_swc_tb__DOT__rstn;
}

VL_INLINE_OPT VlCoroutine Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->syncfifo_swc_tb__DOT__rstn = 0U;
    vlSelf->syncfifo_swc_tb__DOT__wen = 0U;
    vlSelf->syncfifo_swc_tb__DOT__ren = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "syncfifo_swc_tb.v", 
                                       42);
    vlSelf->syncfifo_swc_tb__DOT__rstn = 1U;
    vlSelf->syncfifo_swc_tb__DOT__wen = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "syncfifo_swc_tb.v", 
                                       45);
    vlSelf->syncfifo_swc_tb__DOT__wen = 0U;
    vlSelf->syncfifo_swc_tb__DOT__ren = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "syncfifo_swc_tb.v", 
                                       48);
    vlSelf->syncfifo_swc_tb__DOT__ren = 0U;
    VL_FINISH_MT("syncfifo_swc_tb.v", 50, "");
}

VL_INLINE_OPT VlCoroutine Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "syncfifo_swc_tb.v", 
                                           27);
        vlSelf->syncfifo_swc_tb__DOT__clk = (1U & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__clk)));
    }
}

void Vsyncfifo_swc_tb___024root___eval_act(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_act\n"); );
}

void Vsyncfifo_swc_tb___024root___nba_sequent__TOP__0(Vsyncfifo_swc_tb___024root* vlSelf);
void Vsyncfifo_swc_tb___024root___nba_sequent__TOP__1(Vsyncfifo_swc_tb___024root* vlSelf);
void Vsyncfifo_swc_tb___024root___nba_sequent__TOP__2(Vsyncfifo_swc_tb___024root* vlSelf);

void Vsyncfifo_swc_tb___024root___eval_nba(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsyncfifo_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsyncfifo_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsyncfifo_swc_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vsyncfifo_swc_tb___024root___nba_sequent__TOP__0(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v0;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v1;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v2;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v3;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v4;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v5;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v6;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v7;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v8;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v9;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v10;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v11;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v12;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v13;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v14;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v15;
    __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v15 = 0;
    CData/*4:0*/ __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr;
    __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr = 0;
    CData/*4:0*/ __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr = 0;
    // Body
    __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr 
        = vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr;
    __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr 
        = vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr;
    if (vlSelf->syncfifo_swc_tb__DOT__rstn) {
        if (((IData)(vlSelf->syncfifo_swc_tb__DOT__ren) 
             & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__empty)))) {
            __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr)));
            vlSelf->syncfifo_swc_tb__DOT__rdata = vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
                [(0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))];
        } else {
            __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr 
                = (0x1fU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr));
            vlSelf->syncfifo_swc_tb__DOT__rdata = 0U;
        }
        __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr 
            = (0x1fU & (((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                         & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full)))
                         ? ((IData)(1U) + (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))
                         : (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr)));
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v0 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v1 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (1U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [1U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v2 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (2U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [2U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v3 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (3U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [3U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v4 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (4U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [4U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v5 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (5U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [5U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v6 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (6U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [6U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v7 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (7U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [7U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v8 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (8U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [8U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v9 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (9U == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [9U]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v10 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0xaU == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0xaU]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v11 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0xbU == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0xbU]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v12 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0xcU == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0xcU]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v13 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0xdU == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0xdU]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v14 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0xeU == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0xeU]);
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v15 
            = ((((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                 & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full))) 
                & (0xfU == (0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))))
                ? vlSelf->syncfifo_swc_tb__DOT__wdata
                : vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram
               [0xfU]);
    } else {
        __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr = 0U;
        __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v0 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v1 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v2 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v3 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v4 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v5 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v6 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v7 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v8 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v9 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v10 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v11 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v12 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v13 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v14 = 0U;
        __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v15 = 0U;
        vlSelf->syncfifo_swc_tb__DOT__rdata = 0U;
    }
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr 
        = __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr 
        = __Vdly__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v0;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[1U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v1;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[2U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v2;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[3U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v3;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[4U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v4;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[5U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v5;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[6U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v6;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[7U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v7;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[8U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v8;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[9U] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v9;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0xaU] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v10;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0xbU] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v11;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0xcU] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v12;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0xdU] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v13;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0xeU] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v14;
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0xfU] 
        = __VdlyVal__syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram__v15;
    vlSelf->syncfifo_swc_tb__DOT__empty = ((IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr) 
                                           == (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr));
}

VL_INLINE_OPT void Vsyncfifo_swc_tb___024root___nba_sequent__TOP__1(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->syncfifo_swc_tb__DOT__wdata = ((IData)(vlSelf->syncfifo_swc_tb__DOT__rstn)
                                            ? (((IData)(vlSelf->syncfifo_swc_tb__DOT__wen) 
                                                & (~ (IData)(vlSelf->syncfifo_swc_tb__DOT__full)))
                                                ? ((IData)(1U) 
                                                   + vlSelf->syncfifo_swc_tb__DOT__wdata)
                                                : vlSelf->syncfifo_swc_tb__DOT__wdata)
                                            : 0U);
}

VL_INLINE_OPT void Vsyncfifo_swc_tb___024root___nba_sequent__TOP__2(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->syncfifo_swc_tb__DOT__full = (((0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr)) 
                                           == (0xfU 
                                               & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))) 
                                          & ((1U & 
                                              ((IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr) 
                                               >> 4U)) 
                                             != (1U 
                                                 & ((IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr) 
                                                    >> 4U))));
}

void Vsyncfifo_swc_tb___024root___timing_resume(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vsyncfifo_swc_tb___024root___eval_triggers__act(Vsyncfifo_swc_tb___024root* vlSelf);

bool Vsyncfifo_swc_tb___024root___eval_phase__act(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsyncfifo_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsyncfifo_swc_tb___024root___timing_resume(vlSelf);
        Vsyncfifo_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsyncfifo_swc_tb___024root___eval_phase__nba(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsyncfifo_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__nba(Vsyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__act(Vsyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsyncfifo_swc_tb___024root___eval(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsyncfifo_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("syncfifo_swc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsyncfifo_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("syncfifo_swc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsyncfifo_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsyncfifo_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsyncfifo_swc_tb___024root___eval_debug_assertions(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
