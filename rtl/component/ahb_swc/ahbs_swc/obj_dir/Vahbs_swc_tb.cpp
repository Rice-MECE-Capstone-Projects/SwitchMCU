// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc_tb.h for the primary calling header

#include "Vahbs_swc_tb.h"
#include "Vahbs_swc_tb__Syms.h"

//==========

void Vahbs_swc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vahbs_swc_tb::eval\n"); );
    Vahbs_swc_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ahbs_swc_tb.v", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vahbs_swc_tb::_eval_initial_loop(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ahbs_swc_tb.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vahbs_swc_tb::_combo__TOP__3(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_combo__TOP__3\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ahbs_swc_tb__DOT__hclk = (1U & (~ (IData)(vlTOPp->ahbs_swc_tb__DOT__hclk)));
}

void Vahbs_swc_tb::_eval(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_eval\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__ahbs_swc_tb__DOT__hclk 
        = vlTOPp->__VinpClk__TOP__ahbs_swc_tb__DOT__hclk;
    vlTOPp->__VinpClk__TOP__ahbs_swc_tb__DOT__hclk 
        = vlTOPp->ahbs_swc_tb__DOT__hclk;
}

VL_INLINE_OPT QData Vahbs_swc_tb::_change_request(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_change_request\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vahbs_swc_tb::_change_request_1(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_change_request_1\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->ahbs_swc_tb__DOT__hclk ^ vlTOPp->__Vchglast__TOP__ahbs_swc_tb__DOT__hclk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->ahbs_swc_tb__DOT__hclk ^ vlTOPp->__Vchglast__TOP__ahbs_swc_tb__DOT__hclk))) VL_DBG_MSGF("        CHANGE: ahbs_swc_tb.v:5: ahbs_swc_tb.hclk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__ahbs_swc_tb__DOT__hclk 
        = vlTOPp->ahbs_swc_tb__DOT__hclk;
    return __req;
}

#ifdef VL_DEBUG
void Vahbs_swc_tb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
