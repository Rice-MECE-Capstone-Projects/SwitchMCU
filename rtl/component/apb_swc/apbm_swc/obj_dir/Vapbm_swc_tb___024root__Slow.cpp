// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapbm_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vapbm_swc_tb__Syms.h"
#include "Vapbm_swc_tb__Syms.h"
#include "Vapbm_swc_tb___024root.h"

void Vapbm_swc_tb___024root___ctor_var_reset(Vapbm_swc_tb___024root* vlSelf);

Vapbm_swc_tb___024root::Vapbm_swc_tb___024root(Vapbm_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapbm_swc_tb___024root___ctor_var_reset(this);
}

void Vapbm_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vapbm_swc_tb___024root::~Vapbm_swc_tb___024root() {
}
