// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vchip_tb.h"
#include "Vchip_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vchip_tb::Vchip_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vchip_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vchip_tb::Vchip_tb(const char* _vcname__)
    : Vchip_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vchip_tb::~Vchip_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vchip_tb___024root___eval_debug_assertions(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vchip_tb___024root___eval_static(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___eval_initial(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___eval_settle(Vchip_tb___024root* vlSelf);
void Vchip_tb___024root___eval(Vchip_tb___024root* vlSelf);

void Vchip_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchip_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vchip_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vchip_tb___024root___eval_static(&(vlSymsp->TOP));
        Vchip_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vchip_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vchip_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vchip_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vchip_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vchip_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vchip_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vchip_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vchip_tb___024root___eval_final(Vchip_tb___024root* vlSelf);

VL_ATTR_COLD void Vchip_tb::final() {
    Vchip_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vchip_tb::hierName() const { return vlSymsp->name(); }
const char* Vchip_tb::modelName() const { return "Vchip_tb"; }
unsigned Vchip_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vchip_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vchip_tb___024root__trace_init_top(Vchip_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vchip_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchip_tb___024root*>(voidSelf);
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vchip_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vchip_tb___024root__trace_register(Vchip_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vchip_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vchip_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vchip_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
