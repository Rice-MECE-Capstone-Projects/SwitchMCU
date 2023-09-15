// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_swc_tb__Syms.h"
#include "Vapb_swc_tb___024root.h"

VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__0(Vapb_swc_tb___024root* vlSelf);
VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__1(Vapb_swc_tb___024root* vlSelf);
VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__2(Vapb_swc_tb___024root* vlSelf);

void Vapb_swc_tb___024root___eval_initial(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vapb_swc_tb___024root___eval_initial__TOP__0(vlSelf);
    Vapb_swc_tb___024root___eval_initial__TOP__1(vlSelf);
    Vapb_swc_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__apb_swc_tb__DOT__pclk__0 
        = vlSelf->apb_swc_tb__DOT__pclk;
}

VL_INLINE_OPT VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__1(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__prstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 1U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0x10U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0x100000U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0U;
    vlSelf->apb_swc_tb__DOT__wreq = 1U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0x12U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0x100004U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0U;
    vlSelf->apb_swc_tb__DOT__rreq = 1U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0x100000U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 0U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0U;
    vlSelf->apb_swc_tb__DOT__rreq = 1U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0x100004U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 0U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 1U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0x14U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0x100008U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__wreq = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->apb_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 1U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0x100008U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "apb_swc_tb.v", 
                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_swc_tb__DOT__rreq = 0U;
    vlSelf->apb_swc_tb__DOT__rbuffaddr = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vapb_swc_tb___024root___eval_initial__TOP__2(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "apb_swc_tb.v", 
                                           58);
        vlSelf->apb_swc_tb__DOT__pclk = (1U & (~ (IData)(vlSelf->apb_swc_tb__DOT__pclk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vapb_swc_tb__ConstPool__TABLE_h4a0e2aec_0;

VL_INLINE_OPT void Vapb_swc_tb___024root___act_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
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
        = Vapb_swc_tb__ConstPool__TABLE_h4a0e2aec_0
        [__Vtableidx1];
}

void Vapb_swc_tb___024root___eval_act(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vapb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vapb_swc_tb___024root___nba_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
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
                                       & ((0U != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                          & ((1U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))
                                              ? (IData)(vlSelf->apb_swc_tb__DOT__wreq)
                                              : ((2U 
                                                  == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                                 & (IData)(vlSelf->apb_swc_tb__DOT__pwrite)))));
    vlSelf->apb_swc_tb__DOT__wbuffread = ((IData)(vlSelf->apb_swc_tb__DOT__prstn) 
                                          & ((0U != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                             & (1U 
                                                == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))));
    vlSelf->apb_swc_tb__DOT__pready = (1U & (IData)(vlSelf->apb_swc_tb__DOT__pselx));
    if (vlSelf->apb_swc_tb__DOT__prstn) {
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
        if ((0U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            __Vdly__apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__apb_swc_tb__DOT__paddr = 0U;
            vlSelf->apb_swc_tb__DOT__pselx = 0U;
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
            vlSelf->apb_swc_tb__DOT__pselx = 1U;
        } else if ((2U == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            __Vdly__apb_swc_tb__DOT__pwdata = vlSelf->apb_swc_tb__DOT__pwdata;
            __Vdly__apb_swc_tb__DOT__paddr = vlSelf->apb_swc_tb__DOT__paddr;
            vlSelf->apb_swc_tb__DOT__pselx = 1U;
        } else {
            __Vdly__apb_swc_tb__DOT__pwdata = 0U;
            __Vdly__apb_swc_tb__DOT__paddr = 0U;
            vlSelf->apb_swc_tb__DOT__pselx = 0U;
        }
        vlSelf->apb_swc_tb__DOT__pwdata = __Vdly__apb_swc_tb__DOT__pwdata;
        vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR 
            = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR;
        vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR 
            = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR;
        vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR 
            = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR;
        vlSelf->apb_swc_tb__DOT__paddr = __Vdly__apb_swc_tb__DOT__paddr;
        vlSelf->apb_swc_tb__DOT__pwrite = __Vdly__apb_swc_tb__DOT__pwrite;
        vlSelf->apb_swc_tb__DOT__penable = ((0U != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                            & ((1U 
                                                != (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                               & (2U 
                                                  == (IData)(vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))));
    } else {
        __Vdly__apb_swc_tb__DOT__pwdata = 0U;
        __Vdly__apb_swc_tb__DOT__paddr = 0U;
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR = 0U;
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR = 2U;
        __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR = 0U;
        vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state = 0U;
        vlSelf->apb_swc_tb__DOT__prdata = 0U;
        vlSelf->apb_swc_tb__DOT__pselx = 0U;
        vlSelf->apb_swc_tb__DOT__pwdata = __Vdly__apb_swc_tb__DOT__pwdata;
        vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR 
            = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR;
        vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR 
            = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR;
        vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR 
            = __Vdly__apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR;
        vlSelf->apb_swc_tb__DOT__paddr = __Vdly__apb_swc_tb__DOT__paddr;
        vlSelf->apb_swc_tb__DOT__pwrite = __Vdly__apb_swc_tb__DOT__pwrite;
        vlSelf->apb_swc_tb__DOT__penable = 0U;
    }
}

void Vapb_swc_tb___024root___eval_nba(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
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

void Vapb_swc_tb___024root___eval_triggers__act(Vapb_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__act(Vapb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb_swc_tb___024root___timing_resume(Vapb_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__nba(Vapb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_swc_tb___024root___eval(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval\n"); );
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
            Vapb_swc_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vapb_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("apb_swc_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vapb_swc_tb___024root___timing_resume(vlSelf);
                Vapb_swc_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vapb_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("apb_swc_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vapb_swc_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vapb_swc_tb___024root___timing_resume(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vapb_swc_tb___024root___eval_debug_assertions(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
