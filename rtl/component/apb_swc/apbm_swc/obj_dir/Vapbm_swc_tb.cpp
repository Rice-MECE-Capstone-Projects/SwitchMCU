// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vapbm_swc_tb.h"
#include "Vapbm_swc_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vapbm_swc_tb::Vapbm_swc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vapbm_swc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vapbm_swc_tb::Vapbm_swc_tb(const char* _vcname__)
    : Vapbm_swc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vapbm_swc_tb::~Vapbm_swc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vapbm_swc_tb___024root___eval_debug_assertions(Vapbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vapbm_swc_tb___024root___eval_static(Vapbm_swc_tb___024root* vlSelf);
void Vapbm_swc_tb___024root___eval_initial(Vapbm_swc_tb___024root* vlSelf);
void Vapbm_swc_tb___024root___eval_settle(Vapbm_swc_tb___024root* vlSelf);
void Vapbm_swc_tb___024root___eval(Vapbm_swc_tb___024root* vlSelf);

void Vapbm_swc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapbm_swc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vapbm_swc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vapbm_swc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vapbm_swc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vapbm_swc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vapbm_swc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vapbm_swc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vapbm_swc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vapbm_swc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vapbm_swc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vapbm_swc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vapbm_swc_tb___024root___eval_final(Vapbm_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vapbm_swc_tb::final() {
    Vapbm_swc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vapbm_swc_tb::hierName() const { return vlSymsp->name(); }
const char* Vapbm_swc_tb::modelName() const { return "Vapbm_swc_tb"; }
unsigned Vapbm_swc_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vapbm_swc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vapbm_swc_tb___024root__trace_init_top(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vapbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapbm_swc_tb___024root*>(voidSelf);
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vapbm_swc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vapbm_swc_tb___024root__trace_register(Vapbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vapbm_swc_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vapbm_swc_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vapbm_swc_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
