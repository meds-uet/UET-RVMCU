// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "Vpcore_tb__pch.h"
#include "Vpcore_tb___024root.h"

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__61(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__61\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vcellout__fpu_unit__apu_gnt_o 
        = (1U & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                  >> 8U) & ((((0xfffffff8U & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                               << 3U) 
                                              & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes))) 
                              | (0x7ffffffcU & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                                 << 2U) 
                                                & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                   >> 1U)))) 
                             | ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                                  & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready)) 
                                 << 1U) | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                           & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 3U)))) 
                            >> ([&]() {
                        vlSelfRef.__Vfunc_get_opgroup__0__op 
                            = (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 3U));
                        {
                            if ((8U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                if ((4U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                    if ((2U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                        if ((1U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                            vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 2U;
                                            goto __Vlabel10;
                                        } else {
                                            vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 3U;
                                            goto __Vlabel10;
                                        }
                                    } else {
                                        vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 3U;
                                        goto __Vlabel10;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                    vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 3U;
                                    goto __Vlabel10;
                                } else {
                                    vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 2U;
                                    goto __Vlabel10;
                                }
                            } else if ((4U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                if ((2U & (IData)(vlSelfRef.__Vfunc_get_opgroup__0__op))) {
                                    vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 2U;
                                    goto __Vlabel10;
                                } else {
                                    vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 1U;
                                    goto __Vlabel10;
                                }
                            } else {
                                vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_get_opgroup__0__Vfuncout)))));
}

void Vpcore_tb___024root___eval_triggers__act(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___eval_act(Vpcore_tb___024root* vlSelf);

bool Vpcore_tb___024root___eval_phase__act(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VactExecute;
    // Body
    Vpcore_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpcore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vpcore_tb___024root___eval_nba(Vpcore_tb___024root* vlSelf);

bool Vpcore_tb___024root___eval_phase__nba(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpcore_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__nba(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__act(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpcore_tb___024root___eval(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpcore_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("bench/pcore_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpcore_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench/pcore_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpcore_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpcore_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpcore_tb___024root___eval_debug_assertions(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
