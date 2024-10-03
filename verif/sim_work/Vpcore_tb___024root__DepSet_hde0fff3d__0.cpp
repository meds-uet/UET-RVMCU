// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__act(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpcore_tb___024root___eval_triggers__act(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                       != vlSelf->__Vtrigrprev__TOP__pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next) 
                                      | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__is_jal) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__is_jal)));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data 
                                      != vlSelf->__Vtrigrprev__TOP__pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data);
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(3U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__reset)));
    vlSelf->__Vtrigrprev__TOP__pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next;
    vlSelf->__Vtrigrprev__TOP__pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__is_jal 
        = vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__is_jal;
    vlSelf->__Vtrigrprev__TOP__pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data 
        = vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpcore_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
