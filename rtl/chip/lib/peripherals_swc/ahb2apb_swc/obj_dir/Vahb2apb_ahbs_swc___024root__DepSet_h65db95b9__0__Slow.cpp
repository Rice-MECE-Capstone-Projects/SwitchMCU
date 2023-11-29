// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_ahbs_swc.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_ahbs_swc__Syms.h"
#include "Vahb2apb_ahbs_swc__Syms.h"
#include "Vahb2apb_ahbs_swc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__stl(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_triggers__stl(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb2apb_ahbs_swc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
