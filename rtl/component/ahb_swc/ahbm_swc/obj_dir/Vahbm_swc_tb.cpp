// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vahbm_swc_tb.h"
#include "Vahbm_swc_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vahbm_swc_tb::Vahbm_swc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vahbm_swc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vahbm_swc_tb::Vahbm_swc_tb(const char* _vcname__)
    : Vahbm_swc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vahbm_swc_tb::~Vahbm_swc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vahbm_swc_tb___024root___eval_debug_assertions(Vahbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vahbm_swc_tb___024root___eval_static(Vahbm_swc_tb___024root* vlSelf);
void Vahbm_swc_tb___024root___eval_initial(Vahbm_swc_tb___024root* vlSelf);
void Vahbm_swc_tb___024root___eval_settle(Vahbm_swc_tb___024root* vlSelf);
void Vahbm_swc_tb___024root___eval(Vahbm_swc_tb___024root* vlSelf);

void Vahbm_swc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vahbm_swc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vahbm_swc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vahbm_swc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vahbm_swc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vahbm_swc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vahbm_swc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vahbm_swc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vahbm_swc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vahbm_swc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vahbm_swc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vahbm_swc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vahbm_swc_tb___024root___eval_final(Vahbm_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc_tb::final() {
    Vahbm_swc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vahbm_swc_tb::hierName() const { return vlSymsp->name(); }
const char* Vahbm_swc_tb::modelName() const { return "Vahbm_swc_tb"; }
unsigned Vahbm_swc_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vahbm_swc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vahbm_swc_tb___024root__trace_init_top(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vahbm_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc_tb___024root*>(voidSelf);
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vahbm_swc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vahbm_swc_tb___024root__trace_register(Vahbm_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vahbm_swc_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vahbm_swc_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vahbm_swc_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
