// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpcore_tb__pch.h"
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
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
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
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpcore_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpcore_tb::eventsPending() { return false; }

uint64_t Vpcore_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
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
void Vpcore_tb::prepareClone() const { contextp()->prepareClone(); }
void Vpcore_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpcore_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpcore_tb___024root__trace_decl_types(VerilatedVcd* tracep);

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
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpcore_tb___024root__trace_decl_types(tracep);
    Vpcore_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_register(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpcore_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpcore_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpcore_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
