// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregs_swc.h for the primary calling header

#include "verilated.h"

#include "Vregs_swc__Syms.h"
#include "Vregs_swc___024root.h"

void Vregs_swc___024root___eval_act(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vregs_swc___024root___nba_sequent__TOP__0(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rstn) {
        if (vlSelf->write) {
            vlSelf->rdata = ((0x13fU >= (0x1ffU & ((IData)(vlSelf->raddr) 
                                                   << 5U)))
                              ? (((0U == (0x1fU & ((IData)(vlSelf->raddr) 
                                                   << 5U)))
                                   ? 0U : (vlSelf->regs_swc__DOT__regs[
                                           (((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & ((IData)(vlSelf->raddr) 
                                                   << 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->raddr) 
                                                     << 5U))))) 
                                 | (vlSelf->regs_swc__DOT__regs[
                                    (0xfU & (IData)(vlSelf->raddr))] 
                                    >> (0x1fU & ((IData)(vlSelf->raddr) 
                                                 << 5U))))
                              : 0U);
            vlSelf->regs_swc__DOT____Vlvbound_hf174bc4f__0 
                = vlSelf->wdata;
            if ((0x13fU >= (0x1ffU & ((IData)(vlSelf->waddr) 
                                      << 5U)))) {
                VL_ASSIGNSEL_WI(320,32,(0x1ffU & ((IData)(vlSelf->waddr) 
                                                  << 5U)), vlSelf->regs_swc__DOT__regs, vlSelf->regs_swc__DOT____Vlvbound_hf174bc4f__0);
            }
        }
    } else {
        vlSelf->rdata = 0U;
        vlSelf->regs_swc__DOT__regs[0U] = 0U;
        vlSelf->regs_swc__DOT__regs[1U] = 0U;
        vlSelf->regs_swc__DOT__regs[2U] = 0U;
        vlSelf->regs_swc__DOT__regs[3U] = 0U;
        vlSelf->regs_swc__DOT__regs[4U] = 0U;
        vlSelf->regs_swc__DOT__regs[5U] = 0U;
        vlSelf->regs_swc__DOT__regs[6U] = 0U;
        vlSelf->regs_swc__DOT__regs[7U] = 0U;
        vlSelf->regs_swc__DOT__regs[8U] = 0U;
        vlSelf->regs_swc__DOT__regs[9U] = 0U;
    }
}

void Vregs_swc___024root___eval_nba(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregs_swc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vregs_swc___024root___eval_triggers__act(Vregs_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc___024root___dump_triggers__act(Vregs_swc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc___024root___dump_triggers__nba(Vregs_swc___024root* vlSelf);
#endif  // VL_DEBUG

void Vregs_swc___024root___eval(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vregs_swc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vregs_swc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("regs_swc.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vregs_swc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vregs_swc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("regs_swc.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vregs_swc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vregs_swc___024root___eval_debug_assertions(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->write & 0xfeU))) {
        Verilated::overWidthError("write");}
    if (VL_UNLIKELY((vlSelf->waddr & 0x80U))) {
        Verilated::overWidthError("waddr");}
    if (VL_UNLIKELY((vlSelf->read & 0xfeU))) {
        Verilated::overWidthError("read");}
    if (VL_UNLIKELY((vlSelf->raddr & 0x80U))) {
        Verilated::overWidthError("raddr");}
}
#endif  // VL_DEBUG
