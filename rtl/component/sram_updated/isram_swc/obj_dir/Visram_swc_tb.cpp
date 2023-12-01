// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Visram_swc_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Visram_swc_tb::Visram_swc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Visram_swc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Visram_swc_tb::Visram_swc_tb(const char* _vcname__)
    : Visram_swc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Visram_swc_tb::~Visram_swc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Visram_swc_tb___024root___eval_debug_assertions(Visram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Visram_swc_tb___024root___eval_static(Visram_swc_tb___024root* vlSelf);
void Visram_swc_tb___024root___eval_initial(Visram_swc_tb___024root* vlSelf);
void Visram_swc_tb___024root___eval_settle(Visram_swc_tb___024root* vlSelf);
void Visram_swc_tb___024root___eval(Visram_swc_tb___024root* vlSelf);

void Visram_swc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Visram_swc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Visram_swc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Visram_swc_tb___024root___eval_static(&(vlSymsp->TOP));
        Visram_swc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Visram_swc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Visram_swc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Visram_swc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Visram_swc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Visram_swc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Visram_swc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Visram_swc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Visram_swc_tb___024root___eval_final(Visram_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Visram_swc_tb::final() {
    Visram_swc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Visram_swc_tb::hierName() const { return vlSymsp->name(); }
const char* Visram_swc_tb::modelName() const { return "Visram_swc_tb"; }
unsigned Visram_swc_tb::threads() const { return 1; }
void Visram_swc_tb::prepareClone() const { contextp()->prepareClone(); }
void Visram_swc_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Visram_swc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Visram_swc_tb___024root__trace_init_top(Visram_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Visram_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Visram_swc_tb___024root*>(voidSelf);
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Visram_swc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Visram_swc_tb___024root__trace_register(Visram_swc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Visram_swc_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Visram_swc_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Visram_swc_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
