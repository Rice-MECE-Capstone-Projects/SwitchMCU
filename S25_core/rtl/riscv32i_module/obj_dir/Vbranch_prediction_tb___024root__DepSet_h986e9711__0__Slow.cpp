// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_prediction_tb.h for the primary calling header

#include "Vbranch_prediction_tb__pch.h"
#include "Vbranch_prediction_tb__Syms.h"
#include "Vbranch_prediction_tb___024root.h"

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_initial__TOP(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6e5f7462U;
    __Vtemp_1[2U] = 0x6374696fU;
    __Vtemp_1[3U] = 0x72656469U;
    __Vtemp_1[4U] = 0x63685f70U;
    __Vtemp_1[5U] = 0x6272616eU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_prediction_tb___024root___dump_triggers__stl(Vbranch_prediction_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_triggers__stl(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbranch_prediction_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
