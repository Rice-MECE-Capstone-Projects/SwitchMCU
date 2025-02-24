// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbranch_prediction_tb.h for the primary calling header

#ifndef VERILATED_VBRANCH_PREDICTION_TB___024ROOT_H_
#define VERILATED_VBRANCH_PREDICTION_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbranch_prediction_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbranch_prediction_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ branch_prediction_tb__DOT__clk;
    CData/*0:0*/ branch_prediction_tb__DOT__predict_trigger;
    CData/*1:0*/ branch_prediction_tb__DOT__prediction_type;
    CData/*0:0*/ branch_prediction_tb__DOT__actual_branch;
    CData/*0:0*/ branch_prediction_tb__DOT__reset;
    CData/*0:0*/ branch_prediction_tb__DOT__prediction;
    CData/*0:0*/ branch_prediction_tb__DOT__branch_inst__DOT__old_branch;
    CData/*0:0*/ branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__branch_prediction_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ branch_prediction_tb__DOT__temp_imm;
    IData/*31:0*/ branch_prediction_tb__DOT__temp_pc;
    IData/*31:0*/ branch_prediction_tb__DOT__pc__strong__out1;
    IData/*31:0*/ branch_prediction_tb__DOT__branch_inst__DOT__pc_temp;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h04699f84__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbranch_prediction_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbranch_prediction_tb___024root(Vbranch_prediction_tb__Syms* symsp, const char* v__name);
    ~Vbranch_prediction_tb___024root();
    VL_UNCOPYABLE(Vbranch_prediction_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
