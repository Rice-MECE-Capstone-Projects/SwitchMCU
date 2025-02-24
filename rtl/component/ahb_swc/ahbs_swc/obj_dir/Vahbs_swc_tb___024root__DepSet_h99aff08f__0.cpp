// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc_tb.h for the primary calling header

#include "Vahbs_swc_tb__pch.h"
#include "Vahbs_swc_tb___024root.h"

VlCoroutine Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vahbs_swc_tb___024root* vlSelf);
VlCoroutine Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vahbs_swc_tb___024root* vlSelf);
VlCoroutine Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vahbs_swc_tb___024root* vlSelf);

void Vahbs_swc_tb___024root___eval_initial(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ahbs_swc_tb__DOT__hclk__0 
        = vlSelf->ahbs_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__ahbs_swc_tb__DOT__hrstn__0 
        = vlSelf->ahbs_swc_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hmastlock = 0U;
    vlSelf->ahbs_swc_tb__DOT__hsize = 2U;
    vlSelf->ahbs_swc_tb__DOT__hprot = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe11U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba11U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf011U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba11U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe12U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba12U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf012U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba12U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       114);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe13U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba13U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf013U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba13U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe21U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba21U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe22U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba22U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe23U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba23U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       146);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe24U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba24U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe25U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba25U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe26U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba26U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       165);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf031U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba31U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf032U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba32U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf033U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba33U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       186);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf034U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba34U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf035U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba35U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       200);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf036U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba36U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       208);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe31U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba31U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       213);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbeefU;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       217);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe32U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba32U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       225);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe41U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba41U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbeefU;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf041U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba41U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       243);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf051U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba51U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       249);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbeefU;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       253);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbe51U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafeba51U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       261);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf061U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba61U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       267);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xdeadbeefU;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       271);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0xbaadf062U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xcafebabeU;
    vlSelf->ahbs_swc_tb__DOT__rbuffdata = 0xabbaba62U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ahbs_swc_tb.v", 
                                           49);
        vlSelf->ahbs_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->ahbs_swc_tb__DOT__hclk)));
    }
}

void Vahbs_swc_tb___024root___act_sequent__TOP__0(Vahbs_swc_tb___024root* vlSelf);

void Vahbs_swc_tb___024root___eval_act(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vahbs_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vahbs_swc_tb__ConstPool__TABLE_h589b7549_0;

VL_INLINE_OPT void Vahbs_swc_tb___024root___act_sequent__TOP__0(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahbs_swc_tb__DOT__hwrite) 
                     << 4U) | (((IData)(vlSelf->ahbs_swc_tb__DOT__htrans) 
                                << 2U) | (((IData)(vlSelf->ahbs_swc_tb__DOT__hrstn) 
                                           << 1U) | (IData)(vlSelf->ahbs_swc_tb__DOT__hresp))));
    vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state 
        = Vahbs_swc_tb__ConstPool__TABLE_h589b7549_0
        [__Vtableidx1];
}

void Vahbs_swc_tb___024root___nba_sequent__TOP__0(Vahbs_swc_tb___024root* vlSelf);
void Vahbs_swc_tb___024root___nba_sequent__TOP__1(Vahbs_swc_tb___024root* vlSelf);

void Vahbs_swc_tb___024root___eval_nba(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbs_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbs_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbs_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vahbs_swc_tb___024root___nba_sequent__TOP__0(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__state 
        = ((IData)(vlSelf->ahbs_swc_tb__DOT__hrstn)
            ? (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Vahbs_swc_tb___024root___nba_sequent__TOP__1(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ahbs_swc_tb__DOT__hrstn)) 
               | (0U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))))) {
        vlSelf->ahbs_swc_tb__DOT__rreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffdata = 0U;
        vlSelf->ahbs_swc_tb__DOT__rbuffaddr = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffaddr = 0U;
    } else if ((1U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))) {
        vlSelf->ahbs_swc_tb__DOT__rreq = 1U;
        vlSelf->ahbs_swc_tb__DOT__wreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffdata = 0U;
        vlSelf->ahbs_swc_tb__DOT__rbuffaddr = vlSelf->ahbs_swc_tb__DOT__haddr;
        vlSelf->ahbs_swc_tb__DOT__wbuffaddr = 0U;
    } else if ((2U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))) {
        vlSelf->ahbs_swc_tb__DOT__rreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wreq = 1U;
        vlSelf->ahbs_swc_tb__DOT__wbuffdata = vlSelf->ahbs_swc_tb__DOT__hwdata;
        vlSelf->ahbs_swc_tb__DOT__rbuffaddr = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffaddr = vlSelf->ahbs_swc_tb__DOT__haddr;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->ahbs_swc_tb__DOT__hrstn)) 
                  | (0U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state)))))) {
        if ((1U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))) {
            vlSelf->ahbs_swc_tb__DOT__hrdata = vlSelf->ahbs_swc_tb__DOT__rbuffdata;
        }
    }
}

void Vahbs_swc_tb___024root___timing_resume(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vahbs_swc_tb___024root___eval_triggers__act(Vahbs_swc_tb___024root* vlSelf);

bool Vahbs_swc_tb___024root___eval_phase__act(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vahbs_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vahbs_swc_tb___024root___timing_resume(vlSelf);
        Vahbs_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vahbs_swc_tb___024root___eval_phase__nba(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vahbs_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbs_swc_tb___024root___dump_triggers__nba(Vahbs_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbs_swc_tb___024root___dump_triggers__act(Vahbs_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahbs_swc_tb___024root___eval(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vahbs_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ahbs_swc_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vahbs_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ahbs_swc_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vahbs_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vahbs_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vahbs_swc_tb___024root___eval_debug_assertions(Vahbs_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
