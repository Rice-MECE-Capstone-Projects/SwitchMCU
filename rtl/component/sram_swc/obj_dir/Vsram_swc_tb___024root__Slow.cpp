// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsram_swc_tb__Syms.h"
#include "Vsram_swc_tb__Syms.h"
#include "Vsram_swc_tb___024root.h"

void Vsram_swc_tb___024root___ctor_var_reset(Vsram_swc_tb___024root* vlSelf);

Vsram_swc_tb___024root::Vsram_swc_tb___024root(Vsram_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsram_swc_tb___024root___ctor_var_reset(this);
}

void Vsram_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsram_swc_tb___024root::~Vsram_swc_tb___024root() {
}
