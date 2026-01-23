// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "Vpcore_tb__pch.h"
#include "Vpcore_tb___024root.h"

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__12(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
        = ((0xfU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U]) 
           | (((0U != (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data
                : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]) 
              << 4U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
        = ((0xfffffff0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U]) 
           | (((0U != (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data
                : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]) 
              >> 0x1cU));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__14(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((8U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_valid_q) 
                  << 3U)) | (((IData)((0U != (0x60U 
                                              & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (6U 
                                                            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__15(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_valid_q) 
                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      >> 3U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_ready) 
                  & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_valid_q)) 
                 >> 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__hold_result = 0U;
    if ((0U != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
            if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fpu_idu_fwd_vld) {
                if ((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_ready) 
                              >> 1U)))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__hold_result = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__29(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__29\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (((0x20U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                      << 1U)) | ((0x10U & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                            << 2U) 
                                           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                              << 1U))) 
                                 | (8U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                          << 3U)))) 
           | (((IData)((0U != (0x60U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
               << 2U) | (((IData)((0U != (0x18U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__31(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__31\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (((0x20U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                      << 1U)) | ((0x10U & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                            << 2U) 
                                           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                              << 1U))) 
                                 | (8U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                          << 3U)))) 
           | (((IData)((0U != (0x60U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
               << 2U) | (((IData)((0U != (0x18U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__33(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__33\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (((0x20U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                      << 1U)) | ((0x10U & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                            << 2U) 
                                           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                              << 1U))) 
                                 | (8U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                          << 3U)))) 
           | (((IData)((0U != (0x60U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
               << 2U) | (((IData)((0U != (0x18U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__40(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__40\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h296cce3a__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h296cce3a__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hea3239d6__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hea3239d6__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h516a8911__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h516a8911__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp 
        = (0x1ffU & ((0xcU == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 3U))) ? ((IData)(0x1fU) 
                                                   - 
                                                   (0x1fU 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                      : ((IData)(8U) + ((((0xffU & 
                                           (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U] 
                                            >> 0x17U)) 
                                          + VL_EXTENDS_II(9,2, 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                                              >> 6U)))) 
                                         - (IData)(0x7fU)) 
                                        - (0x1fU & 
                                           vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_mant_q 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
           << (0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h516a8911__0 
        = (VL_GTS_III(32, 1U, VL_EXTENDS_II(32,9, (0x1ffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))))) 
           & VL_LTES_III(32, 0xffffffe9U, VL_EXTENDS_II(32,9, 
                                                        (0x1ffU 
                                                         & ((IData)(0x7fU) 
                                                            + 
                                                            VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))))));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hea3239d6__0 
        = (VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,9, 
                                                (0x1ffU 
                                                 & ((IData)(0x7fU) 
                                                    + 
                                                    VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))))) 
           | ((0xcU != (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                >> 3U))) & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                            >> 4U)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h296cce3a__0 
        = (VL_GTES_III(32, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)), 
                       ((([&]() {
                            vlSelfRef.__Vfunc_int_width__26__ifmt = 2U;
                            {
                                if ((2U & (IData)(vlSelfRef.__Vfunc_int_width__26__ifmt))) {
                                    if ((1U & (IData)(vlSelfRef.__Vfunc_int_width__26__ifmt))) {
                                        vlSelfRef.__Vfunc_int_width__26__Vfuncout = 0x40U;
                                        goto __Vlabel8;
                                    } else {
                                        vlSelfRef.__Vfunc_int_width__26__Vfuncout = 0x20U;
                                        goto __Vlabel8;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.__Vfunc_int_width__26__ifmt))) {
                                    vlSelfRef.__Vfunc_int_width__26__Vfuncout = 0x10U;
                                    goto __Vlabel8;
                                } else {
                                    vlSelfRef.__Vfunc_int_width__26__Vfuncout = 8U;
                                    goto __Vlabel8;
                                }
                                __Vlabel8: ;
                            }
                        }(), vlSelfRef.__Vfunc_int_width__26__Vfuncout) 
                         - (IData)(1U)) + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 7U)))) 
           & (~ ((((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                       >> 7U)) & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)) 
                  & (VL_EXTENDS_II(32,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
                     == (([&]() {
                                    vlSelfRef.__Vfunc_int_width__27__ifmt = 2U;
                                    {
                                        if ((2U & (IData)(vlSelfRef.__Vfunc_int_width__27__ifmt))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.__Vfunc_int_width__27__ifmt))) {
                                                vlSelfRef.__Vfunc_int_width__27__Vfuncout = 0x40U;
                                                goto __Vlabel9;
                                            } else {
                                                vlSelfRef.__Vfunc_int_width__27__Vfuncout = 0x20U;
                                                goto __Vlabel9;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vfunc_int_width__27__ifmt))) {
                                            vlSelfRef.__Vfunc_int_width__27__Vfuncout = 0x10U;
                                            goto __Vlabel9;
                                        } else {
                                            vlSelfRef.__Vfunc_int_width__27__Vfuncout = 8U;
                                            goto __Vlabel9;
                                        }
                                        __Vlabel9: ;
                                    }
                                }(), vlSelfRef.__Vfunc_int_width__27__Vfuncout) 
                         - (IData)(1U)))) & (0x80000000U 
                                             == vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_mant_q))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
        = (0x1ffU & ((IData)(0x7fU) + VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))));
    __Vtemp_2[0U] = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_mant_q;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(65,65,32, __Vtemp_3, __Vtemp_2, 0x21U);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] 
        = (1U & __Vtemp_3[2U]);
    if ((0xbU != (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                          >> 3U)))) {
        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hea3239d6__0) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0xfeU;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] = 0xffffffffU;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] = 0xffffffffU;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] = 1U;
        } else if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h516a8911__0) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        } else if (VL_GTS_III(32, 0xffffffe9U, VL_EXTENDS_II(32,9, 
                                                             (0x1ffU 
                                                              & ((IData)(0x7fU) 
                                                                 + 
                                                                 VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))))))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
    if ((0xbU == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                          >> 3U)))) {
        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h296cce3a__0)))) {
            if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 1U;
            }
        }
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
            = (0x3fU & ((IData)(0x1fU) - (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)));
        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h296cce3a__0) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
        } else if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0x21U;
        }
    } else {
        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hea3239d6__0)))) {
            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h516a8911__0) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 1U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x3fU & (((IData)(1U) + (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)) 
                                - (0x1ffU & ((IData)(0x7fU) 
                                             + VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))))));
            } else if (VL_GTS_III(32, 0xffffffe9U, 
                                  VL_EXTENDS_II(32,9, 
                                                (0x1ffU 
                                                 & ((IData)(0x7fU) 
                                                    + 
                                                    VL_EXTENDS_II(9,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp))))))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round = 1U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x3fU & ((IData)(0x19U) + (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)));
            }
        }
        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hea3239d6__0) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
        }
    }
    VL_SHIFTR_WWI(65,65,6, __Vtemp_7, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U] 
        = __Vtemp_7[0U];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
        = __Vtemp_7[1U];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
        = (1U & __Vtemp_7[2U]);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = (- (IData)((1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
            << 0x1fU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                         >> 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits 
        = ((2U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                  >> 7U)) | (0U != (0xffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U]))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits 
        = ((2U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                  << 1U)) | (0U != vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U]));
    if ((0xbU == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                          >> 3U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = ((0x7f800000U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                               << 0x17U)) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                             >> 9U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
           + ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
               ? ((1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                         >> 1U)) || (1U & ((1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                            ? ((~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))
                                            : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                               >> 1U))))
               : ((2U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                   ? ((1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                       ? ((0U != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                          & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)))
                       : ((0U != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                          & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)))
                   : ((1U & (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                      && ((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                 >> 1U)) && ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                             || (1U 
                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1eU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | (0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                              >> 0x17U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1eU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | (0xffU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                 >> 0x17U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)
            ? (- vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q)) 
         & (VL_EXTENDS_II(32,9, (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
            == ((IData)(0x1eU) + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 7U)))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (4U & ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                            >> (0x1fU & ((IData)(0x1eU) 
                                         + VL_SHIFTR_III(5,5,32, 
                                                         (0x1fU 
                                                          & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                             >> 3U)), 4U))))) 
                        << 2U)));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round 
        = (1U & ((0xbU == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 3U))) ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round) 
                                               >> 2U)
                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special 
        = (1U & ((((1U != (0x19U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o))) 
                   | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round)) 
                  | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)) 
                 | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q) 
                    & ((0U != vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res) 
                       & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                          >> 7U)))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[2U]
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit 
        = (1U & (IData)(((0x58U != (0x78U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
                            >> 0x1fU))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__42(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__42\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((((0x10000U 
                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                   ? 0x10U
                                                   : 0x11U) 
                                                 << 0xfU) 
                                                | (((0x4000U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xaU)) 
                                               | ((((0x1000U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xcU
                                                     : 0xdU) 
                                                   << 5U) 
                                                  | ((0x400U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                      ? 0xaU
                                                      : 0xbU))))) 
                              << 0x14U) | (QData)((IData)(
                                                          (((((0x100U 
                                                               & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                               ? 8U
                                                               : 9U) 
                                                             << 0xfU) 
                                                            | (((0x40U 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                 ? 6U
                                                                 : 7U) 
                                                               << 0xaU)) 
                                                           | ((((0x10U 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                 ? 4U
                                                                 : 5U) 
                                                               << 5U) 
                                                              | ((4U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                  ? 2U
                                                                  : 3U)))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((((
                                                   (0x40000000U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x1eU
                                                    : 0x1fU) 
                                                  << 0xaU) 
                                                 | ((((0x10000000U 
                                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                       ? 0x1cU
                                                       : 0x1dU) 
                                                     << 5U) 
                                                    | ((0x4000000U 
                                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x1aU
                                                        : 0x1bU))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((((0x1000000U 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                 ? 0x18U
                                                                 : 0x19U) 
                                                               << 0xfU) 
                                                              | (((0x400000U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                   ? 0x16U
                                                                   : 0x17U) 
                                                                 << 0xaU)) 
                                                             | ((((0x100000U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                   ? 0x14U
                                                                   : 0x15U) 
                                                                 << 5U) 
                                                                | ((0x40000U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                    ? 0x12U
                                                                    : 0x13U))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (((((0x10000U 
                                                               & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                               ? 0x10U
                                                               : 0x11U) 
                                                             << 0xfU) 
                                                            | (((0x4000U 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                 ? 0xeU
                                                                 : 0xfU) 
                                                               << 0xaU)) 
                                                           | ((((0x1000U 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                 ? 0xcU
                                                                 : 0xdU) 
                                                               << 5U) 
                                                              | ((0x400U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                  ? 0xaU
                                                                  : 0xbU))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (((((0x100U 
                                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                ? 8U
                                                                : 9U) 
                                                              << 0xfU) 
                                                             | (((0x40U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                  ? 6U
                                                                  : 7U) 
                                                                << 0xaU)) 
                                                            | ((((0x10U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                  ? 4U
                                                                  : 5U) 
                                                                << 5U) 
                                                               | ((4U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                   ? 2U
                                                                   : 3U)))))) 
                                        >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)((((
                                                   (0x40000000U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x1eU
                                                    : 0x1fU) 
                                                  << 0xaU) 
                                                 | ((((0x10000000U 
                                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                       ? 0x1cU
                                                       : 0x1dU) 
                                                     << 5U) 
                                                    | ((0x4000000U 
                                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x1aU
                                                        : 0x1bU))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((((0x1000000U 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                 ? 0x18U
                                                                 : 0x19U) 
                                                               << 0xfU) 
                                                              | (((0x400000U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                   ? 0x16U
                                                                   : 0x17U) 
                                                                 << 0xaU)) 
                                                             | ((((0x100000U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                   ? 0x14U
                                                                   : 0x15U) 
                                                                 << 5U) 
                                                                | ((0x40000U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                    ? 0x12U
                                                                    : 0x13U))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              ((((0x40000000U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                  ? 0x1eU
                                                                  : 0x1fU) 
                                                                << 0xaU) 
                                                               | ((((0x10000000U 
                                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                     ? 0x1cU
                                                                     : 0x1dU) 
                                                                   << 5U) 
                                                                  | ((0x4000000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                      ? 0x1aU
                                                                      : 0x1bU))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (((((0x1000000U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                    ? 0x18U
                                                                    : 0x19U) 
                                                                  << 0xfU) 
                                                                 | (((0x400000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                      ? 0x16U
                                                                      : 0x17U) 
                                                                    << 0xaU)) 
                                                                | ((((0x100000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                      ? 0x14U
                                                                      : 0x15U) 
                                                                    << 5U) 
                                                                   | ((0x40000U 
                                                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                       ? 0x12U
                                                                       : 0x13U)))))) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)((((0xf8000U 
                                                 & (((0x8000U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                      ? 
                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       << 0x15U) 
                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                         >> 0xbU))
                                                      : 
                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                         >> 0x10U))) 
                                                    << 0xfU)) 
                                                | (0x7c00U 
                                                   & (((0x2000U 
                                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                         << 0x1fU) 
                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                         << 0x1aU) 
                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                           >> 6U))) 
                                                      << 0xaU))) 
                                               | ((0x3e0U 
                                                   & (((0x800U 
                                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         << 9U) 
                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                           >> 0x17U))
                                                        : 
                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                           >> 0x1cU))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & ((0x200U 
                                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                          << 0x13U) 
                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                            >> 0xdU))
                                                         : 
                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                            >> 0x12U)))))))) 
                              << 0x14U) | (QData)((IData)(
                                                          (((0xf8000U 
                                                             & (((0x80U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                     >> 3U))
                                                                  : 
                                                                 ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                   << 0x18U) 
                                                                  | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                     >> 8U))) 
                                                                << 0xfU)) 
                                                            | (0x7c00U 
                                                               & (((0x20U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                       >> 0x19U))
                                                                    : 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                       >> 0x1eU))) 
                                                                  << 0xaU))) 
                                                           | ((0x3e0U 
                                                               & (((8U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                     << 0x11U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                       >> 0xfU))
                                                                    : 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                     << 0xcU) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                       >> 0x14U))) 
                                                                  << 5U)) 
                                                              | (0x1fU 
                                                                 & ((2U 
                                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                      << 0x1bU) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        >> 5U))
                                                                     : 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                      << 0x16U) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        >> 0xaU))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((
                                                   ((1U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0U
                                                     : 1U) 
                                                   << 0xfU) 
                                                  | (0x7c00U 
                                                     & (((0x20000000U 
                                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0xfU) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 0x11U))
                                                          : 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 0x16U))) 
                                                        << 0xaU))) 
                                                 | ((0x3e0U 
                                                     & (((0x8000000U 
                                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0x19U) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0x14U) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 0xcU))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((0x2000000U 
                                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                              >> 0x1dU))
                                                           : 
                                                          ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((0xf8000U 
                                                               & (((0x800000U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0xdU) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 0x13U))
                                                                    : 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 0x18U))) 
                                                                  << 0xfU)) 
                                                              | (0x7c00U 
                                                                 & (((0x200000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 0x17U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         >> 9U))
                                                                      : 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 0x12U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         >> 0xeU))) 
                                                                    << 0xaU))) 
                                                             | ((0x3e0U 
                                                                 & (((0x80000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 1U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         >> 0x1fU))
                                                                      : 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         >> 4U))) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (((0xf8000U 
                                                             & (((0x8000U 
                                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                   << 0x15U) 
                                                                  | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     >> 0xbU))
                                                                  : 
                                                                 ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     >> 0x10U))) 
                                                                << 0xfU)) 
                                                            | (0x7c00U 
                                                               & (((0x2000U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 1U))
                                                                    : 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 6U))) 
                                                                  << 0xaU))) 
                                                           | ((0x3e0U 
                                                               & (((0x800U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                       >> 0x17U))
                                                                    : 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                       >> 0x1cU))) 
                                                                  << 5U)) 
                                                              | (0x1fU 
                                                                 & ((0x200U 
                                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                      << 0x13U) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                        >> 0xdU))
                                                                     : 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                      << 0xeU) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                        >> 0x12U)))))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (((0xf8000U 
                                                              & (((0x80U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                   ? 
                                                                  ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                    << 0x1dU) 
                                                                   | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                      >> 3U))
                                                                   : 
                                                                  ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                    << 0x18U) 
                                                                   | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                      >> 8U))) 
                                                                 << 0xfU)) 
                                                             | (0x7c00U 
                                                                & (((0x20U 
                                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        >> 0x19U))
                                                                     : 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        >> 0x1eU))) 
                                                                   << 0xaU))) 
                                                            | ((0x3e0U 
                                                                & (((8U 
                                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                      << 0x11U) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        >> 0xfU))
                                                                     : 
                                                                    ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                      << 0xcU) 
                                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        >> 0x14U))) 
                                                                   << 5U)) 
                                                               | (0x1fU 
                                                                  & ((2U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                         >> 5U))
                                                                      : 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                       << 0x16U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                         >> 0xaU))))))))) 
                                        >> 0x20U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((
                                                   ((1U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0U
                                                     : 1U) 
                                                   << 0xfU) 
                                                  | (0x7c00U 
                                                     & (((0x20000000U 
                                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0xfU) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 0x11U))
                                                          : 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 0x16U))) 
                                                        << 0xaU))) 
                                                 | ((0x3e0U 
                                                     & (((0x8000000U 
                                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0x19U) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                           << 0x14U) 
                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                             >> 0xcU))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((0x2000000U 
                                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                              >> 0x1dU))
                                                           : 
                                                          ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((0xf8000U 
                                                               & (((0x800000U 
                                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0xdU) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 0x13U))
                                                                    : 
                                                                   ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 0x18U))) 
                                                                  << 0xfU)) 
                                                              | (0x7c00U 
                                                                 & (((0x200000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 0x17U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         >> 9U))
                                                                      : 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 0x12U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         >> 0xeU))) 
                                                                    << 0xaU))) 
                                                             | ((0x3e0U 
                                                                 & (((0x80000U 
                                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 1U) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         >> 0x1fU))
                                                                      : 
                                                                     ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         >> 4U))) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              (((((1U 
                                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp)
                                                                   ? 0U
                                                                   : 1U) 
                                                                 << 0xfU) 
                                                                | (0x7c00U 
                                                                   & (((0x20000000U 
                                                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                         << 0xfU) 
                                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                           >> 0x11U))
                                                                        : 
                                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                         << 0xaU) 
                                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                           >> 0x16U))) 
                                                                      << 0xaU))) 
                                                               | ((0x3e0U 
                                                                   & (((0x8000000U 
                                                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                         << 0x19U) 
                                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                           >> 7U))
                                                                        : 
                                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                         << 0x14U) 
                                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                           >> 0xcU))) 
                                                                      << 5U)) 
                                                                  | (0x1fU 
                                                                     & ((0x2000000U 
                                                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                          << 3U) 
                                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                            >> 0x1dU))
                                                                         : 
                                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                                            >> 2U)))))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (((0xf8000U 
                                                                  & (((0x800000U 
                                                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        << 0xdU) 
                                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                          >> 0x13U))
                                                                       : 
                                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        << 8U) 
                                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                          >> 0x18U))) 
                                                                     << 0xfU)) 
                                                                 | (0x7c00U 
                                                                    & (((0x200000U 
                                                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                          << 0x17U) 
                                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                            >> 9U))
                                                                         : 
                                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                          << 0x12U) 
                                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                            >> 0xeU))) 
                                                                       << 0xaU))) 
                                                                | ((0x3e0U 
                                                                    & (((0x80000U 
                                                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                          << 1U) 
                                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            >> 0x1fU))
                                                                         : 
                                                                        ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                          << 0x1cU) 
                                                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                            >> 4U))) 
                                                                       << 5U)) 
                                                                   | (0x1fU 
                                                                      & ((0x20000U 
                                                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x15U))
                                                                          : 
                                                                         ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x1aU))))))))) 
                                            >> 0x20U)) 
                                   << 8U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((__Vtemp_2[0U] << 0x10U) | __Vtemp_3[2U]);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((__Vtemp_2[0U] >> 0x10U) | (__Vtemp_2[1U] 
                                       << 0x10U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((__Vtemp_2[1U] >> 0x10U) | (__Vtemp_2[2U] 
                                          << 0x10U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U] = 0xffffffffU;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U] 
        = ((IData)(((0x60U == (0x78U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                    & (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)))
            ? 0U : (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign_q) 
                     << 0x1fU) | (0x7fffffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid)
            ? ((0xbU == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                 >> 3U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                    ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[0U]
                    : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U]))
            : (- (IData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__47(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__47\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7a5c9e4c__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7a5c9e4c__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h40682d4b__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h40682d4b__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h34290278__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h34290278__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_haa749c26__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_haa749c26__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb9684964__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb9684964__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h9f5eac89__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h9f5eac89__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h6c0e2bca__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h6c0e2bca__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he0785f76__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he0785f76__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h0ae8f678__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h0ae8f678__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hfa54375a__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hfa54375a__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h931dd096__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h931dd096__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgRegularize_hce1b1df8_0_1;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgRegularize_hce1b1df8_0_1 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgRegularize_h82754ee7_0_1;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgRegularize_h82754ee7_0_1 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgRegularize_h192772c8_2_0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgRegularize_h192772c8_2_0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgRegularize_h96760f73_0_1;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgRegularize_h96760f73_0_1 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgRegularize_h96760f73_0_1;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgRegularize_h96760f73_0_1 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgRegularize_h96760f73_0_1;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgRegularize_h96760f73_0_1 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgRegularize_h1c8f9cd0_0_1;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgRegularize_h1c8f9cd0_0_1 = 0;
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
        = (3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
        = (0xffffffc0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]);
    if ((1U == (3U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                      >> 2U)))) {
        if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            if ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0x3fffffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0xc0000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x1aU)));
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                    = ((0xffffffc0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
                       | (0x3fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   >> 6U)));
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x20U | (0xffffffc3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            } else {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0xc03fffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0x3fc00000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x12U)));
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x10U | (0xffffffc3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            }
        } else if ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffc03fffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0x3fc000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   << 0xaU)));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = (8U | (0xffffffc3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffffc003U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0xfffffffcU & (4U | (0x3fc0U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                              << 2U)))));
        }
    } else if ((2U == (3U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                             >> 2U)))) {
        if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0x3fffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0xffc00000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x12U)));
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                    = ((0xffffffc0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
                       | (0x3fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   >> 0xeU)));
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x30U | (0xffffffc3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            }
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffc00003U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0xfffffffcU & (0xcU | (0x3fffc0U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                << 2U)))));
        }
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            = ((3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
               | ((IData)(((3U == (3U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         >> 2U))) ? 
                           (0xfULL | ((QData)((IData)(
                                                      ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                        << 0x1cU) 
                                                       | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                          >> 4U)))) 
                                      << 4U)) : 0ULL)) 
                  << 2U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
            = ((0xffffffc0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
               | (((IData)(((3U == (3U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                          >> 2U))) ? 
                            (0xfULL | ((QData)((IData)(
                                                       ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                         << 0x1cU) 
                                                        | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                           >> 4U)))) 
                                       << 4U)) : 0ULL)) 
                   >> 0x1eU) | ((IData)((((3U == (3U 
                                                  & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                     >> 2U)))
                                           ? (0xfULL 
                                              | ((QData)((IData)(
                                                                 ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                                     >> 4U)))) 
                                                 << 4U))
                                           : 0ULL) 
                                         >> 0x20U)) 
                                << 2U)));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
        = ((0x3fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
           | (0xffffffc0U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                             << 2U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
        = (0x3fU & ((0x3cU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                              << 2U)) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                         >> 0x1eU)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req 
        = (IData)((0U != (3U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h931dd096__0 
        = (IData)(((0x2800000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hfa54375a__0 
        = (IData)(((0x2600000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h0ae8f678__0 
        = (IData)(((0x2500000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he0785f76__0 
        = (IData)(((0x2400000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
        = ((0xfffffffcU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
           | ((2U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                     << 1U)) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h6c0e2bca__0 
        = (IData)(((0x2300000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h9f5eac89__0 
        = (IData)(((0x2200000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb9684964__0 
        = (IData)(((0x2100000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_haa749c26__0 
        = (IData)(((0x2000000U == (0x3f00000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h34290278__0 
        = (((0x300000U < (0x3fffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                       >> 4U))) & (0x300fffU 
                                                   >= 
                                                   (0x3fffffU 
                                                    & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                       >> 4U)))) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h40682d4b__0 
        = (((0x301000U < (0x3fffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                       >> 4U))) & (0x31ffffU 
                                                   >= 
                                                   (0x3fffffU 
                                                    & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                       >> 4U)))) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7a5c9e4c__0 
        = ((0x200000U > (0x3fffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                      >> 4U))) & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel = 0U;
    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7a5c9e4c__0) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel = 1U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel = 0U;
    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7a5c9e4c__0)))) {
        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h40682d4b__0) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel = 1U;
        }
        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h40682d4b__0)))) {
            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h34290278__0) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel = 1U;
            }
            if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h34290278__0)))) {
                if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_haa749c26__0)))) {
                    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb9684964__0)))) {
                        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h9f5eac89__0)))) {
                            if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h6c0e2bca__0)))) {
                                if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he0785f76__0)))) {
                                    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h0ae8f678__0)))) {
                                        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hfa54375a__0)))) {
                                            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h931dd096__0) {
                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel = 1U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h931dd096__0)))) {
                                                if ((IData)(
                                                            ((0x2700000U 
                                                              == 
                                                              (0x3f00000U 
                                                               & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                                                             & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)))) {
                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel = 1U;
                                                }
                                            }
                                        }
                                        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hfa54375a__0) {
                                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel = 1U;
                                        }
                                    }
                                    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h0ae8f678__0) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel = 1U;
                                    }
                                }
                                if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he0785f76__0) {
                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel = 1U;
                                }
                            }
                            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h6c0e2bca__0) {
                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel = 1U;
                            }
                        }
                        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h9f5eac89__0) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel = 1U;
                        }
                    }
                    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb9684964__0) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel = 1U;
                    }
                }
                if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_haa749c26__0) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel = 1U;
                }
            }
        }
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgRegularize_h192772c8_2_0 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgRegularize_hce1b1df8_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgRegularize_h82754ee7_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_19 = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel) 
                                                 | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff;
    } else {
        if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff;
        } else {
            if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                    = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                    = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                    = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                    = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff;
            } else {
                if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel) 
                     | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff;
                } else {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus = 0ULL;
                }
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] = 0U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] = 0U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] = 0U;
            }
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] = 0U;
        }
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[2U] = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req 
        = ((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgRegularize_h192772c8_2_0) 
           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
              >> 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgRegularize_h192772c8_2_0));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgRegularize_hce1b1df8_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__w_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgRegularize_hce1b1df8_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgRegularize_h82754ee7_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgRegularize_h82754ee7_0_1));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgRegularize_h1c8f9cd0_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_19));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgRegularize_h96760f73_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgRegularize_h96760f73_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgRegularize_h96760f73_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[2U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3 
            = (1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U]);
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] = 0U;
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[2U] = 0U;
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3 = 0U;
        if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] = 0U;
        }
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[2U] 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3 
            = (1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U]);
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] = 0U;
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[2U] = 0U;
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3 = 0U;
        if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] = 0U;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] = 0U;
        }
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_data = 0U;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_data 
            = ((0xbff8U == (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff)
                : ((0xbffcU == (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))
                    ? (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                               >> 0x20U)) : ((0x4000U 
                                              == (0xffffU 
                                                  & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 6U)))
                                              ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff)
                                              : ((0x4004U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))
                                                  ? (IData)(
                                                            (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff 
                                                             >> 0x20U))
                                                  : 0U))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__w_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff)))) {
        if ((0xbff8U == (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag = 1U;
        }
        if ((0xbff8U != (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 6U)))) {
            if ((0xbffcU == (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag = 1U;
            }
            if ((0xbffcU != (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) {
                if ((0x4000U == (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = 1U;
                }
                if ((0x4000U != (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                    if ((0x4004U == (0xffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req = 0U;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req) {
        if (((((((((0U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) | 
                   (4U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                  (8U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U)))) | 
                 (0x1000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
                | (0x2000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
               | (0x2080U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
              | (0x200000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
             | (0x201000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffff8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | ((0U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))
                       ? 0U : (7U & ((4U == (0xffffffU 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))
                                      ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff)
                                      : ((8U == (0xffffffU 
                                                 & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                    >> 6U)))
                                          ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                             >> 3U)
                                          : ((0x1000U 
                                              == (0xffffffU 
                                                  & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 6U)))
                                              ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
                                                 << 1U)
                                              : ((0x2000U 
                                                  == 
                                                  (0xffffffU 
                                                   & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))
                                                  ? 
                                                 (6U 
                                                  & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                     << 1U))
                                                  : 
                                                 ((0x2080U 
                                                   == 
                                                   (0xffffffU 
                                                    & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                       >> 6U)))
                                                   ? 
                                                  (6U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                      >> 1U))
                                                   : 
                                                  ((0x200000U 
                                                    == 
                                                    (0xffffffU 
                                                     & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                        >> 6U)))
                                                    ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff)
                                                    : 
                                                   ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                                    >> 3U))))))))));
        } else if ((0x200004U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffffcU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff));
        } else if ((0x201004U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffffcU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim_idx) 
                            >> 2U)));
        }
        if ((1U & (~ ((((((((0U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))) 
                            | (4U == (0xffffffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) 
                           | (8U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) 
                          | (0x1000U == (0xffffffU 
                                         & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
                         | (0x2000U == (0xffffffU & 
                                        (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) 
                        | (0x2080U == (0xffffffU & 
                                       (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                       (0x200000U == (0xffffffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) 
                      | (0x201000U == (0xffffffU & 
                                       (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))))))) {
            if ((0x200004U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req 
                    = (1U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req));
            } else if ((0x201004U == (0xffffffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req 
                    = (2U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req));
            }
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff)))) {
        if (((((((((0U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) | 
                   (4U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                  (8U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U)))) | 
                 (0x2000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
                | (0x2080U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
               | (0x200000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U)))) 
              | (0x201000U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
             | (0x200004U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))))) {
            if ((0U != (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                     >> 6U)))) {
                if ((4U != (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) {
                    if ((8U != (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U)))) {
                        if ((0x2000U == (0xffffffU 
                                         & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag 
                                = (1U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag));
                        } else if ((0x2080U == (0xffffffU 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag 
                                = (2U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag));
                        }
                        if ((0x2000U != (0xffffffU 
                                         & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                            if ((0x2080U != (0xffffffU 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                                if ((0x200000U == (0xffffffU 
                                                   & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))) {
                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag 
                                        = (1U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag));
                                } else if ((0x201000U 
                                            == (0xffffffU 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag 
                                        = (2U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag));
                                }
                                if ((0x200000U != (0xffffffU 
                                                   & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))) {
                                    if ((0x201000U 
                                         != (0xffffffU 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req 
                                            = (1U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req));
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx 
                                            = ((0xcU 
                                                & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                                               | (3U 
                                                  & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                     >> 6U)));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((4U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag 
                        = (1U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag));
                } else if ((8U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag 
                        = (2U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag));
                }
            }
        } else if ((0x201004U == (0xffffffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req 
                = (2U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx 
                = ((3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                   | (0xcU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                              >> 4U)));
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgRegularize_h1c8f9cd0_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgRegularize_h1c8f9cd0_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgRegularize_h96760f73_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgRegularize_h96760f73_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgRegularize_h96760f73_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgRegularize_h96760f73_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgRegularize_h96760f73_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgRegularize_h96760f73_0_1));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgRegularize_h86c3254d_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_wr_req 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgRegularize_h4cb1a923_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next 
        = (1ULL + vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff);
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next 
            = ((0xffffffff00000000ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next) 
               | (IData)((IData)(((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))));
    } else if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next 
            = ((0xffffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next) 
               | ((QData)((IData)(((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U)))) 
                  << 0x20U));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next 
            = ((0xffffffff00000000ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next) 
               | (IData)((IData)(((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))));
    } else if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next 
            = ((0xffffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next) 
               | ((QData)((IData)(((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U)))) 
                  << 0x20U));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_next 
        = ((0xcU & (((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                      ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                          << 0x19U) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 7U)) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                  >> 2U)) 
                    << 2U)) | (3U & ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))));
    if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__0 
            = (7U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((0x38U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__0));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__1 
            = (7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((0x38U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__1));
    }
    if ((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__0 
            = (7U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__0) 
                  << 3U));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__1 
            = (7U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                     >> 3U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_he84ad0b7__1) 
                  << 3U));
    }
    if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__0 
            = (7U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((0x38U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__0));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__1 
            = (7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((0x38U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__1));
    }
    if ((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__0 
            = (7U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__0) 
                  << 3U));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__1 
            = (7U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                     >> 3U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h911b7da3__1) 
                  << 3U));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req) 
            << 6U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req) 
                       << 4U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data = 0U;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data 
            = ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff)
                : ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)
                    : ((8U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff)
                        : ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff)
                                : 0U)))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff)))) {
        if ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                             >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data = 1U;
        }
        if ((0U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                             >> 6U)))) {
            if ((4U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie = 1U;
                    }
                    if ((0xcU != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                >> 6U)))) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data = 0U;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data 
            = ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff)
                : ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)
                    : ((8U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)
                        : ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)
                                : 0U)))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff)))) {
        if ((0U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                             >> 6U)))) {
            if ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                 >> 6U)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir = 1U;
            }
            if ((4U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie = 1U;
                    }
                    if ((0xcU != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                >> 6U)))) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                             >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data = 1U;
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data = 0U;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data 
            = ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff)
                : ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)
                    : ((8U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)
                        : ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)
                                : 0U)))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff)))) {
        if ((0U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                             >> 6U)))) {
            if ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                 >> 6U)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir = 1U;
            }
            if ((4U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie = 1U;
                    }
                    if ((0xcU != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                >> 6U)))) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                             >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data = 1U;
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data = 0U;
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data 
            = ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff)
                : ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)
                    : ((8U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)
                        : ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)
                                : 0U)))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff)))) {
        if ((0U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                             >> 6U)))) {
            if ((4U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                 >> 6U)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir = 1U;
            }
            if ((4U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie = 1U;
                    }
                    if ((0xcU != (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                >> 6U)))) {
                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl = 1U;
                        }
                    }
                }
            }
        }
        if ((0U == (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                             >> 6U)))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data = 1U;
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))) {
        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 1U;
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                    if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_read 
            = (IData)(((~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff) 
                       & (0x100U == (0xf00U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U]))));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data 
            = ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                ? 0U : ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                         ? ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                             ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? 0U : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff))
                             : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)
                                 : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))
                         : ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                             ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? ((0x70000U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                 << 0xfU)) 
                                    | (1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff)))
                                 : ((0x70000U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                                 << 0xeU)) 
                                    | (3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))))
                             : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rx_fifo_empty) 
                                     << 0x1fU) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_data))
                                 : ((8U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count)) 
                                    << 0x1fU)))));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_read = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))) {
        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 1U;
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                    if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_read 
            = (IData)(((~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff) 
                       & (0x100U == (0xf00U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U]))));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data 
            = ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                ? 0U : ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                         ? ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                             ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? 0U : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff))
                             : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)
                                 : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))
                         : ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                             ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? ((0x70000U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                 << 0xfU)) 
                                    | (1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff)))
                                 : ((0x70000U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                                 << 0xeU)) 
                                    | (3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))))
                             : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rx_fifo_empty) 
                                     << 0x1fU) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_data))
                                 : ((8U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count)) 
                                    << 0x1fU)))));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_read = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel)
            ? (((QData)((IData)(((1U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                                 >> 8U)))
                                  ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data
                                  : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                             >> 1U))))) 
                << 1U) | (QData)((IData)((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))))
            : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel)
                ? (((QData)((IData)(((1U == (0xfU & 
                                             (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                              >> 8U)))
                                      ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data
                                      : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                                 >> 1U))))) 
                    << 1U) | (QData)((IData)((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))))
                : 0ULL));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))) {
        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_read 
            = (IData)(((~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff) 
                       & (0x1300U == (0x3fc0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U]))));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        if ((0x2000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        } else if ((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
            if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data 
                        = ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                            ? 0U : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                     ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))
                                     : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))));
                } else if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x40U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                }
            } else {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data 
                    = ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                        ? ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                            ? 0U : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                     ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))
                                     : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))))
                        : ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                            ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                             ? 0U : 
                                            (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff) 
                                              << 0x1fU) 
                                             | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_data))))
                                : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                             ? 0U : 
                                            ((8U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                             << 0x1eU))))
                            : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                ? 0U : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xf0000U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                      << 0xcU)) 
                                                  | (0xfU 
                                                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))))))));
            }
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data 
                = ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                    ? ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                        ? 0U : ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                 ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                     ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff)))))
                                     : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff))))))
                                 : 0U)) : ((0x400U 
                                            & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                            ? ((0x200U 
                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                ? (
                                                   (0x100U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode))))
                                                : (
                                                   (0x100U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id)))))
                                            : ((0x200U 
                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))));
        }
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_read = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie = 0U;
    if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))) {
        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rd_req) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_read 
            = (IData)(((~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff) 
                       & (0x1300U == (0x3fc0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U]))));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        if ((0x2000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        } else if ((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
            if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data 
                        = ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                            ? 0U : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                     ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))
                                     : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))));
                } else if ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x40U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                }
            } else {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data 
                    = ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                        ? ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                            ? 0U : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                     ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))
                                     : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))))
                        : ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                            ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                             ? 0U : 
                                            (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff) 
                                              << 0x1fU) 
                                             | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_data))))
                                : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                             ? 0U : 
                                            ((8U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                             << 0x1eU))))
                            : ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                ? 0U : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xf0000U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                      << 0xcU)) 
                                                  | (0xfU 
                                                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))))))));
            }
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data 
                = ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                    ? ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                        ? 0U : ((0x200U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                 ? ((0x100U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                     ? ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff)))))
                                     : ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff))))))
                                 : 0U)) : ((0x400U 
                                            & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                            ? ((0x200U 
                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                ? (
                                                   (0x100U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode))))
                                                : (
                                                   (0x100U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id)))))
                                            : ((0x200U 
                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))));
        }
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_read = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel)
            ? (((QData)((IData)(((0x4cU == (0xffU & 
                                            (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                             >> 6U)))
                                  ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data
                                  : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                             >> 1U))))) 
                << 1U) | (QData)((IData)((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))))
            : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel)
                ? (((QData)((IData)(((0x4cU == (0xffU 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                   >> 6U)))
                                      ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data
                                      : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                                 >> 1U))))) 
                    << 1U) | (QData)((IData)((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))))
                : 0ULL));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete = 0U;
    if ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 4U) & (0U != (3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete 
            = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete) 
               | (3U & ((IData)(1U) << (1U & ((3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                                              - (IData)(1U))))));
    }
    if ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 5U) & (0U != (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                 >> 2U))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete 
            = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete) 
               | (3U & ((IData)(1U) << (1U & ((3U & 
                                               ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                                >> 2U)) 
                                              - (IData)(1U))))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim = 0U;
    if ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 6U) & (0U != (3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim_idx))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim 
            = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim) 
               | (3U & ((IData)(1U) << (1U & ((3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim_idx)) 
                                              - (IData)(1U))))));
    }
    if ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 7U) & (0U != (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim_idx) 
                                 >> 2U))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim 
            = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim) 
               | (3U & ((IData)(1U) << (1U & ((3U & 
                                               ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim_idx) 
                                                >> 2U)) 
                                              - (IData)(1U))))));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_next 
        = (0xffffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
                       ? ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                           ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? ((8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                   : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                               : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                           : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)
                               : ((8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : ((0xff00U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                              >> 5U)) 
                                          | (0xffU 
                                             & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))))
                                   : ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((0xff00U 
                                           & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff) 
                                              << 1U)) 
                                          | (0xffU 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U)))
                                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)))))
                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_next 
        = (0xffffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie)
                       ? ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                           ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? ((8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                   : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                               : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                           : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                               : ((8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : ((0xff00U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                              >> 5U)) 
                                          | (0xffU 
                                             & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))))
                                   : ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((0xff00U 
                                           & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff) 
                                              << 1U)) 
                                          | (0xffU 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U)))
                                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))))
                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_next 
        = (0xffffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl)
                       ? ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                           ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? ((8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                   : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                               : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                           : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                               : ((8U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : ((0xff00U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                              >> 5U)) 
                                          | (0xffU 
                                             & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff))))
                                   : ((4U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((0xff00U 
                                           & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff) 
                                              << 1U)) 
                                          | (0xffU 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U)))
                                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))))
                       : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xfeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (1U & ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                     ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                         ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                            >> 6U) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff))
                     : ((1U & vlSelfRef.pcore_tb__DOT__gpio_io) 
                        && VL_REDOR_I((1U & vlSelfRef.pcore_tb__DOT__gpio_io))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xfdU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (2U & (((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                             >> 7U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                       >> 1U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 1U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 1U))))) 
                    << 1U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xfbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (4U & (((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                             >> 8U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                       >> 2U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 2U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 2U))))) 
                    << 2U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xf7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (8U & (((8U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                             >> 9U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                       >> 3U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 3U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 3U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 3U))))) 
                    << 3U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xefU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x10U & (((0x10U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xaU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 4U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 4U)) && ((1U 
                                                & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                   >> 4U)) 
                                               || (1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 4U))))) 
                       << 4U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xdfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x20U & (((0x20U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xbU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 5U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 5U)) && ((1U 
                                                & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                   >> 5U)) 
                                               || (1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 5U))))) 
                       << 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xbfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x40U & (((0x40U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xcU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 6U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 6U)) && ((1U 
                                                & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                   >> 6U)) 
                                               || (1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 6U))))) 
                       << 6U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x80U & (((0x80U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xdU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 7U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 7U)) && ((1U 
                                                & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                   >> 7U)) 
                                               || (1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 7U))))) 
                       << 7U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xfeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (1U & ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                     ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                         ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                            >> 6U) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff))
                     : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                               >> 8U)) && ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                  >> 8U)) 
                                           || (1U & 
                                               (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                >> 8U)))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xfdU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (2U & (((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                             >> 7U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                       >> 1U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 9U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 9U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 9U))))) 
                    << 1U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xfbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (4U & (((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                             >> 8U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                       >> 2U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0xaU)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 0xaU)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 0xaU))))) 
                    << 2U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xf7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (8U & (((8U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                             >> 9U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                       >> 3U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0xbU)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 0xbU)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 0xbU))))) 
                    << 3U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xefU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x10U & (((0x10U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xaU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 4U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0xcU)) && ((1U 
                                                  & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                     >> 0xcU)) 
                                                 || (1U 
                                                     & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                        >> 0xcU))))) 
                       << 4U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xdfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x20U & (((0x20U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xbU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 5U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0xdU)) && ((1U 
                                                  & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                        >> 0xdU))))) 
                       << 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xbfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x40U & (((0x40U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xcU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 6U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0xeU)) && ((1U 
                                                  & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                     >> 0xeU)) 
                                                 || (1U 
                                                     & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                        >> 0xeU))))) 
                       << 6U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x80U & (((0x80U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xdU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 7U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0xfU)) && ((1U 
                                                  & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                     >> 0xfU)) 
                                                 || (1U 
                                                     & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                        >> 0xfU))))) 
                       << 7U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xfeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (1U & ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                     ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                         ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                            >> 6U) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff))
                     : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                               >> 0x10U)) && ((1U & 
                                               (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                >> 0x10U)) 
                                              || (1U 
                                                  & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                     >> 0x10U)))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xfdU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (2U & (((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                             >> 7U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                       >> 1U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x11U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 0x11U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 0x11U))))) 
                    << 1U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xfbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (4U & (((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                             >> 8U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                       >> 2U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x12U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 0x12U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 0x12U))))) 
                    << 2U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xf7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (8U & (((8U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                      ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                          ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                             >> 9U) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                       >> 3U)) : ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x13U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                          >> 0x13U)) 
                                                      || (1U 
                                                          & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                             >> 0x13U))))) 
                    << 3U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xefU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x10U & (((0x10U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xaU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 4U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0x14U)) && ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x14U)) 
                                                  || (1U 
                                                      & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                         >> 0x14U))))) 
                       << 4U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xdfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x20U & (((0x20U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xbU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 5U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0x15U)) && ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x15U)) 
                                                  || (1U 
                                                      & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                         >> 0x15U))))) 
                       << 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xbfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x40U & (((0x40U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xcU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 6U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0x16U)) && ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x16U)) 
                                                  || (1U 
                                                      & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                         >> 0x16U))))) 
                       << 6U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x80U & (((0x80U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xdU) : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 7U))
                         : ((1U & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                   >> 0x17U)) && ((1U 
                                                   & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                      >> 0x17U)) 
                                                  || (1U 
                                                      & (vlSelfRef.pcore_tb__DOT__gpio_io 
                                                         >> 0x17U))))) 
                       << 7U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_next 
        = (0xffffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                           << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                        >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
            ? (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                     >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
            ? (3U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                     >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_next = 1U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                      >> 6U)));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_next = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_next 
        = (0xffffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                       ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                           << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                        >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
            ? (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                     >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
            ? (3U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                     >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_next = 1U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                      >> 6U)));
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_next = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_next 
        = (0xfffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                      ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                          << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                       >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_cs_id_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_cs_default_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_cs_mode_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0)
            ? ((0xff00U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                           >> 0xeU)) | (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                 >> 6U)))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1)
            ? ((0xff00U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                           >> 0xeU)) | (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                 >> 6U)))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
            ? ((0xf0U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                         >> 0x12U)) | (0xcU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U)))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_data_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_data)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_next 
        = (7U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_next 
        = (7U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_next 
        = (0xfffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                      ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                          << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                       >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_cs_id_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_cs_default_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_cs_mode_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0)
            ? ((0xff00U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                           >> 0xeU)) | (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                 >> 6U)))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1)
            ? ((0xff00U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                           >> 0xeU)) | (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                 >> 6U)))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_next 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
            ? ((0xf0U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                         >> 0x12U)) | (0xcU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U)))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_data_next 
        = (0xffU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                     ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                         << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                      >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_data)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_next 
        = (7U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_next 
        = (7U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_next 
        = (3U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart) 
           & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff) 
            | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active)) 
           & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart) 
            & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff))) 
           & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
            | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending)) 
           & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xfeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | ((1U & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))) 
              && (1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                           ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xfdU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 1U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 1U)))) 
              << 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xfbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 2U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 2U)))) 
              << 2U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xf7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 3U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 3U)))) 
              << 3U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xefU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 4U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 4U)))) 
              << 4U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xdfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 5U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 5U)))) 
              << 5U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xbfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 6U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 6U)))) 
              << 6U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 7U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                               >> 7U)))) 
              << 7U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xfeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | ((1U & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))) 
              && (1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                           ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xfdU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 1U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 1U)))) 
              << 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xfbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 2U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 2U)))) 
              << 2U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xf7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 3U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 3U)))) 
              << 3U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xefU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 4U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 4U)))) 
              << 4U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xdfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 5U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 5U)))) 
              << 5U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xbfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 6U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 6U)))) 
              << 6U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 7U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                               >> 7U)))) 
              << 7U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xfeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | ((1U & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))) 
              && (1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                           ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xfdU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 1U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 1U)))) 
              << 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xfbU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 2U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 2U)))) 
              << 2U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xf7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 3U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 3U)))) 
              << 3U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xefU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 4U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 4U)))) 
              << 4U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xdfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 5U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 5U)))) 
              << 5U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xbfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 6U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 6U)))) 
              << 6U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 7U))) && (1U & (~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                                ^ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                               >> 7U)))) 
              << 7U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel)
            ? (((QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_data)) 
                << 1U) | (QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_ack)))
            : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel)
                ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff
                : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel)
                    ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff
                    : (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel) 
                        | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel))
                        ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus
                        : (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel) 
                            | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel))
                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus
                            : (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                                | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                   | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_19))))
                                ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus
                                : 0ULL))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[0U] 
        = (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                   >> 1U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))) 
                   >> 0x20U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl 
        = ((0x78U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                     >> 1U)) | (((IData)((0U != (0xfU 
                                                 & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                    >> 4U)))) 
                                 << 2U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu)))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff;
    if ((1U & ((0U != (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U))) ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = 0U;
    } else if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h69c3f427__0) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = 1U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte = 0U;
    if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                  >> 0xcU)))) {
        if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                          >> 0xaU)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte 
                    = (0xffU & ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                     ? (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 0x19U))
                                     : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 0x11U)))
                                 : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                     ? (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 9U))
                                     : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 1U)))));
            }
        } else if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte 
                = (0xffU & ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                             ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 0x19U))
                                 : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 0x11U)))
                             : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 9U))
                                 : (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 1U)))));
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword = 0U;
    if ((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
        if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word 
                    = (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                               >> 1U));
            }
            if ((1U & (~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                          >> 0xaU)))) {
                if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                    if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                            = (0xffffU & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                  >> 0x11U)));
                    }
                } else {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                        = (0xffffU & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                              >> 1U)));
                }
            }
        }
    } else if ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
        if ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                if ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                        = (0xffffU & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                              >> 0x11U)));
                }
            } else {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                    = (0xffffU & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                          >> 1U)));
            }
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))
            ? (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                       >> 1U)) : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b 
        = VL_LTS_III(32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a, 
                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
           < vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass 
        = (IData)((((0x20U == (0xf0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                    & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff)) 
                   & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff 
                       == vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[3U]) 
                      & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff 
                         == vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result 
        = ((0x80U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
            ? ((0x40U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]
                : ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b)
                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]
                            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)
                        : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b)
                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a
                            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))
                    : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b)
                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]
                            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)
                        : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b)
                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a
                            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))))
            : ((0x40U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                ? ((0x20U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           | vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U])
                        : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))
                    : ((0x10U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           ^ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U])
                        : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           + vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U])))
                : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 0U;
    if ((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next 
            = ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))
                ? ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))
                    ? 4U : 3U) : (((1U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 4U))) 
                                   | ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)) 
                                      & (0x20U == (0xf0U 
                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff))))
                                   ? 4U : 3U));
    } else if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next 
            = ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))
                ? 2U : 1U);
    } else if ((0U != (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 1U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
        = (0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
        = (0xffffffe0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]);
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
            = ((0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
               | (((2U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 4U))) ? (1U & 
                                               (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                    : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a) 
                  << 5U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
            = ((0xffffffe0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
               | (((2U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 4U))) ? (1U & 
                                               (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                    : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a) 
                  >> 0x1bU));
    } else if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
            = ((0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
               | (((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? 0U : ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                                 ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word
                                 : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword)))
                    : ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword))
                            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                        : ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                            : 0U))) << 5U));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
            = ((0xffffffe0U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
               | (((0x1000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? 0U : ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                                 ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word
                                 : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword)))
                    : ((0x800U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword))
                            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                        : ((0x400U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                            : 0U))) >> 0x1bU));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save 
                        = (1U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 4U)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data 
                    = ((2U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 4U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]
                        : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result);
            }
        }
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data 
        = ((0x10U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
            ? ((8U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                ? ((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                    ? 0U : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next)
                : ((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                    ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                        << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                     >> 5U)) : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata))
            : ((8U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                ? ((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                    ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                        << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                     >> 5U)) : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                                 << 0x1bU) 
                                                | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                                   >> 5U)))
                : ((4U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                    ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[4U] 
                        << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                     >> 5U)) : 0U)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_h4b82c7cc_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vpcore_tb__ConstPool__TABLE_h32298ddd_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vpcore_tb__ConstPool__TABLE_h8d93acc3_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__48(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__48\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready = 0U;
    if ((0U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
             & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 1U;
        }
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q;
    } else if ((1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fpu_idu_fwd_vld) {
            if ((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_ready))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 0U;
                if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                     & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 1U;
                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready = 1U;
                }
            } else {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 2U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__out_pipe_ready))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 0U;
            if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                 & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 1U;
                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready = 1U;
            }
        }
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_d = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
           & (IData)(((0x28U == (0x78U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                      & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
           & (IData)(((0x20U == (0x78U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                      & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__in_ready))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op_q));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__sqrt_op));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__div_op_q));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_d 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))
            ? ((0U != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex2_special_sel)) 
               & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ex2_inst_wb_vld_q))
            : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fpu_idu_fwd_vld) 
               || (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting) 
           || (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__op_starting)
            ? 4U : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q)
                     ? 4U : 0U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op1_id_vld 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_op1_id_nor) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_zero 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_div_rst_zero) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)) 
           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_tt_zero) 
              & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_dz 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
           & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_tt_zero) 
              & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_norm)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_busy 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
           | ((0U != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)) 
              | (0U != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_srt_idle));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__apu_operands[1U] 
           & (- (IData)((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel) 
                               >> 2U)))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
        = (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__apu_operands[0U] 
           & (- (IData)((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel) 
                               >> 2U)))));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_id) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op1_id_vld));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_result_sign 
        = (1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)
                  ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                      ^ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2) 
                     >> 0x1fU) : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                                  >> 0x1fU)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_inf 
        = ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_inf) 
             & ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_inf)) 
                & ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_qnan)) 
                   & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_snan))))) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)) 
           | ((((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                    >> 0x1fU)) & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_inf)) 
               & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)) 
              | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_dz)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_2 
        = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
            >> 0x1fU) & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_norm) 
                         | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_inf)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0_gate 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate) 
           & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3));
    __Vtableidx1 = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_result_sign) 
                     << 3U) | (7U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_of_result_lfn 
        = Vpcore_tb__ConstPool__TABLE_h4b82c7cc_0[__Vtableidx1];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
        = ((1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))
            ? ((QData)((IData)((0x7fffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2))) 
               << 0x1dU) : ((QData)((IData)((0x7fffffU 
                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1))) 
                            << 0x1dU));
    if (((((((((0x8000000000000ULL == (0x8000000000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
               | (0x4000000000000ULL == (0xc000000000000ULL 
                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
              | (0x2000000000000ULL == (0xe000000000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
             | (0x1000000000000ULL == (0xf000000000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
            | (0x800000000000ULL == (0xf800000000000ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
           | (0x400000000000ULL == (0xfc00000000000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
          | (0x200000000000ULL == (0xfe00000000000ULL 
                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
         | (0x100000000000ULL == (0xff00000000000ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x8000000000000ULL == (0x8000000000000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0U;
        } else if ((0x4000000000000ULL == (0xc000000000000ULL 
                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffffeULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 1U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fffU;
        } else if ((0x2000000000000ULL == (0xe000000000000ULL 
                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffffcULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 2U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffeU;
        } else if ((0x1000000000000ULL == (0xf000000000000ULL 
                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffff8ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 3U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffdU;
        } else if ((0x800000000000ULL == (0xf800000000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffff0ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 4U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffcU;
        } else if ((0x400000000000ULL == (0xfc00000000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffffe0ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 5U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffbU;
        } else if ((0x200000000000ULL == (0xfe00000000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffffc0ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 6U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ffaU;
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffff80ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 7U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff9U;
        }
    } else if (((((((((0x80000000000ULL == (0xff80000000000ULL 
                                            & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x40000000000ULL == (0xffc0000000000ULL 
                                              & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x20000000000ULL == (0xffe0000000000ULL 
                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x10000000000ULL == (0xfff0000000000ULL 
                                            & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x8000000000ULL == (0xfff8000000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x4000000000ULL == (0xfffc000000000ULL 
                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x2000000000ULL == (0xfffe000000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x1000000000ULL == (0xffff000000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x80000000000ULL == (0xff80000000000ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffff00ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 8U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff8U;
        } else if ((0x40000000000ULL == (0xffc0000000000ULL 
                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffe00ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 9U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff7U;
        } else if ((0x20000000000ULL == (0xffe0000000000ULL 
                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffffc00ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xaU));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff6U;
        } else if ((0x10000000000ULL == (0xfff0000000000ULL 
                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffff800ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xbU));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff5U;
        } else if ((0x8000000000ULL == (0xfff8000000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffff000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xcU));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff4U;
        } else if ((0x4000000000ULL == (0xfffc000000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffe000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xdU));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff3U;
        } else if ((0x2000000000ULL == (0xfffe000000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffffc000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xeU));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff2U;
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffff8000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0xfU));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff1U;
        }
    } else if (((((((((0x800000000ULL == (0xffff800000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x400000000ULL == (0xffffc00000000ULL 
                                            & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x200000000ULL == (0xffffe00000000ULL 
                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x100000000ULL == (0xfffff00000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x80000000ULL == (0xfffff80000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x40000000ULL == (0xfffffc0000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x20000000ULL == (0xfffffe0000000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x10000000ULL == (0xffffff0000000ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x800000000ULL == (0xffff800000000ULL 
                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xfffffffff0000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x10U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1ff0U;
        } else if ((0x400000000ULL == (0xffffc00000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffe0000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x11U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fefU;
        } else if ((0x200000000ULL == (0xffffe00000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffffc0000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x12U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1feeU;
        } else if ((0x100000000ULL == (0xfffff00000000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = (0xffffffff80000ULL & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac 
                                         << 0x13U));
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fedU;
        } else if ((0x80000000ULL == (0xfffff80000000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                   << 0x14U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fecU;
        } else if ((0x40000000ULL == (0xfffffc0000000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x15U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1febU;
        } else if ((0x20000000ULL == (0xfffffe0000000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x16U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1feaU;
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x17U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe9U;
        }
    } else if (((((((((0x8000000ULL == (0xffffff8000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x4000000ULL == (0xffffffc000000ULL 
                                          & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x2000000ULL == (0xffffffe000000ULL 
                                         & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x1000000ULL == (0xfffffff000000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x800000ULL == (0xfffffff800000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x400000ULL == (0xfffffffc00000ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x200000ULL == (0xfffffffe00000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x100000ULL == (0xffffffff00000ULL 
                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x8000000ULL == (0xffffff8000000ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xfffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x18U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe8U;
        } else if ((0x4000000ULL == (0xffffffc000000ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7ffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x19U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe7U;
        } else if ((0x2000000ULL == (0xffffffe000000ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3ffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1aU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe6U;
        } else if ((0x1000000ULL == (0xfffffff000000ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1ffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1bU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe5U;
        } else if ((0x800000ULL == (0xfffffff800000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xffffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1cU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe4U;
        } else if ((0x400000ULL == (0xfffffffc00000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1dU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe3U;
        } else if ((0x200000ULL == (0xfffffffe00000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1eU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe2U;
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x1fU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe1U;
        }
    } else if (((((((((0x80000ULL == (0xffffffff80000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x40000ULL == (0xffffffffc0000ULL 
                                        & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x20000ULL == (0xffffffffe0000ULL 
                                       & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x10000ULL == (0xfffffffff0000ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x8000ULL == (0xfffffffff8000ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x4000ULL == (0xfffffffffc000ULL 
                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x2000ULL == (0xfffffffffe000ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x1000ULL == (0xffffffffff000ULL 
                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x80000ULL == (0xffffffff80000ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xfffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x20U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fe0U;
        } else if ((0x40000ULL == (0xffffffffc0000ULL 
                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x21U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdfU;
        } else if ((0x20000ULL == (0xffffffffe0000ULL 
                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3ffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x22U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdeU;
        } else if ((0x10000ULL == (0xfffffffff0000ULL 
                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1ffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x23U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fddU;
        } else if ((0x8000ULL == (0xfffffffff8000ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xffffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x24U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdcU;
        } else if ((0x4000ULL == (0xfffffffffc000ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x25U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdbU;
        } else if ((0x2000ULL == (0xfffffffffe000ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x26U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fdaU;
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x27U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd9U;
        }
    } else if (((((((((0x800ULL == (0xffffffffff800ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) 
                      | (0x400ULL == (0xffffffffffc00ULL 
                                      & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                     | (0x200ULL == (0xffffffffffe00ULL 
                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                    | (0x100ULL == (0xfffffffffff00ULL 
                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                   | (0x80ULL == (0xfffffffffff80ULL 
                                  & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                  | (0x40ULL == (0xfffffffffffc0ULL 
                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                 | (0x20ULL == (0xfffffffffffe0ULL 
                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) 
                | (0x10ULL == (0xffffffffffff0ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) {
        if ((0x800ULL == (0xffffffffff800ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xfffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x28U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd8U;
        } else if ((0x400ULL == (0xffffffffffc00ULL 
                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7ffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x29U);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd7U;
        } else if ((0x200ULL == (0xffffffffffe00ULL 
                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3ffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2aU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd6U;
        } else if ((0x100ULL == (0xfffffffffff00ULL 
                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1ffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2bU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd5U;
        } else if ((0x80ULL == (0xfffffffffff80ULL 
                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0xffU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2cU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd4U;
        } else if ((0x40ULL == (0xfffffffffffc0ULL 
                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x7fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2dU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd3U;
        } else if ((0x20ULL == (0xfffffffffffe0ULL 
                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x3fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2eU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd2U;
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
                = ((QData)((IData)((0x1fU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
                   << 0x2fU);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd1U;
        }
    } else if ((8ULL == (0xffffffffffff8ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((0xfU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x30U);
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fd0U;
    } else if ((4ULL == (0xffffffffffffcULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x31U);
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fcfU;
    } else if ((2ULL == (0xffffffffffffeULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((3U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x32U);
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fceU;
    } else if ((1ULL == vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac 
            = ((QData)((IData)((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)))) 
               << 0x33U);
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt = 0x1fcdU;
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac = 0ULL;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt 
            = ((0ULL == vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper_frac)
                ? 0x1fccU : 0U);
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_oper0_id_expnt 
        = ((1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))
            ? (0x400U | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_expnt_rst))
            : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_rst_default_qnan 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_0)) 
           | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
               & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_1)) 
              | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt) 
                 & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_2))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_nv 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
            & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_snan) 
               | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_snan) 
                  | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_0) 
                     | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_1))))) 
           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt) 
              & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_snan) 
                 | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT____VdfgRegularize_h46936c08_0_2))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_id)
            ? (((1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))
                 ? ((QData)((IData)((0x7fffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_srt__DOT__srt_divisor))) 
                    << 0x1dU) : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_frac) 
               << 1U) : (0x10000000000000ULL | ((QData)((IData)(
                                                                (0x7fffffU 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1))) 
                                                << 0x1dU)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_expnt_adder_op1 
        = ((2U == (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
                    << 1U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)))
            ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_op1_id_nor)
                ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt)
                : (0xffU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_2 
                            >> 0x17U))) : ((1U == (
                                                   ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)))
                                            ? 0x7fU
                                            : 0U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan 
        = ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_qnan) 
             | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op1_qnan)) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div)) 
           | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_op0_is_qnan) 
               & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt)) 
              | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_nv)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_remainder 
        = ((0x7fffffcU & ((- (IData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_div))) 
                          & ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
                                      >> 0x1cU)) << 2U))) 
           | ((- (IData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_sqrt))) 
              & (IData)((((1U & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op0_id)
                                  ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_oper_id_expnt)
                                  : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT____VdfgRegularize_h484f940c_0_1 
                                     >> 0x17U))) ? 
                          (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
                           << 1U) : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_prepare__DOT__ex1_div_nor_srt_op0 
                                     << 2U)) >> 0x1cU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_cnan 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_srt_skip 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_zero) 
           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan) 
              | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_inf)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_sel 
        = ((4U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__idu_fpu_ex1_eu_sel))
            ? (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan_op1) 
                << 6U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_qnan_op0) 
                           << 5U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_cnan) 
                                      << 4U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_inf) 
                                                 << 2U) 
                                                | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_special__DOT__ex1_result_zero) 
                                                   << 1U)))))
            : 0U);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start 
        = ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_srt_skip)) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_data 
        = ((1U == (0xfU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_sel) 
                           >> 5U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__apu_operands[0U]
            : ((2U == (0xfU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__x_pa_fpu_dp__DOT__ex1_special_sel) 
                               >> 5U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__apu_operands[1U]
                : 0U));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start) 
           & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT____VdfgRegularize_hd594b202_0_3));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start) 
           & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_op1_id_vld));
    __Vtableidx4 = ((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__srt_last_round) 
                      << 6U) | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall) 
                                << 5U)) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_frbus_wb_vld) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_next_state 
        = Vpcore_tb__ConstPool__TABLE_h32298ddd_0[__Vtableidx4];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk_en 
        = (((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall)) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start_gate)) 
           | (1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_iter_start 
        = (((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall)) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_sm_start)) 
           | (1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall 
        = (((~ (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_srt_idle) 
                 | (1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))) 
                | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_wb_idle))) 
            & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel)) 
           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
              & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_srt__DOT__srt_div_clk_en 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk_en) 
           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0_gate) 
              | (3U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__expnt_rst_clk_en 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_save_op0_gate) 
           | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk_en) 
              | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex2_pipe_clk_en) 
                 | (3U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_cur_state)))));
    __Vtableidx5 = (((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ctrl_iter_start) 
                       << 7U) | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_frbus_wb_vld) 
                                 << 6U)) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__fdsu_dn_stall) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
                                                & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__ex1_srt_skip)) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall) 
                        << 3U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__ctrl_fdsu_ex1_sel) 
                                   << 2U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_cur_state))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__wb_nxt_state 
        = Vpcore_tb__ConstPool__TABLE_h8d93acc3_0[__Vtableidx5];
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q;
    if ((0U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
             & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q))) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready 
                = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__unit_ready_q) 
                   & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall)));
        }
    } else if ((1U == (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__state_q))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__inp_pipe_ready 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__fpu_unit__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__fdsu_fpu_ex1_stall_q;
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__60(Vpcore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__60\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_18;
    __VdfgRegularize_hd87f99a1_1_18 = 0;
    // Body
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard 
        = ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)) 
           & (((((0x1fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                           >> 0x14U)) == (0x1fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 0x10U))) 
                & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                    >> 3U) & (0U != (0x1fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                              >> 0x14U))))) 
               & ((IData)((0U != (0x801000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                  & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req))) 
              | ((((0x1fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                             >> 0x19U)) == (0x1fU & 
                                            (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 0x10U))) 
                  & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 3U) & (0U != (0x1fU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                                >> 0x19U))))) 
                 & ((IData)(((0U != (0x401000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                             | (0U != (0x30U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])))) 
                    & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_17 = (((0x1fU 
                                                   & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                                      >> 0x19U)) 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                                                 & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                                     >> 1U) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                                           >> 0x19U)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_16 = (((0x1fU 
                                                   & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                                      >> 0x14U)) 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                                                 & (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                                     >> 1U) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                                           >> 0x14U)))));
    __VdfgRegularize_hd87f99a1_1_18 = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard) 
                                       | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_17)
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data
            : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[8U] 
                << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[7U] 
                             >> 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_16)
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data
            : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[9U] 
                << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[8U] 
                             >> 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i 
        = ((IData)(__VdfgRegularize_hd87f99a1_1_18) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
        = ((0x400000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data
            : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                             >> 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
        = ((0x200000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data
            : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                             >> 5U)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
        = ((0x800000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data
            : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                << 0x1bU) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                             >> 5U)));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_next 
            = (7U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_next 
            = (1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_next 
            = (1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff;
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_next 
            = (7U & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                      << 0x16U) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                   >> 0xaU)));
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_next 
            = (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                     >> 0x1fU));
        if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc931a5ca__0) {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next 
                = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                    : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2);
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next 
                = ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                    : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1);
        } else {
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2;
            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next 
                = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1;
        }
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_next 
            = (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                     >> 0x1fU));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev 
        = ((((((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                << 0x1fU) | (0x40000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                             >> 1U)) | (0x4000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                              >> 9U)) | (0x400U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                            >> 0x19U)) | (4U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                              >> 0x1dU)) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                            >> 0x1fU))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)) 
                             - (QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                                   >> 0xeU) 
                                                                  & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                     >> 0x1fU)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))), 
                      VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                             ((0x6000U 
                                                               == 
                                                               (0x6000U 
                                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output 
        = ((1U == (0xfU & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                           >> 0x10U))) ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                          + vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
            : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
               - vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev 
        = ((((((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                << 0x1fU) | (0x40000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                             >> 1U)) | (0x4000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                              >> 9U)) | (0x400U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                            >> 0x19U)) | (4U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                              >> 0x1dU)) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                            >> 0x1fU))))));
    if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgRegularize_h9a40e2ef_0_4) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev;
    } else {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h75fa6eb6__0 
        = (1U & ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                          >> 0x1fU)) ^ (((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                  >> 0x1fU)) 
                                         & ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                                >> 0x1fU)) 
                                            & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                               >> 0x1fU))) 
                                        | ((~ (IData)(
                                                      (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                       >> 0x1fU))) 
                                           & ((~ (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                                  >> 0x1fU)) 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                                 >> 0x1fU))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
        = ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        >> 9U)))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
            : (~ ((8ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U))))
                   ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                   : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result 
        = ((0x80000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
            ? ((0x40000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                ? ((0x20000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? 0U : ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                             ? 0U : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                : ((0x20000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 
                                         (0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                    : ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           >> (0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                        : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           << (0x1fU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))))
            : ((0x40000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                ? ((0x20000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                         >> 0x20U)))
                        : (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h75fa6eb6__0))
                    : ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           ^ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           | vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                : ((0x20000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output)
                    : ((0x10000U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output
                        : 0U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req 
        = (1U & ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall)) 
                 & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                     >> 0xdU) | ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                  >> 0xcU) & ((8U & 
                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])
                                               ? ((4U 
                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])
                                                   ? 
                                                  ((1U 
                                                    & (~ 
                                                       (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                                  >> 0x20U))))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])
                                                    ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h75fa6eb6__0)
                                                    : 
                                                   (~ (IData)(
                                                              (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                               >> 0x20U)))))
                                               : ((4U 
                                                   & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])
                                                    ? 
                                                   (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h75fa6eb6__0))
                                                    : 
                                                   (0U 
                                                    != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result = 0U;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en = 1ULL;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffffdULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 1U));
    if ((1U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data)));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 1U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 1U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffffbULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 2U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 1U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 1U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 2U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 2U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffff7ULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 3U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 2U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 2U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 3U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 3U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffffefULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 4U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 3U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 3U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 4U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 4U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffffdfULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 5U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 4U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 4U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 5U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 5U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffffbfULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 6U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 5U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 5U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 6U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 6U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffff7fULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 7U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 6U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 6U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 7U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 7U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffeffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 8U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 7U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 7U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 8U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 8U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffdffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 9U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 8U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 8U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 9U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 9U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffbffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0xaU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 9U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 9U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xaU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xaU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffff7ffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0xbU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xaU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xaU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xbU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xbU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffefffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0xcU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xbU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xbU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xcU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xcU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffdfffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0xdU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xcU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xcU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xdU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xdU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffbfffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0xeU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xdU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xdU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xeU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xeU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffff7fffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0xfU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xeU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xeU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xfU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xfU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffeffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x10U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xfU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xfU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x10U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x10U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffdffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x11U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x10U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x10U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x11U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x11U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffbffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x12U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x11U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x11U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x12U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x12U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fff7ffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x13U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x12U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x12U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x13U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x13U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffefffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x14U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x13U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x13U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x14U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x14U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffdfffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x15U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x14U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x14U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x15U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x15U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffbfffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x16U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x15U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x15U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x16U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x16U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ff7fffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x17U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x16U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x16U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x17U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x17U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1feffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x18U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x17U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x17U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x18U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x18U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fdffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x19U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x18U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x18U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x19U)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x19U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fbffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x1aU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x19U)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x19U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1aU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1aU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1f7ffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x1bU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1aU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1aU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1bU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1bU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1efffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x1cU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1bU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1bU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1cU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1cU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1dfffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x1dU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1cU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1cU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1dU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1dU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1bfffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x1eU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1dU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1dU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1eU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1eU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x17fffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x1fU));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1eU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1eU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 | ((IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1fU)) & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1fU))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0xffffffffULL & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h9ccf344c__0)) 
              << 0x20U));
    if ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1fU)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                           >> 0x1fU)));
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2))
            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1
            : 0U);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 1U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 1U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 2U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 2U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 3U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 3U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 4U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 4U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 5U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 5U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 6U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 6U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 7U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 7U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 8U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 8U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 9U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 9U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0xaU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0xaU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0xbU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0xbU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0xcU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0xcU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0xdU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0xdU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0xeU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0xeU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0xfU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0xfU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x10U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x10U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x11U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x11U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x12U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x12U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x13U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x13U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x14U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x14U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x15U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x15U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x16U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x16U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x17U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x17U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x18U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x18U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x19U)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x19U))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x1aU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x1aU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x1bU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x1bU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x1cU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x1cU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x1dU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x1dU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x1eU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x1eU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2, 0x1fU)))
            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
               ^ VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1, 0x1fU))
            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush 
        = ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req) 
           | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_15 = ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req)) 
                                                 & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result 
        = ((((((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                << 0x1fU) | (0x40000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                             >> 1U)) | (0x4000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                              >> 9U)) | (0x400U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                            >> 0x19U)) | (4U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                              >> 0x1dU)) | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                            >> 0x1fU))))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fwd2ptop 
        = (((((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush) 
              << 8U) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                         << 7U) | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush) 
                                   << 6U))) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                                << 5U) 
                                               | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall) 
                                                  << 4U))) 
           | ((((IData)(__VdfgRegularize_hd87f99a1_1_18) 
                << 3U) | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req) 
                          << 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_16) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_17))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_15) 
             << 3U) | ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req) 
                       << 2U)) | (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgRegularize_hf3daf20b_0_7) 
                                   << 1U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall)));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result 
        = (((((((((1ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U)))) 
                  | (2ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   >> 9U))))) 
                 | (3ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                << 0x17U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U))))) 
                | (4ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U))))) 
               | (5ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U))))) 
              | (6ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U))))) 
             | (((7ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                 || (8ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   >> 9U))))) 
                || (9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                << 0x17U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U)))))) 
            | (0xaULL == (0x1ffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U)))))
            ? ((1ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              >> 9U))))
                ? (VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 1U) 
                   + vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                : ((2ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                << 0x17U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U))))
                    ? (VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 2U) 
                       + vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                    : ((3ULL == (0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                      >> 9U))))
                        ? (VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 3U) 
                           + vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : ((4ULL == (0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           >> 9U))))
                            ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                               & (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                            : ((5ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U))))
                                ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                   | (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                : ((6ULL == (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   >> 9U))))
                                    ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       ^ (~ vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                    : ((((7ULL == (0x1ffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                         >> 9U)))) 
                                         || (8ULL == 
                                             (0x1ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    >> 9U))))) 
                                        || (9ULL == 
                                            (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   >> 9U)))))
                                        ? (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result)
                                        : ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h75fa6eb6__0)
                                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))))))))
            : (((((((((0xbULL == (0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U)))) 
                      | (0xcULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        >> 9U))))) 
                     | (0xdULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U))))) 
                    | (0xeULL == (0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U))))) 
                   | (0xfULL == (0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                      >> 9U))))) 
                  | (0x10ULL == (0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                      >> 9U))))) 
                 | (0x11ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                     >> 9U))))) 
                | ((0x12ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                     >> 9U)))) 
                   || (0x13ULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U))))))
                ? ((0xbULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    >> 9U))))
                    ? ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                      >> 0x20U))) ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                        : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                    : ((0xcULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U))))
                        ? ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h75fa6eb6__0)
                            ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                            : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : ((0xdULL == (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                           << 0x17U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             >> 9U))))
                            ? ((1U & (IData)((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                            : ((0xeULL == (0x1ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U))))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                : ((0xfULL == (0x1ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                     >> 9U))))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                    : ((0x10ULL == 
                                        (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U))))
                                        ? (0xffffU 
                                           & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                        : ((0x11ULL 
                                            == (0x1ffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                      >> 9U))))
                                            ? ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)) 
                                               | VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))))
                                            : ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)) 
                                               | VL_SHIFTL_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))))))))))
                : (((((((((0x14ULL == (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                           << 0x17U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             >> 9U)))) 
                          | (0x15ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U))))) 
                         | ((0x16ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U)))) 
                            || (0x17ULL == (0x1ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                << 0x17U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U)))))) 
                        | ((0x1cULL == (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              >> 9U)))) 
                           || (0x1dULL == (0x1ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U)))))) 
                       | ((0x18ULL == (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                           << 0x17U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             >> 9U)))) 
                          || (0x19ULL == (0x1ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))))) 
                      | ((0x1aULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                          << 0x17U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                            >> 9U)))) 
                         || (0x1bULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               >> 9U)))))) 
                     | (0x1eULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        >> 9U))))) 
                    | (0x20ULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  >> 9U)))))
                    ? ((0x14ULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        >> 9U)))) ? 
                       ((((- (IData)((0U != (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                             >> 0x18U)))) 
                          << 0x18U) | (0xff0000U & 
                                       ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                        >> 0x10U))))) 
                                        << 0x10U))) 
                        | ((0xff00U & ((- (IData)((0U 
                                                   != 
                                                   (0xffU 
                                                    & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                       >> 8U))))) 
                                       << 8U)) | (0xffU 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0xffU 
                                                                 & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))))))
                        : ((0x15ULL == (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              >> 9U))))
                            ? (((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                 << 0x18U) | (0xff0000U 
                                              & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                 << 8U))) 
                               | ((0xff00U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                              >> 8U)) 
                                  | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                     >> 0x18U))) : 
                           (((0x16ULL == (0x1ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))) 
                             || (0x17ULL == (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   >> 9U)))))
                             ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                & (~ VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                                   (0x1fU 
                                                    & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))))
                             : (((0x1cULL == (0x1ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    >> 9U)))) 
                                 || (0x1dULL == (0x1ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                       >> 9U)))))
                                 ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                    | VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                                    (0x1fU 
                                                     & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                 : (((0x18ULL == (0x1ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                      << 0x17U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                        >> 9U)))) 
                                     || (0x19ULL == 
                                         (0x1ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                >> 9U)))))
                                     ? (0U != (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                               & VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                                               (0x1fU 
                                                                & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))))
                                     : (((0x1aULL == 
                                          (0x1ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 >> 9U)))) 
                                         || (0x1bULL 
                                             == (0x1ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                       >> 9U)))))
                                         ? (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                            ^ VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                                            (0x1fU 
                                                             & vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                         : ((0x1eULL 
                                             == (0x1ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                       >> 9U))))
                                             ? vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result
                                             : vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result)))))))
                    : ((0x1fULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        >> 9U)))) ? 
                       VL_SHIFTR_III(32,32,32, vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result, 1U)
                        : 0U))));
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
        = (((0x1f0000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                          << 4U)) | (0xe000U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                >> 4U))) 
           | ((0x1f00U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                          << 4U)) | ((0xf0U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               >> 0x17U)) 
                                     | ((8U & (((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                      << 1U) 
                                                     | (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                        >> 0x1fU))))
                                                 ? 
                                                ((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                                 >> 1U)
                                                 : 
                                                (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 0xeU)) 
                                               << 3U)) 
                                        | ((4U & (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                  >> 0xeU)) 
                                           | (3U & 
                                              (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               >> 0xcU)))))));
    if ((8U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fwd2ptop))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next = 0U;
    } else if ((0x10U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fwd2ptop))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff;
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff;
    if ((1U & ((IData)((0U != (0xeU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)))) 
               | ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)) 
                  & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 0U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0xeU;
    } else if (vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 1U;
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next 
        = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff;
    if ((1U & ((IData)((0U != (0xcU & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)))) 
               | ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)) 
                  & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff))))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next = 0U;
    } else if (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync) 
                & (~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff)))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next = 1U;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next 
        = (((IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next) 
            << 1U) | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    if ((0x100U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fwd2ptop))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next = 0U;
    } else if ((0x80U & (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fwd2ptop))) {
        vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next 
            = vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff;
    }
    vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgRegularize_h4ed22d34_0_0 
        = (1U & ((~ (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__instr_ack)) 
                 | (IData)(vlSelfRef.pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)));
}
