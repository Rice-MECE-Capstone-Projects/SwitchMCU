// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsram_swc_tb__Syms.h"
#include "Vsram_swc_tb__Syms.h"
#include "Vsram_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsram_swc_tb___024root___eval_initial__TOP__1(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x6d5f7377U;
    __Vtemp_1[3U] = 0x737261U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x3a98ULL, nullptr, 
                                       "sram_swc_tb.v", 
                                       37);
    VL_FINISH_MT("sram_swc_tb.v", 37, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram_swc_tb___024root___dump_triggers__act(Vsram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsram_swc_tb___024root___eval_triggers__act(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->sram_swc_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sram_swc_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__sram_swc_tb__DOT__clk__0 
        = vlSelf->sram_swc_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsram_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
