// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregs_swc_tb.h for the primary calling header

#include "Vregs_swc_tb__pch.h"
#include "Vregs_swc_tb__Syms.h"
#include "Vregs_swc_tb___024root.h"

void Vregs_swc_tb___024root___ctor_var_reset(Vregs_swc_tb___024root* vlSelf);

Vregs_swc_tb___024root::Vregs_swc_tb___024root(Vregs_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregs_swc_tb___024root___ctor_var_reset(this);
}

void Vregs_swc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vregs_swc_tb___024root::~Vregs_swc_tb___024root() {
}
