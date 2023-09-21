// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vahbm_swc.h"
#include "Vahbm_swc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vahbm_swc::Vahbm_swc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vahbm_swc__Syms(contextp(), _vcname__, this)}
    , hclk{vlSymsp->TOP.hclk}
    , hrstn{vlSymsp->TOP.hrstn}
    , hmastlock{vlSymsp->TOP.hmastlock}
    , hprot{vlSymsp->TOP.hprot}
    , hsize{vlSymsp->TOP.hsize}
    , htrans{vlSymsp->TOP.htrans}
    , hwrite{vlSymsp->TOP.hwrite}
    , hready{vlSymsp->TOP.hready}
    , hresp{vlSymsp->TOP.hresp}
    , wbuffread{vlSymsp->TOP.wbuffread}
    , wreq{vlSymsp->TOP.wreq}
    , rbuffwrite{vlSymsp->TOP.rbuffwrite}
    , rreq{vlSymsp->TOP.rreq}
    , done{vlSymsp->TOP.done}
    , resp{vlSymsp->TOP.resp}
    , haddr{vlSymsp->TOP.haddr}
    , hwdata{vlSymsp->TOP.hwdata}
    , wbuffdata{vlSymsp->TOP.wbuffdata}
    , wbuffaddr{vlSymsp->TOP.wbuffaddr}
    , rbuffdata{vlSymsp->TOP.rbuffdata}
    , rbuffaddr{vlSymsp->TOP.rbuffaddr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vahbm_swc::Vahbm_swc(const char* _vcname__)
    : Vahbm_swc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vahbm_swc::~Vahbm_swc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vahbm_swc___024root___eval_debug_assertions(Vahbm_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vahbm_swc___024root___eval_static(Vahbm_swc___024root* vlSelf);
void Vahbm_swc___024root___eval_initial(Vahbm_swc___024root* vlSelf);
void Vahbm_swc___024root___eval_settle(Vahbm_swc___024root* vlSelf);
void Vahbm_swc___024root___eval(Vahbm_swc___024root* vlSelf);

void Vahbm_swc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vahbm_swc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vahbm_swc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vahbm_swc___024root___eval_static(&(vlSymsp->TOP));
        Vahbm_swc___024root___eval_initial(&(vlSymsp->TOP));
        Vahbm_swc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vahbm_swc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vahbm_swc::eventsPending() { return false; }

uint64_t Vahbm_swc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vahbm_swc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vahbm_swc___024root___eval_final(Vahbm_swc___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc::final() {
    Vahbm_swc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vahbm_swc::hierName() const { return vlSymsp->name(); }
const char* Vahbm_swc::modelName() const { return "Vahbm_swc"; }
unsigned Vahbm_swc::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vahbm_swc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vahbm_swc___024root__trace_init_top(Vahbm_swc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vahbm_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahbm_swc___024root*>(voidSelf);
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vahbm_swc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vahbm_swc___024root__trace_register(Vahbm_swc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vahbm_swc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vahbm_swc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vahbm_swc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
