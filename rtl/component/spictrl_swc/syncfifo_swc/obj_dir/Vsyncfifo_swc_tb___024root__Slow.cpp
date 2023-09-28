// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyncfifo_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsyncfifo_swc_tb__Syms.h"
#include "Vsyncfifo_swc_tb__Syms.h"
#include "Vsyncfifo_swc_tb___024root.h"

void Vsyncfifo_swc_tb___024root___ctor_var_reset(Vsyncfifo_swc_tb___024root* vlSelf);

Vsyncfifo_swc_tb___024root::Vsyncfifo_swc_tb___024root(Vsyncfifo_swc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsyncfifo_swc_tb___024root___ctor_var_reset(this);
}

void Vsyncfifo_swc_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsyncfifo_swc_tb___024root::~Vsyncfifo_swc_tb___024root() {
}
