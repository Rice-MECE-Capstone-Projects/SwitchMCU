// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasyncfifo_swc_tb.h for the primary calling header

#include "Vasyncfifo_swc_tb__pch.h"
#include "Vasyncfifo_swc_tb__Syms.h"
#include "Vasyncfifo_swc_tb___024root.h"

void Vasyncfifo_swc_tb___024root___ctor_var_reset(Vasyncfifo_swc_tb___024root* vlSelf);

Vasyncfifo_swc_tb___024root::Vasyncfifo_swc_tb___024root(Vasyncfifo_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vasyncfifo_swc_tb___024root___ctor_var_reset(this);
}

void Vasyncfifo_swc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vasyncfifo_swc_tb___024root::~Vasyncfifo_swc_tb___024root() {
}
