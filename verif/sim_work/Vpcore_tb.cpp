// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpcore_tb.h"
#include "Vpcore_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpcore_tb::Vpcore_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpcore_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpcore_tb::Vpcore_tb(const char* _vcname__)
    : Vpcore_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpcore_tb::~Vpcore_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpcore_tb___024root___eval_debug_assertions(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vpcore_tb___024root___eval_static(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___eval_initial(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___eval_settle(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___eval(Vpcore_tb___024root* vlSelf);

void Vpcore_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpcore_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpcore_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpcore_tb___024root___eval_static(&(vlSymsp->TOP));
        Vpcore_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vpcore_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpcore_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpcore_tb::eventsPending() { return false; }

uint64_t Vpcore_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpcore_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpcore_tb___024root___eval_final(Vpcore_tb___024root* vlSelf);

VL_ATTR_COLD void Vpcore_tb::final() {
    Vpcore_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpcore_tb::hierName() const { return vlSymsp->name(); }
const char* Vpcore_tb::modelName() const { return "Vpcore_tb"; }
unsigned Vpcore_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vpcore_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpcore_tb___024root__trace_init_top(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpcore_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_register(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpcore_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpcore_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpcore_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
