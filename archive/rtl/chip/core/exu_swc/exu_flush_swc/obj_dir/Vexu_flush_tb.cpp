// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexu_flush_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vexu_flush_tb::Vexu_flush_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vexu_flush_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vexu_flush_tb::Vexu_flush_tb(const char* _vcname__)
    : Vexu_flush_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vexu_flush_tb::~Vexu_flush_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vexu_flush_tb___024root___eval_debug_assertions(Vexu_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vexu_flush_tb___024root___eval_static(Vexu_flush_tb___024root* vlSelf);
void Vexu_flush_tb___024root___eval_initial(Vexu_flush_tb___024root* vlSelf);
void Vexu_flush_tb___024root___eval_settle(Vexu_flush_tb___024root* vlSelf);
void Vexu_flush_tb___024root___eval(Vexu_flush_tb___024root* vlSelf);

void Vexu_flush_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexu_flush_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexu_flush_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vexu_flush_tb___024root___eval_static(&(vlSymsp->TOP));
        Vexu_flush_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vexu_flush_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vexu_flush_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vexu_flush_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vexu_flush_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vexu_flush_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vexu_flush_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vexu_flush_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vexu_flush_tb___024root___eval_final(Vexu_flush_tb___024root* vlSelf);

VL_ATTR_COLD void Vexu_flush_tb::final() {
    Vexu_flush_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vexu_flush_tb::hierName() const { return vlSymsp->name(); }
const char* Vexu_flush_tb::modelName() const { return "Vexu_flush_tb"; }
unsigned Vexu_flush_tb::threads() const { return 1; }
void Vexu_flush_tb::prepareClone() const { contextp()->prepareClone(); }
void Vexu_flush_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vexu_flush_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vexu_flush_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vexu_flush_tb___024root__trace_init_top(Vexu_flush_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vexu_flush_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_flush_tb___024root*>(voidSelf);
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vexu_flush_tb___024root__trace_decl_types(tracep);
    Vexu_flush_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexu_flush_tb___024root__trace_register(Vexu_flush_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vexu_flush_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vexu_flush_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vexu_flush_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
