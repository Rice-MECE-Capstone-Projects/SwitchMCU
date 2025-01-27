// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vahb2apb_ahbs_swc.h"
#include "Vahb2apb_ahbs_swc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vahb2apb_ahbs_swc::Vahb2apb_ahbs_swc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vahb2apb_ahbs_swc__Syms(contextp(), _vcname__, this)}
    , hclk{vlSymsp->TOP.hclk}
    , pclk{vlSymsp->TOP.pclk}
    , rstn{vlSymsp->TOP.rstn}
    , hprot{vlSymsp->TOP.hprot}
    , hsize{vlSymsp->TOP.hsize}
    , htrans{vlSymsp->TOP.htrans}
    , hwrite{vlSymsp->TOP.hwrite}
    , hready{vlSymsp->TOP.hready}
    , hresp{vlSymsp->TOP.hresp}
    , pselx{vlSymsp->TOP.pselx}
    , penable{vlSymsp->TOP.penable}
    , pwrite{vlSymsp->TOP.pwrite}
    , pready{vlSymsp->TOP.pready}
    , pslverr{vlSymsp->TOP.pslverr}
    , haddr{vlSymsp->TOP.haddr}
    , hwdata{vlSymsp->TOP.hwdata}
    , hrdata{vlSymsp->TOP.hrdata}
    , paddr{vlSymsp->TOP.paddr}
    , pwdata{vlSymsp->TOP.pwdata}
    , prdata{vlSymsp->TOP.prdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vahb2apb_ahbs_swc::Vahb2apb_ahbs_swc(const char* _vcname__)
    : Vahb2apb_ahbs_swc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vahb2apb_ahbs_swc::~Vahb2apb_ahbs_swc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vahb2apb_ahbs_swc___024root___eval_debug_assertions(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vahb2apb_ahbs_swc___024root___eval_static(Vahb2apb_ahbs_swc___024root* vlSelf);
void Vahb2apb_ahbs_swc___024root___eval_initial(Vahb2apb_ahbs_swc___024root* vlSelf);
void Vahb2apb_ahbs_swc___024root___eval_settle(Vahb2apb_ahbs_swc___024root* vlSelf);
void Vahb2apb_ahbs_swc___024root___eval(Vahb2apb_ahbs_swc___024root* vlSelf);

void Vahb2apb_ahbs_swc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vahb2apb_ahbs_swc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vahb2apb_ahbs_swc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vahb2apb_ahbs_swc___024root___eval_static(&(vlSymsp->TOP));
        Vahb2apb_ahbs_swc___024root___eval_initial(&(vlSymsp->TOP));
        Vahb2apb_ahbs_swc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vahb2apb_ahbs_swc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vahb2apb_ahbs_swc::eventsPending() { return false; }

uint64_t Vahb2apb_ahbs_swc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vahb2apb_ahbs_swc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vahb2apb_ahbs_swc___024root___eval_final(Vahb2apb_ahbs_swc___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_ahbs_swc::final() {
    Vahb2apb_ahbs_swc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vahb2apb_ahbs_swc::hierName() const { return vlSymsp->name(); }
const char* Vahb2apb_ahbs_swc::modelName() const { return "Vahb2apb_ahbs_swc"; }
unsigned Vahb2apb_ahbs_swc::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vahb2apb_ahbs_swc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vahb2apb_ahbs_swc___024root__trace_init_top(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vahb2apb_ahbs_swc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_ahbs_swc___024root*>(voidSelf);
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vahb2apb_ahbs_swc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root__trace_register(Vahb2apb_ahbs_swc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vahb2apb_ahbs_swc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vahb2apb_ahbs_swc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vahb2apb_ahbs_swc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
