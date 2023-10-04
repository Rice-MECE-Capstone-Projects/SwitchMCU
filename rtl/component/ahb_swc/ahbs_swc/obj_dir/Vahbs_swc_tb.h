// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAHBS_SWC_TB_H_
#define _VAHBS_SWC_TB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vahbs_swc_tb__Syms;

//----------

VL_MODULE(Vahbs_swc_tb) {
  public:
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ ahbs_swc_tb__DOT__hclk;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__ahbs_swc_tb__DOT__hclk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ahbs_swc_tb__DOT__hclk;
    CData/*0:0*/ __Vchglast__TOP__ahbs_swc_tb__DOT__hclk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vahbs_swc_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vahbs_swc_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vahbs_swc_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vahbs_swc_tb();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vahbs_swc_tb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vahbs_swc_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vahbs_swc_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vahbs_swc_tb__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vahbs_swc_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vahbs_swc_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vahbs_swc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vahbs_swc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vahbs_swc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
