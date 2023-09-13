// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregs_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vregs_swc_tb__Syms.h"
#include "Vregs_swc_tb___024root.h"

VL_ATTR_COLD void Vregs_swc_tb___024root___eval_initial__TOP(Vregs_swc_tb___024root* vlSelf);
VlCoroutine Vregs_swc_tb___024root___eval_initial__TOP__0(Vregs_swc_tb___024root* vlSelf);
VlCoroutine Vregs_swc_tb___024root___eval_initial__TOP__1(Vregs_swc_tb___024root* vlSelf);

void Vregs_swc_tb___024root___eval_initial(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_initial\n"); );
    // Body
    Vregs_swc_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vregs_swc_tb___024root___eval_initial__TOP__0(vlSelf);
    Vregs_swc_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__regs_swc_tb__DOT__clk__0 
        = vlSelf->regs_swc_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vregs_swc_tb___024root___eval_initial__TOP__0(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       28);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__rstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       31);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__rstn = 1U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 4U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 8U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0xcU;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x10U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x14U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x18U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x1cU;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x20U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x24U;
    vlSelf->regs_swc_tb__DOT__write = 1U;
    vlSelf->regs_swc_tb__DOT__wdata = ((IData)(0xaU) 
                                       + vlSelf->regs_swc_tb__DOT__wdata);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__waddr = 0x28U;
    vlSelf->regs_swc_tb__DOT__write = 0U;
    vlSelf->regs_swc_tb__DOT__wdata = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 4U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 8U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0xcU;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x10U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x14U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x18U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x1cU;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x20U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x24U;
    vlSelf->regs_swc_tb__DOT__read = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regs_swc_tb__DOT__raddr = 0x28U;
    vlSelf->regs_swc_tb__DOT__read = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "regs_swc_tb.v", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("regs_swc_tb.v", 53, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vregs_swc_tb___024root___eval_initial__TOP__1(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "regs_swc_tb.v", 
                                           25);
        vlSelf->regs_swc_tb__DOT__clk = (1U & (~ (IData)(vlSelf->regs_swc_tb__DOT__clk)));
    }
}

void Vregs_swc_tb___024root___eval_act(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vregs_swc_tb___024root___nba_sequent__TOP__0(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->regs_swc_tb__DOT__rstn) {
        if (vlSelf->regs_swc_tb__DOT__read) {
            vlSelf->regs_swc_tb__DOT__rdata = ((0x13fU 
                                                >= 
                                                (0x1e0U 
                                                 & ((IData)(vlSelf->regs_swc_tb__DOT__raddr) 
                                                    << 3U)))
                                                ? vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[
                                               (0xfU 
                                                & ((IData)(vlSelf->regs_swc_tb__DOT__raddr) 
                                                   >> 2U))]
                                                : 0U);
        }
        if (vlSelf->regs_swc_tb__DOT__write) {
            vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT____Vlvbound_hb0973023__0 
                = vlSelf->regs_swc_tb__DOT__wdata;
            if ((0x13fU >= (0x1e0U & ((IData)(vlSelf->regs_swc_tb__DOT__waddr) 
                                      << 3U)))) {
                VL_ASSIGNSEL_WI(320,32,(0x1e0U & ((IData)(vlSelf->regs_swc_tb__DOT__waddr) 
                                                  << 3U)), vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs, vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT____Vlvbound_hb0973023__0);
            }
        }
    } else {
        vlSelf->regs_swc_tb__DOT__rdata = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[0U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[1U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[2U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[3U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[4U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[5U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[6U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[7U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[8U] = 0U;
        vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs[9U] = 0U;
    }
}

void Vregs_swc_tb___024root___eval_nba(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregs_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vregs_swc_tb___024root___eval_triggers__act(Vregs_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc_tb___024root___dump_triggers__act(Vregs_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vregs_swc_tb___024root___timing_resume(Vregs_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc_tb___024root___dump_triggers__nba(Vregs_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregs_swc_tb___024root___eval(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval\n"); );
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
            Vregs_swc_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vregs_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("regs_swc_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vregs_swc_tb___024root___timing_resume(vlSelf);
                Vregs_swc_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vregs_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("regs_swc_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vregs_swc_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vregs_swc_tb___024root___timing_resume(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vregs_swc_tb___024root___eval_debug_assertions(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
