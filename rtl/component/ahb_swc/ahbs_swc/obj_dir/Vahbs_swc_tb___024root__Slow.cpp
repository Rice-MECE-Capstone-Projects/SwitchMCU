// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vahbs_swc_tb__Syms.h"
#include "Vahbs_swc_tb__Syms.h"
#include "Vahbs_swc_tb___024root.h"

void Vahbs_swc_tb___024root___ctor_var_reset(Vahbs_swc_tb___024root* vlSelf);

Vahbs_swc_tb___024root::Vahbs_swc_tb___024root(Vahbs_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vahbs_swc_tb___024root___ctor_var_reset(this);
}

void Vahbs_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vahbs_swc_tb___024root::~Vahbs_swc_tb___024root() {
}
