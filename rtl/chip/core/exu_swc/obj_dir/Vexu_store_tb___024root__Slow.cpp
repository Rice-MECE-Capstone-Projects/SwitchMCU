// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_store_tb.h for the primary calling header

#include "Vexu_store_tb__pch.h"
#include "Vexu_store_tb__Syms.h"
#include "Vexu_store_tb___024root.h"

void Vexu_store_tb___024root___ctor_var_reset(Vexu_store_tb___024root* vlSelf);

Vexu_store_tb___024root::Vexu_store_tb___024root(Vexu_store_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vexu_store_tb___024root___ctor_var_reset(this);
}

void Vexu_store_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vexu_store_tb___024root::~Vexu_store_tb___024root() {
}
