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
        bufp->chgBit(oldp+0,(vlSelf->pcore_tb__DOT__irq_ext));
        bufp->chgBit(oldp+1,(vlSelf->pcore_tb__DOT__irq_soft));
        bufp->chgBit(oldp+2,(vlSelf->pcore_tb__DOT__uart_rx));
        bufp->chgBit(oldp+3,(vlSelf->pcore_tb__DOT__spi_miso));
        bufp->chgWData(oldp+4,(vlSelf->pcore_tb__DOT__firmware),1024);
        bufp->chgWData(oldp+36,(vlSelf->pcore_tb__DOT__max_cycles),1024);
        bufp->chgIData(oldp+68,(vlSelf->pcore_tb__DOT__write_sig),32);
        bufp->chgCData(oldp+69,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[0]),8);
        bufp->chgCData(oldp+70,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[1]),8);
        bufp->chgCData(oldp+71,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[2]),8);
        bufp->chgCData(oldp+72,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[3]),8);
        bufp->chgCData(oldp+73,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[4]),8);
        bufp->chgCData(oldp+74,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[5]),8);
        bufp->chgCData(oldp+75,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[6]),8);
        bufp->chgCData(oldp+76,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[7]),8);
        bufp->chgCData(oldp+77,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[8]),8);
        bufp->chgCData(oldp+78,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[9]),8);
        bufp->chgCData(oldp+79,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[10]),8);
        bufp->chgCData(oldp+80,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[11]),8);
        bufp->chgCData(oldp+81,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[12]),8);
        bufp->chgCData(oldp+82,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[13]),8);
        bufp->chgCData(oldp+83,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[14]),8);
        bufp->chgCData(oldp+84,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[15]),8);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [7U]) | vlSelf->__Vm_traceActivity
                     [9U]))) {
        bufp->chgIData(oldp+85,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                  << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 4U))),32);
        bufp->chgIData(oldp+86,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                  << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                               >> 4U))),32);
        bufp->chgCData(oldp+87,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                       >> 2U))),2);
        bufp->chgBit(oldp+88,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+89,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
        bufp->chgIData(oldp+90,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                  << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 4U))),32);
        bufp->chgBit(oldp+91,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+92,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
        bufp->chgBit(oldp+93,((0x20U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+94,(((0x301000U < (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))) 
                               & (0x31ffffU >= (0x3fffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 4U))))));
        bufp->chgBit(oldp+95,(((0x300000U < (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))) 
                               & (0x300fffU >= (0x3fffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 4U))))));
        bufp->chgBit(oldp+96,((0x21U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+97,((0x22U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+98,((0x23U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+99,((0x24U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                  >> 0x14U)))));
        bufp->chgBit(oldp+100,((0x25U == (0x3fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 0x14U)))));
        bufp->chgBit(oldp+101,((0x26U == (0x3fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 0x14U)))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0xbU]))) {
        bufp->chgIData(oldp+102,(((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                >> 1U)))
                                   ? ((IData)((0U != 
                                               (6U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                       ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
                                                  >> 0x20U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output))
                                   : ((0U != (0x1ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU))))
                                       ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result
                                       : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result))),32);
        bufp->chgIData(oldp+103,(((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                   ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                               >> 0x14U))
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)),32);
        bufp->chgBit(oldp+104,((1U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 2U) | ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                  >> 1U) 
                                                 & ((0x800000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                     ? 
                                                    ((0x400000U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                      ? 
                                                     ((~ 
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                        >> 0x15U)) 
                                                      & (IData)(
                                                                (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                                 >> 0x20U)))
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                       ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                                       : 
                                                      (~ (IData)(
                                                                 (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                                  >> 0x20U)))))
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                       ? 
                                                      (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                                       : 
                                                      (0U 
                                                       != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                                      : 
                                                     ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                       >> 0x15U) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))))));
        bufp->chgBit(oldp+105,((1U & ((0x800000U & 
                                       vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                       ? ((0x400000U 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                           ? ((~ (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                  >> 0x15U)) 
                                              & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                         >> 0x20U)))
                                           : ((0x200000U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                               ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                               : (~ (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                             >> 0x20U)))))
                                       : ((0x400000U 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                           ? ((0x200000U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                               ? (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                               : (0U 
                                                  != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                           : ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               >> 0x15U) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))));
        bufp->chgBit(oldp+106,((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         >> 2U) & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+107,((IData)(((6U == (6U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                        & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                           >> 0x1fU)))));
        bufp->chgQData(oldp+108,((((QData)((IData)(
                                                   ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                     >> 2U) 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))),33);
        bufp->chgQData(oldp+110,((((QData)((IData)(
                                                   ((6U 
                                                     == 
                                                     (6U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))),33);
        bufp->chgIData(oldp+112,(((IData)((0U != (6U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                   ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
                                              >> 0x20U))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output))),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+113,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req)
                                            ? (1ULL 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                                                  [
                                                                  (0x3fffffU 
                                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                      >> 8U))])) 
                                                  << 1U))
                                            : 0ULL) 
                                          >> 1U))),32);
        bufp->chgBit(oldp+114,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req)
                                               ? (1ULL 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                                                     [
                                                                     (0x3fffffU 
                                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                         >> 8U))])) 
                                                     << 1U))
                                               : 0ULL)))));
        bufp->chgSData(oldp+115,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
                                              ? ((0x20U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                        >> 6U))
                                                     : 
                                                    ((0xff00U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                         >> 5U)) 
                                                     | (0xffU 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff) 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                           >> 6U)))
                                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)))))
                                              : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)))),16);
        bufp->chgCData(oldp+116,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+117,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+118,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)))),8);
        bufp->chgCData(oldp+119,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+120,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+121,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)))),8);
        bufp->chgCData(oldp+122,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+123,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+124,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)))),8);
        bufp->chgIData(oldp+125,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req)
                                   ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read)
                                            ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                           [(0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 8U))]
                                            : 0U))),32);
        bufp->chgIData(oldp+126,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                 [(0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 8U))]),32);
        bufp->chgCData(oldp+127,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             << 0x19U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 7U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
        bufp->chgCData(oldp+128,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             << 0x19U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 7U))
                                         : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                            >> 2U)))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+129,(((0x1ffe68U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write))));
        bufp->chgBit(oldp+130,(((0x1ffe6cU == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write))));
        bufp->chgIData(oldp+131,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                          >> 1U))),32);
        bufp->chgBit(oldp+132,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
        bufp->chgIData(oldp+133,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+134,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+135,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+136,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+137,((1U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
        bufp->chgBit(oldp+138,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel));
        bufp->chgBit(oldp+139,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
        bufp->chgBit(oldp+140,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
        bufp->chgBit(oldp+141,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
        bufp->chgBit(oldp+142,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
        bufp->chgBit(oldp+143,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel));
        bufp->chgBit(oldp+144,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel));
        bufp->chgBit(oldp+145,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel));
        bufp->chgBit(oldp+146,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel));
        bufp->chgBit(oldp+147,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel));
        bufp->chgBit(oldp+148,(vlSelf->pcore_tb__DOT__dut__DOT__store_busy));
        bufp->chgIData(oldp+149,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                          >> 1U))),32);
        bufp->chgBit(oldp+150,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus))));
        bufp->chgIData(oldp+151,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data),32);
        bufp->chgIData(oldp+152,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+153,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),16);
        bufp->chgBit(oldp+154,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req));
        bufp->chgBit(oldp+155,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req));
        bufp->chgQData(oldp+156,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next),64);
        bufp->chgQData(oldp+158,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next),64);
        bufp->chgBit(oldp+160,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag));
        bufp->chgBit(oldp+161,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag));
        bufp->chgBit(oldp+162,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
        bufp->chgBit(oldp+163,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
        bufp->chgBit(oldp+164,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
        bufp->chgBit(oldp+165,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                   | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                      | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel) 
                                         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel)))))));
        bufp->chgIData(oldp+166,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+167,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+168,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+169,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+170,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U])));
        bufp->chgIData(oldp+171,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+172,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+173,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+174,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+175,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U])));
        bufp->chgIData(oldp+176,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+177,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+178,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+179,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+180,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U])));
        bufp->chgIData(oldp+181,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+182,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+183,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+184,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+185,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])));
        bufp->chgBit(oldp+186,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data));
        bufp->chgCData(oldp+187,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+188,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data),32);
        bufp->chgIData(oldp+189,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+190,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req));
        bufp->chgBit(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req));
        bufp->chgBit(oldp+192,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data));
        bufp->chgBit(oldp+193,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+194,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+195,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+196,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next),8);
        bufp->chgCData(oldp+197,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+198,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+199,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data),32);
        bufp->chgIData(oldp+200,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+201,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req));
        bufp->chgBit(oldp+202,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req));
        bufp->chgBit(oldp+203,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data));
        bufp->chgBit(oldp+204,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+205,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+206,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+207,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next),8);
        bufp->chgCData(oldp+208,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+209,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+210,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data),32);
        bufp->chgIData(oldp+211,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+212,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req));
        bufp->chgBit(oldp+213,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req));
        bufp->chgBit(oldp+214,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data));
        bufp->chgBit(oldp+215,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+216,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+217,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+218,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next),8);
        bufp->chgCData(oldp+219,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+220,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+221,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data),32);
        bufp->chgIData(oldp+222,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req));
        bufp->chgBit(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req));
        bufp->chgIData(oldp+225,(((0x80U & ((IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                     >> 1U)) 
                                            << 7U)) 
                                  | ((0x40U & ((IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                        >> 2U)) 
                                               << 6U)) 
                                     | ((0x20U & ((IData)(
                                                          (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                           >> 3U)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                      >> 4U)) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                         >> 5U)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((IData)(
                                                             (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                              >> 6U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(
                                                                (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                                 >> 7U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                                  >> 8U))))))))))),32);
        bufp->chgBit(oldp+226,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req));
        bufp->chgBit(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__store_req));
        bufp->chgBit(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read));
        bufp->chgBit(oldp+229,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_modify));
        bufp->chgBit(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write));
        bufp->chgIData(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__write_data),32);
        bufp->chgIData(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
        bufp->chgIData(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U]),32);
        bufp->chgIData(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U]),32);
        bufp->chgIData(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]),32);
        bufp->chgCData(oldp+236,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                          >> 3U))),4);
        bufp->chgBit(oldp+237,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+238,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+239,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))));
        bufp->chgIData(oldp+240,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
        bufp->chgCData(oldp+241,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                           >> 3U))),5);
        bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                      >> 2U))));
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                      >> 1U))));
        bufp->chgBit(oldp+244,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd))));
        bufp->chgIData(oldp+245,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a),32);
        bufp->chgIData(oldp+246,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
        bufp->chgBit(oldp+247,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
        bufp->chgBit(oldp+248,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
        bufp->chgBit(oldp+249,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
        bufp->chgBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
        bufp->chgCData(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
        bufp->chgBit(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall));
        bufp->chgBit(oldp+253,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
        bufp->chgIData(oldp+254,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
        bufp->chgSData(oldp+255,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
        bufp->chgCData(oldp+256,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
        bufp->chgCData(oldp+257,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+258,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+259,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway))),2);
        bufp->chgCData(oldp+260,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+261,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
        bufp->chgCData(oldp+262,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
        bufp->chgCData(oldp+263,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
        bufp->chgCData(oldp+264,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
        bufp->chgCData(oldp+265,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
        bufp->chgCData(oldp+266,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
        bufp->chgCData(oldp+267,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
        bufp->chgCData(oldp+268,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+269,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
        bufp->chgCData(oldp+270,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
        bufp->chgIData(oldp+271,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))),24);
        bufp->chgBit(oldp+272,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+273,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+274,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
        bufp->chgCData(oldp+275,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
        bufp->chgCData(oldp+276,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
        bufp->chgCData(oldp+277,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
        bufp->chgCData(oldp+278,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
        bufp->chgCData(oldp+279,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+280,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
        bufp->chgCData(oldp+281,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                        >> 3U))),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+282,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+283,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
        bufp->chgBit(oldp+284,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next) 
                                      >> 1U))));
        bufp->chgBit(oldp+285,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next))));
        bufp->chgCData(oldp+286,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+287,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+288,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 9U))),3);
        bufp->chgCData(oldp+289,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 7U))),2);
        bufp->chgCData(oldp+290,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                          >> 3U))),4);
        bufp->chgBit(oldp+291,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 2U))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 1U))));
        bufp->chgBit(oldp+293,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
        bufp->chgIData(oldp+294,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
        bufp->chgIData(oldp+295,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
        bufp->chgIData(oldp+296,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
        bufp->chgIData(oldp+297,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
        bufp->chgIData(oldp+298,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
        bufp->chgIData(oldp+299,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
        bufp->chgSData(oldp+300,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+301,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+302,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+303,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+304,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+305,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
        bufp->chgCData(oldp+306,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+307,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+308,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 3U))));
        bufp->chgBit(oldp+309,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 2U))));
        bufp->chgBit(oldp+310,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 1U))));
        bufp->chgBit(oldp+311,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
        bufp->chgIData(oldp+312,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                      >> 3U))));
        bufp->chgBit(oldp+314,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                      >> 2U))));
        bufp->chgBit(oldp+315,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                      >> 1U))));
        bufp->chgBit(oldp+316,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))));
        bufp->chgBit(oldp+317,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                      >> 3U))));
        bufp->chgBit(oldp+318,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                      >> 2U))));
        bufp->chgBit(oldp+319,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                      >> 1U))));
        bufp->chgBit(oldp+320,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))));
        bufp->chgBit(oldp+321,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 8U))));
        bufp->chgBit(oldp+322,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 7U))));
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 6U))));
        bufp->chgBit(oldp+324,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 5U))));
        bufp->chgBit(oldp+325,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 4U))));
        bufp->chgBit(oldp+326,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 3U))));
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 2U))));
        bufp->chgBit(oldp+328,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 1U))));
        bufp->chgBit(oldp+329,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
        bufp->chgBit(oldp+330,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i));
        bufp->chgIData(oldp+331,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next),32);
        bufp->chgIData(oldp+332,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next),32);
        bufp->chgIData(oldp+333,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
        bufp->chgIData(oldp+334,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
        bufp->chgIData(oldp+335,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
        bufp->chgIData(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
        bufp->chgQData(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
        bufp->chgBit(oldp+339,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+341,((1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                >> 0x1fU)) 
                                       & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                              >> 0x1fU)) 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                             >> 0x1fU))) 
                                      | ((~ (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                     >> 0x1fU))) 
                                         & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                                >> 0x1fU)) 
                                            & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                               >> 0x1fU)))))));
        bufp->chgCData(oldp+342,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
        bufp->chgIData(oldp+343,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result),32);
        bufp->chgIData(oldp+344,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+345,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                 >> 0x20U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+346,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
        bufp->chgIData(oldp+347,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                 >> 0x20U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
        bufp->chgIData(oldp+348,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data),32);
        bufp->chgQData(oldp+349,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en),33);
        bufp->chgCData(oldp+351,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result),6);
        bufp->chgIData(oldp+352,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev),32);
        bufp->chgIData(oldp+353,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev),32);
        bufp->chgIData(oldp+354,(((0x1fU >= (0x1fU 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   ? ((IData)(1U) << 
                                      (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   : 0U)),32);
        bufp->chgIData(oldp+355,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1),32);
        bufp->chgIData(oldp+356,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2),32);
        bufp->chgIData(oldp+357,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result),32);
        bufp->chgIData(oldp+358,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result),32);
        bufp->chgQData(oldp+359,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output),64);
        bufp->chgCData(oldp+361,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
        bufp->chgBit(oldp+362,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+363,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
        bufp->chgBit(oldp+364,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next))));
        bufp->chgBit(oldp+365,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
        bufp->chgBit(oldp+366,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
        bufp->chgBit(oldp+367,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
        bufp->chgBit(oldp+368,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgIData(oldp+369,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+370,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+371,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+372,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+373,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U])));
        bufp->chgIData(oldp+374,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+375,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+376,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+377,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+378,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
        bufp->chgIData(oldp+379,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
        bufp->chgBit(oldp+380,((0x1bU == (0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                   >> 7U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+381,(vlSelf->pcore_tb__DOT__main_time),1024);
        bufp->chgIData(oldp+413,((vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0 
                                  & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io) 
                                       << 0x10U) | 
                                      (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io) 
                                        << 8U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io))) 
                                     & vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0))),24);
        bufp->chgCData(oldp+414,(vlSelf->pcore_tb__DOT__r_sg),8);
        bufp->chgCData(oldp+415,(vlSelf->pcore_tb__DOT__r_an),8);
        bufp->chgIData(oldp+416,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
        bufp->chgIData(oldp+417,(vlSelf->__VdfgTmp_h409023d6__0),32);
        bufp->chgIData(oldp+418,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)),32);
        bufp->chgIData(oldp+419,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+420,((1U & (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                        >> 7U) | ((
                                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                   >> 6U) 
                                                  | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                      >> 5U) 
                                                     | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                         >> 4U) 
                                                        | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                            >> 3U) 
                                                           | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                               >> 2U) 
                                                              | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                                  >> 1U) 
                                                                 | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff))))))))) 
                                      | (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                           >> 7U) | 
                                          ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                            >> 6U) 
                                           | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                               >> 5U) 
                                              | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                  >> 4U) 
                                                 | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                     >> 3U) 
                                                    | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                        >> 2U) 
                                                       | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                           >> 1U) 
                                                          | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff))))))))) 
                                         | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                             >> 7U) 
                                            | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                >> 6U) 
                                               | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                   >> 5U) 
                                                  | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                      >> 4U) 
                                                     | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                         >> 3U) 
                                                        | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                            >> 2U) 
                                                           | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                               >> 1U) 
                                                              | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff))))))))))))));
        bufp->chgBit(oldp+421,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff));
        bufp->chgBit(oldp+422,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgBit(oldp+423,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+424,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+425,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff))));
        bufp->chgIData(oldp+426,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+427,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
        bufp->chgCData(oldp+428,(vlSelf->pcore_tb__DOT__dut__DOT__w_sg),8);
        bufp->chgCData(oldp+429,(vlSelf->pcore_tb__DOT__dut__DOT__w_an),8);
        bufp->chgQData(oldp+430,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff),64);
        bufp->chgQData(oldp+432,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff),64);
        bufp->chgBit(oldp+434,((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)));
        bufp->chgBit(oldp+435,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                       >> 7U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                  >> 6U) 
                                                 | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                     >> 5U) 
                                                    | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                        >> 4U) 
                                                       | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                           >> 3U) 
                                                          | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                              >> 2U) 
                                                             | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff))))))))))));
        bufp->chgCData(oldp+436,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io),8);
        bufp->chgBit(oldp+437,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                       >> 7U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                  >> 6U) 
                                                 | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                     >> 5U) 
                                                    | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                        >> 4U) 
                                                       | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                           >> 3U) 
                                                          | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                              >> 2U) 
                                                             | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff))))))))))));
        bufp->chgCData(oldp+438,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io),8);
        bufp->chgBit(oldp+439,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                       >> 7U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                  >> 6U) 
                                                 | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                     >> 5U) 
                                                    | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                        >> 4U) 
                                                       | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                           >> 3U) 
                                                          | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                              >> 2U) 
                                                             | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff))))))))))));
        bufp->chgCData(oldp+440,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io),8);
        bufp->chgIData(oldp+441,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+442,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+443,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+444,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+445,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+446,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+447,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+448,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff))));
        bufp->chgSData(oldp+449,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff),16);
        bufp->chgSData(oldp+450,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff),16);
        bufp->chgCData(oldp+451,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+452,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+453,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+454,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+455,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff),8);
        bufp->chgCData(oldp+456,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+457,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+458,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+459,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+460,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff),8);
        bufp->chgCData(oldp+461,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+462,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+463,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+464,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+465,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff),8);
        bufp->chgIData(oldp+466,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_val),32);
        bufp->chgIData(oldp+467,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_cnt),32);
        bufp->chgCData(oldp+468,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_in),4);
        bufp->chgCData(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_digit),3);
        bufp->chgCData(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_init),8);
        bufp->chgCData(oldp+471,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load),8);
        bufp->chgCData(oldp+472,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__w_segments),8);
        bufp->chgIData(oldp+473,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+474,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgBit(oldp+475,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+476,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
        bufp->chgIData(oldp+477,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+478,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+479,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+480,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+481,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
        bufp->chgBit(oldp+482,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+483,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))));
        bufp->chgIData(oldp+484,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+485,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgIData(oldp+486,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgSData(oldp+487,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+488,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+489,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+490,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+491,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+492,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
        bufp->chgCData(oldp+493,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+494,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+495,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+496,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+497,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+498,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
        bufp->chgIData(oldp+499,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
        bufp->chgIData(oldp+500,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgBit(oldp+501,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
        bufp->chgBit(oldp+502,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
        bufp->chgBit(oldp+503,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
        bufp->chgBit(oldp+504,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
        bufp->chgBit(oldp+505,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
        bufp->chgBit(oldp+506,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
        bufp->chgBit(oldp+507,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
        bufp->chgBit(oldp+508,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
        bufp->chgBit(oldp+509,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
        bufp->chgBit(oldp+510,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
        bufp->chgBit(oldp+511,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
        bufp->chgBit(oldp+512,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
        bufp->chgBit(oldp+513,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
        bufp->chgBit(oldp+514,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
        bufp->chgBit(oldp+515,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
        bufp->chgBit(oldp+516,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
        bufp->chgBit(oldp+517,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 3U))));
        bufp->chgCData(oldp+518,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+519,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x19U))),5);
        bufp->chgIData(oldp+520,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+521,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x11U))),3);
        bufp->chgCData(oldp+522,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                            << 2U) 
                                           | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                              >> 0x1eU)))),7);
        bufp->chgCData(oldp+523,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 7U))),5);
        bufp->chgBit(oldp+524,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+525,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))));
        bufp->chgIData(oldp+526,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff),32);
        bufp->chgIData(oldp+527,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)),32);
        bufp->chgBit(oldp+528,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
        bufp->chgBit(oldp+529,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__busy_ff));
        bufp->chgIData(oldp+530,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__opr2_ff),32);
        bufp->chgIData(oldp+531,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_next),32);
        bufp->chgQData(oldp+532,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_ff),33);
        bufp->chgQData(oldp+534,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_next),33);
        bufp->chgQData(oldp+536,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff),33);
        bufp->chgCData(oldp+538,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__counter),5);
        bufp->chgCData(oldp+539,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
        bufp->chgBit(oldp+540,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
        bufp->chgBit(oldp+541,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+542,(((IData)(4U) + vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)),32);
        bufp->chgBit(oldp+543,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
        bufp->chgBit(oldp+544,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
        bufp->chgBit(oldp+545,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
        bufp->chgCData(oldp+546,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
        bufp->chgCData(oldp+547,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
        bufp->chgCData(oldp+548,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
        bufp->chgCData(oldp+549,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+550,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
        bufp->chgCData(oldp+551,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+552,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
        bufp->chgCData(oldp+553,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+554,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))),2);
        bufp->chgCData(oldp+555,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+556,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+557,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+558,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+559,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+560,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+561,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+562,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+563,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+564,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
        bufp->chgCData(oldp+565,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+566,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+567,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 1U))),3);
        bufp->chgCData(oldp+568,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgQData(oldp+569,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))),33);
        bufp->chgCData(oldp+571,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x1aU))),3);
        bufp->chgCData(oldp+572,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+573,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+574,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x13U))),2);
        bufp->chgCData(oldp+575,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+576,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+577,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+578,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+579,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+580,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 8U))));
        bufp->chgCData(oldp+581,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 5U))),3);
        bufp->chgBit(oldp+582,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+583,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+584,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+585,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+586,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])));
        bufp->chgCData(oldp+587,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 5U))),3);
        bufp->chgCData(oldp+588,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x1aU))),3);
        bufp->chgCData(oldp+589,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+590,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                          >> 0xfU))),4);
        bufp->chgBit(oldp+591,((1U & ((0U != (3U & 
                                              (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               >> 0x13U)))
                                       ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                          >> 1U) : 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 3U)))));
        bufp->chgBit(oldp+592,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+593,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 1U))));
        bufp->chgCData(oldp+594,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgBit(oldp+595,((IData)((0U != (0x802U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
        bufp->chgBit(oldp+596,((IData)((0U != (0x3000402U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
        bufp->chgCData(oldp+597,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+598,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x15U))),3);
        bufp->chgQData(oldp+599,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))),33);
        bufp->chgBit(oldp+601,((0U != (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+602,((8ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))));
        bufp->chgBit(oldp+603,((9ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))));
        bufp->chgCData(oldp+604,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 1U))),3);
        bufp->chgBit(oldp+605,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+606,((IData)((6U == (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
        bufp->chgBit(oldp+607,((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+608,((IData)((0U != (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+609,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
        bufp->chgIData(oldp+610,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
        bufp->chgIData(oldp+611,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
        bufp->chgIData(oldp+612,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
        bufp->chgIData(oldp+613,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
        bufp->chgIData(oldp+614,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
        bufp->chgIData(oldp+615,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
        bufp->chgIData(oldp+616,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
        bufp->chgIData(oldp+617,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
        bufp->chgIData(oldp+618,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
        bufp->chgIData(oldp+619,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
        bufp->chgIData(oldp+620,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
        bufp->chgIData(oldp+621,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
        bufp->chgIData(oldp+622,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
        bufp->chgIData(oldp+623,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
        bufp->chgIData(oldp+624,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
        bufp->chgIData(oldp+625,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
        bufp->chgIData(oldp+626,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
        bufp->chgIData(oldp+627,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
        bufp->chgIData(oldp+628,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
        bufp->chgIData(oldp+629,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
        bufp->chgIData(oldp+630,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
        bufp->chgIData(oldp+631,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
        bufp->chgIData(oldp+632,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
        bufp->chgIData(oldp+633,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
        bufp->chgIData(oldp+634,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
        bufp->chgIData(oldp+635,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
        bufp->chgIData(oldp+636,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
        bufp->chgIData(oldp+637,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
        bufp->chgIData(oldp+638,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
        bufp->chgIData(oldp+639,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
        bufp->chgIData(oldp+640,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+641,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state),2);
        bufp->chgBit(oldp+642,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgCData(oldp+643,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+644,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
        bufp->chgBit(oldp+645,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
        bufp->chgIData(oldp+646,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
        bufp->chgIData(oldp+647,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
        bufp->chgBit(oldp+648,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgBit(oldp+649,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
        bufp->chgCData(oldp+650,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
        bufp->chgIData(oldp+651,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
        bufp->chgIData(oldp+652,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
        bufp->chgIData(oldp+653,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
        bufp->chgIData(oldp+654,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
        bufp->chgIData(oldp+655,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
        bufp->chgIData(oldp+656,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                  >> 4U)),28);
        bufp->chgBit(oldp+657,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+658,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+659,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+660,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
        bufp->chgBit(oldp+661,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                >> 0x1fU)));
        bufp->chgCData(oldp+662,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+663,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x16U))));
        bufp->chgBit(oldp+664,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x15U))));
        bufp->chgBit(oldp+665,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x14U))));
        bufp->chgBit(oldp+666,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+667,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+668,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x11U))));
        bufp->chgCData(oldp+669,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+670,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+671,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+672,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 9U))),2);
        bufp->chgBit(oldp+673,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+674,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+675,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+676,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+677,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+678,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+679,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+680,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+681,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
        bufp->chgSData(oldp+682,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+683,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+684,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x11U))));
        bufp->chgBit(oldp+685,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+686,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+687,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+688,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+689,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+690,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+691,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+692,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+693,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+694,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+695,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+696,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+697,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+698,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
        bufp->chgIData(oldp+699,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                                  >> 2U)),30);
        bufp->chgCData(oldp+700,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
        bufp->chgIData(oldp+701,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
        bufp->chgIData(oldp+702,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
        bufp->chgIData(oldp+703,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
        bufp->chgIData(oldp+704,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
        bufp->chgSData(oldp+705,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+706,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+707,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x11U))));
        bufp->chgBit(oldp+708,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+709,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+710,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+711,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+712,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+713,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+714,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+715,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+716,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+717,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+718,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+719,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+720,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+721,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
        bufp->chgCData(oldp+722,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+723,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
        bufp->chgBit(oldp+724,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req));
        bufp->chgBit(oldp+725,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req));
        bufp->chgBit(oldp+726,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
        bufp->chgBit(oldp+727,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
        bufp->chgBit(oldp+728,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
        bufp->chgBit(oldp+729,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff));
        bufp->chgBit(oldp+730,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff));
        bufp->chgBit(oldp+731,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff));
        bufp->chgBit(oldp+732,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
        bufp->chgBit(oldp+733,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
        bufp->chgCData(oldp+734,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff),3);
        bufp->chgIData(oldp+735,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff),32);
        bufp->chgIData(oldp+736,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff),32);
        bufp->chgBit(oldp+737,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
        bufp->chgBit(oldp+738,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
        bufp->chgBit(oldp+739,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
        bufp->chgBit(oldp+740,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
        bufp->chgBit(oldp+741,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_ff));
        bufp->chgBit(oldp+742,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+743,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                          >> 7U))),32);
        bufp->chgCData(oldp+744,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                                >> 5U)))),2);
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 4U)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 3U)))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 2U)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 1U)))));
        bufp->chgBit(oldp+749,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr))));
        bufp->chgCData(oldp+750,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 9U))),3);
        bufp->chgCData(oldp+751,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 7U))),2);
        bufp->chgCData(oldp+752,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+753,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+754,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 9U))),3);
        bufp->chgCData(oldp+755,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 7U))),2);
        bufp->chgCData(oldp+756,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 3U))),4);
        bufp->chgBit(oldp+757,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+758,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+759,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
        bufp->chgCData(oldp+760,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 3U))),4);
        bufp->chgBit(oldp+761,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))));
        bufp->chgBit(oldp+762,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))));
        bufp->chgBit(oldp+763,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))));
        bufp->chgBit(oldp+764,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
        bufp->chgCData(oldp+765,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
        bufp->chgBit(oldp+766,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
        bufp->chgCData(oldp+767,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 7U))),2);
        bufp->chgBit(oldp+768,((IData)((0U != (0xf80U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
        bufp->chgBit(oldp+769,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req));
        bufp->chgBit(oldp+770,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+771,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+772,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+773,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+774,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))));
        bufp->chgBit(oldp+775,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+776,(((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 3U)))
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                                 : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                 >> 7U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+777,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+778,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+779,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+780,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+781,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+782,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
        bufp->chgIData(oldp+783,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0),32);
        bufp->chgBit(oldp+784,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
        bufp->chgBit(oldp+785,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
        bufp->chgBit(oldp+786,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+787,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
        bufp->chgBit(oldp+788,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+789,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+790,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+791,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+792,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+793,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
        bufp->chgBit(oldp+794,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
        bufp->chgIData(oldp+795,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
        bufp->chgIData(oldp+796,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
        bufp->chgIData(oldp+797,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
        bufp->chgIData(oldp+798,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
        bufp->chgIData(oldp+799,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
        bufp->chgIData(oldp+800,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                  >> 4U)),28);
        bufp->chgBit(oldp+801,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                      >> 3U))));
        bufp->chgBit(oldp+802,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                      >> 2U))));
        bufp->chgBit(oldp+803,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                      >> 1U))));
        bufp->chgBit(oldp+804,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
        bufp->chgBit(oldp+805,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                >> 0x1fU)));
        bufp->chgCData(oldp+806,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+807,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x16U))));
        bufp->chgBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x15U))));
        bufp->chgBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x14U))));
        bufp->chgBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x13U))));
        bufp->chgBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x12U))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x11U))));
        bufp->chgCData(oldp+813,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+814,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+815,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+816,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 9U))),2);
        bufp->chgBit(oldp+817,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 8U))));
        bufp->chgBit(oldp+818,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 7U))));
        bufp->chgBit(oldp+819,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 6U))));
        bufp->chgBit(oldp+820,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 5U))));
        bufp->chgBit(oldp+821,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 4U))));
        bufp->chgBit(oldp+822,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 3U))));
        bufp->chgBit(oldp+823,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 2U))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 1U))));
        bufp->chgBit(oldp+825,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
        bufp->chgSData(oldp+826,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+827,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0x12U))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0x11U))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0x10U))));
        bufp->chgCData(oldp+830,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+831,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0xbU))));
        bufp->chgBit(oldp+832,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0xaU))));
        bufp->chgBit(oldp+833,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 9U))));
        bufp->chgBit(oldp+834,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 8U))));
        bufp->chgBit(oldp+835,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 7U))));
        bufp->chgBit(oldp+836,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 6U))));
        bufp->chgBit(oldp+837,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 5U))));
        bufp->chgBit(oldp+838,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 4U))));
        bufp->chgBit(oldp+839,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 3U))));
        bufp->chgBit(oldp+840,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 2U))));
        bufp->chgBit(oldp+841,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 1U))));
        bufp->chgBit(oldp+842,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
        bufp->chgIData(oldp+843,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                                  >> 2U)),30);
        bufp->chgCData(oldp+844,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
        bufp->chgIData(oldp+845,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
        bufp->chgIData(oldp+846,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
        bufp->chgSData(oldp+847,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+848,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0x12U))));
        bufp->chgBit(oldp+849,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0x11U))));
        bufp->chgBit(oldp+850,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0x10U))));
        bufp->chgCData(oldp+851,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+852,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0xbU))));
        bufp->chgBit(oldp+853,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0xaU))));
        bufp->chgBit(oldp+854,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 9U))));
        bufp->chgBit(oldp+855,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 8U))));
        bufp->chgBit(oldp+856,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 7U))));
        bufp->chgBit(oldp+857,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 6U))));
        bufp->chgBit(oldp+858,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 5U))));
        bufp->chgBit(oldp+859,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 4U))));
        bufp->chgBit(oldp+860,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 3U))));
        bufp->chgBit(oldp+861,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 2U))));
        bufp->chgBit(oldp+862,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 1U))));
        bufp->chgBit(oldp+863,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
        bufp->chgCData(oldp+864,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
        bufp->chgCData(oldp+865,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),5);
        bufp->chgIData(oldp+866,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
        bufp->chgBit(oldp+867,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
        bufp->chgBit(oldp+868,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
        bufp->chgBit(oldp+869,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
        bufp->chgBit(oldp+870,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
        bufp->chgBit(oldp+871,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
        bufp->chgBit(oldp+872,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+873,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
        bufp->chgBit(oldp+874,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
        bufp->chgBit(oldp+875,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
        bufp->chgBit(oldp+876,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
        bufp->chgBit(oldp+877,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
        bufp->chgBit(oldp+878,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
        bufp->chgBit(oldp+879,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
        bufp->chgBit(oldp+880,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
        bufp->chgBit(oldp+881,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
        bufp->chgBit(oldp+882,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next));
        bufp->chgIData(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
        bufp->chgBit(oldp+884,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req));
        bufp->chgBit(oldp+885,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+886,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+887,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+888,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+889,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+890,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+891,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+892,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+893,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgCData(oldp+894,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0xcU))),5);
        bufp->chgIData(oldp+895,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                >> 5U))),32);
        bufp->chgSData(oldp+896,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                             << 7U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                               >> 0x19U)))),12);
        bufp->chgIData(oldp+897,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+898,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+899,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+900,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgCData(oldp+901,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+902,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+903,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+904,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+905,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+906,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
        bufp->chgCData(oldp+907,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+908,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x19U))),5);
        bufp->chgBit(oldp+909,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
        bufp->chgCData(oldp+910,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+911,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x19U))),5);
        bufp->chgCData(oldp+912,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0xcU))),5);
        bufp->chgBit(oldp+913,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+914,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 0x19U)))));
        bufp->chgBit(oldp+915,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard));
        bufp->chgBit(oldp+916,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard));
    }
    bufp->chgBit(oldp+917,(vlSelf->clk));
    bufp->chgBit(oldp+918,(vlSelf->reset));
    bufp->chgCData(oldp+919,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                               ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__store_req)
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                                  ? 2U
                                                  : 0U))),2);
    bufp->chgIData(oldp+920,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 3U)))
                               ? (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)),32);
    bufp->chgIData(oldp+921,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                               << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                            >> 5U))),32);
    bufp->chgIData(oldp+922,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                               << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                            >> 5U))),32);
    bufp->chgIData(oldp+923,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                               << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                            >> 5U))),32);
    bufp->chgCData(oldp+924,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgCData(oldp+925,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgIData(oldp+926,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->chgIData(oldp+927,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                               : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_ileg_inst_exc_req)
                                   ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                       << 0x1bU) | 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                       >> 5U)) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_lsu_pf_exc_req)
                                                   ? 
                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                                   : 
                                                  ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_i_pf_exc_req)
                                                    ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                                    : 
                                                   (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_break_exc_req) 
                                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                                                      ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                                      : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff))))))),32);
    bufp->chgBit(oldp+928,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                            | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h8a01cdb0__0))))));
    bufp->chgIData(oldp+929,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x14U)))
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                              [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                         >> 0x14U))]
                               : 0U)),32);
    bufp->chgIData(oldp+930,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x19U)))
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                              [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                         >> 0x19U))]
                               : 0U)),32);
    bufp->chgCData(oldp+931,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgBit(oldp+932,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->chgCData(oldp+933,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)
                                     : ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU))))),3);
    bufp->chgIData(oldp+934,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                               ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                   >> 0x1fU) ? ((IData)(1U) 
                                                + (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->chgIData(oldp+935,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                               ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                   >> 0x1fU) ? ((IData)(1U) 
                                                + (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->chgBit(oldp+936,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff)
                                   : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+937,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)
                                   : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+938,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
                                     >> 2U) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff) 
                                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next)))))));
    bufp->chgBit(oldp+939,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
                            | (IData)(vlSelf->__VdfgTmp_hb736675d__0))));
    bufp->chgIData(oldp+940,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                               ? 0x13U : vlSelf->__VdfgTmp_h409023d6__0)),32);
    bufp->chgIData(oldp+941,((((- (IData)(((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)) 
                                           & (vlSelf->__VdfgTmp_h409023d6__0 
                                              >> 0x1fU)))) 
                               << 0x14U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                                               ? 0U
                                               : (0xffU 
                                                  & (vlSelf->__VdfgTmp_h409023d6__0 
                                                     >> 0xcU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)) 
                                                    << 0xbU) 
                                                   & (vlSelf->__VdfgTmp_h409023d6__0 
                                                      >> 9U))) 
                                               | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & (vlSelf->__VdfgTmp_h409023d6__0 
                                                       >> 0x15U))) 
                                                  << 1U))))),32);
    bufp->chgBit(oldp+942,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
                            & ((IData)((0U != (0x802U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->chgBit(oldp+943,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                            & ((IData)((0U != (0x3000402U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->chgBit(oldp+944,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                  >> 3U)))
                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
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
}
