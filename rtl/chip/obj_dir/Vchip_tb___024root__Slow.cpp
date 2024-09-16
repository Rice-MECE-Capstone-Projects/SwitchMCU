// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchip_tb.h for the primary calling header

#include "Vchip_tb__pch.h"
#include "Vchip_tb__Syms.h"
#include "Vchip_tb___024root.h"

void Vchip_tb___024root___ctor_var_reset(Vchip_tb___024root* vlSelf);

Vchip_tb___024root::Vchip_tb___024root(Vchip_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchip_tb___024root___ctor_var_reset(this);
}

void Vchip_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vchip_tb___024root::~Vchip_tb___024root() {
}
