// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbm_swc_tb.h for the primary calling header

#include "Vahbm_swc_tb__pch.h"
#include "Vahbm_swc_tb__Syms.h"
#include "Vahbm_swc_tb___024root.h"

void Vahbm_swc_tb___024root___ctor_var_reset(Vahbm_swc_tb___024root* vlSelf);

Vahbm_swc_tb___024root::Vahbm_swc_tb___024root(Vahbm_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vahbm_swc_tb___024root___ctor_var_reset(this);
}

void Vahbm_swc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vahbm_swc_tb___024root::~Vahbm_swc_tb___024root() {
}
