// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_swc_tb__Syms.h"
#include "Vahb2apb_swc_tb__Syms.h"
#include "Vahb2apb_swc_tb___024root.h"

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_initial__TOP(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h82aa20be__0;
    // Body
    __Vtemp_h82aa20be__0[0U] = 0x2e766364U;
    __Vtemp_h82aa20be__0[1U] = 0x635f7462U;
    __Vtemp_h82aa20be__0[2U] = 0x625f7377U;
    __Vtemp_h82aa20be__0[3U] = 0x62326170U;
    __Vtemp_h82aa20be__0[4U] = 0x6168U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_h82aa20be__0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb2apb_swc_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
