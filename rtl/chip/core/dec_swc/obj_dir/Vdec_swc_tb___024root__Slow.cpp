// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_swc_tb.h for the primary calling header

#include "Vdec_swc_tb__pch.h"
#include "Vdec_swc_tb__Syms.h"
#include "Vdec_swc_tb___024root.h"

void Vdec_swc_tb___024root___ctor_var_reset(Vdec_swc_tb___024root* vlSelf);

Vdec_swc_tb___024root::Vdec_swc_tb___024root(Vdec_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdec_swc_tb___024root___ctor_var_reset(this);
}

void Vdec_swc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdec_swc_tb___024root::~Vdec_swc_tb___024root() {
}
