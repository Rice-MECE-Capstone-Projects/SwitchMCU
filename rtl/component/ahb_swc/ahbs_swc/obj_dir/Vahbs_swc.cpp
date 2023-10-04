// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vahbs_swc.h"
#include "Vahbs_swc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vahbs_swc::Vahbs_swc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vahbs_swc__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vahbs_swc::Vahbs_swc(const char* _vcname__)
    : Vahbs_swc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vahbs_swc::~Vahbs_swc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vahbs_swc___024root___eval_debug_assertions(Vahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vahbs_swc___024root___eval_static(Vahbs_swc___024root* vlSelf);
void Vahbs_swc___024root___eval_initial(Vahbs_swc___024root* vlSelf);
void Vahbs_swc___024root___eval_settle(Vahbs_swc___024root* vlSelf);
void Vahbs_swc___024root___eval(Vahbs_swc___024root* vlSelf);

void Vahbs_swc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vahbs_swc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vahbs_swc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vahbs_swc___024root___eval_static(&(vlSymsp->TOP));
        Vahbs_swc___024root___eval_initial(&(vlSymsp->TOP));
        Vahbs_swc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vahbs_swc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vahbs_swc::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vahbs_swc::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vahbs_swc::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vahbs_swc::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vahbs_swc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vahbs_swc___024root___eval_final(Vahbs_swc___024root* vlSelf);

VL_ATTR_COLD void Vahbs_swc::final() {
    Vahbs_swc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vahbs_swc::hierName() const { return vlSymsp->name(); }
const char* Vahbs_swc::modelName() const { return "Vahbs_swc"; }
unsigned Vahbs_swc::threads() const { return 1; }
void Vahbs_swc::prepareClone() const { contextp()->prepareClone(); }
void Vahbs_swc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vahbs_swc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vahbs_swc___024root__trace_init_top(Vahbs_swc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vahbs_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbs_swc___024root*>(voidSelf);
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vahbs_swc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vahbs_swc___024root__trace_register(Vahbs_swc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vahbs_swc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vahbs_swc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vahbs_swc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
