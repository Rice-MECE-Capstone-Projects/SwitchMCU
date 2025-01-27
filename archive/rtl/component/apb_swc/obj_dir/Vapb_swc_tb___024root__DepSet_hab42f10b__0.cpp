// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_swc_tb.h for the primary calling header

#include "Vapb_swc_tb__pch.h"
#include "Vapb_swc_tb___024root.h"

VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vapb_swc_tb___024root* vlSelf);
VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vapb_swc_tb___024root* vlSelf);
VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vapb_swc_tb___024root* vlSelf);

void Vapb_swc_tb___024root___eval_initial(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__apb_swc_tb__DOT__pclk__0 
        = vlSelf->apb_swc_tb__DOT__pclk;
}

VL_INLINE_OPT VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__prstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 1U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0x10U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0x100000U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0U;
    vlSelf->apb_swc_tb__DOT__wreq = 1U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0x12U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0x100004U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0U;
    vlSelf->apb_swc_tb__DOT__rreq = 1U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0x100000U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 0U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0U;
    vlSelf->apb_swc_tb__DOT__rreq = 1U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0x100004U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 0U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 1U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0x14U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0x100008U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 1U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0x100008U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 0U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "apb_swc_tb.v", 
                                           62);
        vlSelf->apb_swc_tb__DOT__pclk = (1U & (~ (IData)(vlSelf->apb_swc_tb__DOT__pclk)));
    }
}

void Vapb_swc_tb___024root___act_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf);

void Vapb_swc_tb___024root___eval_act(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vapb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vapb_swc_tb__ConstPool__TABLE_hb770ac03_0;

VL_INLINE_OPT void Vapb_swc_tb___024root___act_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->apb_swc_tb__DOT__pready) 
                     << 4U) | (((IData)(vlSelf->apb_swc_tb__DOT__rreq) 
                                << 3U) | (((IData)(vlSelf->apb_swc_tb__DOT__wreq) 
                                           << 2U) | (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state))));
    vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate 
        = Vapb_swc_tb__ConstPool__TABLE_hb770ac03_0
        [__Vtableidx1];
}

void Vapb_swc_tb___024root___nba_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf);

void Vapb_swc_tb___024root___eval_nba(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vapb_swc_tb___024root___nba_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__apb_swc_tb__DOT__pwdata;
    __Vdly__apb_swc_tb__DOT__pwdata = 0;
    IData/*31:0*/ __Vdly__apb_swc_tb__DOT__paddr;
    __Vdly__apb_swc_tb__DOT__paddr = 0;
    CData/*0:0*/ __Vdly__apb_swc_tb__DOT__pwrite;
    __Vdly__apb_swc_tb__DOT__pwrite = 0;
    IData/*31:0*/ __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR;
    __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR = 0;
    IData/*31:0*/ __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR;
    __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR = 0;
    IData/*31:0*/ __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR;
    __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR = 0;
    // Body
    __Vdly__apb_swc_tb__DOT__pwdata = vlSelf->apb_swc_tb__DOT__pwdata;
    __Vdly__apb_swc_tb__DOT__pwrite = vlSelf->apb_swc_tb__DOT__pwrite;
    __Vdly__apb_swc_tb__DOT__paddr = vlSelf->apb_swc_tb__DOT__paddr;
    __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR 
        = vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR;
    __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR 
        = vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR;
    __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR 
        = vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR;
    __Vdly__apb_swc_tb__DOT__pwrite = ((IData)(vlSelf->apb_swc_tb__DOT__prstn) 
                                       && ((0U != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                           && ((1U 
                                                == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))
                                                ? (IData)(vlSelf->apb_swc_tb__DOT__wreq)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                                   && (IData)(vlSelf->apb_swc_tb__DOT__pwrite)))));
    vlSelf->apb_swc_tb__DOT__resp = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffread = ((IData)(vlSelf->apb_swc_tb__DOT__prstn) 
                                          && ((0U != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                              && ((1U 
                                                   == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                                  && (IData)(vlSelf->apb_swc_tb__DOT__wreq))));
    vlSelf->apb_swc_tb__DOT__done = ((IData)(vlSelf->apb_swc_tb__DOT__prstn) 
                                     && ((2U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state)) 
                                         && (IData)(vlSelf->apb_swc_tb__DOT__pready)));
    vlSelf->apb_swc_tb__DOT__rbuffwrite = ((IData)(vlSelf->apb_swc_tb__DOT__prstn) 
                                           && ((2U 
                                                == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state)) 
                                               && ((~ (IData)(vlSelf->apb_swc_tb__DOT__pwrite)) 
                                                   & (IData)(vlSelf->apb_swc_tb__DOT__pready))));
    if (vlSelf->apb_swc_tb__DOT__prstn) {
        if ((0U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            __Vdly__apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__apb_swc_tb__DOT__paddr = 0U;
        } else if ((1U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->apb_swc_tb__DOT__wreq) {
                __Vdly__apb_swc_tb__DOT__pwdata = vlSelf->apb_swc_tb__DOT__wbuffdata;
                __Vdly__apb_swc_tb__DOT__paddr = vlSelf->apb_swc_tb__DOT__wbuffaddr;
            } else {
                __Vdly__apb_swc_tb__DOT__pwdata = 0U;
                __Vdly__apb_swc_tb__DOT__paddr = ((IData)(vlSelf->apb_swc_tb__DOT__rreq)
                                                   ? vlSelf->apb_swc_tb__DOT__rbuffaddr
                                                   : 0U);
            }
        } else if ((2U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            __Vdly__apb_swc_tb__DOT__pwdata = vlSelf->apb_swc_tb__DOT__pwdata;
            __Vdly__apb_swc_tb__DOT__paddr = vlSelf->apb_swc_tb__DOT__paddr;
        } else {
            __Vdly__apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__apb_swc_tb__DOT__paddr = 0U;
        }
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR 
            = (((((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->apb_swc_tb__DOT__pwrite)) 
                & (0x100008U == vlSelf->apb_swc_tb__DOT__paddr))
                ? vlSelf->apb_swc_tb__DOT__pwdata : vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR);
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR 
            = (((((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->apb_swc_tb__DOT__pwrite)) 
                & (0x100004U == vlSelf->apb_swc_tb__DOT__paddr))
                ? vlSelf->apb_swc_tb__DOT__pwdata : vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR);
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR 
            = (((((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                  & (IData)(vlSelf->apb_swc_tb__DOT__penable)) 
                 & (IData)(vlSelf->apb_swc_tb__DOT__pwrite)) 
                & (0x100000U == vlSelf->apb_swc_tb__DOT__paddr))
                ? vlSelf->apb_swc_tb__DOT__pwdata : vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR);
    } else {
        __Vdly__apb_swc_tb__DOT__pwdata = 0U;
        __Vdly__apb_swc_tb__DOT__paddr = 0U;
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR = 0U;
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR = 2U;
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR = 0U;
    }
    vlSelf->apb_swc_tb__DOT__pwdata = __Vdly__apb_swc_tb__DOT__pwdata;
    vlSelf->apb_swc_tb__DOT__penable = ((IData)(vlSelf->apb_swc_tb__DOT__prstn) 
                                        && ((0U != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                            && ((1U 
                                                 != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                                && (2U 
                                                    == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)))));
    vlSelf->apb_swc_tb__DOT__rbuffdata = ((IData)(vlSelf->apb_swc_tb__DOT__prstn)
                                           ? ((2U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state))
                                               ? ((
                                                   (~ (IData)(vlSelf->apb_swc_tb__DOT__pwrite)) 
                                                   & (IData)(vlSelf->apb_swc_tb__DOT__pready))
                                                   ? vlSelf->apb_swc_tb__DOT__prdata
                                                   : 0U)
                                               : 0U)
                                           : 0U);
    vlSelf->apb_swc_tb__DOT__pready = (((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                                        & (IData)(vlSelf->apb_swc_tb__DOT__pwrite)) 
                                       || (1U & ((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                                                 & (~ (IData)(vlSelf->apb_swc_tb__DOT__pwrite)))));
    if (vlSelf->apb_swc_tb__DOT__prstn) {
        vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state 
            = vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate;
        vlSelf->apb_swc_tb__DOT__prdata = ((((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                                             & (~ (IData)(vlSelf->apb_swc_tb__DOT__pwrite))) 
                                            & (0x100000U 
                                               == vlSelf->apb_swc_tb__DOT__paddr))
                                            ? vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR
                                            : ((((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                                                 & (~ (IData)(vlSelf->apb_swc_tb__DOT__pwrite))) 
                                                & (0x100004U 
                                                   == vlSelf->apb_swc_tb__DOT__paddr))
                                                ? vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR
                                                : (
                                                   (((IData)(vlSelf->apb_swc_tb__DOT__pselx) 
                                                     & (~ (IData)(vlSelf->apb_swc_tb__DOT__pwrite))) 
                                                    & (0x100008U 
                                                       == vlSelf->apb_swc_tb__DOT__paddr))
                                                    ? vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR
                                                    : 0U)));
        vlSelf->apb_swc_tb__DOT__pselx = ((0U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))
                                           ? 0U : (
                                                   (1U 
                                                    == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))
                                                     ? 1U
                                                     : 0U)));
    } else {
        vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state = 0U;
        vlSelf->apb_swc_tb__DOT__prdata = 0U;
        vlSelf->apb_swc_tb__DOT__pselx = 0U;
    }
    vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR 
        = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR;
    vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR 
        = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR;
    vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR 
        = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR;
    vlSelf->apb_swc_tb__DOT__paddr = __Vdly__apb_swc_tb__DOT__paddr;
    vlSelf->apb_swc_tb__DOT__pwrite = __Vdly__apb_swc_tb__DOT__pwrite;
}

void Vapb_swc_tb___024root___timing_resume(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vapb_swc_tb___024root___eval_triggers__act(Vapb_swc_tb___024root* vlSelf);

bool Vapb_swc_tb___024root___eval_phase__act(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vapb_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vapb_swc_tb___024root___timing_resume(vlSelf);
        Vapb_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vapb_swc_tb___024root___eval_phase__nba(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vapb_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__nba(Vapb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__act(Vapb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_swc_tb___024root___eval(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vapb_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("apb_swc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vapb_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("apb_swc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vapb_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vapb_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vapb_swc_tb___024root___eval_debug_assertions(Vapb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
