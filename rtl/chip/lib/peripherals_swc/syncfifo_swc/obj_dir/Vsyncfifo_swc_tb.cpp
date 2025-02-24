// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsyncfifo_swc_tb.h"
#include "Vsyncfifo_swc_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsyncfifo_swc_tb::Vsyncfifo_swc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsyncfifo_swc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsyncfifo_swc_tb::Vsyncfifo_swc_tb(const char* _vcname__)
    : Vsyncfifo_swc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsyncfifo_swc_tb::~Vsyncfifo_swc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsyncfifo_swc_tb___024root___eval_debug_assertions(Vsyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsyncfifo_swc_tb___024root___eval_static(Vsyncfifo_swc_tb___024root* vlSelf);
void Vsyncfifo_swc_tb___024root___eval_initial(Vsyncfifo_swc_tb___024root* vlSelf);
void Vsyncfifo_swc_tb___024root___eval_settle(Vsyncfifo_swc_tb___024root* vlSelf);
void Vsyncfifo_swc_tb___024root___eval(Vsyncfifo_swc_tb___024root* vlSelf);

void Vsyncfifo_swc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsyncfifo_swc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsyncfifo_swc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsyncfifo_swc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsyncfifo_swc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsyncfifo_swc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsyncfifo_swc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsyncfifo_swc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsyncfifo_swc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsyncfifo_swc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsyncfifo_swc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsyncfifo_swc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsyncfifo_swc_tb___024root___eval_final(Vsyncfifo_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vsyncfifo_swc_tb::final() {
    Vsyncfifo_swc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsyncfifo_swc_tb::hierName() const { return vlSymsp->name(); }
const char* Vsyncfifo_swc_tb::modelName() const { return "Vsyncfifo_swc_tb"; }
unsigned Vsyncfifo_swc_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsyncfifo_swc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsyncfifo_swc_tb___024root__trace_init_top(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsyncfifo_swc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_register(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsyncfifo_swc_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsyncfifo_swc_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsyncfifo_swc_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
