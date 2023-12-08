// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "Vahb2apb_swc_tb__pch.h"
#include "Vahb2apb_swc_tb__Syms.h"
#include "Vahb2apb_swc_tb___024root.h"

void Vahb2apb_swc_tb___024root___ctor_var_reset(Vahb2apb_swc_tb___024root* vlSelf);

Vahb2apb_swc_tb___024root::Vahb2apb_swc_tb___024root(Vahb2apb_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vahb2apb_swc_tb___024root___ctor_var_reset(this);
}

void Vahb2apb_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vahb2apb_swc_tb___024root::~Vahb2apb_swc_tb___024root() {
}
