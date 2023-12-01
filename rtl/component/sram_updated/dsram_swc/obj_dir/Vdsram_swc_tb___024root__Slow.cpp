// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdsram_swc_tb.h for the primary calling header

#include "Vdsram_swc_tb__pch.h"
#include "Vdsram_swc_tb__Syms.h"
#include "Vdsram_swc_tb___024root.h"

void Vdsram_swc_tb___024root___ctor_var_reset(Vdsram_swc_tb___024root* vlSelf);

Vdsram_swc_tb___024root::Vdsram_swc_tb___024root(Vdsram_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdsram_swc_tb___024root___ctor_var_reset(this);
}

void Vdsram_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdsram_swc_tb___024root::~Vdsram_swc_tb___024root() {
}
