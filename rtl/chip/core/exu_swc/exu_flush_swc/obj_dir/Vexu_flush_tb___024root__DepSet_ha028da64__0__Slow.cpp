// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_flush_tb.h for the primary calling header

#include "Vexu_flush_tb__pch.h"
#include "Vexu_flush_tb__Syms.h"
#include "Vexu_flush_tb___024root.h"

VL_ATTR_COLD void Vexu_flush_tb___024root___eval_initial__TOP(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x685f7462U;
    __Vtemp_1[2U] = 0x666c7573U;
    __Vtemp_1[3U] = 0x6578755fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_flush_tb___024root___dump_triggers__stl(Vexu_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexu_flush_tb___024root___eval_triggers__stl(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexu_flush_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
