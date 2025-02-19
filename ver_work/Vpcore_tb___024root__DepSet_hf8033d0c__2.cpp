// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb___024root.h"

void Vpcore_tb___024root___nba_sequent__TOP__0(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__1(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__2(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__3(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__4(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__0(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__1(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__2(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__3(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__4(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__5(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___act_comb__TOP__0(Vpcore_tb___024root* vlSelf);

void Vpcore_tb___024root___eval_nba(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vpcore_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vpcore_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vpcore_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vpcore_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vpcore_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vpcore_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vpcore_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(5U))) {
        Vpcore_tb___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vpcore_tb___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vpcore_tb___024root___nba_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U))) {
        Vpcore_tb___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
           | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vpcore_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
}

void Vpcore_tb___024root___eval_triggers__act(Vpcore_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__act(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vpcore_tb___024root___eval_act(Vpcore_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__nba(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpcore_tb___024root___eval(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vpcore_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vpcore_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("bench/pcore_tb.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vpcore_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vpcore_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("bench/pcore_tb.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vpcore_tb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vpcore_tb___024root___eval_debug_assertions(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
