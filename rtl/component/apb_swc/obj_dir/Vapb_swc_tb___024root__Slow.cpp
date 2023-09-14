// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_swc_tb__Syms.h"
#include "Vapb_swc_tb__Syms.h"
#include "Vapb_swc_tb___024root.h"

void Vapb_swc_tb___024root___ctor_var_reset(Vapb_swc_tb___024root* vlSelf);

Vapb_swc_tb___024root::Vapb_swc_tb___024root(Vapb_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_swc_tb___024root___ctor_var_reset(this);
}

void Vapb_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vapb_swc_tb___024root::~Vapb_swc_tb___024root() {
}
