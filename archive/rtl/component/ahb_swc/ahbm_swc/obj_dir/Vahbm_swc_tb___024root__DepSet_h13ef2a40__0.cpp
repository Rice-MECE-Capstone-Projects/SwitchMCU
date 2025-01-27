// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbm_swc_tb.h for the primary calling header

#include "Vahbm_swc_tb__pch.h"
#include "Vahbm_swc_tb___024root.h"

VlCoroutine Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vahbm_swc_tb___024root* vlSelf);
VlCoroutine Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vahbm_swc_tb___024root* vlSelf);
VlCoroutine Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vahbm_swc_tb___024root* vlSelf);

void Vahbm_swc_tb___024root___eval_initial(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ahbm_swc_tb__DOT__hclk__0 
        = vlSelf->ahbm_swc_tb__DOT__hclk;
}

VL_INLINE_OPT VlCoroutine Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrstn = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__wreq = 1U;
    vlSelf->ahbm_swc_tb__DOT__wbuffdata = 0x10U;
    vlSelf->ahbm_swc_tb__DOT__wbuffaddr = 0x20U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__wreq = 0U;
    vlSelf->ahbm_swc_tb__DOT__wbuffdata = 0U;
    vlSelf->ahbm_swc_tb__DOT__wbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       83);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 0xcdU;
    vlSelf->ahbm_swc_tb__DOT__rreq = 1U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xaaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__rreq = 0U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hready = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__rreq = 1U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 1U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 2U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa4U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 3U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa5U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 4U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa6U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       114);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 5U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0xa7U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 6U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0U;
    vlSelf->ahbm_swc_tb__DOT__rreq = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 7U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbm_swc_tb__DOT__hrdata = 8U;
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ahbm_swc_tb.v", 
                                           52);
        vlSelf->ahbm_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->ahbm_swc_tb__DOT__hclk)));
    }
}

void Vahbm_swc_tb___024root___act_sequent__TOP__0(Vahbm_swc_tb___024root* vlSelf);

void Vahbm_swc_tb___024root___eval_act(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vahbm_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vahbm_swc_tb__ConstPool__TABLE_h679089d1_0;

VL_INLINE_OPT void Vahbm_swc_tb___024root___act_sequent__TOP__0(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahbm_swc_tb__DOT__hready) 
                     << 5U) | (((IData)(vlSelf->ahbm_swc_tb__DOT__rreq) 
                                << 4U) | (((IData)(vlSelf->ahbm_swc_tb__DOT__wreq) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ahbm_swc_tb__DOT__hresp) 
                                            << 2U) 
                                           | (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__state)))));
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate 
        = Vahbm_swc_tb__ConstPool__TABLE_h679089d1_0
        [__Vtableidx1];
}

void Vahbm_swc_tb___024root___nba_sequent__TOP__0(Vahbm_swc_tb___024root* vlSelf);

void Vahbm_swc_tb___024root___eval_nba(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbm_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbm_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vahbm_swc_tb__ConstPool__TABLE_h490117d5_0;

VL_INLINE_OPT void Vahbm_swc_tb___024root___nba_sequent__TOP__0(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__ahbm_swc_tb__DOT__haddr;
    __Vdly__ahbm_swc_tb__DOT__haddr = 0;
    CData/*0:0*/ __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly = 0;
    CData/*0:0*/ __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
    __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly = 0;
    // Body
    __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
    __Vdly__ahbm_swc_tb__DOT__haddr = vlSelf->ahbm_swc_tb__DOT__haddr;
    if (vlSelf->ahbm_swc_tb__DOT__hrstn) {
        vlSelf->ahbm_swc_tb__DOT__hwdata = ((IData)(vlSelf->ahbm_swc_tb__DOT__hready)
                                             ? vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff
                                             : vlSelf->ahbm_swc_tb__DOT__hwdata);
        if ((0U == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            vlSelf->ahbm_swc_tb__DOT__htrans = 0U;
            vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            __Vdly__ahbm_swc_tb__DOT__haddr = 0U;
        } else if ((1U == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            vlSelf->ahbm_swc_tb__DOT__htrans = 2U;
            if (vlSelf->ahbm_swc_tb__DOT__wreq) {
                vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                    = vlSelf->ahbm_swc_tb__DOT__wbuffdata;
                __Vdly__ahbm_swc_tb__DOT__haddr = vlSelf->ahbm_swc_tb__DOT__wbuffaddr;
            } else {
                vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
                if (vlSelf->ahbm_swc_tb__DOT__rreq) {
                    __Vdly__ahbm_swc_tb__DOT__haddr 
                        = vlSelf->ahbm_swc_tb__DOT__rbuffaddr;
                }
            }
        } else if ((2U == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))) {
            vlSelf->ahbm_swc_tb__DOT__htrans = vlSelf->ahbm_swc_tb__DOT__htrans;
            vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff 
                = vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
            __Vdly__ahbm_swc_tb__DOT__haddr = vlSelf->ahbm_swc_tb__DOT__haddr;
        } else {
            vlSelf->ahbm_swc_tb__DOT__htrans = 0U;
            vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
            __Vdly__ahbm_swc_tb__DOT__haddr = 0U;
        }
        vlSelf->ahbm_swc_tb__DOT__rbuffdata = (((IData)(vlSelf->ahbm_swc_tb__DOT__hready) 
                                                & (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly))
                                                ? vlSelf->ahbm_swc_tb__DOT__hrdata
                                                : vlSelf->ahbm_swc_tb__DOT__rbuffdata);
        vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__state 
            = vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate;
    } else {
        vlSelf->ahbm_swc_tb__DOT__hwdata = 0U;
        vlSelf->ahbm_swc_tb__DOT__htrans = 0U;
        vlSelf->ahbm_swc_tb__DOT__rbuffdata = 0U;
        vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = 0U;
        __Vdly__ahbm_swc_tb__DOT__haddr = 0U;
        vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__state = 0U;
    }
    __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = ((IData)(vlSelf->ahbm_swc_tb__DOT__hrstn) 
           && ((IData)(vlSelf->ahbm_swc_tb__DOT__hready)
                ? (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag)
                : (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly)));
    __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = ((IData)(vlSelf->ahbm_swc_tb__DOT__hrstn) 
           && ((IData)(vlSelf->ahbm_swc_tb__DOT__hready)
                ? (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag)
                : (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly)));
    vlSelf->ahbm_swc_tb__DOT__hwrite = ((IData)(vlSelf->ahbm_swc_tb__DOT__hrstn) 
                                        && ((0U != (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                            && ((1U 
                                                 == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                                                 ? (IData)(vlSelf->ahbm_swc_tb__DOT__wreq)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                                                 && (IData)(vlSelf->ahbm_swc_tb__DOT__hwrite)))));
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag 
        = ((IData)(vlSelf->ahbm_swc_tb__DOT__hrstn) 
           && ((0U == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                ? ((IData)(vlSelf->ahbm_swc_tb__DOT__hresp) 
                   && (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag))
                : ((1U == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate))
                    ? (IData)(vlSelf->ahbm_swc_tb__DOT__rreq)
                    : ((2U == (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate)) 
                       && (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag)))));
    __Vtableidx2 = (((IData)(vlSelf->ahbm_swc_tb__DOT__wreq) 
                     << 5U) | (((IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag) 
                                << 4U) | (((IData)(vlSelf->ahbm_swc_tb__DOT__hresp) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate) 
                                            << 1U) 
                                           | (IData)(vlSelf->ahbm_swc_tb__DOT__hrstn)))));
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag 
        = Vahbm_swc_tb__ConstPool__TABLE_h490117d5_0
        [__Vtableidx2];
    vlSelf->ahbm_swc_tb__DOT__done = ((IData)(vlSelf->ahbm_swc_tb__DOT__hrstn) 
                                      && ((IData)(vlSelf->ahbm_swc_tb__DOT__hready) 
                                          & ((IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly) 
                                             | (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly))));
    vlSelf->ahbm_swc_tb__DOT__resp = ((IData)(vlSelf->ahbm_swc_tb__DOT__hrstn) 
                                      && (((IData)(vlSelf->ahbm_swc_tb__DOT__hready) 
                                           & ((IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly) 
                                              | (IData)(vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly))) 
                                          && ((IData)(vlSelf->ahbm_swc_tb__DOT__hready) 
                                              & (IData)(vlSelf->ahbm_swc_tb__DOT__hresp))));
    vlSelf->ahbm_swc_tb__DOT__haddr = __Vdly__ahbm_swc_tb__DOT__haddr;
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly 
        = __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly 
        = __Vdly__ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
}

void Vahbm_swc_tb___024root___timing_resume(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vahbm_swc_tb___024root___eval_triggers__act(Vahbm_swc_tb___024root* vlSelf);

bool Vahbm_swc_tb___024root___eval_phase__act(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vahbm_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vahbm_swc_tb___024root___timing_resume(vlSelf);
        Vahbm_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vahbm_swc_tb___024root___eval_phase__nba(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vahbm_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__nba(Vahbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__act(Vahbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahbm_swc_tb___024root___eval(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vahbm_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ahbm_swc_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vahbm_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ahbm_swc_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vahbm_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vahbm_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vahbm_swc_tb___024root___eval_debug_assertions(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
