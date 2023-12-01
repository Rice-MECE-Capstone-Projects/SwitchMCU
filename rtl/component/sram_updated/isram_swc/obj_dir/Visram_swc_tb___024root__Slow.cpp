// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visram_swc_tb.h for the primary calling header

#include "Visram_swc_tb__pch.h"
#include "Visram_swc_tb__Syms.h"
#include "Visram_swc_tb___024root.h"

void Visram_swc_tb___024root___ctor_var_reset(Visram_swc_tb___024root* vlSelf);

Visram_swc_tb___024root::Visram_swc_tb___024root(Visram_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Visram_swc_tb___024root___ctor_var_reset(this);
}

void Visram_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Visram_swc_tb___024root::~Visram_swc_tb___024root() {
}
