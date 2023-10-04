// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc.h for the primary calling header

#include "verilated.h"

#include "Vahbs_swc__Syms.h"
#include "Vahbs_swc__Syms.h"
#include "Vahbs_swc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbs_swc___024root___dump_triggers__stl(Vahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahbs_swc___024root___eval_triggers__stl(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahbs_swc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
