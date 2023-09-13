// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregs_swc.h"
#include "Vregs_swc__Syms.h"

//============================================================
// Constructors

Vregs_swc::Vregs_swc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregs_swc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , write{vlSymsp->TOP.write}
    , waddr{vlSymsp->TOP.waddr}
    , read{vlSymsp->TOP.read}
    , raddr{vlSymsp->TOP.raddr}
    , wdata{vlSymsp->TOP.wdata}
    , rdata{vlSymsp->TOP.rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregs_swc::Vregs_swc(const char* _vcname__)
    : Vregs_swc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregs_swc::~Vregs_swc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregs_swc___024root___eval_debug_assertions(Vregs_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vregs_swc___024root___eval_static(Vregs_swc___024root* vlSelf);
void Vregs_swc___024root___eval_initial(Vregs_swc___024root* vlSelf);
void Vregs_swc___024root___eval_settle(Vregs_swc___024root* vlSelf);
void Vregs_swc___024root___eval(Vregs_swc___024root* vlSelf);

void Vregs_swc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregs_swc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregs_swc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vregs_swc___024root___eval_static(&(vlSymsp->TOP));
        Vregs_swc___024root___eval_initial(&(vlSymsp->TOP));
        Vregs_swc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vregs_swc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vregs_swc::eventsPending() { return false; }

uint64_t Vregs_swc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vregs_swc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vregs_swc___024root___eval_final(Vregs_swc___024root* vlSelf);

VL_ATTR_COLD void Vregs_swc::final() {
    Vregs_swc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregs_swc::hierName() const { return vlSymsp->name(); }
const char* Vregs_swc::modelName() const { return "Vregs_swc"; }
unsigned Vregs_swc::threads() const { return 1; }
