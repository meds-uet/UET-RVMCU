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
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0xaU]))) {
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
        bufp->chgBit(oldp+94,(((0x101000U < (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))) 
                               & (0x11ffffU >= (0x3fffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                   >> 4U))))));
        bufp->chgBit(oldp+95,(((0x100000U < (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))) 
                               & (0x100fffU >= (0x3fffffU 
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
                      [9U]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
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
        bufp->chgCData(oldp+113,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+114,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+115,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)))),8);
        bufp->chgCData(oldp+116,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+117,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+118,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)))),8);
        bufp->chgCData(oldp+119,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)))),8);
        bufp->chgCData(oldp+120,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)))),8);
        bufp->chgCData(oldp+121,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                  >> 6U))
                                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)))),8);
        bufp->chgIData(oldp+122,(((0x3fffffeU >= (0x3ffffffU 
                                                  & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                      << 0x18U) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                        >> 8U))))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                  [(0x3ffffffU & ((
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 8U)))]
                                   : 0U)),32);
        bufp->chgCData(oldp+123,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             << 0x19U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 7U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
        bufp->chgCData(oldp+124,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             << 0x19U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 7U))
                                         : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                            >> 2U)))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+125,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                          >> 1U))),32);
        bufp->chgBit(oldp+126,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
        bufp->chgIData(oldp+127,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U]),32);
        bufp->chgIData(oldp+128,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U]),32);
        bufp->chgIData(oldp+129,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+130,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+131,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+132,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+133,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+134,((1U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
        bufp->chgIData(oldp+135,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data),32);
        bufp->chgIData(oldp+136,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))),32);
        bufp->chgSData(oldp+137,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),16);
        bufp->chgBit(oldp+138,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req));
        bufp->chgBit(oldp+139,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req));
        bufp->chgQData(oldp+140,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next),64);
        bufp->chgQData(oldp+142,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next),64);
        bufp->chgBit(oldp+144,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag));
        bufp->chgBit(oldp+145,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag));
        bufp->chgBit(oldp+146,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
        bufp->chgBit(oldp+147,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
        bufp->chgBit(oldp+148,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
        bufp->chgIData(oldp+149,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+150,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+151,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+152,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+153,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U])));
        bufp->chgIData(oldp+154,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+155,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+156,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+157,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+158,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U])));
        bufp->chgIData(oldp+159,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+160,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+161,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+162,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+163,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U])));
        bufp->chgBit(oldp+164,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data));
        bufp->chgBit(oldp+165,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+166,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+167,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+168,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next),8);
        bufp->chgCData(oldp+169,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+170,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+171,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data),32);
        bufp->chgIData(oldp+172,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+173,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req));
        bufp->chgBit(oldp+174,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req));
        bufp->chgBit(oldp+175,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data));
        bufp->chgBit(oldp+176,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+177,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+178,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+179,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next),8);
        bufp->chgCData(oldp+180,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+181,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+182,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data),32);
        bufp->chgIData(oldp+183,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+184,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req));
        bufp->chgBit(oldp+185,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req));
        bufp->chgBit(oldp+186,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data));
        bufp->chgBit(oldp+187,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir));
        bufp->chgBit(oldp+188,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie));
        bufp->chgBit(oldp+189,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl));
        bufp->chgCData(oldp+190,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next),8);
        bufp->chgCData(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next),8);
        bufp->chgCData(oldp+192,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+193,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data),32);
        bufp->chgIData(oldp+194,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+195,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req));
        bufp->chgBit(oldp+196,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req));
        bufp->chgIData(oldp+197,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__write_data),32);
        bufp->chgIData(oldp+198,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
        bufp->chgCData(oldp+199,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                          >> 3U))),4);
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+202,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))));
        bufp->chgCData(oldp+203,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                           >> 3U))),5);
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                      >> 2U))));
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                      >> 1U))));
        bufp->chgBit(oldp+206,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd))));
        bufp->chgIData(oldp+207,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a),32);
        bufp->chgIData(oldp+208,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
        bufp->chgBit(oldp+209,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
        bufp->chgBit(oldp+210,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
        bufp->chgBit(oldp+211,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
        bufp->chgBit(oldp+212,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
        bufp->chgCData(oldp+213,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
        bufp->chgBit(oldp+214,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall));
        bufp->chgBit(oldp+215,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
        bufp->chgSData(oldp+216,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
        bufp->chgCData(oldp+217,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
        bufp->chgCData(oldp+218,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+219,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+220,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway))),2);
        bufp->chgCData(oldp+221,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+222,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
        bufp->chgCData(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
        bufp->chgCData(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
        bufp->chgCData(oldp+225,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
        bufp->chgCData(oldp+226,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
        bufp->chgCData(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
        bufp->chgCData(oldp+228,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
        bufp->chgCData(oldp+229,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
        bufp->chgCData(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
        bufp->chgIData(oldp+232,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))),24);
        bufp->chgBit(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
        bufp->chgCData(oldp+236,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
        bufp->chgCData(oldp+237,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
        bufp->chgCData(oldp+238,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
        bufp->chgCData(oldp+239,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
        bufp->chgCData(oldp+240,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+241,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
        bufp->chgCData(oldp+242,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                        >> 3U))),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+243,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel));
        bufp->chgIData(oldp+244,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+245,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+246,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+247,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+248,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])));
        bufp->chgBit(oldp+249,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data));
        bufp->chgCData(oldp+250,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U))),8);
        bufp->chgIData(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data),32);
        bufp->chgIData(oldp+252,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+253,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req));
        bufp->chgBit(oldp+254,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+255,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+256,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
        bufp->chgBit(oldp+257,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next) 
                                      >> 1U))));
        bufp->chgBit(oldp+258,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next))));
        bufp->chgCData(oldp+259,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+260,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+261,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 9U))),3);
        bufp->chgCData(oldp+262,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 7U))),2);
        bufp->chgCData(oldp+263,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                          >> 3U))),4);
        bufp->chgBit(oldp+264,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 2U))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 1U))));
        bufp->chgBit(oldp+266,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
        bufp->chgIData(oldp+267,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
        bufp->chgIData(oldp+268,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
        bufp->chgIData(oldp+269,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
        bufp->chgIData(oldp+270,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
        bufp->chgIData(oldp+271,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
        bufp->chgIData(oldp+272,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
        bufp->chgSData(oldp+273,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+274,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+275,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+276,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+277,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+278,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
        bufp->chgCData(oldp+279,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+280,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+281,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 3U))));
        bufp->chgBit(oldp+282,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 2U))));
        bufp->chgBit(oldp+283,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 1U))));
        bufp->chgBit(oldp+284,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
        bufp->chgIData(oldp+285,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
        bufp->chgBit(oldp+286,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                      >> 3U))));
        bufp->chgBit(oldp+287,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                      >> 2U))));
        bufp->chgBit(oldp+288,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                      >> 1U))));
        bufp->chgBit(oldp+289,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))));
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                      >> 3U))));
        bufp->chgBit(oldp+291,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                      >> 2U))));
        bufp->chgBit(oldp+292,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                      >> 1U))));
        bufp->chgBit(oldp+293,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))));
        bufp->chgBit(oldp+294,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 8U))));
        bufp->chgBit(oldp+295,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 7U))));
        bufp->chgBit(oldp+296,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 6U))));
        bufp->chgBit(oldp+297,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 5U))));
        bufp->chgBit(oldp+298,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 4U))));
        bufp->chgBit(oldp+299,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 3U))));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 2U))));
        bufp->chgBit(oldp+301,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                      >> 1U))));
        bufp->chgBit(oldp+302,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
        bufp->chgIData(oldp+303,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next),32);
        bufp->chgIData(oldp+304,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next),32);
        bufp->chgIData(oldp+305,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
        bufp->chgIData(oldp+306,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
        bufp->chgIData(oldp+307,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
        bufp->chgIData(oldp+308,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
        bufp->chgQData(oldp+309,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
        bufp->chgBit(oldp+311,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
        bufp->chgBit(oldp+312,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+313,((1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
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
        bufp->chgCData(oldp+314,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
        bufp->chgIData(oldp+315,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result),32);
        bufp->chgIData(oldp+316,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+317,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                 >> 0x20U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+318,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
        bufp->chgIData(oldp+319,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                 >> 0x20U)))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
        bufp->chgIData(oldp+320,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data),32);
        bufp->chgQData(oldp+321,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en),33);
        bufp->chgCData(oldp+323,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result),6);
        bufp->chgIData(oldp+324,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev),32);
        bufp->chgIData(oldp+325,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev),32);
        bufp->chgIData(oldp+326,(((0x1fU >= (0x1fU 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   ? ((IData)(1U) << 
                                      (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   : 0U)),32);
        bufp->chgIData(oldp+327,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1),32);
        bufp->chgIData(oldp+328,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2),32);
        bufp->chgIData(oldp+329,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result),32);
        bufp->chgIData(oldp+330,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result),32);
        bufp->chgQData(oldp+331,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output),64);
        bufp->chgCData(oldp+333,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
        bufp->chgBit(oldp+334,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+335,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
        bufp->chgBit(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
        bufp->chgBit(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+338,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+339,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+340,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+341,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+342,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U])));
        bufp->chgIData(oldp+343,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+344,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+345,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+346,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+347,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
        bufp->chgIData(oldp+348,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
        bufp->chgBit(oldp+349,((0x1bU == (0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                   >> 7U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+350,(vlSelf->pcore_tb__DOT__main_time),1024);
        bufp->chgIData(oldp+382,((vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0 
                                  & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io) 
                                       << 0x10U) | 
                                      (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io) 
                                        << 8U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io))) 
                                     & vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0))),24);
        bufp->chgCData(oldp+383,(vlSelf->pcore_tb__DOT__r_sg),8);
        bufp->chgCData(oldp+384,(vlSelf->pcore_tb__DOT__r_an),8);
        bufp->chgIData(oldp+385,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
        bufp->chgIData(oldp+386,(vlSelf->__VdfgTmp_h72333958__0),32);
        bufp->chgIData(oldp+387,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)),32);
        bufp->chgIData(oldp+388,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+389,((1U & (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
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
        bufp->chgBit(oldp+390,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff));
        bufp->chgBit(oldp+391,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgBit(oldp+392,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+393,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+394,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff))));
        bufp->chgIData(oldp+395,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+396,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
        bufp->chgCData(oldp+397,(vlSelf->pcore_tb__DOT__dut__DOT__w_sg),8);
        bufp->chgCData(oldp+398,(vlSelf->pcore_tb__DOT__dut__DOT__w_an),8);
        bufp->chgQData(oldp+399,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff),64);
        bufp->chgQData(oldp+401,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff),64);
        bufp->chgBit(oldp+403,((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)));
        bufp->chgBit(oldp+404,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
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
        bufp->chgCData(oldp+405,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io),8);
        bufp->chgBit(oldp+406,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
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
        bufp->chgCData(oldp+407,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io),8);
        bufp->chgBit(oldp+408,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
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
        bufp->chgCData(oldp+409,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io),8);
        bufp->chgIData(oldp+410,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+411,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+412,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+413,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+414,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+415,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff))));
        bufp->chgIData(oldp+416,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+417,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff))));
        bufp->chgSData(oldp+418,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff),16);
        bufp->chgSData(oldp+419,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff),16);
        bufp->chgCData(oldp+420,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+421,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+422,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+423,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+424,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff),8);
        bufp->chgCData(oldp+425,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+426,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+427,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+428,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+429,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff),8);
        bufp->chgCData(oldp+430,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff),8);
        bufp->chgCData(oldp+431,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff),8);
        bufp->chgCData(oldp+432,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff),8);
        bufp->chgCData(oldp+433,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff),8);
        bufp->chgCData(oldp+434,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff),8);
        bufp->chgIData(oldp+435,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_val),32);
        bufp->chgIData(oldp+436,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_cnt),32);
        bufp->chgCData(oldp+437,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_in),4);
        bufp->chgCData(oldp+438,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_digit),3);
        bufp->chgCData(oldp+439,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_init),8);
        bufp->chgCData(oldp+440,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load),8);
        bufp->chgCData(oldp+441,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__w_segments),8);
        bufp->chgIData(oldp+442,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+443,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgBit(oldp+444,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+445,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
        bufp->chgIData(oldp+446,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+447,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+448,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+449,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+450,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
        bufp->chgBit(oldp+451,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+452,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))));
        bufp->chgIData(oldp+453,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+454,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgIData(oldp+455,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgSData(oldp+456,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+457,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+458,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+459,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+460,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+461,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
        bufp->chgCData(oldp+462,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+463,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+464,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+466,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+467,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
        bufp->chgIData(oldp+468,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
        bufp->chgIData(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgBit(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
        bufp->chgBit(oldp+471,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
        bufp->chgBit(oldp+472,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
        bufp->chgBit(oldp+473,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
        bufp->chgBit(oldp+474,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
        bufp->chgBit(oldp+475,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
        bufp->chgBit(oldp+476,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
        bufp->chgBit(oldp+477,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
        bufp->chgBit(oldp+478,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
        bufp->chgBit(oldp+479,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
        bufp->chgBit(oldp+480,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
        bufp->chgBit(oldp+481,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
        bufp->chgBit(oldp+482,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
        bufp->chgBit(oldp+483,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
        bufp->chgBit(oldp+484,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
        bufp->chgBit(oldp+485,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
        bufp->chgBit(oldp+486,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 3U))));
        bufp->chgCData(oldp+487,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+488,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x19U))),5);
        bufp->chgIData(oldp+489,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+490,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x11U))),3);
        bufp->chgCData(oldp+491,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                            << 2U) 
                                           | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                              >> 0x1eU)))),7);
        bufp->chgCData(oldp+492,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 7U))),5);
        bufp->chgBit(oldp+493,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+494,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))));
        bufp->chgIData(oldp+495,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff),32);
        bufp->chgIData(oldp+496,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)),32);
        bufp->chgBit(oldp+497,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
        bufp->chgBit(oldp+498,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__busy_ff));
        bufp->chgIData(oldp+499,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__opr2_ff),32);
        bufp->chgIData(oldp+500,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_next),32);
        bufp->chgQData(oldp+501,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_ff),33);
        bufp->chgQData(oldp+503,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_next),33);
        bufp->chgQData(oldp+505,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff),33);
        bufp->chgCData(oldp+507,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__counter),5);
        bufp->chgCData(oldp+508,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
        bufp->chgBit(oldp+509,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
        bufp->chgBit(oldp+510,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+511,(((IData)(4U) + vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)),32);
        bufp->chgBit(oldp+512,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
        bufp->chgBit(oldp+513,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
        bufp->chgBit(oldp+514,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
        bufp->chgCData(oldp+515,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
        bufp->chgCData(oldp+516,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
        bufp->chgCData(oldp+517,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
        bufp->chgCData(oldp+518,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+519,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
        bufp->chgCData(oldp+520,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+521,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
        bufp->chgCData(oldp+522,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+523,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))),2);
        bufp->chgCData(oldp+524,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+525,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+526,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+527,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+528,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+529,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+530,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+531,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+532,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+533,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
        bufp->chgCData(oldp+534,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+535,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+536,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 1U))),3);
        bufp->chgCData(oldp+537,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgQData(oldp+538,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))),33);
        bufp->chgCData(oldp+540,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x1aU))),3);
        bufp->chgCData(oldp+541,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+542,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x15U))),3);
        bufp->chgCData(oldp+543,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x13U))),2);
        bufp->chgCData(oldp+544,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+545,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+546,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+547,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+548,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+549,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 8U))));
        bufp->chgCData(oldp+550,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 5U))),3);
        bufp->chgBit(oldp+551,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+552,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+553,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+554,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+555,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])));
        bufp->chgCData(oldp+556,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 5U))),3);
        bufp->chgCData(oldp+557,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x1aU))),3);
        bufp->chgCData(oldp+558,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+559,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                          >> 0xfU))),4);
        bufp->chgBit(oldp+560,((1U & ((0U != (3U & 
                                              (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               >> 0x13U)))
                                       ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                          >> 1U) : 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 3U)))));
        bufp->chgBit(oldp+561,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+562,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                      >> 1U))));
        bufp->chgCData(oldp+563,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU)))),3);
        bufp->chgBit(oldp+564,((IData)((0U != (0x802U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
        bufp->chgBit(oldp+565,((IData)((0U != (0x3000402U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
        bufp->chgCData(oldp+566,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+567,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        >> 0x15U))),3);
        bufp->chgQData(oldp+568,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))),33);
        bufp->chgBit(oldp+570,((0U != (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+571,((8ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))));
        bufp->chgBit(oldp+572,((9ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))));
        bufp->chgCData(oldp+573,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                        >> 1U))),3);
        bufp->chgBit(oldp+574,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+575,((IData)((6U == (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
        bufp->chgBit(oldp+576,((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+577,((IData)((0U != (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+578,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
        bufp->chgIData(oldp+579,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
        bufp->chgIData(oldp+580,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
        bufp->chgIData(oldp+581,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
        bufp->chgIData(oldp+582,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
        bufp->chgIData(oldp+583,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
        bufp->chgIData(oldp+584,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
        bufp->chgIData(oldp+585,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
        bufp->chgIData(oldp+586,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
        bufp->chgIData(oldp+587,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
        bufp->chgIData(oldp+588,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
        bufp->chgIData(oldp+589,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
        bufp->chgIData(oldp+590,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
        bufp->chgIData(oldp+591,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
        bufp->chgIData(oldp+592,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
        bufp->chgIData(oldp+593,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
        bufp->chgIData(oldp+594,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
        bufp->chgIData(oldp+595,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
        bufp->chgIData(oldp+596,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
        bufp->chgIData(oldp+597,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
        bufp->chgIData(oldp+598,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
        bufp->chgIData(oldp+599,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
        bufp->chgIData(oldp+600,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
        bufp->chgIData(oldp+601,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
        bufp->chgIData(oldp+602,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
        bufp->chgIData(oldp+603,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
        bufp->chgIData(oldp+604,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
        bufp->chgIData(oldp+605,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
        bufp->chgIData(oldp+606,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
        bufp->chgIData(oldp+607,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
        bufp->chgIData(oldp+608,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
        bufp->chgIData(oldp+609,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+610,(vlSelf->pcore_tb__DOT__dut__DOT__store_busy));
        bufp->chgCData(oldp+611,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state),2);
        bufp->chgCData(oldp+612,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                   ? 0U : ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                            ? 2U : 0U))),2);
        bufp->chgBit(oldp+613,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read));
        bufp->chgBit(oldp+614,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_modify));
        bufp->chgBit(oldp+615,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write));
        bufp->chgBit(oldp+616,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgCData(oldp+617,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+618,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
        bufp->chgBit(oldp+619,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
        bufp->chgIData(oldp+620,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
        bufp->chgIData(oldp+621,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
        bufp->chgBit(oldp+622,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgBit(oldp+623,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
        bufp->chgCData(oldp+624,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
        bufp->chgIData(oldp+625,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
        bufp->chgIData(oldp+626,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
        bufp->chgIData(oldp+627,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
        bufp->chgIData(oldp+628,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
        bufp->chgIData(oldp+629,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
        bufp->chgIData(oldp+630,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                  >> 4U)),28);
        bufp->chgBit(oldp+631,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+632,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+633,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+634,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
        bufp->chgBit(oldp+635,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                >> 0x1fU)));
        bufp->chgCData(oldp+636,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+637,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x16U))));
        bufp->chgBit(oldp+638,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x15U))));
        bufp->chgBit(oldp+639,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x14U))));
        bufp->chgBit(oldp+640,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+641,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+642,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x11U))));
        bufp->chgCData(oldp+643,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+644,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+645,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+646,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 9U))),2);
        bufp->chgBit(oldp+647,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+648,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+649,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+651,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+652,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+653,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+654,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+655,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
        bufp->chgSData(oldp+656,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+657,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+658,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x11U))));
        bufp->chgBit(oldp+659,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+660,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+661,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+662,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+663,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+664,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+665,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+666,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+667,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+668,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+669,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+670,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+671,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+672,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
        bufp->chgIData(oldp+673,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                                  >> 2U)),30);
        bufp->chgCData(oldp+674,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
        bufp->chgIData(oldp+675,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
        bufp->chgIData(oldp+676,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
        bufp->chgIData(oldp+677,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
        bufp->chgIData(oldp+678,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
        bufp->chgSData(oldp+679,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+680,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+681,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x11U))));
        bufp->chgBit(oldp+682,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+683,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+684,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+685,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+686,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+687,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+688,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+689,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+690,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+691,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+692,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+693,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+694,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+695,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
        bufp->chgCData(oldp+696,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+697,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
        bufp->chgBit(oldp+698,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req));
        bufp->chgBit(oldp+699,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req));
        bufp->chgBit(oldp+700,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
        bufp->chgBit(oldp+701,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
        bufp->chgBit(oldp+702,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
        bufp->chgBit(oldp+703,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff));
        bufp->chgBit(oldp+704,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff));
        bufp->chgBit(oldp+705,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff));
        bufp->chgBit(oldp+706,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
        bufp->chgBit(oldp+707,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
        bufp->chgCData(oldp+708,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff),3);
        bufp->chgIData(oldp+709,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff),32);
        bufp->chgIData(oldp+710,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff),32);
        bufp->chgBit(oldp+711,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
        bufp->chgBit(oldp+712,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
        bufp->chgBit(oldp+713,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
        bufp->chgBit(oldp+714,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
        bufp->chgBit(oldp+715,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_ff));
        bufp->chgBit(oldp+716,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+717,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                          >> 7U))),32);
        bufp->chgCData(oldp+718,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                                >> 5U)))),2);
        bufp->chgBit(oldp+719,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 4U)))));
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 3U)))));
        bufp->chgBit(oldp+721,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 2U)))));
        bufp->chgBit(oldp+722,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 1U)))));
        bufp->chgBit(oldp+723,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr))));
        bufp->chgCData(oldp+724,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 9U))),3);
        bufp->chgCData(oldp+725,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 7U))),2);
        bufp->chgCData(oldp+726,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+727,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+728,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 9U))),3);
        bufp->chgCData(oldp+729,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 7U))),2);
        bufp->chgCData(oldp+730,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 3U))),4);
        bufp->chgBit(oldp+731,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+732,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+733,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
        bufp->chgCData(oldp+734,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 3U))),4);
        bufp->chgBit(oldp+735,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))));
        bufp->chgBit(oldp+736,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))));
        bufp->chgBit(oldp+737,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))));
        bufp->chgBit(oldp+738,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
        bufp->chgCData(oldp+739,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
        bufp->chgBit(oldp+740,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
        bufp->chgCData(oldp+741,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 7U))),2);
        bufp->chgBit(oldp+742,((IData)((0U != (0xf80U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
        bufp->chgBit(oldp+743,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req));
        bufp->chgBit(oldp+744,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+745,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+746,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+747,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+748,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))));
        bufp->chgBit(oldp+749,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
        bufp->chgBit(oldp+750,(((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 3U)))
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                                 : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                 >> 7U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+751,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+752,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+753,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+754,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+755,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+756,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
        bufp->chgIData(oldp+757,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0),32);
        bufp->chgBit(oldp+758,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
        bufp->chgBit(oldp+759,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
        bufp->chgBit(oldp+760,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+761,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
        bufp->chgBit(oldp+762,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+763,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+764,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+765,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+766,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+767,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
        bufp->chgBit(oldp+768,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
        bufp->chgIData(oldp+769,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
        bufp->chgIData(oldp+770,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
        bufp->chgIData(oldp+771,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
        bufp->chgIData(oldp+772,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
        bufp->chgIData(oldp+773,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
        bufp->chgIData(oldp+774,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                  >> 4U)),28);
        bufp->chgBit(oldp+775,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                      >> 3U))));
        bufp->chgBit(oldp+776,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                      >> 2U))));
        bufp->chgBit(oldp+777,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                      >> 1U))));
        bufp->chgBit(oldp+778,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
        bufp->chgBit(oldp+779,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                >> 0x1fU)));
        bufp->chgCData(oldp+780,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+781,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x16U))));
        bufp->chgBit(oldp+782,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x15U))));
        bufp->chgBit(oldp+783,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x14U))));
        bufp->chgBit(oldp+784,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x13U))));
        bufp->chgBit(oldp+785,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x12U))));
        bufp->chgBit(oldp+786,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0x11U))));
        bufp->chgCData(oldp+787,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+788,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+789,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+790,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 9U))),2);
        bufp->chgBit(oldp+791,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 8U))));
        bufp->chgBit(oldp+792,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 7U))));
        bufp->chgBit(oldp+793,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 6U))));
        bufp->chgBit(oldp+794,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 5U))));
        bufp->chgBit(oldp+795,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 4U))));
        bufp->chgBit(oldp+796,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 3U))));
        bufp->chgBit(oldp+797,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 2U))));
        bufp->chgBit(oldp+798,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 1U))));
        bufp->chgBit(oldp+799,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
        bufp->chgSData(oldp+800,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+801,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0x12U))));
        bufp->chgBit(oldp+802,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0x11U))));
        bufp->chgBit(oldp+803,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0x10U))));
        bufp->chgCData(oldp+804,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+805,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0xbU))));
        bufp->chgBit(oldp+806,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 0xaU))));
        bufp->chgBit(oldp+807,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 9U))));
        bufp->chgBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 8U))));
        bufp->chgBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 7U))));
        bufp->chgBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 6U))));
        bufp->chgBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 5U))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 4U))));
        bufp->chgBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 3U))));
        bufp->chgBit(oldp+814,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 2U))));
        bufp->chgBit(oldp+815,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                      >> 1U))));
        bufp->chgBit(oldp+816,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
        bufp->chgIData(oldp+817,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                                  >> 2U)),30);
        bufp->chgCData(oldp+818,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
        bufp->chgIData(oldp+819,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
        bufp->chgIData(oldp+820,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
        bufp->chgSData(oldp+821,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                  >> 0x13U)),13);
        bufp->chgBit(oldp+822,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0x12U))));
        bufp->chgBit(oldp+823,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0x11U))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0x10U))));
        bufp->chgCData(oldp+825,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+826,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0xbU))));
        bufp->chgBit(oldp+827,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 0xaU))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 9U))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 8U))));
        bufp->chgBit(oldp+830,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 7U))));
        bufp->chgBit(oldp+831,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 6U))));
        bufp->chgBit(oldp+832,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 5U))));
        bufp->chgBit(oldp+833,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 4U))));
        bufp->chgBit(oldp+834,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 3U))));
        bufp->chgBit(oldp+835,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 2U))));
        bufp->chgBit(oldp+836,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                      >> 1U))));
        bufp->chgBit(oldp+837,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
        bufp->chgCData(oldp+838,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
        bufp->chgCData(oldp+839,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),5);
        bufp->chgIData(oldp+840,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
        bufp->chgBit(oldp+841,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
        bufp->chgBit(oldp+842,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
        bufp->chgBit(oldp+843,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
        bufp->chgBit(oldp+844,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
        bufp->chgBit(oldp+845,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
        bufp->chgBit(oldp+846,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+847,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
        bufp->chgBit(oldp+848,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
        bufp->chgBit(oldp+849,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
        bufp->chgBit(oldp+850,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
        bufp->chgBit(oldp+851,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
        bufp->chgBit(oldp+852,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
        bufp->chgBit(oldp+853,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
        bufp->chgBit(oldp+854,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
        bufp->chgBit(oldp+855,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
        bufp->chgBit(oldp+856,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next));
        bufp->chgIData(oldp+857,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
        bufp->chgBit(oldp+858,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req));
        bufp->chgBit(oldp+859,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+860,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+861,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+862,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+863,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+864,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+865,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+866,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+867,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgCData(oldp+868,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0xcU))),5);
        bufp->chgIData(oldp+869,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                >> 5U))),32);
        bufp->chgSData(oldp+870,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                             << 7U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                               >> 0x19U)))),12);
        bufp->chgIData(oldp+871,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+872,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+873,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+874,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgCData(oldp+875,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+876,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+877,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+878,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+879,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+880,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
        bufp->chgCData(oldp+881,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+882,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x19U))),5);
        bufp->chgBit(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
        bufp->chgCData(oldp+884,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+885,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x19U))),5);
        bufp->chgCData(oldp+886,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0xcU))),5);
        bufp->chgBit(oldp+887,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+888,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 0x19U)))));
        bufp->chgBit(oldp+889,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard));
        bufp->chgBit(oldp+890,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard));
    }
    bufp->chgBit(oldp+891,(vlSelf->clk));
    bufp->chgBit(oldp+892,(vlSelf->reset));
    bufp->chgBit(oldp+893,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
    bufp->chgBit(oldp+894,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
    bufp->chgBit(oldp+895,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
    bufp->chgBit(oldp+896,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
    bufp->chgBit(oldp+897,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel));
    bufp->chgBit(oldp+898,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel));
    bufp->chgBit(oldp+899,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel));
    bufp->chgBit(oldp+900,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel));
    bufp->chgIData(oldp+901,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                      >> 1U))),32);
    bufp->chgBit(oldp+902,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus))));
    bufp->chgBit(oldp+903,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                            | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                  | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel) 
                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel)))))));
    bufp->chgSData(oldp+904,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
                                          ? ((0x20U 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                              ? ((0x10U 
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
                                              : ((0x10U 
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
    bufp->chgIData(oldp+905,(((0x80U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                 >> 1U)) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(
                                                               (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                                >> 2U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                                   >> 3U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                                      >> 4U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
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
    bufp->chgIData(oldp+906,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read)
                               ? ((0x3fffffeU >= (0x3ffffffU 
                                                  & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                      << 0x18U) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                        >> 8U))))
                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                  [(0x3ffffffU & ((
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 8U)))]
                                   : 0U) : 0U)),32);
    bufp->chgIData(oldp+907,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 3U)))
                               ? (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)),32);
    bufp->chgIData(oldp+908,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                               << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                            >> 5U))),32);
    bufp->chgIData(oldp+909,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                               << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                            >> 5U))),32);
    bufp->chgIData(oldp+910,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                               << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                            >> 5U))),32);
    bufp->chgCData(oldp+911,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgIData(oldp+912,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
    bufp->chgCData(oldp+913,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgIData(oldp+914,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->chgIData(oldp+915,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
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
    bufp->chgBit(oldp+916,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                            | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h8a01cdb0__0))))));
    bufp->chgIData(oldp+917,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x14U)))
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                              [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                         >> 0x14U))]
                               : 0U)),32);
    bufp->chgIData(oldp+918,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x19U)))
                               ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                              [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                         >> 0x19U))]
                               : 0U)),32);
    bufp->chgCData(oldp+919,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgBit(oldp+920,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->chgBit(oldp+921,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i));
    bufp->chgCData(oldp+922,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)
                                     : ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                   >> 0x1eU))))),3);
    bufp->chgIData(oldp+923,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                               ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                   >> 0x1fU) ? ((IData)(1U) 
                                                + (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->chgIData(oldp+924,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                               ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                   >> 0x1fU) ? ((IData)(1U) 
                                                + (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                   : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                               : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->chgBit(oldp+925,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff)
                                   : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+926,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)
                                   : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+927,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
                                     >> 2U) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff) 
                                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next)))))));
    bufp->chgBit(oldp+928,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
                            | (IData)(vlSelf->__VdfgTmp_hb736675d__0))));
    bufp->chgIData(oldp+929,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                               ? 0x13U : vlSelf->__VdfgTmp_h72333958__0)),32);
    bufp->chgBit(oldp+930,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next))));
    bufp->chgIData(oldp+931,((((- (IData)(((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)) 
                                           & (vlSelf->__VdfgTmp_h72333958__0 
                                              >> 0x1fU)))) 
                               << 0x14U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                                               ? 0U
                                               : (0xffU 
                                                  & (vlSelf->__VdfgTmp_h72333958__0 
                                                     >> 0xcU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)) 
                                                    << 0xbU) 
                                                   & (vlSelf->__VdfgTmp_h72333958__0 
                                                      >> 9U))) 
                                               | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & (vlSelf->__VdfgTmp_h72333958__0 
                                                       >> 0x15U))) 
                                                  << 1U))))),32);
    bufp->chgBit(oldp+932,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
                            & ((IData)((0U != (0x802U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->chgBit(oldp+933,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                            & ((IData)((0U != (0x3000402U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->chgBit(oldp+934,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
    bufp->chgBit(oldp+935,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
    bufp->chgIData(oldp+936,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
    bufp->chgBit(oldp+937,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
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
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
