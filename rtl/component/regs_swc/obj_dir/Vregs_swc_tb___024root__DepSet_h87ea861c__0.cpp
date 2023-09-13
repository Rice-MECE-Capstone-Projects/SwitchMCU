// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregs_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vregs_swc_tb__Syms.h"
#include "Vregs_swc_tb__Syms.h"
#include "Vregs_swc_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc_tb___024root___dump_triggers__act(Vregs_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregs_swc_tb___024root___eval_triggers__act(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->regs_swc_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__regs_swc_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__regs_swc_tb__DOT__clk__0 
        = vlSelf->regs_swc_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregs_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
