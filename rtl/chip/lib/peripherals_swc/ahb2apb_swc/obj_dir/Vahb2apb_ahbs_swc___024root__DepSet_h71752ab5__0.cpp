// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_ahbs_swc.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_ahbs_swc__Syms.h"
#include "Vahb2apb_ahbs_swc___024root.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_ahbs_swc__ConstPool__TABLE_hfc601122_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_ahbs_swc__ConstPool__TABLE_h4a0e2aec_0;

VL_INLINE_OPT void Vahb2apb_ahbs_swc___024root___ico_sequent__TOP__0(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahb2apb_swc__DOT__done) 
                     << 6U) | (((IData)(vlSelf->hwrite) 
                                << 5U) | (((IData)(vlSelf->htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_ahbs_swc__ConstPool__TABLE_hfc601122_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->pready) << 4U) 
                    | (((IData)(vlSelf->ahb2apb_swc__DOT__rreq) 
                        << 3U) | (((IData)(vlSelf->ahb2apb_swc__DOT__wreq_apbm) 
                                   << 2U) | (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_ahbs_swc__ConstPool__TABLE_h4a0e2aec_0
        [__Vtableidx2];
}

void Vahb2apb_ahbs_swc___024root___eval_ico(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vahb2apb_ahbs_swc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vahb2apb_ahbs_swc___024root___eval_act(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__0(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr = vlSelf->ahb2apb_swc__DOT__wbuffaddr;
    vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata = vlSelf->ahb2apb_swc__DOT__wbuffdata;
    if (vlSelf->rstn) {
        if ((1U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr 
                = vlSelf->haddr;
            vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata 
                = vlSelf->hwdata;
        } else if ((2U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))) {
            vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr 
                = vlSelf->ahb2apb_swc__DOT__wbuffaddr;
            vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata 
                = vlSelf->ahb2apb_swc__DOT__wbuffdata;
        } else {
            vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr = 0U;
            vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata = 0U;
        }
        vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate;
        vlSelf->hready = ((0U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                          | ((3U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                             | (6U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))));
    } else {
        vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr = 0U;
        vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata = 0U;
        vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state = 0U;
        vlSelf->hready = 0U;
    }
}

VL_INLINE_OPT void Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__1(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdly__pwrite;
    __Vdly__pwrite = 0;
    // Body
    __Vdly__pwrite = vlSelf->pwrite;
    if (vlSelf->rstn) {
        __Vdly__pwrite = ((0U != (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                          & ((1U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))
                              ? (IData)(vlSelf->ahb2apb_swc__DOT__wreq_apbm)
                              : ((2U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                 & (IData)(vlSelf->pwrite))));
        vlSelf->penable = ((0U != (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                           & ((1U != (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                              & (2U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))));
        vlSelf->ahb2apb_swc__DOT__rbuffread = ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                  & (IData)(vlSelf->ahb2apb_swc__DOT__rreq)));
        vlSelf->ahb2apb_swc__DOT__wbuffread = ((0U 
                                                != (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                               & ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate)) 
                                                  & (IData)(vlSelf->ahb2apb_swc__DOT__wreq_apbm)));
        vlSelf->ahb2apb_swc__DOT__resp = ((2U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
                                          & ((IData)(vlSelf->pready) 
                                             & (IData)(vlSelf->pslverr)));
        vlSelf->ahb2apb_swc__DOT__rbuffwrite = ((2U 
                                                 == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
                                                & ((~ (IData)(vlSelf->pwrite)) 
                                                   & (IData)(vlSelf->pready)));
        vlSelf->ahb2apb_swc__DOT__done = ((2U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state)) 
                                          & (IData)(vlSelf->pready));
        if ((0U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            vlSelf->pwdata = 0U;
            vlSelf->paddr = 0U;
            vlSelf->pselx = 0U;
        } else if ((1U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->ahb2apb_swc__DOT__wreq_apbm) {
                vlSelf->pwdata = vlSelf->ahb2apb_swc__DOT__wbuffdata;
                vlSelf->paddr = vlSelf->ahb2apb_swc__DOT__wbuffaddr;
            } else {
                vlSelf->pwdata = 0U;
                vlSelf->paddr = ((IData)(vlSelf->ahb2apb_swc__DOT__rreq)
                                  ? vlSelf->ahb2apb_swc__DOT__rbuffaddr
                                  : 0U);
            }
            vlSelf->pselx = 1U;
        } else if ((2U == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate))) {
            vlSelf->pwdata = vlSelf->pwdata;
            vlSelf->paddr = vlSelf->paddr;
            vlSelf->pselx = 1U;
        } else {
            vlSelf->pwdata = 0U;
            vlSelf->paddr = 0U;
            vlSelf->pselx = 0U;
        }
        vlSelf->ahb2apb_swc__DOT__rbuffdata = ((2U 
                                                == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state))
                                                ? (
                                                   ((~ (IData)(vlSelf->pwrite)) 
                                                    & (IData)(vlSelf->pready))
                                                    ? vlSelf->prdata
                                                    : 0U)
                                                : 0U);
        vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state 
            = vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
        vlSelf->ahb2apb_swc__DOT__wreq_rrr = vlSelf->ahb2apb_swc__DOT__wreq_rr;
        vlSelf->pwrite = __Vdly__pwrite;
        vlSelf->ahb2apb_swc__DOT__wreq_rr = vlSelf->ahb2apb_swc__DOT__wreq_r;
    } else {
        __Vdly__pwrite = 0U;
        vlSelf->penable = 0U;
        vlSelf->ahb2apb_swc__DOT__rbuffread = 0U;
        vlSelf->ahb2apb_swc__DOT__wbuffread = 0U;
        vlSelf->ahb2apb_swc__DOT__resp = 0U;
        vlSelf->ahb2apb_swc__DOT__rbuffwrite = 0U;
        vlSelf->ahb2apb_swc__DOT__done = 0U;
        vlSelf->pwdata = 0U;
        vlSelf->paddr = 0U;
        vlSelf->pselx = 0U;
        vlSelf->ahb2apb_swc__DOT__rbuffdata = 0U;
        vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state = 0U;
        vlSelf->ahb2apb_swc__DOT__wreq_rrr = 0U;
        vlSelf->pwrite = __Vdly__pwrite;
        vlSelf->ahb2apb_swc__DOT__wreq_rr = 0U;
    }
    vlSelf->ahb2apb_swc__DOT__wreq_apbm = ((~ (IData)(vlSelf->ahb2apb_swc__DOT__wreq_rrr)) 
                                           & (IData)(vlSelf->ahb2apb_swc__DOT__wreq_rr));
    vlSelf->ahb2apb_swc__DOT__wreq_r = ((IData)(vlSelf->rstn) 
                                        & (IData)(vlSelf->ahb2apb_swc__DOT__wreq_ahbs));
    __Vtableidx2 = (((IData)(vlSelf->pready) << 4U) 
                    | (((IData)(vlSelf->ahb2apb_swc__DOT__rreq) 
                        << 3U) | (((IData)(vlSelf->ahb2apb_swc__DOT__wreq_apbm) 
                                   << 2U) | (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_ahbs_swc__ConstPool__TABLE_h4a0e2aec_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__2(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ahb2apb_swc__DOT__wbuffdata = vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata;
    vlSelf->ahb2apb_swc__DOT__wbuffaddr = vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr;
    vlSelf->ahb2apb_swc__DOT__wreq_ahbs = ((IData)(vlSelf->rstn) 
                                           & ((0U != (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate)) 
                                              & (1U 
                                                 == (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate))));
}

VL_INLINE_OPT void Vahb2apb_ahbs_swc___024root___nba_comb__TOP__0(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahb2apb_swc__DOT__done) 
                     << 6U) | (((IData)(vlSelf->hwrite) 
                                << 5U) | (((IData)(vlSelf->htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_ahbs_swc__ConstPool__TABLE_hfc601122_0
        [__Vtableidx1];
}

void Vahb2apb_ahbs_swc___024root___eval_nba(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_ahbs_swc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahb2apb_ahbs_swc___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vahb2apb_ahbs_swc___024root___eval_triggers__ico(Vahb2apb_ahbs_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__ico(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vahb2apb_ahbs_swc___024root___eval_triggers__act(Vahb2apb_ahbs_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__act(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__nba(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb2apb_ahbs_swc___024root___eval(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vahb2apb_ahbs_swc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vahb2apb_ahbs_swc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ahb2apb_swc.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vahb2apb_ahbs_swc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vahb2apb_ahbs_swc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vahb2apb_ahbs_swc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ahb2apb_swc.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vahb2apb_ahbs_swc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vahb2apb_ahbs_swc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ahb2apb_swc.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vahb2apb_ahbs_swc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vahb2apb_ahbs_swc___024root___eval_debug_assertions(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->hclk & 0xfeU))) {
        Verilated::overWidthError("hclk");}
    if (VL_UNLIKELY((vlSelf->hprot & 0x80U))) {
        Verilated::overWidthError("hprot");}
    if (VL_UNLIKELY((vlSelf->hsize & 0xf8U))) {
        Verilated::overWidthError("hsize");}
    if (VL_UNLIKELY((vlSelf->htrans & 0xfcU))) {
        Verilated::overWidthError("htrans");}
    if (VL_UNLIKELY((vlSelf->hwrite & 0xfeU))) {
        Verilated::overWidthError("hwrite");}
    if (VL_UNLIKELY((vlSelf->pclk & 0xfeU))) {
        Verilated::overWidthError("pclk");}
    if (VL_UNLIKELY((vlSelf->pready & 0xfeU))) {
        Verilated::overWidthError("pready");}
    if (VL_UNLIKELY((vlSelf->pslverr & 0xfeU))) {
        Verilated::overWidthError("pslverr");}
}
#endif  // VL_DEBUG
