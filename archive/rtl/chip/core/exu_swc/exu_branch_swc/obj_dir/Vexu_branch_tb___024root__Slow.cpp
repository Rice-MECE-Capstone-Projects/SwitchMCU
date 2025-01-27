// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_branch_tb.h for the primary calling header

#include "Vexu_branch_tb__pch.h"
#include "Vexu_branch_tb__Syms.h"
#include "Vexu_branch_tb___024root.h"

void Vexu_branch_tb___024root___ctor_var_reset(Vexu_branch_tb___024root* vlSelf);

Vexu_branch_tb___024root::Vexu_branch_tb___024root(Vexu_branch_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vexu_branch_tb___024root___ctor_var_reset(this);
}

void Vexu_branch_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vexu_branch_tb___024root::~Vexu_branch_tb___024root() {
}
