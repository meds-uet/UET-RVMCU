// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpcore_tb__Syms.h"


void Vpcore_tb___024root__trace_chg_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpcore_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpcore_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpcore_tb___024root__trace_chg_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->pcore_tb__DOT__irq_soft));
        bufp->chgBit(oldp+1,(vlSelf->pcore_tb__DOT__uart_rx));
        bufp->chgBit(oldp+2,(vlSelf->pcore_tb__DOT__spi_miso));
        bufp->chgWData(oldp+3,(vlSelf->pcore_tb__DOT__firmware),1024);
        bufp->chgWData(oldp+35,(vlSelf->pcore_tb__DOT__max_cycles),1024);
        bufp->chgIData(oldp+67,(vlSelf->pcore_tb__DOT__write_sig),32);
        bufp->chgCData(oldp+68,(vlSelf->pcore_tb__DOT__uart_rx),2);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [7U]) | vlSelf->__Vm_traceActivity
                     [0xaU]))) {
        bufp->chgIData(oldp+69,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                  << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 4U))),32);
        bufp->chgIData(oldp+70,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                  << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                               >> 4U))),32);
        bufp->chgCData(oldp+71,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                       >> 2U))),2);
        bufp->chgBit(oldp+72,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+73,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
        bufp->chgIData(oldp+74,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                  << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 4U))),32);
        bufp->chgBit(oldp+75,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+76,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
        bufp->chgBit(oldp+77,((0x200000U > (0x3fffffU 
                                            & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+78,((0x20U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+79,((0x21U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+80,(((0x301000U < (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))) 
                               & (0x31ffffU >= (0x3fffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 4U))))));
        bufp->chgBit(oldp+81,(((0x300000U < (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))) 
                               & (0x300fffU >= (0x3fffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 4U))))));
        bufp->chgBit(oldp+82,((0x22U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+83,((0x23U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+84,((0x24U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+85,((0x25U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+86,((0x26U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+87,((0x28U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+88,((0x27U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgIData(oldp+89,(((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                               >> 1U)))
                                  ? ((IData)((0U != 
                                              (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                      ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output))
                                  : ((0U != (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                   >> 0x1dU))))
                                      ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result
                                      : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result))),32);
        bufp->chgIData(oldp+90,(((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                  ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 0x14U))
                                  : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)),32);
        bufp->chgBit(oldp+91,((1U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U) | ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 1U) 
                                                & ((0x800000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                     ? 
                                                    ((~ 
                                                      (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                       >> 0x15U)) 
                                                     & (IData)(
                                                               (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                                >> 0x20U)))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                      ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                                      : 
                                                     (~ (IData)(
                                                                (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                                 >> 0x20U)))))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                      ? 
                                                     (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                                      : 
                                                     (0U 
                                                      != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                                     : 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                      >> 0x15U) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))))));
        bufp->chgBit(oldp+92,((1U & ((0x800000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                      ? ((0x400000U 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                          ? ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                        >> 0x20U)))
                                          : ((0x200000U 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                              ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                              : (~ (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                            >> 0x20U)))))
                                      : ((0x400000U 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                          ? ((0x200000U 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                              ? (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                              : (0U 
                                                 != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                          : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                              >> 0x15U) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))));
        bufp->chgBit(oldp+93,((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 2U) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+94,((IData)(((6U == (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                       & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                          >> 0x1fU)))));
        bufp->chgQData(oldp+95,((((QData)((IData)((
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                    >> 2U) 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                      >> 0x1fU)))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))),33);
        bufp->chgQData(oldp+97,((((QData)((IData)((
                                                   (6U 
                                                    == 
                                                    (6U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                      >> 0x1fU)))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))),33);
        bufp->chgIData(oldp+99,(((IData)((0U != (6U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                  ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
                                             >> 0x20U))
                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output))),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgIData(oldp+100,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req)
                                            ? (1ULL 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                                                                  [
                                                                  (0x3fffffU 
                                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                      >> 8U))])) 
                                                  << 1U))
                                            : 0ULL) 
                                          >> 1U))),32);
        bufp->chgBit(oldp+101,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req)
                                               ? (1ULL 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                                                                     [
                                                                     (0x3fffffU 
                                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                         >> 8U))])) 
                                                     << 1U))
                                               : 0ULL)))));
        bufp->chgSData(oldp+102,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
                                              ? ((0x20U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : 
                                                    ((0xff00U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                         >> 5U)) 
                                                     | (0xffU 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff) 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                           >> 6U)))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)))))
                                              : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)))),16);
        bufp->chgSData(oldp+103,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie)
                                              ? ((0x20U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : 
                                                    ((0xff00U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                         >> 5U)) 
                                                     | (0xffU 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff) 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                           >> 6U)))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))))
                                              : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))),16);
        bufp->chgSData(oldp+104,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl)
                                              ? ((0x20U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : 
                                                    ((0xff00U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                         >> 5U)) 
                                                     | (0xffU 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff))))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff) 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                           >> 6U)))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))))
                                              : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff)))),16);
        bufp->chgCData(oldp+105,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+106,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+107,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)))),8);
        bufp->chgCData(oldp+108,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+109,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+110,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)))),8);
        bufp->chgCData(oldp+111,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+112,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+113,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)))),8);
        bufp->chgIData(oldp+114,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                                 [(0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 8U))]),32);
        bufp->chgCData(oldp+115,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             << 0x19U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 7U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
        bufp->chgCData(oldp+116,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             << 0x19U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 7U))
                                         : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                            >> 2U)))),2);
        bufp->chgIData(oldp+117,(((0x4cU == (0xffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                >> 6U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data
                                   : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                              >> 1U)))),32);
        bufp->chgIData(oldp+118,(((0x4cU == (0xffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                >> 6U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data
                                   : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                              >> 1U)))),32);
        bufp->chgIData(oldp+119,(((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                                  >> 8U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data
                                   : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                              >> 1U)))),32);
        bufp->chgIData(oldp+120,(((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                                  >> 8U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data
                                   : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                              >> 1U)))),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgCData(oldp+121,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state))
                                   ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req)
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state))
                                    ? 2U : 0U))),2);
        bufp->chgSData(oldp+122,((0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
        bufp->chgCData(oldp+123,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))),2);
        bufp->chgCData(oldp+124,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id)))),2);
        bufp->chgCData(oldp+125,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default)))),2);
        bufp->chgCData(oldp+126,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode)))),2);
        bufp->chgSData(oldp+127,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0)
                                   ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                  >> 0xeU)) 
                                      | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                  >> 6U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),16);
        bufp->chgSData(oldp+128,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1)
                                   ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                  >> 0xeU)) 
                                      | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                  >> 6U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),16);
        bufp->chgCData(oldp+129,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
                                   ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                >> 0x12U)) 
                                      | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                 >> 6U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))),8);
        bufp->chgCData(oldp+130,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_data)))),8);
        bufp->chgCData(oldp+131,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),3);
        bufp->chgCData(oldp+132,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))),3);
        bufp->chgCData(oldp+133,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))),2);
        bufp->chgSData(oldp+134,((0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
        bufp->chgCData(oldp+135,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))),2);
        bufp->chgCData(oldp+136,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id)))),2);
        bufp->chgCData(oldp+137,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default)))),2);
        bufp->chgCData(oldp+138,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode)))),2);
        bufp->chgSData(oldp+139,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0)
                                   ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                  >> 0xeU)) 
                                      | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                  >> 6U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),16);
        bufp->chgSData(oldp+140,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1)
                                   ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                  >> 0xeU)) 
                                      | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                  >> 6U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),16);
        bufp->chgCData(oldp+141,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
                                   ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                >> 0x12U)) 
                                      | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                 >> 6U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))),8);
        bufp->chgCData(oldp+142,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_data)))),8);
        bufp->chgCData(oldp+143,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),3);
        bufp->chgCData(oldp+144,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))),3);
        bufp->chgCData(oldp+145,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))),2);
        bufp->chgCData(oldp+146,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff)))),8);
        bufp->chgCData(oldp+147,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
                                   ? (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                            >> 6U))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))),5);
        bufp->chgCData(oldp+148,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
                                   ? (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                            >> 6U))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))),4);
        bufp->chgCData(oldp+149,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))),2);
        bufp->chgSData(oldp+150,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                                              ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                                    >> 6U))
                                              : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)))),16);
        bufp->chgCData(oldp+151,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff)))),8);
        bufp->chgCData(oldp+152,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
                                   ? (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                            >> 6U))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))),5);
        bufp->chgCData(oldp+153,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
                                   ? (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                            >> 6U))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))),4);
        bufp->chgCData(oldp+154,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))),2);
        bufp->chgSData(oldp+155,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                                              ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                                    >> 6U))
                                              : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)))),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+156,(((0x1ffe68U == ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write))));
        bufp->chgBit(oldp+157,(((0x1ffe6cU == ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write))));
        bufp->chgIData(oldp+158,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                          >> 1U))),32);
        bufp->chgBit(oldp+159,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))));
        bufp->chgIData(oldp+160,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+161,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+162,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+163,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+164,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
        bufp->chgBit(oldp+165,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel));
        bufp->chgBit(oldp+166,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel));
        bufp->chgBit(oldp+167,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel));
        bufp->chgBit(oldp+168,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel));
        bufp->chgBit(oldp+169,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel));
        bufp->chgBit(oldp+170,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel));
        bufp->chgBit(oldp+171,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel));
        bufp->chgBit(oldp+172,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel));
        bufp->chgBit(oldp+173,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel));
        bufp->chgBit(oldp+174,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel));
        bufp->chgBit(oldp+175,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel));
        bufp->chgBit(oldp+176,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel));
        bufp->chgBit(oldp+177,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__store_busy));
        bufp->chgIData(oldp+178,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus 
                                          >> 1U))),32);
        bufp->chgBit(oldp+179,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus))));
        bufp->chgIData(oldp+180,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus 
                                          >> 1U))),32);
        bufp->chgBit(oldp+181,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus))));
        bufp->chgIData(oldp+182,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                                          >> 1U))),32);
        bufp->chgBit(oldp+183,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus))));
        bufp->chgIData(oldp+184,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_data),32);
        bufp->chgIData(oldp+185,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+186,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),16);
        bufp->chgBit(oldp+187,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_req));
        bufp->chgBit(oldp+188,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__w_req));
        bufp->chgQData(oldp+189,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next),64);
        bufp->chgQData(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next),64);
        bufp->chgBit(oldp+193,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag));
        bufp->chgBit(oldp+194,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag));
        bufp->chgBit(oldp+195,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
        bufp->chgBit(oldp+196,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
        bufp->chgBit(oldp+197,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel))));
        bufp->chgBit(oldp+199,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel))));
        bufp->chgBit(oldp+200,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                   | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                      | (IData)(vlSelf->__VdfgTmp_hf0169590__0))))));
        bufp->chgIData(oldp+201,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+202,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+203,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+204,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+205,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U])));
        bufp->chgIData(oldp+206,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+207,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+208,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+209,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+210,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U])));
        bufp->chgIData(oldp+211,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+212,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+213,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+214,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+215,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U])));
        bufp->chgIData(oldp+216,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+217,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+218,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+219,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+220,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])));
        bufp->chgBit(oldp+221,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data));
        bufp->chgBit(oldp+222,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie));
        bufp->chgBit(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl));
        bufp->chgCData(oldp+224,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+225,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data),32);
        bufp->chgIData(oldp+226,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req));
        bufp->chgBit(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req));
        bufp->chgBit(oldp+229,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data));
        bufp->chgBit(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next),8);
        bufp->chgCData(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+235,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+236,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data),32);
        bufp->chgIData(oldp+237,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+238,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req));
        bufp->chgBit(oldp+239,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req));
        bufp->chgBit(oldp+240,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data));
        bufp->chgBit(oldp+241,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+242,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+243,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+244,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next),8);
        bufp->chgCData(oldp+245,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+246,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+247,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data),32);
        bufp->chgIData(oldp+248,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+249,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req));
        bufp->chgBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req));
        bufp->chgBit(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data));
        bufp->chgBit(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+253,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+254,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+255,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next),8);
        bufp->chgCData(oldp+256,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+257,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+258,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data),32);
        bufp->chgIData(oldp+259,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+260,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req));
        bufp->chgBit(oldp+261,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req));
        bufp->chgBit(oldp+262,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req));
        bufp->chgBit(oldp+263,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req));
        bufp->chgBit(oldp+264,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_read));
        bufp->chgBit(oldp+265,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_modify));
        bufp->chgBit(oldp+266,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write));
        bufp->chgIData(oldp+267,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_data),32);
        bufp->chgIData(oldp+268,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data),32);
        bufp->chgIData(oldp+269,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
        bufp->chgIData(oldp+270,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[2U]),32);
        bufp->chgIData(oldp+271,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[1U]),32);
        bufp->chgIData(oldp+272,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[0U]),32);
        bufp->chgCData(oldp+273,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl) 
                                          >> 3U))),4);
        bufp->chgBit(oldp+274,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+275,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+276,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl))));
        bufp->chgIData(oldp+277,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
        bufp->chgCData(oldp+278,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                                           >> 3U))),5);
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                                      >> 2U))));
        bufp->chgBit(oldp+280,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                                      >> 1U))));
        bufp->chgBit(oldp+281,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd))));
        bufp->chgIData(oldp+282,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a),32);
        bufp->chgIData(oldp+283,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
        bufp->chgBit(oldp+284,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
        bufp->chgBit(oldp+285,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
        bufp->chgBit(oldp+286,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
        bufp->chgBit(oldp+287,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
        bufp->chgCData(oldp+288,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
        bufp->chgBit(oldp+289,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i));
        bufp->chgBit(oldp+290,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
        bufp->chgIData(oldp+291,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
        bufp->chgSData(oldp+292,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
        bufp->chgCData(oldp+293,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
        bufp->chgCData(oldp+294,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+295,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+296,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway))),2);
        bufp->chgCData(oldp+297,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+298,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
        bufp->chgCData(oldp+299,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
        bufp->chgCData(oldp+300,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
        bufp->chgCData(oldp+301,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
        bufp->chgCData(oldp+302,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
        bufp->chgCData(oldp+303,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
        bufp->chgCData(oldp+304,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
        bufp->chgCData(oldp+305,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+306,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
        bufp->chgCData(oldp+307,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
        bufp->chgIData(oldp+308,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))),24);
        bufp->chgBit(oldp+309,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+310,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+311,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
        bufp->chgCData(oldp+312,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
        bufp->chgCData(oldp+313,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
        bufp->chgCData(oldp+314,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
        bufp->chgCData(oldp+315,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
        bufp->chgCData(oldp+316,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+317,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
        bufp->chgCData(oldp+318,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                        >> 3U))),3);
        bufp->chgIData(oldp+319,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+320,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+321,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+322,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+323,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U])));
        bufp->chgIData(oldp+324,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+325,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+326,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+327,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+328,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U])));
        bufp->chgBit(oldp+329,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_read));
        bufp->chgCData(oldp+330,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                           >> 6U))),8);
        bufp->chgBit(oldp+331,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+332,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+333,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+334,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data),32);
        bufp->chgBit(oldp+335,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv));
        bufp->chgBit(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode));
        bufp->chgBit(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid));
        bufp->chgBit(oldp+338,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef));
        bufp->chgBit(oldp+339,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode));
        bufp->chgBit(oldp+340,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0));
        bufp->chgBit(oldp+341,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1));
        bufp->chgBit(oldp+342,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt));
        bufp->chgBit(oldp+343,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
        bufp->chgBit(oldp+344,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark));
        bufp->chgBit(oldp+345,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark));
        bufp->chgBit(oldp+346,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie));
        bufp->chgBit(oldp+347,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_read));
        bufp->chgCData(oldp+348,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                           >> 6U))),8);
        bufp->chgBit(oldp+349,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+350,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+351,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+352,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data),32);
        bufp->chgBit(oldp+353,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv));
        bufp->chgBit(oldp+354,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode));
        bufp->chgBit(oldp+355,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid));
        bufp->chgBit(oldp+356,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef));
        bufp->chgBit(oldp+357,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode));
        bufp->chgBit(oldp+358,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0));
        bufp->chgBit(oldp+359,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1));
        bufp->chgBit(oldp+360,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt));
        bufp->chgBit(oldp+361,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
        bufp->chgBit(oldp+362,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark));
        bufp->chgBit(oldp+363,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark));
        bufp->chgBit(oldp+364,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie));
        bufp->chgIData(oldp+365,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+366,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+367,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+368,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+369,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U])));
        bufp->chgIData(oldp+370,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+371,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+372,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+373,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+374,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U])));
        bufp->chgBit(oldp+375,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_read));
        bufp->chgBit(oldp+376,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_next));
        bufp->chgBit(oldp+377,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag));
        bufp->chgBit(oldp+378,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag));
        bufp->chgBit(oldp+379,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag));
        bufp->chgBit(oldp+380,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag));
        bufp->chgBit(oldp+381,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag));
        bufp->chgCData(oldp+382,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                          >> 8U))),4);
        bufp->chgBit(oldp+383,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+384,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+385,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data),32);
        bufp->chgIData(oldp+386,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                             >> 6U))),32);
        bufp->chgBit(oldp+387,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_read));
        bufp->chgBit(oldp+388,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_next));
        bufp->chgBit(oldp+389,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag));
        bufp->chgBit(oldp+390,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag));
        bufp->chgBit(oldp+391,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag));
        bufp->chgBit(oldp+392,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag));
        bufp->chgBit(oldp+393,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag));
        bufp->chgCData(oldp+394,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                          >> 8U))),4);
        bufp->chgBit(oldp+395,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+396,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+397,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data),32);
        bufp->chgIData(oldp+398,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                             >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+399,((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)))));
        bufp->chgBit(oldp+400,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+401,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
        bufp->chgBit(oldp+402,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next) 
                                      >> 1U))));
        bufp->chgBit(oldp+403,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next))));
        bufp->chgCData(oldp+404,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+405,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+406,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 9U))),3);
        bufp->chgCData(oldp+407,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 7U))),2);
        bufp->chgCData(oldp+408,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                          >> 3U))),4);
        bufp->chgBit(oldp+409,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 2U))));
        bufp->chgBit(oldp+410,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 1U))));
        bufp->chgBit(oldp+411,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
        bufp->chgIData(oldp+412,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
        bufp->chgIData(oldp+413,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
        bufp->chgIData(oldp+414,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
        bufp->chgIData(oldp+415,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
        bufp->chgIData(oldp+416,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
        bufp->chgIData(oldp+417,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
        bufp->chgSData(oldp+418,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+419,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+420,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+421,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+422,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+423,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
        bufp->chgCData(oldp+424,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+425,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+426,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 3U))));
        bufp->chgBit(oldp+427,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 2U))));
        bufp->chgBit(oldp+428,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 1U))));
        bufp->chgBit(oldp+429,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
        bufp->chgIData(oldp+430,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
        bufp->chgBit(oldp+431,(vlSelf->__VdfgTmp_h308c3a77__0));
        bufp->chgBit(oldp+432,(vlSelf->__VdfgTmp_hceefb3fb__0));
        bufp->chgBit(oldp+433,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if) 
                                      >> 3U))));
        bufp->chgBit(oldp+434,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if) 
                                      >> 2U))));
        bufp->chgBit(oldp+435,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if) 
                                      >> 1U))));
        bufp->chgBit(oldp+436,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if))));
        bufp->chgBit(oldp+437,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 8U))));
        bufp->chgBit(oldp+438,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 7U))));
        bufp->chgBit(oldp+439,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 6U))));
        bufp->chgBit(oldp+440,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 5U))));
        bufp->chgBit(oldp+441,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 4U))));
        bufp->chgBit(oldp+442,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 3U))));
        bufp->chgBit(oldp+443,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 2U))));
        bufp->chgBit(oldp+444,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 1U))));
        bufp->chgBit(oldp+445,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
        bufp->chgBit(oldp+446,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i));
        bufp->chgIData(oldp+447,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next),32);
        bufp->chgIData(oldp+448,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next),32);
        bufp->chgIData(oldp+449,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
        bufp->chgIData(oldp+450,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
        bufp->chgIData(oldp+451,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
        bufp->chgIData(oldp+452,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
        bufp->chgQData(oldp+453,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
        bufp->chgBit(oldp+455,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
        bufp->chgBit(oldp+456,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+457,((1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                >> 0x1fU)) 
                                       & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                              >> 0x1fU)) 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                             >> 0x1fU))) 
                                      | ((~ (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                     >> 0x1fU))) 
                                         & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                                >> 0x1fU)) 
                                            & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                               >> 0x1fU)))))));
        bufp->chgCData(oldp+458,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
        bufp->chgIData(oldp+459,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result),32);
        bufp->chgIData(oldp+460,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                   : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+461,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                 >> 0x20U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                   : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+462,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                   : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
        bufp->chgIData(oldp+463,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                 >> 0x20U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                   : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
        bufp->chgIData(oldp+464,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data),32);
        bufp->chgQData(oldp+465,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en),33);
        bufp->chgCData(oldp+467,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result),6);
        bufp->chgIData(oldp+468,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev),32);
        bufp->chgIData(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev),32);
        bufp->chgIData(oldp+470,(((0x1fU >= (0x1fU 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   ? ((IData)(1U) << 
                                      (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   : 0U)),32);
        bufp->chgIData(oldp+471,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1),32);
        bufp->chgIData(oldp+472,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2),32);
        bufp->chgIData(oldp+473,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result),32);
        bufp->chgIData(oldp+474,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result),32);
        bufp->chgQData(oldp+475,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output),64);
        bufp->chgCData(oldp+477,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
        bufp->chgBit(oldp+478,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+479,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
        bufp->chgBit(oldp+480,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req));
        bufp->chgBit(oldp+481,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0))));
        bufp->chgBit(oldp+482,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
        bufp->chgBit(oldp+483,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
        bufp->chgBit(oldp+484,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
        bufp->chgBit(oldp+485,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+486,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+487,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+488,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+489,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+490,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U])));
        bufp->chgIData(oldp+491,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+492,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+493,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+494,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+495,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
        bufp->chgIData(oldp+496,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
        bufp->chgBit(oldp+497,((0x1bU == (0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                   >> 7U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+498,(vlSelf->pcore_tb__DOT__main_time),1024);
        bufp->chgIData(oldp+530,(vlSelf->pcore_tb__DOT__gpio_io),24);
        bufp->chgSData(oldp+531,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff),16);
        bufp->chgIData(oldp+532,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
        bufp->chgIData(oldp+533,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff)),32);
        bufp->chgIData(oldp+534,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+535,((0U != (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                       | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                          | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)))))));
        bufp->chgBit(oldp+536,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff)))));
        bufp->chgBit(oldp+537,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__timer_overflow_ff));
        bufp->chgBit(oldp+538,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgBit(oldp+539,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+540,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+541,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff))));
        bufp->chgIData(oldp+542,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+543,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
        bufp->chgQData(oldp+544,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff),64);
        bufp->chgQData(oldp+546,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff),64);
        bufp->chgBit(oldp+548,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                                >= vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff)));
        bufp->chgBit(oldp+549,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)))));
        bufp->chgBit(oldp+550,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)))));
        bufp->chgBit(oldp+551,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)))));
        bufp->chgIData(oldp+552,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+553,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+554,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+555,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+556,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+557,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+558,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+559,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff))));
        bufp->chgSData(oldp+560,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff),16);
        bufp->chgSData(oldp+561,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff),16);
        bufp->chgSData(oldp+562,((0xffffU & (~ ((IData)(vlSelf->pcore_tb__DOT__gp_switch_i) 
                                                ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff))))),16);
        bufp->chgSData(oldp+563,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff),16);
        bufp->chgSData(oldp+564,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff),16);
        bufp->chgCData(oldp+565,((0xffU & vlSelf->pcore_tb__DOT__gpio_io)),8);
        bufp->chgCData(oldp+566,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+567,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+568,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+569,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+570,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff),8);
        bufp->chgCData(oldp+571,((0xffU & (vlSelf->pcore_tb__DOT__gpio_io 
                                           >> 8U))),8);
        bufp->chgCData(oldp+572,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+573,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+574,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+575,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+576,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff),8);
        bufp->chgCData(oldp+577,((0xffU & (vlSelf->pcore_tb__DOT__gpio_io 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+578,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+579,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+580,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+581,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+582,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff),8);
        bufp->chgIData(oldp+583,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+584,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgBit(oldp+585,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+586,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
        bufp->chgIData(oldp+587,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+588,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+589,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+590,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+591,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
        bufp->chgBit(oldp+592,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+593,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))));
        bufp->chgIData(oldp+594,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+595,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgIData(oldp+596,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgSData(oldp+597,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+598,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+599,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+600,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+601,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+602,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
        bufp->chgCData(oldp+603,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+604,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+605,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+606,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+607,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+608,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
        bufp->chgIData(oldp+609,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
        bufp->chgIData(oldp+610,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgBit(oldp+611,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
        bufp->chgBit(oldp+612,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
        bufp->chgBit(oldp+613,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
        bufp->chgBit(oldp+614,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
        bufp->chgBit(oldp+615,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
        bufp->chgBit(oldp+616,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
        bufp->chgBit(oldp+617,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
        bufp->chgBit(oldp+618,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
        bufp->chgBit(oldp+619,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
        bufp->chgBit(oldp+620,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
        bufp->chgBit(oldp+621,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
        bufp->chgBit(oldp+622,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
        bufp->chgBit(oldp+623,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
        bufp->chgBit(oldp+624,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
        bufp->chgBit(oldp+625,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
        bufp->chgBit(oldp+626,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
        bufp->chgCData(oldp+627,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+628,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x19U))),5);
        bufp->chgIData(oldp+629,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+630,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x11U))),3);
        bufp->chgCData(oldp+631,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                            << 2U) 
                                           | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                              >> 0x1eU)))),7);
        bufp->chgCData(oldp+632,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 7U))),5);
        bufp->chgBit(oldp+633,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+634,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))));
        bufp->chgIData(oldp+635,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff),32);
        bufp->chgIData(oldp+636,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)),32);
        bufp->chgBit(oldp+637,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
        bufp->chgBit(oldp+638,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__busy_ff));
        bufp->chgIData(oldp+639,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__opr2_ff),32);
        bufp->chgIData(oldp+640,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_next),32);
        bufp->chgQData(oldp+641,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_ff),33);
        bufp->chgQData(oldp+643,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_next),33);
        bufp->chgQData(oldp+645,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff),33);
        bufp->chgCData(oldp+647,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__counter),5);
        bufp->chgCData(oldp+648,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
        bufp->chgBit(oldp+649,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
        bufp->chgBit(oldp+650,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+651,(((IData)(4U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)),32);
        bufp->chgBit(oldp+652,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
        bufp->chgBit(oldp+653,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
        bufp->chgBit(oldp+654,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
        bufp->chgCData(oldp+655,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
        bufp->chgCData(oldp+656,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
        bufp->chgCData(oldp+657,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
        bufp->chgCData(oldp+658,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+659,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
        bufp->chgCData(oldp+660,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+661,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
        bufp->chgCData(oldp+662,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+663,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i))),2);
        bufp->chgCData(oldp+664,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+665,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+666,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+667,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+668,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+669,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+670,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+671,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+672,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+673,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
        bufp->chgCData(oldp+674,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
        bufp->chgBit(oldp+675,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
        bufp->chgBit(oldp+676,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
        bufp->chgIData(oldp+677,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+678,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
        bufp->chgIData(oldp+679,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+680,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
        bufp->chgBit(oldp+681,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
        bufp->chgBit(oldp+682,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
        bufp->chgIData(oldp+683,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+684,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
        bufp->chgIData(oldp+685,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+686,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+687,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+688,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 1U))),3);
        bufp->chgCData(oldp+689,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgQData(oldp+690,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))),33);
        bufp->chgCData(oldp+692,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x1aU))),3);
        bufp->chgCData(oldp+693,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+694,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+695,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x13U))),2);
        bufp->chgCData(oldp+696,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+697,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+698,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+699,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+700,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+701,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 8U))));
        bufp->chgCData(oldp+702,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 5U))),3);
        bufp->chgBit(oldp+703,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+704,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+705,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+706,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+707,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])));
        bufp->chgCData(oldp+708,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 5U))),3);
        bufp->chgCData(oldp+709,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x1aU))),3);
        bufp->chgCData(oldp+710,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+711,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                          >> 0xfU))),4);
        bufp->chgBit(oldp+712,((1U & ((0U != (3U & 
                                              (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               >> 0x13U)))
                                       ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                          >> 1U) : 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 3U)))));
        bufp->chgBit(oldp+713,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+714,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 1U))));
        bufp->chgCData(oldp+715,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgBit(oldp+716,((IData)((0U != (0x802U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
        bufp->chgBit(oldp+717,((IData)((0U != (0x3000402U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
        bufp->chgCData(oldp+718,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+719,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x15U))),3);
        bufp->chgQData(oldp+720,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))),33);
        bufp->chgBit(oldp+722,((0U != (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+723,((8ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))));
        bufp->chgBit(oldp+724,((9ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))));
        bufp->chgCData(oldp+725,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 1U))),3);
        bufp->chgBit(oldp+726,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+727,((IData)((6U == (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
        bufp->chgBit(oldp+728,((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+729,((IData)((0U != (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+730,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff)))));
        bufp->chgCData(oldp+731,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_clk) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_clk))),2);
        bufp->chgCData(oldp+732,(((2U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi1_module__spi_cs_o) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi0_module__spi_cs_o)))),2);
        bufp->chgCData(oldp+733,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_mosi) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_mosi))),2);
        bufp->chgCData(oldp+734,(((2U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff))))),2);
        bufp->chgBit(oldp+735,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart));
        bufp->chgBit(oldp+736,((1U & (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                        >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))) 
                                      | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                          >> 1U) | 
                                         ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))))));
        bufp->chgCData(oldp+737,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state),2);
        bufp->chgBit(oldp+738,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgCData(oldp+739,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+740,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
        bufp->chgBit(oldp+741,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
        bufp->chgIData(oldp+742,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
        bufp->chgIData(oldp+743,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
        bufp->chgBit(oldp+744,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgBit(oldp+745,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
        bufp->chgCData(oldp+746,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
        bufp->chgIData(oldp+747,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
        bufp->chgIData(oldp+748,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
        bufp->chgIData(oldp+749,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
        bufp->chgIData(oldp+750,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
        bufp->chgIData(oldp+751,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
        bufp->chgIData(oldp+752,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                  >> 4U)),28);
        bufp->chgBit(oldp+753,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+754,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+755,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+756,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
        bufp->chgBit(oldp+757,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                >> 0x1fU)));
        bufp->chgCData(oldp+758,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+759,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x16U))));
        bufp->chgBit(oldp+760,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x15U))));
        bufp->chgBit(oldp+761,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x14U))));
        bufp->chgBit(oldp+762,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+763,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+764,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x11U))));
        bufp->chgCData(oldp+765,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+766,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+767,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+768,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 9U))),2);
        bufp->chgBit(oldp+769,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+770,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+771,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+772,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+773,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+774,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+775,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+776,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+777,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
        bufp->chgSData(oldp+778,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+779,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+780,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+781,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x11U))));
        bufp->chgBit(oldp+782,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+783,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+784,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+785,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+786,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+787,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+788,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+789,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+790,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+791,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+792,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+793,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+794,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+795,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
        bufp->chgIData(oldp+796,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                                  >> 2U)),30);
        bufp->chgCData(oldp+797,((3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
        bufp->chgIData(oldp+798,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
        bufp->chgIData(oldp+799,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
        bufp->chgIData(oldp+800,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
        bufp->chgIData(oldp+801,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
        bufp->chgSData(oldp+802,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+803,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+804,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+805,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x11U))));
        bufp->chgBit(oldp+806,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+807,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+814,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+815,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+816,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+817,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+818,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+819,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
        bufp->chgCData(oldp+820,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+821,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
        bufp->chgBit(oldp+822,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req));
        bufp->chgBit(oldp+823,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req));
        bufp->chgBit(oldp+824,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpsw_irq_req));
        bufp->chgBit(oldp+825,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
        bufp->chgBit(oldp+826,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
        bufp->chgBit(oldp+827,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
        bufp->chgBit(oldp+828,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff));
        bufp->chgBit(oldp+829,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff));
        bufp->chgBit(oldp+830,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff));
        bufp->chgBit(oldp+831,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sw_irq_ff));
        bufp->chgBit(oldp+832,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
        bufp->chgBit(oldp+833,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
        bufp->chgCData(oldp+834,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff),3);
        bufp->chgIData(oldp+835,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff),32);
        bufp->chgIData(oldp+836,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff),32);
        bufp->chgBit(oldp+837,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
        bufp->chgBit(oldp+838,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
        bufp->chgBit(oldp+839,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
        bufp->chgBit(oldp+840,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
        bufp->chgBit(oldp+841,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_ff));
        bufp->chgBit(oldp+842,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next));
        bufp->chgCData(oldp+843,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart),2);
        bufp->chgBit(oldp+844,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_mosi));
        bufp->chgBit(oldp+845,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_clk));
        bufp->chgBit(oldp+846,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi0_module__spi_cs_o))));
        bufp->chgBit(oldp+847,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                       >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))))));
        bufp->chgBit(oldp+848,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_mosi));
        bufp->chgBit(oldp+849,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_clk));
        bufp->chgBit(oldp+850,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi1_module__spi_cs_o))));
        bufp->chgBit(oldp+851,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                       >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))))));
        bufp->chgCData(oldp+852,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi0_module__spi_cs_o),2);
        bufp->chgCData(oldp+853,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default),2);
        bufp->chgCData(oldp+854,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id),2);
        bufp->chgSData(oldp+855,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff),12);
        bufp->chgBit(oldp+856,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
        bufp->chgBit(oldp+857,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                      >> 1U))));
        bufp->chgCData(oldp+858,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode),2);
        bufp->chgCData(oldp+859,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),8);
        bufp->chgCData(oldp+860,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+861,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),8);
        bufp->chgCData(oldp+862,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+863,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+864,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+865,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff))));
        bufp->chgBit(oldp+866,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_hold_off));
        bufp->chgBit(oldp+867,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff))));
        bufp->chgBit(oldp+868,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
        bufp->chgBit(oldp+869,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_fst_transmit));
        bufp->chgBit(oldp+870,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_en));
        bufp->chgBit(oldp+871,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_miso_en));
        bufp->chgBit(oldp+872,((((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff)) 
                                 | (4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff))) 
                                & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_next)))));
        bufp->chgBit(oldp+873,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_read));
        bufp->chgBit(oldp+874,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_write));
        bufp->chgBit(oldp+875,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
        bufp->chgBit(oldp+876,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
        bufp->chgCData(oldp+877,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_data),8);
        bufp->chgCData(oldp+878,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_data),8);
        bufp->chgBit(oldp+879,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_write));
        bufp->chgBit(oldp+880,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_mark));
        bufp->chgBit(oldp+881,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_mark));
        bufp->chgCData(oldp+882,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff),3);
        bufp->chgCData(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff),3);
        bufp->chgBit(oldp+884,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                      >> 2U))));
        bufp->chgSData(oldp+885,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__c2t_delay),9);
        bufp->chgSData(oldp+886,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__t2c_delay),9);
        bufp->chgCData(oldp+887,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__count_intercs),8);
        bufp->chgCData(oldp+888,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__count_interfr),8);
        bufp->chgCData(oldp+889,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__data_cnt),5);
        bufp->chgSData(oldp+890,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__clock_cnt),12);
        bufp->chgCData(oldp+891,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__count_up),2);
        bufp->chgCData(oldp+892,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__max_data_count),5);
        bufp->chgCData(oldp+893,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff),3);
        bufp->chgCData(oldp+894,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_next),3);
        bufp->chgCData(oldp+895,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff),8);
        bufp->chgCData(oldp+896,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_miso_en)
                                   ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                       ? ((0x80U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                                >> 1U)))
                                       : ((0xfeU & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                            << 1U)) 
                                          | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i))))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff))),8);
        bufp->chgCData(oldp+897,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff),8);
        bufp->chgCData(oldp+898,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_en) 
                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_fst_transmit))
                                   ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                       ? (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                   >> 1U))
                                       : (0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                   << 1U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff))),8);
        bufp->chgBit(oldp+899,((1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_en) 
                                       | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_fst_transmit))
                                       ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                           ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff)
                                           : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                              >> 7U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_mosi)))));
        bufp->chgSData(oldp+900,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count),9);
        bufp->chgSData(oldp+901,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo_count),9);
        bufp->chgCData(oldp+902,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__reg_tx_data),8);
        bufp->chgBit(oldp+903,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
        bufp->chgCData(oldp+904,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+905,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+906,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+907,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+908,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+909,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+910,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+911,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgSData(oldp+912,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr),9);
        bufp->chgSData(oldp+913,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr),9);
        bufp->chgIData(oldp+914,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+915,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+916,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+917,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+918,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+919,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+920,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+921,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+922,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgSData(oldp+923,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr),9);
        bufp->chgSData(oldp+924,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr),9);
        bufp->chgIData(oldp+925,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+926,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff));
        bufp->chgCData(oldp+927,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff),2);
        bufp->chgSData(oldp+928,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff),16);
        bufp->chgSData(oldp+929,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff),16);
        bufp->chgCData(oldp+930,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff),8);
        bufp->chgCData(oldp+931,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff),2);
        bufp->chgCData(oldp+932,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_mark) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_mark))),2);
        bufp->chgCData(oldp+933,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff),2);
        bufp->chgCData(oldp+934,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi1_module__spi_cs_o),2);
        bufp->chgCData(oldp+935,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default),2);
        bufp->chgCData(oldp+936,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id),2);
        bufp->chgSData(oldp+937,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff),12);
        bufp->chgBit(oldp+938,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
        bufp->chgBit(oldp+939,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                      >> 1U))));
        bufp->chgCData(oldp+940,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode),2);
        bufp->chgCData(oldp+941,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),8);
        bufp->chgCData(oldp+942,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+943,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),8);
        bufp->chgCData(oldp+944,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+945,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+946,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+947,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff))));
        bufp->chgBit(oldp+948,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_hold_off));
        bufp->chgBit(oldp+949,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff))));
        bufp->chgBit(oldp+950,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
        bufp->chgBit(oldp+951,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_fst_transmit));
        bufp->chgBit(oldp+952,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_en));
        bufp->chgBit(oldp+953,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_miso_en));
        bufp->chgBit(oldp+954,((((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff)) 
                                 | (4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff))) 
                                & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_next)))));
        bufp->chgBit(oldp+955,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_read));
        bufp->chgBit(oldp+956,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_write));
        bufp->chgBit(oldp+957,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
        bufp->chgBit(oldp+958,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
        bufp->chgCData(oldp+959,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_data),8);
        bufp->chgCData(oldp+960,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_data),8);
        bufp->chgBit(oldp+961,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_write));
        bufp->chgBit(oldp+962,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_mark));
        bufp->chgBit(oldp+963,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_mark));
        bufp->chgCData(oldp+964,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff),3);
        bufp->chgCData(oldp+965,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff),3);
        bufp->chgBit(oldp+966,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                      >> 2U))));
        bufp->chgSData(oldp+967,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__c2t_delay),9);
        bufp->chgSData(oldp+968,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__t2c_delay),9);
        bufp->chgCData(oldp+969,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__count_intercs),8);
        bufp->chgCData(oldp+970,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__count_interfr),8);
        bufp->chgCData(oldp+971,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__data_cnt),5);
        bufp->chgSData(oldp+972,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__clock_cnt),12);
        bufp->chgCData(oldp+973,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__count_up),2);
        bufp->chgCData(oldp+974,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__max_data_count),5);
        bufp->chgCData(oldp+975,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff),3);
        bufp->chgCData(oldp+976,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_next),3);
        bufp->chgCData(oldp+977,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff),8);
        bufp->chgCData(oldp+978,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_miso_en)
                                   ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                       ? ((0x80U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                            << 6U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                                >> 1U)))
                                       : ((0xfeU & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                            << 1U)) 
                                          | (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                                   >> 1U))))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff))),8);
        bufp->chgCData(oldp+979,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff),8);
        bufp->chgCData(oldp+980,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_en) 
                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_fst_transmit))
                                   ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                       ? (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                   >> 1U))
                                       : (0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                   << 1U)))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff))),8);
        bufp->chgBit(oldp+981,((1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_en) 
                                       | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_fst_transmit))
                                       ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                           ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff)
                                           : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                              >> 7U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_mosi)))));
        bufp->chgSData(oldp+982,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count),9);
        bufp->chgSData(oldp+983,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo_count),9);
        bufp->chgCData(oldp+984,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__reg_tx_data),8);
        bufp->chgBit(oldp+985,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
        bufp->chgCData(oldp+986,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+987,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+988,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+989,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+990,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+991,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+992,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+993,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgSData(oldp+994,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr),9);
        bufp->chgSData(oldp+995,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr),9);
        bufp->chgIData(oldp+996,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+997,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+998,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+999,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+1000,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+1001,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+1002,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+1003,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+1004,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgSData(oldp+1005,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr),9);
        bufp->chgSData(oldp+1006,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr),9);
        bufp->chgIData(oldp+1007,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1008,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff));
        bufp->chgCData(oldp+1009,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff),2);
        bufp->chgSData(oldp+1010,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff),16);
        bufp->chgSData(oldp+1011,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff),16);
        bufp->chgCData(oldp+1012,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff),8);
        bufp->chgCData(oldp+1013,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff),2);
        bufp->chgCData(oldp+1014,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_mark) 
                                    << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_mark))),2);
        bufp->chgCData(oldp+1015,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff),2);
        bufp->chgBit(oldp+1016,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)))));
        bufp->chgBit(oldp+1017,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)))));
        bufp->chgBit(oldp+1018,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                       | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)))));
        bufp->chgBit(oldp+1019,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
        bufp->chgBit(oldp+1020,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
        bufp->chgCData(oldp+1021,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_data),8);
        bufp->chgBit(oldp+1022,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_ff));
        bufp->chgCData(oldp+1023,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff),8);
        bufp->chgBit(oldp+1024,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_mark));
        bufp->chgBit(oldp+1025,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_tx_fifo_mark));
        bufp->chgCData(oldp+1026,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                         >> 1U))),3);
        bufp->chgCData(oldp+1027,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                         >> 2U))),3);
        bufp->chgBit(oldp+1028,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))));
        bufp->chgBit(oldp+1029,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))));
        bufp->chgBit(oldp+1030,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                       >> 1U))));
        bufp->chgSData(oldp+1031,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff),16);
        bufp->chgCData(oldp+1032,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff),2);
        bufp->chgBit(oldp+1033,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter))));
        bufp->chgCData(oldp+1034,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter),4);
        bufp->chgSData(oldp+1035,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter),16);
        bufp->chgSData(oldp+1036,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter),16);
        bufp->chgBit(oldp+1037,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                 == (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                                >> 1U)))));
        bufp->chgCData(oldp+1038,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff),8);
        bufp->chgCData(oldp+1039,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count),4);
        bufp->chgBit(oldp+1040,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
        bufp->chgBit(oldp+1041,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter))));
        bufp->chgCData(oldp+1042,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+1043,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+1044,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+1045,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+1046,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+1047,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+1048,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+1049,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgCData(oldp+1050,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__read_ptr),4);
        bufp->chgCData(oldp+1051,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__write_ptr),4);
        bufp->chgIData(oldp+1052,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1053,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rx_fifo_empty));
        bufp->chgCData(oldp+1054,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff),5);
        bufp->chgCData(oldp+1055,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff),4);
        bufp->chgCData(oldp+1056,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff),2);
        bufp->chgCData(oldp+1057,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff),2);
        bufp->chgCData(oldp+1058,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_mark) 
                                    << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_tx_fifo_mark))),2);
        bufp->chgCData(oldp+1059,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_state_ff),2);
        bufp->chgCData(oldp+1060,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_state_next),2);
        bufp->chgBit(oldp+1061,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_counter))));
        bufp->chgBit(oldp+1062,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_count_en));
        bufp->chgBit(oldp+1063,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_count_reset));
        bufp->chgBit(oldp+1064,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_load_en));
        bufp->chgBit(oldp+1065,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_en));
        bufp->chgBit(oldp+1066,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_count_en));
        bufp->chgBit(oldp+1067,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_count_load_en));
        bufp->chgBit(oldp+1068,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__txd_mux_sel));
        bufp->chgBit(oldp+1069,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_read));
        bufp->chgSData(oldp+1070,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff),11);
        bufp->chgSData(oldp+1071,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_load_en)
                                    ? ((0x600U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff)) 
                                       | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_data) 
                                          << 1U)) : 
                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_en)
                                     ? (0x400U | (0x3ffU 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff) 
                                                     >> 1U)))
                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff)))),11);
        bufp->chgCData(oldp+1072,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_counter),4);
        bufp->chgCData(oldp+1073,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))
                                    ? 0xbU : 0xaU)),4);
        bufp->chgSData(oldp+1074,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_counter),16);
        bufp->chgBit(oldp+1075,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_counter))));
        bufp->chgBit(oldp+1076,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
        bufp->chgCData(oldp+1077,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_data),8);
        bufp->chgCData(oldp+1078,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count),4);
        bufp->chgCData(oldp+1079,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+1080,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+1081,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+1082,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+1083,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+1084,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+1085,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+1086,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgCData(oldp+1087,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__read_ptr),4);
        bufp->chgCData(oldp+1088,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__write_ptr),4);
        bufp->chgIData(oldp+1089,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1090,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
        bufp->chgBit(oldp+1091,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
        bufp->chgCData(oldp+1092,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_data),8);
        bufp->chgBit(oldp+1093,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_ff));
        bufp->chgCData(oldp+1094,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff),8);
        bufp->chgBit(oldp+1095,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_mark));
        bufp->chgBit(oldp+1096,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_tx_fifo_mark));
        bufp->chgCData(oldp+1097,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                         >> 1U))),3);
        bufp->chgCData(oldp+1098,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                         >> 2U))),3);
        bufp->chgBit(oldp+1099,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))));
        bufp->chgBit(oldp+1100,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))));
        bufp->chgBit(oldp+1101,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                       >> 1U))));
        bufp->chgSData(oldp+1102,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff),16);
        bufp->chgCData(oldp+1103,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff),2);
        bufp->chgBit(oldp+1104,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter))));
        bufp->chgCData(oldp+1105,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter),4);
        bufp->chgSData(oldp+1106,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter),16);
        bufp->chgSData(oldp+1107,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter),16);
        bufp->chgBit(oldp+1108,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                 == (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                                >> 1U)))));
        bufp->chgCData(oldp+1109,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff),8);
        bufp->chgCData(oldp+1110,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count),4);
        bufp->chgBit(oldp+1111,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
        bufp->chgBit(oldp+1112,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter))));
        bufp->chgCData(oldp+1113,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+1114,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+1115,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+1116,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+1117,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+1118,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+1119,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+1120,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgCData(oldp+1121,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__read_ptr),4);
        bufp->chgCData(oldp+1122,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__write_ptr),4);
        bufp->chgIData(oldp+1123,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1124,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rx_fifo_empty));
        bufp->chgCData(oldp+1125,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff),5);
        bufp->chgCData(oldp+1126,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff),4);
        bufp->chgCData(oldp+1127,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff),2);
        bufp->chgCData(oldp+1128,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff),2);
        bufp->chgCData(oldp+1129,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_mark) 
                                    << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_tx_fifo_mark))),2);
        bufp->chgCData(oldp+1130,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_state_ff),2);
        bufp->chgCData(oldp+1131,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_state_next),2);
        bufp->chgBit(oldp+1132,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_counter))));
        bufp->chgBit(oldp+1133,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_count_en));
        bufp->chgBit(oldp+1134,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_count_reset));
        bufp->chgBit(oldp+1135,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_load_en));
        bufp->chgBit(oldp+1136,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_en));
        bufp->chgBit(oldp+1137,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_count_en));
        bufp->chgBit(oldp+1138,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_count_load_en));
        bufp->chgBit(oldp+1139,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__txd_mux_sel));
        bufp->chgBit(oldp+1140,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_read));
        bufp->chgSData(oldp+1141,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff),11);
        bufp->chgSData(oldp+1142,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_load_en)
                                    ? ((0x600U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)) 
                                       | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_data) 
                                          << 1U)) : 
                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_en)
                                     ? (0x400U | (0x3ffU 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff) 
                                                     >> 1U)))
                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)))),11);
        bufp->chgCData(oldp+1143,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_counter),4);
        bufp->chgCData(oldp+1144,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))
                                    ? 0xbU : 0xaU)),4);
        bufp->chgSData(oldp+1145,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_counter),16);
        bufp->chgBit(oldp+1146,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_counter))));
        bufp->chgBit(oldp+1147,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
        bufp->chgCData(oldp+1148,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_data),8);
        bufp->chgCData(oldp+1149,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count),4);
        bufp->chgCData(oldp+1150,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+1151,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+1152,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+1153,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+1154,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+1155,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+1156,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+1157,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgCData(oldp+1158,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__read_ptr),4);
        bufp->chgCData(oldp+1159,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__write_ptr),4);
        bufp->chgIData(oldp+1160,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+1161,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
        bufp->chgIData(oldp+1162,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
        bufp->chgIData(oldp+1163,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
        bufp->chgIData(oldp+1164,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
        bufp->chgIData(oldp+1165,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
        bufp->chgIData(oldp+1166,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
        bufp->chgIData(oldp+1167,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
        bufp->chgIData(oldp+1168,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
        bufp->chgIData(oldp+1169,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
        bufp->chgIData(oldp+1170,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
        bufp->chgIData(oldp+1171,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
        bufp->chgIData(oldp+1172,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
        bufp->chgIData(oldp+1173,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
        bufp->chgIData(oldp+1174,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
        bufp->chgIData(oldp+1175,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
        bufp->chgIData(oldp+1176,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
        bufp->chgIData(oldp+1177,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
        bufp->chgIData(oldp+1178,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
        bufp->chgIData(oldp+1179,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
        bufp->chgIData(oldp+1180,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
        bufp->chgIData(oldp+1181,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
        bufp->chgIData(oldp+1182,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
        bufp->chgIData(oldp+1183,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
        bufp->chgIData(oldp+1184,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
        bufp->chgIData(oldp+1185,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
        bufp->chgIData(oldp+1186,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
        bufp->chgIData(oldp+1187,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
        bufp->chgIData(oldp+1188,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
        bufp->chgIData(oldp+1189,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
        bufp->chgIData(oldp+1190,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
        bufp->chgIData(oldp+1191,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
        bufp->chgIData(oldp+1192,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+1193,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 9U))),3);
        bufp->chgCData(oldp+1194,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1195,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1196,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1197,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 9U))),3);
        bufp->chgCData(oldp+1198,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1199,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 3U))),4);
        bufp->chgBit(oldp+1200,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 2U))));
        bufp->chgBit(oldp+1201,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 1U))));
        bufp->chgBit(oldp+1202,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
        bufp->chgCData(oldp+1203,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 3U))),4);
        bufp->chgBit(oldp+1204,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 3U)))));
        bufp->chgBit(oldp+1205,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 3U)))));
        bufp->chgBit(oldp+1206,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 3U)))));
        bufp->chgBit(oldp+1207,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
        bufp->chgCData(oldp+1208,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
        bufp->chgBit(oldp+1209,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
        bufp->chgCData(oldp+1210,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 7U))),2);
        bufp->chgBit(oldp+1211,((IData)((0U != (0xf80U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
        bufp->chgBit(oldp+1212,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req));
        bufp->chgBit(oldp+1213,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+1214,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                         >> 1U))),3);
        bufp->chgBit(oldp+1215,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+1216,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+1217,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))));
        bufp->chgBit(oldp+1218,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))));
        bufp->chgBit(oldp+1219,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+1220,(((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                 >> 3U)))
                                  ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                                  : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1221,((IData)((((0U != (0x78U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                                          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req)) 
                                         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+1222,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                           >> 8U))),32);
        bufp->chgCData(oldp+1223,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                                 >> 6U)))),2);
        bufp->chgBit(oldp+1224,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                               >> 5U)))));
        bufp->chgBit(oldp+1225,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                               >> 4U)))));
        bufp->chgBit(oldp+1226,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                               >> 3U)))));
        bufp->chgBit(oldp+1227,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                               >> 2U)))));
        bufp->chgBit(oldp+1228,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                               >> 1U)))));
        bufp->chgBit(oldp+1229,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe))));
        bufp->chgBit(oldp+1230,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+1231,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+1232,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+1233,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+1234,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+1235,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
        bufp->chgIData(oldp+1236,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0),32);
        bufp->chgBit(oldp+1237,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
        bufp->chgBit(oldp+1238,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
        bufp->chgBit(oldp+1239,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+1240,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
        bufp->chgBit(oldp+1241,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+1242,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+1243,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+1244,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+1245,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+1246,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
        bufp->chgBit(oldp+1247,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
        bufp->chgIData(oldp+1248,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
        bufp->chgIData(oldp+1249,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
        bufp->chgIData(oldp+1250,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
        bufp->chgIData(oldp+1251,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
        bufp->chgIData(oldp+1252,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
        bufp->chgIData(oldp+1253,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 4U)),28);
        bufp->chgBit(oldp+1254,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1255,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1256,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1257,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
        bufp->chgBit(oldp+1258,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1259,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                            >> 0x17U))),8);
        bufp->chgBit(oldp+1260,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1261,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1262,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1263,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1264,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1265,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x11U))));
        bufp->chgCData(oldp+1266,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0xfU))),2);
        bufp->chgCData(oldp+1267,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0xdU))),2);
        bufp->chgCData(oldp+1268,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0xbU))),2);
        bufp->chgCData(oldp+1269,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 9U))),2);
        bufp->chgBit(oldp+1270,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 8U))));
        bufp->chgBit(oldp+1271,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 7U))));
        bufp->chgBit(oldp+1272,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 6U))));
        bufp->chgBit(oldp+1273,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 5U))));
        bufp->chgBit(oldp+1274,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 4U))));
        bufp->chgBit(oldp+1275,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1276,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1277,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1278,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
        bufp->chgSData(oldp+1279,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+1280,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1281,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1282,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1283,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1284,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                           >> 0xcU))),4);
        bufp->chgBit(oldp+1285,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1286,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1287,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 9U))));
        bufp->chgBit(oldp+1288,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 8U))));
        bufp->chgBit(oldp+1289,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 7U))));
        bufp->chgBit(oldp+1290,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 6U))));
        bufp->chgBit(oldp+1291,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 5U))));
        bufp->chgBit(oldp+1292,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 4U))));
        bufp->chgBit(oldp+1293,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1294,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1295,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1296,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
        bufp->chgIData(oldp+1297,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                                   >> 2U)),30);
        bufp->chgCData(oldp+1298,((3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
        bufp->chgIData(oldp+1299,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
        bufp->chgIData(oldp+1300,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
        bufp->chgSData(oldp+1301,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+1302,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1303,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1304,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1305,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1306,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                           >> 0xcU))),4);
        bufp->chgBit(oldp+1307,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1308,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1309,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 9U))));
        bufp->chgBit(oldp+1310,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 8U))));
        bufp->chgBit(oldp+1311,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 7U))));
        bufp->chgBit(oldp+1312,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 6U))));
        bufp->chgBit(oldp+1313,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 5U))));
        bufp->chgBit(oldp+1314,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 4U))));
        bufp->chgBit(oldp+1315,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1316,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1317,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1318,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
        bufp->chgCData(oldp+1319,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
        bufp->chgCData(oldp+1320,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),5);
        bufp->chgIData(oldp+1321,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
        bufp->chgBit(oldp+1322,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
        bufp->chgBit(oldp+1323,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
        bufp->chgBit(oldp+1324,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
        bufp->chgBit(oldp+1325,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
        bufp->chgBit(oldp+1326,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
        bufp->chgBit(oldp+1327,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+1328,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
        bufp->chgBit(oldp+1329,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
        bufp->chgBit(oldp+1330,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
        bufp->chgBit(oldp+1331,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
        bufp->chgBit(oldp+1332,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
        bufp->chgBit(oldp+1333,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
        bufp->chgBit(oldp+1334,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
        bufp->chgBit(oldp+1335,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
        bufp->chgBit(oldp+1336,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
        bufp->chgBit(oldp+1337,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next));
        bufp->chgIData(oldp+1338,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
        bufp->chgBit(oldp+1339,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req));
        bufp->chgBit(oldp+1340,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+1341,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1342,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1343,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1344,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1345,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1346,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1347,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1348,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgCData(oldp+1349,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0xcU))),5);
        bufp->chgIData(oldp+1350,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                 >> 5U))),32);
        bufp->chgSData(oldp+1351,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                              << 7U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 0x19U)))),12);
        bufp->chgIData(oldp+1352,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1353,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1354,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1355,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgCData(oldp+1356,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1357,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1358,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 3U))));
        bufp->chgBit(oldp+1359,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 2U))));
        bufp->chgBit(oldp+1360,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 1U))));
        bufp->chgBit(oldp+1361,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
        bufp->chgCData(oldp+1362,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1363,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0x19U))),5);
        bufp->chgBit(oldp+1364,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
        bufp->chgCData(oldp+1365,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1366,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0x19U))),5);
        bufp->chgCData(oldp+1367,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0xcU))),5);
        bufp->chgBit(oldp+1368,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 0x14U)))));
        bufp->chgBit(oldp+1369,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 0x19U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+1370,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_count_en));
        bufp->chgBit(oldp+1371,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_count_reset));
        bufp->chgBit(oldp+1372,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_en));
        bufp->chgBit(oldp+1373,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_count_en));
        bufp->chgBit(oldp+1374,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_count_load_en));
        bufp->chgBit(oldp+1375,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_count_reset));
        bufp->chgBit(oldp+1376,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_count_en));
        bufp->chgBit(oldp+1377,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__fifo_load_en));
        bufp->chgBit(oldp+1378,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_count_en));
        bufp->chgBit(oldp+1379,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_count_reset));
        bufp->chgBit(oldp+1380,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_en));
        bufp->chgBit(oldp+1381,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_count_en));
        bufp->chgBit(oldp+1382,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_count_load_en));
        bufp->chgBit(oldp+1383,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_count_reset));
        bufp->chgBit(oldp+1384,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_count_en));
        bufp->chgBit(oldp+1385,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__fifo_load_en));
    }
    bufp->chgBit(oldp+1386,(vlSelf->clk));
    bufp->chgBit(oldp+1387,(vlSelf->reset));
    bufp->chgIData(oldp+1388,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                         ? 0ULL : (1ULL 
                                                   | ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                                      << 1U))) 
                                       >> 1U))),32);
    bufp->chgBit(oldp+1389,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                            ? 0ULL : 
                                           (1ULL | 
                                            ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                             << 1U)))))));
    bufp->chgIData(oldp+1390,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                         ? 0ULL : (1ULL 
                                                   | ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                                      << 1U))) 
                                       >> 1U))),32);
    bufp->chgBit(oldp+1391,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                            ? 0ULL : 
                                           (1ULL | 
                                            ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                             << 1U)))))));
    bufp->chgIData(oldp+1392,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))
                                ? (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)),32);
    bufp->chgIData(oldp+1393,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                             >> 5U))),32);
    bufp->chgIData(oldp+1394,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                             >> 5U))),32);
    bufp->chgIData(oldp+1395,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                             >> 5U))),32);
    bufp->chgCData(oldp+1396,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgIData(oldp+1397,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->chgIData(oldp+1398,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                     & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))
                                    ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                                             ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                             : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff)))),32);
    bufp->chgBit(oldp+1399,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_hc11b4cfe__0))))));
    bufp->chgIData(oldp+1400,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x14U))]
                                : 0U)),32);
    bufp->chgIData(oldp+1401,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x19U))]
                                : 0U)),32);
    bufp->chgCData(oldp+1402,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgBit(oldp+1403,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->chgCData(oldp+1404,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)
                                      ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)
                                      : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          << 2U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                          >> 0x1eU))))),3);
    bufp->chgIData(oldp+1405,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->chgIData(oldp+1406,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->chgBit(oldp+1407,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff)
                                    : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       >> 0x1fU)))));
    bufp->chgBit(oldp+1408,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)
                                    : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                       >> 0x1fU)))));
    bufp->chgBit(oldp+1409,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
                                      >> 2U) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff) 
                                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next)))))));
    bufp->chgIData(oldp+1410,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)
                                ? 0x13U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                            ? 0U : vlSelf->__VdfgTmp_h0be19abe__0))),32);
    bufp->chgIData(oldp+1411,((((- (IData)((((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)) 
                                             & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req))) 
                                            & (vlSelf->__VdfgTmp_h0be19abe__0 
                                               >> 0x1fU)))) 
                                << 0x14U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)
                                                ? 0U
                                                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & (vlSelf->__VdfgTmp_h0be19abe__0 
                                                       >> 0xcU)))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)) 
                                                     << 0xbU) 
                                                    & (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)) 
                                                        << 0xbU) 
                                                       & (vlSelf->__VdfgTmp_h0be19abe__0 
                                                          >> 9U)))) 
                                                | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                                      ? 0U
                                                      : 
                                                     (0x3ffU 
                                                      & (vlSelf->__VdfgTmp_h0be19abe__0 
                                                         >> 0x15U)))) 
                                                   << 1U))))),32);
    bufp->chgBit(oldp+1412,((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x14U)) 
                              == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 0xfU))) 
                             & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                 >> 2U) & (0U != (0x1fU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                     >> 0x14U)))))));
    bufp->chgBit(oldp+1413,((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x19U)) 
                              == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 0xfU))) 
                             & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                 >> 2U) & (0U != (0x1fU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                     >> 0x19U)))))));
    bufp->chgBit(oldp+1414,(((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x14U)) 
                               == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0xfU))) 
                              & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                  >> 2U) & (0U != (0x1fU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      >> 0x14U))))) 
                             & ((IData)((0U != (0x802U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->chgBit(oldp+1415,(((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x19U)) 
                               == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0xfU))) 
                              & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                  >> 2U) & (0U != (0x1fU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      >> 0x19U))))) 
                             & ((IData)((0U != (0x3000402U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->chgBit(oldp+1416,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 3U)))
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu)))));
    bufp->chgCData(oldp+1417,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                    ? ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter))
                                        ? 0U : 3U) : 
                                   ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter))
                                     ? 2U : 3U)) : 
                               ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                 ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                     == (0xffffU & 
                                         ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                          >> 1U))) ? 2U
                                     : 1U) : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                & (8U 
                                                   != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))) 
                                               & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff)))
                                               ? 1U
                                               : 0U)))),2);
    bufp->chgBit(oldp+1418,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff));
    bufp->chgCData(oldp+1419,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_en)
                                ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                                    << 7U) | (0x7fU 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff) 
                                                 >> 1U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff))),8);
    bufp->chgCData(oldp+1420,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                    ? ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter))
                                        ? 0U : 3U) : 
                                   ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter))
                                     ? 2U : 3U)) : 
                               ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                 ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                     == (0xffffU & 
                                         ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                          >> 1U))) ? 2U
                                     : 1U) : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                & (8U 
                                                   != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))) 
                                               & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff)))
                                               ? 1U
                                               : 0U)))),2);
    bufp->chgBit(oldp+1421,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff));
    bufp->chgCData(oldp+1422,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_en)
                                ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                                    << 7U) | (0x7fU 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff) 
                                                 >> 1U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff))),8);
}

void Vpcore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_cleanup\n"); );
    // Init
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
