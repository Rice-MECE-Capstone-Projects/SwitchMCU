// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc_tb.h for the primary calling header

#include "Vahbs_swc_tb.h"
#include "Vahbs_swc_tb__Syms.h"

//==========

VL_CTOR_IMP(Vahbs_swc_tb) {
    Vahbs_swc_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vahbs_swc_tb__Syms(this, name());
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vahbs_swc_tb::__Vconfigure(Vahbs_swc_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vahbs_swc_tb::~Vahbs_swc_tb() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vahbs_swc_tb::_initial__TOP__1(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_initial__TOP__1\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    // Body
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x635f7462U;
    __Vtemp1[2U] = 0x735f7377U;
    __Vtemp1[3U] = 0x616862U;
    vl_dumpctl_filenamep(true, VL_CVT_PACK_STR_NW(4, __Vtemp1));
    VL_PRINTF_MT("-Info: ahbs_swc_tb.v:53: $dumpvar ignored, as Verilated without --trace\n");
    VL_FINISH_MT("ahbs_swc_tb.v", 54, "");
    vlTOPp->ahbs_swc_tb__DOT__hclk = 1U;
}

void Vahbs_swc_tb::_eval_initial(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_eval_initial\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__ahbs_swc_tb__DOT__hclk 
        = vlTOPp->__VinpClk__TOP__ahbs_swc_tb__DOT__hclk;
}

void Vahbs_swc_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::final\n"); );
    // Variables
    Vahbs_swc_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vahbs_swc_tb::_eval_settle(Vahbs_swc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_eval_settle\n"); );
    Vahbs_swc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Vahbs_swc_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb::_ctor_var_reset\n"); );
    // Body
    ahbs_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
    __VinpClk__TOP__ahbs_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__ahbs_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
}
