// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAHBM_SWC_H_
#define VERILATED_VAHBM_SWC_H_  // guard

#include "verilated.h"

class Vahbm_swc__Syms;
class Vahbm_swc___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vahbm_swc VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vahbm_swc__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&hclk,0,0);
    VL_IN8(&hrstn,0,0);
    VL_OUT8(&hmastlock,0,0);
    VL_OUT8(&hprot,6,0);
    VL_OUT8(&hsize,2,0);
    VL_OUT8(&htrans,1,0);
    VL_OUT8(&hwrite,0,0);
    VL_IN8(&hready,0,0);
    VL_IN8(&hresp,0,0);
    VL_OUT8(&wbuffread,0,0);
    VL_IN8(&wreq,0,0);
    VL_OUT8(&rbuffwrite,0,0);
    VL_IN8(&rreq,0,0);
    VL_OUT8(&done,0,0);
    VL_OUT8(&resp,0,0);
    VL_OUT(&haddr,31,0);
    VL_OUT(&hwdata,31,0);
    VL_IN(&wbuffdata,31,0);
    VL_IN(&wbuffaddr,31,0);
    VL_OUT(&rbuffdata,31,0);
    VL_IN(&rbuffaddr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vahbm_swc___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vahbm_swc(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vahbm_swc(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vahbm_swc();
  private:
    VL_UNCOPYABLE(Vahbm_swc);  ///< Copying not allowed

  public:
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
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
