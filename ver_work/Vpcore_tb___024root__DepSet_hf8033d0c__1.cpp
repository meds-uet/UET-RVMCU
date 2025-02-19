// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb___024root.h"

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__2(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1 = 0;
    // Body
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1 = 0U;
    if (vlSelf->reset) {
        if (((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))) {
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data;
            __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 1U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 
                = (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]);
        }
    } else {
        __Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1 = 1U;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xaU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xbU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xcU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xdU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xeU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xfU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x10U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x11U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x12U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x13U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x14U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x15U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x16U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x17U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x18U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x19U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1aU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1bU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1cU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1dU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1eU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__3(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff 
        = (1U & ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__uart_rx)));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__4(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
        = ((IData)(vlSelf->reset) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next
            : 0U);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req 
        = ((IData)(((0xa00U == (0xe00U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                    & (0U != (3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])))) 
           | (((3U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                             >> 9U))) | (4U == (7U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 9U)))) 
              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req 
        = ((IData)(((0x180U == (0x180U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                    & (0U != (3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])))) 
           | (IData)(((0x100U == (0x180U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl 
        = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl)) 
           | (0xeU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 0xbU)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
           | (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                       >> 0xfU)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 0xeU;
    if ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code 
            = (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                       >> 1U));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 4U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 6U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req 
        = (1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                  >> 3U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0)));
}

extern const VlUnpacked<CData/*4:0*/, 128> Vpcore_tb__ConstPool__TABLE_h1623cb1d_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__0(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgExtracted_hf0bcfd92__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgExtracted_hf0bcfd92__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = 0U;
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
            = ((0x10000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                ? ((0x8000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                    ? ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                        ? ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                            ? ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                ? 0U : ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                         ? 0U : ((0x400U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 
                                                     ((0x20U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0U
                                                       : 3U)
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0x702U
                                                       : 0U))))
                                                   : 0U))))
                            : 0U) : ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                      ? 0U : ((0x1000U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                               ? ((0x800U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                   ? 0U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                        ? 
                                                       ((0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 0U
                                                         : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff)
                                                        : 
                                                       ((0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? (IData)(
                                                                   (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                                                                    >> 0x20U))
                                                         : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff)))))))
                                               : ((0x800U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                   ? 0U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                        ? 
                                                       ((0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 0U
                                                         : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff)
                                                        : 
                                                       ((0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff)
                                                         : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff))))))))))
                    : ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                        ? ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                            ? ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                ? ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                    ? 0U : ((0x400U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                             ? 0U : 
                                            ((0x200U 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                              ? 0U : 
                                             ((0x100U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                               ? 0U
                                               : ((0x80U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff)
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff)))))))
                                : ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                    ? 0U : ((0x400U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                             ? 0U : 
                                            ((0x200U 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                              ? 0U : 
                                             ((0x100U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                               ? 0U
                                               : ((0x80U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff)
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff))))))))
                            : 0U) : 0U)) : ((0x8000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                             ? 0U : 
                                            ((0x4000U 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                              ? ((0x2000U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                   ? 0U
                                                   : 
                                                  ((0x800U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 
                                                   ((0x400U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 0U
                                                     : 
                                                    ((0x200U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : 
                                                     ((0x100U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                        ? 
                                                       ((0x40U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 0U
                                                         : 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? 0U
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff))
                                                        : 
                                                       ((0x40U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff)
                                                         : 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff))))))
                                                    : 
                                                   ((0x400U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? 
                                                    ((0x200U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : 
                                                     ((0x100U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                        ? 0U
                                                        : 
                                                       ((0x40U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 0U
                                                         : 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? 0U
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)))))
                                                     : 
                                                    ((0x200U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : 
                                                     ((0x100U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                       ? 0U
                                                       : 
                                                      ((0x80U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                        ? 
                                                       ((0x40U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 0U
                                                         : 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff))
                                                        : 
                                                       ((0x40U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                         ? 0U
                                                         : 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? 0x40001103U
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff))))))))
                                                  : 0U)
                                              : 0U)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
            >> 2U) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next 
        = ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))
            ? ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))
                ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))
                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)
                    : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff))
                        ? ((IData)(1U) + (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)))
                        : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)))
                : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))
                    ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff
                    : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff) 
                         ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)) 
                        & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff 
                              >> 0x1fU))) ? ((IData)(1U) 
                                             + (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff))
                        : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff)))
            : 0U);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
        = (QData)((IData)(((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                             << 7U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                       << 6U)) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__timer_overflow_ff) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->pcore_tb__DOT__irq_soft) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart) 
                                                         << 3U) 
                                                        | ((4U 
                                                            & (((0xfffffffcU 
                                                                 & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                                                    << 1U)) 
                                                                | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                                                   << 2U)) 
                                                               | ((0xfffffffcU 
                                                                   & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                                                      << 1U)) 
                                                                  | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                                                     << 2U)))) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                                                          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                                                         | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                                                            | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)))))) 
                                                               << 1U) 
                                                              | (0U 
                                                                 != 
                                                                 ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff) 
                                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff)))))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req 
        = (1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                  >> 2U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_hc11b4cfe__0)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 1U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 0U;
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 1U;
    } else if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 3U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req) 
           & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata 
        = ((1U == (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                         >> 7U))) ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                      << 0x1bU) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                   >> 5U))
            : ((2U == (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                             >> 7U))) ? (((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                             >> 5U)) 
                                         | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata)
                : ((3U == (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 7U))) ? ((~ ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                    >> 5U))) 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata)
                    : 0U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl 
        = ((0xeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl)) 
           | (1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 3U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req)
                     : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                        >> 2U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req 
        = ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                           >> 3U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req)
            : (0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                            >> 9U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
            = (0xf0888U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                ? (0xffffffc1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                : (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc 
        = (1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = ((0xfffff7ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff) 
              << 0xbU));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = ((0xffffff7fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff) 
              << 7U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = ((0xfff0ffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next) 
           | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sw_irq_ff) 
               << 0x13U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff) 
                             << 0x12U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff) 
                                           << 0x11U) 
                                          | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff) 
                                             << 0x10U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = (0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next);
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
            = ((0xf0888U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata) 
               | (0xfff0f777U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall 
        = (1U & (~ (IData)((0x10U == (0x18U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak 
        = (3U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                          >> 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc 
        = (1U & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                     >> 2U)) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush) 
                                   | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall)) 
                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
        = (0x1888U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
        = (0x1800U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xffffff7fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (0x80U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                           << 4U)));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (8U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                        >> 4U)));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0x80U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0x1888U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
            : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                 & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))) 
                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))
                ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                         ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                         : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgExtracted_hf0bcfd92__0 
        = (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req)) 
                 & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))));
    vlSelf->__VdfgTmp_hef7c3d40__0 = ((IData)((((0U 
                                                 != 
                                                 (0x78U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req)) 
                                               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req))) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
        = ((0xfffffff0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U]) 
           | ((0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                       >> 5U)) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req) 
                                   << 1U) | ((0U != 
                                              (0xfU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                  >> 3U)))
                                              ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                                              : (0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                     >> 7U)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc 
        = ((0xffffffffU == vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 0xbU));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 3U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 7U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc 
        = ((0xffffffffU == vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode = 3U;
    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgExtracted_hf0bcfd92__0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode 
            = ((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))
                ? 3U : 0U);
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req 
        = (1U & ((IData)(vlSelf->__VdfgTmp_hef7c3d40__0) 
                 | ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)) 
                    | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                       >> 1U))));
    __Vtableidx1 = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpsw_irq_req) 
                     << 6U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req) 
                                << 5U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req) 
                                           << 4U) | 
                                          (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req) 
                                            << 3U) 
                                           | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                               << 2U) 
                                              | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code 
        = Vpcore_tb__ConstPool__TABLE_h1623cb1d_0[__Vtableidx1];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
            | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_hc11b4cfe__0)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
            = (0x80000000U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
            = (0x8000000fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req) 
         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next = 0U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
            << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                         >> 5U));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)
                ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req)
                    ? (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)
                    : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req)
                        ? ((0xffffff80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff) 
                           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code) 
                              << 2U)) : (0xfffffffcU 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)))
                : (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff));
        if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff;
        } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U];
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req)) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
            = (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__1(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
        = (0x200U | (1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
           | (0xffffffe0U & (((- (IData)((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                >> 4U)))) 
                              << 0x10U) | (0xffe0U 
                                           & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                               << 0xcU) 
                                              | (0xfe0U 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                    >> 0x14U)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
           | (0x1fU & ((- (IData)((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                         >> 4U)))) 
                       >> 0x10U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U]) 
           | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]) 
           | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U]) 
           | ((IData)((((QData)((IData)(((0U != (0x1fU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                    >> 0x14U)))
                                          ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                         [(0x1fU & 
                                           (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x14U))]
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((0U != (0x1fU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                     >> 0x19U)))
                                           ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                          [(0x1fU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x19U))]
                                           : 0U))))) 
              << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
        = (((IData)((((QData)((IData)(((0U != (0x1fU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U)))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                       [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U))]
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(((0U != (0x1fU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U)))
                                         ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                        [(0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U))]
                                         : 0U))))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                         >> 0x14U))]
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                                      >> 0x19U)))
                                                                  ? 
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                                     >> 0x19U))]
                                                                  : 0U)))) 
                                  >> 0x20U)) << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
        = ((IData)(((((QData)((IData)(((0U != (0x1fU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U)))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                       [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U))]
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(((0U != (0x1fU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U)))
                                         ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                        [(0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U))]
                                         : 0U)))) >> 0x20U)) 
           >> 0x1bU);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
           | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U]) 
           | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
        = (0x1cU | ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                    | (1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 0U;
    if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x80U | (0xffffff1fU 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x180000U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x100U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x80U | (0xffffff1fU 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x100000U | (0xffe7ffffU 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x100U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        }
                    } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x80U | (0xffffff1fU 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x80000U | (0xffe7ffffU 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x100U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x800U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x80U | (0xffffff1fU 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x180000U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0xfffffeffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x800U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x80U | (0xffffff1fU 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x100000U | (0xffe7ffffU 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0xfffffeffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                    }
                } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0x800U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0x80U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0x80000U | (0xffe7ffffU 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0xfffffeffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                } else if ((0U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                             << 2U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x1eU))))) {
                    if ((0U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                         >> 0x19U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x10U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = (0x16U | (0xffffffe1U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                        if ((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                = (0x16U | (0xffffffe1U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                        }
                    } else if ((1U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x10U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = (6U | (0xffffffe1U & 
                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((8U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                             << 2U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x1eU))))) {
                    if ((5U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                         >> 0x19U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x3000U | (0xffff8fffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((0x18U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                << 2U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x1eU))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0x2000U | (0xffff8fffU & 
                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0x40U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                           | (0xffffffe0U & (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                             >> 4U)))) 
                                              << 0x19U) 
                                             | ((0x1fe0000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]) 
                                                | ((0x10000U 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                       >> 9U)) 
                                                   | (0xffc0U 
                                                      & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                          << 0xcU) 
                                                         | (0xfc0U 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                               >> 0x14U)))))))));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                           | (0x1fU & ((- (IData)((1U 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                      >> 4U)))) 
                                       >> 7U)));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0xfffff3ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                        = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (8U | (0xfffffff3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x40U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x800U | (0xfffff3ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                    = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0xcU | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x200U | (0xfffff1ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                       | (0xffffffe0U & (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                         >> 4U)))) 
                                          << 0x11U) 
                                         | ((0x10000U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                << 4U)) 
                                            | ((0xfc00U 
                                                & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                    << 0xcU) 
                                                   | (0xc00U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                         >> 0x14U)))) 
                                               | (0x3c0U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                     >> 7U)))))));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                    = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                       | (0x1fU & ((- (IData)((1U & 
                                               (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                >> 4U)))) 
                                   >> 0xfU)));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                    = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (2U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = ((0xff1fffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                           | (((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                ? ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                    ? 4U : 6U) : ((0x20000U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                   ? 3U
                                                   : 5U)) 
                              << 0x15U));
                } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                        = ((0xff1fffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                           | (((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                ? 2U : 1U) << 0x15U));
                }
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        }
    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x20U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                       | (0xfffe0000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                    = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                       | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0xfffffbffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                    = (0xc0U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (8U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x20U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0xe00U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (8U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                 >> 0x1fU)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((0x40000000U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x40000000U 
                                       | (0x1fffffffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = (3U | (0xc0000000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                            }
                        } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                    >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x11U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x20000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (2U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        } else if ((5U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x11U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x40000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (2U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        }
                    } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                             >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x11U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0xc0000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (2U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        } else if ((5U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x11U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x1fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (3U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        }
                    } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                >> 0x1fU)) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = ((0x1fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                                   | ((IData)(((0x20000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? 4ULL
                                                : 5ULL)) 
                                      << 0x1dU));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = ((0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]) 
                                   | (((IData)(((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 4ULL
                                                 : 5ULL)) 
                                       >> 3U) | ((IData)(
                                                         (((0x20000U 
                                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                            ? 4ULL
                                                            : 5ULL) 
                                                          >> 0x20U)) 
                                                 << 0x1dU)));
                        } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                = (0xa0U | (0xfU & 
                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0xc0000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]);
                        }
                    } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                            = (0x20U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                    }
                } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                             >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x80000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (3U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        }
                    } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                >> 0x1fU)) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((2U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x11U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x20000000U | (0x1fffffffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                            = (0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]);
                    } else if ((4U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x11U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x40000000U | (0x1fffffffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                            = (0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]);
                    } else if ((6U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x11U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x60000000U | (0x1fffffffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                            = (0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]);
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                         >> 0x1fU)) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = ((0x1fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                                   | ((IData)(((0x40000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? (
                                                   (0x20000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 0xbULL
                                                    : 0xaULL)
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 0xdULL
                                                    : 0xcULL))) 
                                      << 0x1dU));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = ((0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]) 
                                   | (((IData)(((0x40000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 
                                                ((0x20000U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                  ? 0xbULL
                                                  : 0xaULL)
                                                 : 
                                                ((0x20000U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                  ? 0xdULL
                                                  : 0xcULL))) 
                                       >> 3U) | ((IData)(
                                                         (((0x40000U 
                                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                            ? 
                                                           ((0x20000U 
                                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                             ? 0xbULL
                                                             : 0xaULL)
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                             ? 0xdULL
                                                             : 0xcULL)) 
                                                          >> 0x20U)) 
                                                 << 0x1dU)));
                        } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = ((0x1fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                                   | ((IData)(((0x20000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? 0x1fULL
                                                : 0x20ULL)) 
                                      << 0x1dU));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = ((0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]) 
                                   | (((IData)(((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 0x1fULL
                                                 : 0x20ULL)) 
                                       >> 3U) | ((IData)(
                                                         (((0x20000U 
                                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                            ? 0x1fULL
                                                            : 0x20ULL) 
                                                          >> 0x20U)) 
                                                 << 0x1dU)));
                        } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0xc0000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (3U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0x1fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                            = (2U | (0xc0000000U & 
                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                    }
                } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                            >> 0x1fU)) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = (0xa0U | (0xffffff1fU 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                            = ((0x3fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]) 
                               | (((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                    ? ((0x20000U & 
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                        ? 7U : 6U) : 
                                   ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                     ? 5U : 4U)) << 0x1eU));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                            = ((0xfeU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]) 
                               | (0xffU & (((0x40000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                             ? ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 7U
                                                 : 6U)
                                             : ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 5U
                                                 : 4U)) 
                                           >> 2U)));
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                            = ((0xf1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]) 
                               | (0xffU & (((0x40000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                             ? ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 5U
                                                 : 6U)
                                             : ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 7U
                                                 : 4U)) 
                                           << 1U)));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                        = ((0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]) 
                           | (0xffU & (((0x80000U & 
                                         vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                         ? ((0x40000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                             ? ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 3U
                                                 : 4U)
                                             : ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 9U
                                                 : 5U))
                                         : ((0x40000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                             ? ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 7U
                                                 : 6U)
                                             : ((0x20000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 8U
                                                 : 1U))) 
                                       << 4U)));
                }
            }
        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x60U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0xc00U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x17000000U | (0xe0ffffffU & 
                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                    = (0xb0U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (8U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                if ((2U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                  >> 0x11U)))) {
                    if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                                } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                                } else {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        = (0x58000U 
                                           | (0xfff87fffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                }
                            } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x50000U | (0xfff87fffU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            }
                        } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x48000U | (0xfff87fffU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            }
                        } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x40000U | (0xfff87fffU 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        }
                    } else if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x30000U | (0xfff87fffU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            }
                        } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x38000U | (0xfff87fffU 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        }
                    } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x28000U | (0xfff87fffU 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        }
                    } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x10000U | (0xfff87fffU 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0x8000U | (0xfff87fffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            if ((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x19U)))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            }
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0xfcffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            = ((0xfff87fffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                               | (((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])
                                    ? 3U : 4U) << 0xfU));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            }
        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (0x800U | (0xfffff3ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                   | (0xffffffe0U & (((- (IData)((1U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                     >> 4U)))) 
                                      << 0x10U) | (
                                                   (0xfc00U 
                                                    & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                        << 0xcU) 
                                                       | (0xc00U 
                                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                             >> 0x14U)))) 
                                                   | (0x3e0U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                         >> 7U))))));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                   | (0x1fU & ((- (IData)((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                 >> 4U)))) 
                               >> 0x10U)));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
            if ((0U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                              >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x1000000U | (0xfcffffffU & 
                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            } else if ((1U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x2000000U | (0xfcffffffU & 
                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            } else if ((2U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x3000000U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            }
        }
    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (0x20U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                   | (0xfffe0000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                   | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (0xfffff3ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (8U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (0x20U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (0x800U | (0xfffff1ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = (8U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
            if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                        = ((0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]) 
                           | (0xffU & (((0x20000U & 
                                         vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                         ? 3U : 4U) 
                                       << 4U)));
                } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x1fU)) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                                } else if ((0x40000000U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                                } else {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                        = (0xa0000000U 
                                           | (0x1fffffffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                        = (2U | (0xc0000000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                                }
                            } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x1fU)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((0x40000000U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                                       | (0x3e0U & 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U)));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                    = (0xffffffe0U 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x60000000U 
                                       | (0x1fffffffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = (2U | (0xc0000000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                            }
                        } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                 >> 0x1fU)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((0x40000000U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                                       | (0x3e0U & 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U)));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                    = (0xffffffe0U 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x20000000U 
                                       | (0x1fffffffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = (3U | (0xc0000000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                            }
                        } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                    >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                                   | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                = (0xa0U | (0xfU & 
                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                        }
                    } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                 >> 0x1fU)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((0x40000000U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x80000000U 
                                       | (0x1fffffffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = (2U | (0xc0000000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                            }
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        }
                    } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                >> 0x1fU)) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                               | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x14U)));
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                            = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                            = (0x90U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                        = (0x50U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                }
            } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                    = ((0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]) 
                       | (0xffU & (((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                     ? 7U : 6U) << 4U)));
            } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                 >> 0x1fU)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((0x40000000U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                                       | (0x3e0U & 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U)));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                    = (0xffffffe0U 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x60000000U 
                                       | (0x1fffffffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = (3U | (0xc0000000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                            }
                        } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                    >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x20000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x10000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x8000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            if ((0x4000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = ((0x1fffffffU 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                                       | ((IData)((
                                                   (0x2000000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 0xfULL
                                                    : 0xeULL)) 
                                          << 0x1dU));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = ((0xc0000000U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]) 
                                       | (((IData)(
                                                   ((0x2000000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 0xfULL
                                                     : 0xeULL)) 
                                           >> 3U) | 
                                          ((IData)(
                                                   (((0x2000000U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                      ? 0xfULL
                                                      : 0xeULL) 
                                                    >> 0x20U)) 
                                           << 0x1dU)));
                            }
                        } else if ((0x4000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            if ((0x2000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                    = (0x20000000U 
                                       | (0x1fffffffU 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    = (1U | (0xc0000000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                            }
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = ((0x1fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                                   | ((IData)(((0x2000000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? 8ULL
                                                : 7ULL)) 
                                      << 0x1dU));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = ((0xc0000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]) 
                                   | (((IData)(((0x2000000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                 ? 8ULL
                                                 : 7ULL)) 
                                       >> 3U) | ((IData)(
                                                         (((0x2000000U 
                                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                            ? 8ULL
                                                            : 7ULL) 
                                                          >> 0x20U)) 
                                                 << 0x1dU)));
                        }
                    } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                             >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                                   | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0xe0000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (2U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                             >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                                   | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                = (0xa0000000U | (0x1fffffffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                = (3U | (0xc0000000U 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U]));
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                            >> 0x1fU)) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                           | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x14U)));
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                        = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                        = (0x80U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                    = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
            }
        }
    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                              >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                    = (0x260U | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                    = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U]);
            } else if ((1U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                    = (0x260U | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                    = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U]);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        }
    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
            = (0x60U | (0xffffff1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
            = (0x800U | (0xfffff3ffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
            = (0x10U | (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U]));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
            = (8U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
        if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = ((0xe3ffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                       | (((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                            ? 4U : 2U) << 0x1aU));
            }
        } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                    = (0x14000000U | (0xe3ffffffU & 
                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                = ((0xe3ffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]) 
                   | (((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                        ? 3U : 1U) << 0x1aU));
        }
    }
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr) 
         | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
            >> 1U))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
            = (0xfffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
            = ((0xffffffe1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
               | (((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))
                    ? (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                               >> 1U)) : 2U) << 1U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
            = (0x10U | (0xffffff01U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1 
        = ((4U == (7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                          << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    >> 0x1eU)))) | 
           (6U == (7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                          << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                    >> 0x1eU)))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl 
        = ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl)) 
           | ((0x180U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                         >> 0xcU)) | ((0x70U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                >> 8U)) 
                                      | ((8U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                >> 1U)) 
                                         | (4U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                  << 2U))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgTmp_h267a80af__0 
        = ((0x1fULL == (0x1ffffffffULL & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU)))) 
           | (0x20ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU)))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl 
        = ((0x1fcU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl)) 
           | ((1U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                            >> 0x13U))) ? (1U | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                              >> 0xcU)))) 
                                                 << 1U))
               : (((2U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                 >> 0x13U))) | (3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                    >> 0x13U))))
                   ? (2U | (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0x14U))))
                   : 0U)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_h801f7ee3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_h4ca26f88_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_hbf641938_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_hbd66d8c4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_h2ec990a6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpcore_tb__ConstPool__TABLE_hf2c2731e_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__2(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                     << 3U) | (((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter)) 
                                << 2U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_en 
        = Vpcore_tb__ConstPool__TABLE_h801f7ee3_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_count_reset 
        = Vpcore_tb__ConstPool__TABLE_h4ca26f88_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_count_en 
        = Vpcore_tb__ConstPool__TABLE_hbf641938_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_count_en 
        = Vpcore_tb__ConstPool__TABLE_h801f7ee3_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_count_load_en 
        = Vpcore_tb__ConstPool__TABLE_hbf641938_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_count_en 
        = Vpcore_tb__ConstPool__TABLE_hbd66d8c4_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_count_reset 
        = Vpcore_tb__ConstPool__TABLE_h2ec990a6_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__fifo_load_en 
        = Vpcore_tb__ConstPool__TABLE_hf2c2731e_0[__Vtableidx5];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_next 
        = ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
            ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                ? ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter))
                    ? 0U : 3U) : ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter))
                                   ? 2U : 3U)) : ((1U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                                   ? 
                                                  (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                                    == 
                                                    (0xffffU 
                                                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                                        >> 1U)))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                     & (8U 
                                                        != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))) 
                                                    & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff)))
                                                    ? 1U
                                                    : 0U)));
    __Vtableidx3 = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                     << 3U) | (((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter)) 
                                << 2U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_en 
        = Vpcore_tb__ConstPool__TABLE_h801f7ee3_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_count_reset 
        = Vpcore_tb__ConstPool__TABLE_h4ca26f88_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_count_en 
        = Vpcore_tb__ConstPool__TABLE_hbf641938_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_count_en 
        = Vpcore_tb__ConstPool__TABLE_h801f7ee3_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_count_load_en 
        = Vpcore_tb__ConstPool__TABLE_hbf641938_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_count_en 
        = Vpcore_tb__ConstPool__TABLE_hbd66d8c4_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_count_reset 
        = Vpcore_tb__ConstPool__TABLE_h2ec990a6_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__fifo_load_en 
        = Vpcore_tb__ConstPool__TABLE_hf2c2731e_0[__Vtableidx3];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_next 
        = ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
            ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                ? ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter))
                    ? 0U : 3U) : ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter))
                                   ? 2U : 3U)) : ((1U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                                   ? 
                                                  (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                                    == 
                                                    (0xffffU 
                                                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                                        >> 1U)))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                     & (8U 
                                                        != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))) 
                                                    & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff)))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_en)
            ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                << 7U) | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff) 
                                   >> 1U))) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_en)
            ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                << 7U) | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff) 
                                   >> 1U))) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__3(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
        = ((0xfU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U]) 
           | (((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 3U))) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]) 
              << 4U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
        = ((0xfffffff0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U]) 
           | (((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 3U))) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]) 
              >> 0x1cU));
}

extern const VlUnpacked<CData/*0:0*/, 8> Vpcore_tb__ConstPool__TABLE_h64894f63_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vpcore_tb__ConstPool__TABLE_h66910629_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vpcore_tb__ConstPool__TABLE_hc2dc19fa_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vpcore_tb__ConstPool__TABLE_h006f755c_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__4(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hd06f7fb9__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hd06f7fb9__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h377f770a__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h377f770a__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_had691733__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_had691733__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hafd8571d__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hafd8571d__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h32f3287d__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h32f3287d__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he492be5b__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he492be5b__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h387a1b88__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h387a1b88__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he002e276__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he002e276__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h2a973c82__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h2a973c82__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h82d29ac8__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h82d29ac8__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hcb68f0f7__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hcb68f0f7__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgTmp_h951c8663__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgTmp_h951c8663__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgTmp_h2e79a1d4__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgTmp_h2e79a1d4__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgTmp_h2e79a1d4__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgTmp_h2e79a1d4__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgTmp_h2e79a1d4__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgTmp_h2e79a1d4__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgTmp_h86804788__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgTmp_h86804788__0 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    IData/*31:0*/ __Vtemp_h1132ed83__0;
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
        = (3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
        = (0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]);
    if ((1U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                      >> 2U)))) {
        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0x3fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0xc0000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x1aU)));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                    = ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
                       | (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   >> 6U)));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x20U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0xc03fffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0x3fc00000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x12U)));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x10U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            }
        } else if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffc03fffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0x3fc000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   << 0xaU)));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = (8U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffffc003U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0xfffffffcU & (4U | (0x3fc0U 
                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                              << 2U)))));
        }
    } else if ((2U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                             >> 2U)))) {
        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0xffc00000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x12U)));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                    = ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
                       | (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   >> 0xeU)));
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x30U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffc00003U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0xfffffffcU & (0xcU | (0x3fffc0U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                << 2U)))));
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
               | ((IData)(((3U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         >> 2U))) ? 
                           (0xfULL | ((QData)((IData)(
                                                      ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                        << 0x1cU) 
                                                       | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                          >> 4U)))) 
                                      << 4U)) : 0ULL)) 
                  << 2U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
            = ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
               | (((IData)(((3U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                          >> 2U))) ? 
                            (0xfULL | ((QData)((IData)(
                                                       ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                           >> 4U)))) 
                                       << 4U)) : 0ULL)) 
                   >> 0x1eU) | ((IData)((((3U == (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                     >> 2U)))
                                           ? (0xfULL 
                                              | ((QData)((IData)(
                                                                 ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                                     >> 4U)))) 
                                                 << 4U))
                                           : 0ULL) 
                                         >> 0x20U)) 
                                << 2U)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
        = ((0x3fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
           | (0xffffffc0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                             << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
        = (0x3fU & ((0x3cU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                              << 2U)) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                         >> 0x1eU)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req 
        = (IData)((0U != (3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hcb68f0f7__0 
        = (IData)(((0x2800000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h82d29ac8__0 
        = (IData)(((0x2600000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h2a973c82__0 
        = (IData)(((0x2500000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he002e276__0 
        = (IData)(((0x2400000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h387a1b88__0 
        = (IData)(((0x2300000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
        = ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
           | ((2U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                     << 1U)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he492be5b__0 
        = (IData)(((0x2200000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h32f3287d__0 
        = (IData)(((0x2100000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hafd8571d__0 
        = (IData)(((0x2000000U == (0x3f00000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_had691733__0 
        = (((0x300000U < (0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                       >> 4U))) & (0x300fffU 
                                                   >= 
                                                   (0x3fffffU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                       >> 4U)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h377f770a__0 
        = (((0x301000U < (0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                       >> 4U))) & (0x31ffffU 
                                                   >= 
                                                   (0x3fffffU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                       >> 4U)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hd06f7fb9__0 
        = ((0x200000U > (0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                      >> 4U))) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel = 0U;
    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hd06f7fb9__0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel = 0U;
    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hd06f7fb9__0)))) {
        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h377f770a__0) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel = 1U;
        }
        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h377f770a__0)))) {
            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_had691733__0) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel = 1U;
            }
            if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_had691733__0)))) {
                if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hafd8571d__0)))) {
                    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h32f3287d__0)))) {
                        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he492be5b__0)))) {
                            if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h387a1b88__0)))) {
                                if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he002e276__0)))) {
                                    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h2a973c82__0)))) {
                                        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h82d29ac8__0)))) {
                                            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hcb68f0f7__0) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel = 1U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hcb68f0f7__0)))) {
                                                if ((IData)(
                                                            ((0x2700000U 
                                                              == 
                                                              (0x3f00000U 
                                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) 
                                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req)))) {
                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel = 1U;
                                                }
                                            }
                                        }
                                        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h82d29ac8__0) {
                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel = 1U;
                                        }
                                    }
                                    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h2a973c82__0) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel = 1U;
                                    }
                                }
                                if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he002e276__0) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel = 1U;
                                }
                            }
                            if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h387a1b88__0) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel = 1U;
                            }
                        }
                        if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_he492be5b__0) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel = 1U;
                        }
                    }
                    if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h32f3287d__0) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel = 1U;
                    }
                }
                if (pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hafd8571d__0) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel = 1U;
                }
            }
        }
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel));
    vlSelf->__VdfgTmp_hf0169590__0 = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff;
    } else {
        if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff;
        } else {
            if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff;
            } else {
                if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel) 
                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff;
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] = 0U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] = 0U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] = 0U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus = 0ULL;
                }
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] = 0U;
            }
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] = 0U;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[2U] = 0U;
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgTmp_h951c8663__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__w_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgTmp_h86804788__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
           & (IData)(vlSelf->__VdfgTmp_hf0169590__0));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgTmp_h2e79a1d4__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgTmp_h2e79a1d4__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgTmp_h2e79a1d4__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req 
        = ((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgTmp_h951c8663__0) 
           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
              >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT____VdfgTmp_h951c8663__0));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0 
            = (1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] = 0U;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[2U] = 0U;
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0 = 0U;
        if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] = 0U;
        }
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 
            = (1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] = 0U;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[2U] = 0U;
        pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 = 0U;
        if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] = 0U;
        }
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_data 
            = ((0xbff8U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff)
                : ((0xbffcU == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))
                    ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                               >> 0x20U)) : ((0x4000U 
                                              == (0xffffU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 6U)))
                                              ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff)
                                              : ((0x4004U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))
                                                  ? (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff 
                                                             >> 0x20U))
                                                  : 0U))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__w_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff)))) {
        if ((0xbff8U != (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 6U)))) {
            if ((0xbffcU != (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) {
                if ((0x4000U != (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                    if ((0x4004U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = 1U;
                    }
                }
                if ((0x4000U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = 1U;
                }
            }
            if ((0xbffcU == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag = 1U;
            }
        }
        if ((0xbff8U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req) {
        if (((((((((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) | 
                   (4U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                  (8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U)))) | 
                 (0x1000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
                | (0x2000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
               | (0x2080U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
              | (0x200000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
             | (0x201000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffff8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | ((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))
                       ? 0U : (7U & ((4U == (0xffffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))
                                      ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff)
                                      : ((8U == (0xffffffU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                    >> 6U)))
                                          ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                             >> 3U)
                                          : ((0x1000U 
                                              == (0xffffffU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 6U)))
                                              ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
                                                 << 1U)
                                              : ((0x2000U 
                                                  == 
                                                  (0xffffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))
                                                  ? 
                                                 (6U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                     << 1U))
                                                  : 
                                                 ((0x2080U 
                                                   == 
                                                   (0xffffffU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                       >> 6U)))
                                                   ? 
                                                  (6U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                      >> 1U))
                                                   : 
                                                  ((0x200000U 
                                                    == 
                                                    (0xffffffU 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                        >> 6U)))
                                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff)
                                                    : 
                                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                                    >> 3U))))))))));
        } else if ((0x200004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff));
        } else if ((0x201004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i) 
                            >> 2U)));
        }
        if ((1U & (~ ((((((((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))) 
                            | (4U == (0xffffffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) 
                           | (8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) 
                          | (0x1000U == (0xffffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
                         | (0x2000U == (0xffffffU & 
                                        (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) 
                        | (0x2080U == (0xffffffU & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                       (0x200000U == (0xffffffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) 
                      | (0x201000U == (0xffffffU & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))))))) {
            if ((0x200004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req 
                    = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req));
            } else if ((0x201004U == (0xffffffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req 
                    = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff)))) {
        if (((((((((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) | 
                   (4U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                  (8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U)))) | 
                 (0x2000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
                | (0x2080U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
               | (0x200000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U)))) 
              | (0x201000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
             | (0x200004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))))) {
            if ((0U != (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                     >> 6U)))) {
                if ((4U != (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) {
                    if ((8U != (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U)))) {
                        if ((0x2000U == (0xffffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag 
                                = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag));
                        } else if ((0x2080U == (0xffffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag 
                                = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag));
                        }
                        if ((0x2000U != (0xffffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                            if ((0x2080U != (0xffffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                                if ((0x200000U == (0xffffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag 
                                        = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag));
                                } else if ((0x201000U 
                                            == (0xffffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag 
                                        = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag));
                                }
                                if ((0x200000U != (0xffffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))) {
                                    if ((0x201000U 
                                         != (0xffffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req 
                                            = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req));
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx 
                                            = ((0xcU 
                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                                               | (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                     >> 6U)));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((4U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag 
                        = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag));
                } else if ((8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag 
                        = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag));
                }
            }
        } else if ((0x201004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req 
                = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req));
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx 
                = ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                   | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                              >> 4U)));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgTmp_h86804788__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT____VdfgTmp_h86804788__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgTmp_h2e79a1d4__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT____VdfgTmp_h2e79a1d4__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgTmp_h2e79a1d4__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT____VdfgTmp_h2e79a1d4__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgTmp_h2e79a1d4__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT____VdfgTmp_h2e79a1d4__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__n_state 
        = ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state))
            ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state))
                               ? 2U : 0U));
    __Vtableidx6 = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req) 
                     << 2U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__store_busy 
        = Vpcore_tb__ConstPool__TABLE_h64894f63_0[__Vtableidx6];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_read 
        = Vpcore_tb__ConstPool__TABLE_h66910629_0[__Vtableidx6];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_modify 
        = Vpcore_tb__ConstPool__TABLE_hc2dc19fa_0[__Vtableidx6];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write 
        = Vpcore_tb__ConstPool__TABLE_h006f755c_0[__Vtableidx6];
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT____VdfgTmp_ha680e920__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next 
            = ((0xffffffff00000000ULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next) 
               | (IData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next 
            = ((0xffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next) 
               | ((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U)))) 
                  << 0x20U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next 
        = (1ULL + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff);
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next 
            = ((0xffffffff00000000ULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next) 
               | (IData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next 
            = ((0xffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next) 
               | ((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U)))) 
                  << 0x20U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_next 
        = ((0xcU & (((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                          << 0x19U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 7U)) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                  >> 2U)) 
                    << 2U)) | (3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))));
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__0));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__1 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__1));
    }
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__0) 
                  << 3U));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__1 
            = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                     >> 3U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h06702582__1) 
                  << 3U));
    }
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__0));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__1 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__1));
    }
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__0) 
                  << 3U));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__1 
            = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                     >> 3U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_hbb644852__1) 
                  << 3U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req) 
            << 6U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req) 
                       << 4U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data 
            = ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff)
                : ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)
                    : ((8U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff)
                        : ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff)
                                : 0U)))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff)))) {
        if ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                             >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data = 1U;
        }
        if ((0U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                             >> 6U)))) {
            if ((4U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie = 1U;
                    }
                    if ((0xcU != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                                >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data 
            = ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff)
                : ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)
                    : ((8U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)
                        : ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)
                                : 0U)))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff)))) {
        if ((0U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                             >> 6U)))) {
            if ((4U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                                >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl = 1U;
                        }
                    }
                    if ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                           >> 6U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie = 1U;
                    }
                }
            }
            if ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                 >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir = 1U;
            }
        }
        if ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                             >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data 
            = ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff)
                : ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)
                    : ((8U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)
                        : ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)
                                : 0U)))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff)))) {
        if ((0U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                             >> 6U)))) {
            if ((4U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                                >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl = 1U;
                        }
                    }
                    if ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                           >> 6U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie = 1U;
                    }
                }
            }
            if ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                 >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir = 1U;
            }
        }
        if ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                             >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data 
            = ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff)
                : ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                    >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)
                    : ((8U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                        >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)
                        : ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                              >> 6U)))
                            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)
                            : ((0x10U == (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                   >> 6U)))
                                ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)
                                : 0U)))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff)))) {
        if ((0U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                             >> 6U)))) {
            if ((4U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                 >> 6U)))) {
                if ((8U != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                     >> 6U)))) {
                    if ((0xcU != (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U)))) {
                        if ((0x10U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                                >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl = 1U;
                        }
                    }
                    if ((0xcU == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                           >> 6U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie = 1U;
                    }
                }
            }
            if ((4U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                 >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir = 1U;
            }
        }
        if ((0U == (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                             >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data = 1U;
        }
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_data = 0U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_read) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_data 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
            [(0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                           >> 8U))];
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 1U;
                    }
                    if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 1U;
                    }
                }
            }
            if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 1U;
                    }
                }
                if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 1U;
                    }
                }
            }
        }
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_read 
            = (IData)(((~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff) 
                       & (0x100U == (0xf00U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U]))));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data 
            = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                ? 0U : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                         ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                             ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? 0U : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff))
                             : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))
                         : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                             ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? ((0x70000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                 << 0xfU)) 
                                    | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff)))
                                 : ((0x70000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                                 << 0xeU)) 
                                    | (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))))
                             : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U])
                                 ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rx_fifo_empty) 
                                     << 0x1fU) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_data))
                                 : ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count)) 
                                    << 0x1fU)))));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_read = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag = 1U;
                    }
                    if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag = 1U;
                    }
                }
            }
            if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag = 1U;
                    }
                }
                if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                  >> 8U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag = 1U;
                    }
                }
            }
        }
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_read 
            = (IData)(((~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff) 
                       & (0x100U == (0xf00U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U]))));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data 
            = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                ? 0U : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                         ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                             ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? 0U : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff))
                             : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))
                         : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                             ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? ((0x70000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                                 << 0xfU)) 
                                    | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff)))
                                 : ((0x70000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                                 << 0xeU)) 
                                    | (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))))
                             : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U])
                                 ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rx_fifo_empty) 
                                     << 0x1fU) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_data))
                                 : ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count)) 
                                    << 0x1fU)))));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_read = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel)
            ? (((QData)((IData)(((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                                 >> 8U)))
                                  ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data
                                  : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                             >> 1U))))) 
                << 1U) | (QData)((IData)((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))))
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel)
                ? (((QData)((IData)(((1U == (0xfU & 
                                             (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                              >> 8U)))
                                      ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data
                                      : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                                 >> 1U))))) 
                    << 1U) | (QData)((IData)((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff)))))
                : 0ULL));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                      >> 0xdU)))) {
            if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 1U;
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_read 
            = (IData)(((~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff) 
                       & (0x1300U == (0x3fc0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U]))));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        } else if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
            if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data 
                        = ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                            ? 0U : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))));
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data 
                    = ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                        ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                            ? 0U : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))))
                        : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                            ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                             ? 0U : 
                                            (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff) 
                                              << 0x1fU) 
                                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_data))))
                                : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                             ? 0U : 
                                            ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                             << 0x1eU))))
                            : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                ? 0U : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xf0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                      << 0xcU)) 
                                                  | (0xfU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))))))));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data 
                = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                    ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                        ? 0U : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                 ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff)))))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff))))))
                                 : 0U)) : ((0x400U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                            ? ((0x200U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                ? (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode))))
                                                : (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id)))))
                                            : ((0x200U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))));
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_read = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                      >> 0xdU)))) {
            if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 1U;
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_read 
            = (IData)(((~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff) 
                       & (0x1300U == (0x3fc0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U]))));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        } else if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
            if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data 
                        = ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                            ? 0U : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))));
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data 
                    = ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                        ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                            ? 0U : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))))
                        : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                            ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                             ? 0U : 
                                            (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff) 
                                              << 0x1fU) 
                                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_data))))
                                : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                             ? 0U : 
                                            ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                             << 0x1eU))))
                            : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                ? 0U : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xf0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                      << 0xcU)) 
                                                  | (0xfU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))))))));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data 
                = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                    ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                        ? 0U : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                 ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff)))))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff))))))
                                 : 0U)) : ((0x400U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                            ? ((0x200U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                ? (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode))))
                                                : (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id)))))
                                            : ((0x200U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))));
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_read = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel)
            ? (((QData)((IData)(((0x4cU == (0xffU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                             >> 6U)))
                                  ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data
                                  : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                             >> 1U))))) 
                << 1U) | (QData)((IData)((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))))
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel)
                ? (((QData)((IData)(((0x4cU == (0xffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                   >> 6U)))
                                      ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data
                                      : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                                 >> 1U))))) 
                    << 1U) | (QData)((IData)((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))))
                : 0ULL));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete = 0U;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 4U) & (0U != (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete) 
               | (3U & ((IData)(1U) << (1U & ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                                              - (IData)(1U))))));
    }
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 5U) & (0U != (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                 >> 2U))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete) 
               | (3U & ((IData)(1U) << (1U & ((3U & 
                                               ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                                >> 2U)) 
                                              - (IData)(1U))))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim = 0U;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 6U) & (0U != (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim) 
               | (3U & ((IData)(1U) << (1U & ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i)) 
                                              - (IData)(1U))))));
    }
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
          >> 7U) & (0U != (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i) 
                                 >> 2U))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim) 
               | (3U & ((IData)(1U) << (1U & ((3U & 
                                               ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i) 
                                                >> 2U)) 
                                              - (IData)(1U))))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_next 
        = (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
                       ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                           ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                               : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))
                           : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)
                               : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : ((0xff00U 
                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                              >> 5U)) 
                                          | (0xffU 
                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff))))
                                   : ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((0xff00U 
                                           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff) 
                                              << 1U)) 
                                          | (0xffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U)))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)))))
                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_next 
        = (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie)
                       ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                           ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                               : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                           : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                               : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : ((0xff00U 
                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                              >> 5U)) 
                                          | (0xffU 
                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))))
                                   : ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((0xff00U 
                                           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff) 
                                              << 1U)) 
                                          | (0xffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U)))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))))
                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_next 
        = (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl)
                       ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                           ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                               : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff))
                           : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                               ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)
                               : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                   ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))
                                       : ((0xff00U 
                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                              >> 5U)) 
                                          | (0xffU 
                                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff))))
                                   : ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                       ? ((0xff00U 
                                           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff) 
                                              << 1U)) 
                                          | (0xffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                                >> 6U)))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff)))))
                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (1U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                     ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                         ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                            >> 6U) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff))
                     : vlSelf->pcore_tb__DOT__gpio_io)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (2U & (((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                             >> 7U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                       >> 1U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 1U)) 
                    << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xfbU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (4U & (((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                             >> 8U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                       >> 2U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 2U)) 
                    << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (8U & (((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                             >> 9U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                       >> 3U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 3U)) 
                    << 3U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xefU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xaU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 4U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 4U)) << 4U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xdfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xbU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 5U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 5U)) << 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0xbfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xcU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 6U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 6U)) << 6U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next 
        = ((0x7fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                >> 0xdU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff) 
                                            >> 7U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 7U)) << 7U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (1U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                     ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                         ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                            >> 6U) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff))
                     : (vlSelf->pcore_tb__DOT__gpio_io 
                        >> 8U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (2U & (((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                             >> 7U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                       >> 1U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 9U)) 
                    << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xfbU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (4U & (((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                             >> 8U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                       >> 2U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 0xaU)) 
                    << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (8U & (((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                             >> 9U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                       >> 3U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 0xbU)) 
                    << 3U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xefU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xaU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 4U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0xcU)) << 4U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xdfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xbU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 5U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0xdU)) << 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0xbfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xcU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 6U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0xeU)) << 6U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next 
        = ((0x7fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                >> 0xdU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff) 
                                            >> 7U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0xfU)) << 7U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (1U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                     ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                         ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                            >> 6U) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff))
                     : (vlSelf->pcore_tb__DOT__gpio_io 
                        >> 0x10U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (2U & (((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                             >> 7U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                       >> 1U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 0x11U)) 
                    << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xfbU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (4U & (((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                             >> 8U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                       >> 2U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 0x12U)) 
                    << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (8U & (((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                      ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                          ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                             >> 9U) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                       >> 3U)) : (vlSelf->pcore_tb__DOT__gpio_io 
                                                  >> 0x13U)) 
                    << 3U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xefU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xaU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 4U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0x14U)) << 4U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xdfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xbU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 5U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0x15U)) << 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0xbfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xcU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 6U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0x16U)) << 6U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next 
        = ((0x7fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff))
                         ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data)
                             ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                >> 0xdU) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff) 
                                            >> 7U))
                         : (vlSelf->pcore_tb__DOT__gpio_io 
                            >> 0x17U)) << 7U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_data;
    __Vtemp_h1132ed83__0 = ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                             ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                 ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                     ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 6U))
                                         : 0U) : ((4U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                                   ? 0U
                                                   : 
                                                  ((0xffff0000U 
                                                    & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                        << 0x1aU) 
                                                       | (0x3ff0000U 
                                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                             >> 6U)))) 
                                                   | (0xffffU 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data))))
                                 : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                     ? 0U : ((4U & 
                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                              ? 0U : 
                                             ((0xff000000U 
                                               & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   << 0x1aU) 
                                                  | (0x3000000U 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                        >> 6U)))) 
                                              | (0xffffffU 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data)))))
                             : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                 ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                     ? 0U : ((4U & 
                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                              ? 0U : 
                                             ((0xff000000U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data) 
                                              | ((0xff0000U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                     >> 6U)) 
                                                 | (0xffffU 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data)))))
                                 : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                     ? ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                         ? ((0xffff0000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data) 
                                            | (0xffffU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                  >> 6U)))
                                         : ((0xffff0000U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data) 
                                            | ((0xff00U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U)) 
                                               | (0xffU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data))))
                                     : ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])
                                         ? ((0xffffff00U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data) 
                                            | (0xffU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                  >> 6U)))
                                         : 0U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data 
        = __Vtemp_h1132ed83__0;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
            ? (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                     >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
            ? (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                     >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_next 
        = (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                           << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                        >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                      >> 6U)));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
            ? (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                     >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
            ? (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                     >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_next 
        = (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                           << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                        >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                      >> 6U)));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_next 
            = (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_next 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_next 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_data_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_data)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
            ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                         >> 0x12U)) | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1)
            ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                           >> 0xeU)) | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                 >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0)
            ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                           >> 0xeU)) | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                 >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_next 
        = (0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                          << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                       >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_cs_id_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_cs_default_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_cs_mode_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_next 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_next 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_data_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_data)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
            ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                         >> 0x12U)) | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1)
            ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                           >> 0xeU)) | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                 >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0)
            ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                           >> 0xeU)) | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                 >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_next 
        = (0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                          << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                       >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_cs_id_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_cs_default_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_cs_mode_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff) 
            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active)) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart) 
            & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff))) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending)) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)) 
                    & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                          ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (2U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 1U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                       >> 1U))) << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xfbU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (4U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 2U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                       >> 2U))) << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (8U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                         >> 3U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                       >> 3U))) << 3U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xefU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (0x10U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                            >> 4U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                          >> 4U))) 
                       << 4U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xdfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (0x20U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                            >> 5U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                          >> 5U))) 
                       << 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0xbfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (0x40U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                            >> 6U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                          >> 6U))) 
                       << 6U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next 
        = ((0x7fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next)) 
           | (0x80U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff) 
                            >> 7U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)) 
                                          >> 7U))) 
                       << 7U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)) 
                    & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                          ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (2U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 1U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                       >> 1U))) << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xfbU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (4U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 2U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                       >> 2U))) << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (8U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                         >> 3U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                       >> 3U))) << 3U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xefU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (0x10U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                            >> 4U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                          >> 4U))) 
                       << 4U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xdfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (0x20U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                            >> 5U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                          >> 5U))) 
                       << 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0xbfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (0x40U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                            >> 6U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                          >> 6U))) 
                       << 6U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next 
        = ((0x7fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next)) 
           | (0x80U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff) 
                            >> 7U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)) 
                                          >> 7U))) 
                       << 7U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)) 
                    & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                          ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (2U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 1U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                       >> 1U))) << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xfbU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (4U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 2U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                       >> 2U))) << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (8U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                         >> 3U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                        ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                       >> 3U))) << 3U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xefU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (0x10U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                            >> 4U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                          >> 4U))) 
                       << 4U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xdfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (0x20U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                            >> 5U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                          >> 5U))) 
                       << 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0xbfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (0x40U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                            >> 6U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                          >> 6U))) 
                       << 6U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next 
        = ((0x7fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next)) 
           | (0x80U & (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff) 
                            >> 7U)) & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next) 
                                           ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)) 
                                          >> 7U))) 
                       << 7U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel)
            ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req)
                ? (1ULL | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                                           [(0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 8U))])) 
                           << 1U)) : 0ULL) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel)
                                               ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff
                                               : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel)
                                                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff
                                                   : 
                                                  (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel) 
                                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel))
                                                    ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus
                                                    : 
                                                   (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel) 
                                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel))
                                                     ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus
                                                     : 
                                                    (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                                                      | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                                         | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                                            | (IData)(vlSelf->__VdfgTmp_hf0169590__0))))
                                                      ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus
                                                      : 0ULL))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[0U] 
        = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                   >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[1U] 
        = (IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[2U] 
        = (IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))) 
                   >> 0x20U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl 
        = ((0x78U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff) 
           | (((IData)((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U)))) << 2U) 
              | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush) 
                  << 1U) | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu)))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd 
        = ((0xf8U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                     >> 0xcU)) | ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff) 
                                  | (((IData)(vlSelf->__VdfgTmp_hef7c3d40__0) 
                                      << 1U) | (1U 
                                                & ((0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                        >> 3U)))
                                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword = 0U;
    if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 0xaU)))) {
            if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word 
                    = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                               >> 1U));
            }
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                          >> 9U)))) {
                if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                    if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                            = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                  >> 0x11U)));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                        = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                              >> 1U)));
                }
            }
        }
    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                        = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                              >> 0x11U)));
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                    = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                          >> 1U)));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte = 0U;
    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                  >> 0xbU)))) {
        if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                          >> 9U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte 
                    = (0xffU & ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                     ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 0x19U))
                                     : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 0x11U)))
                                 : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                     ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 9U))
                                     : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                                >> 1U)))));
            }
        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte 
                = (0xffU & ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                             ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 0x19U))
                                 : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 0x11U)))
                             : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 9U))
                                 : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                            >> 1U)))));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req) 
            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))
            ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                       >> 1U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff;
    if ((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
               | (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__store_busy))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = 0U;
    } else if ((1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                       >> 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__store_busy)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b 
        = VL_LTS_III(32, vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a, 
                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b 
        = (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
           < vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass 
        = (IData)((((0x10U == (0x78U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff)) 
                   & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff 
                       == vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]) 
                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff 
                         == vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result 
        = ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
            ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)
                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a
                            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))
                    : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)
                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a
                            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))))
            : ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U])
                        : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))
                    : ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           ^ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U])
                        : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a 
                           + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U])))
                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))
                ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))
                    ? 4U : 3U) : (((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 3U))) 
                                   | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)) 
                                      & (0x10U == (0x78U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff))))
                                   ? 4U : 3U));
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))
                ? 2U : 1U);
    } else if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 3U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
        = (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
        = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]);
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
               | (((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 3U))) ? (1U & 
                                               (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                    : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a) 
                  << 5U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
            = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
               | (((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 3U))) ? (1U & 
                                               (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                    : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a) 
                  >> 0x1bU));
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
               | (((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? 0U : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword)))
                    : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword))
                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                        : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                            : 0U))) << 5U));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
            = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
               | (((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? 0U : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword)))
                    : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword))
                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                        : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                            : 0U))) >> 0x1bU));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
                if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save 
                        = (1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 3U)));
                }
            }
        }
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data 
                    = ((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                        : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result);
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data 
        = ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
            ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                ? 0U : ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                         ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next
                         : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata))
            : ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                ? ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                    ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                        << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                     >> 5U)) : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                                 << 0x1bU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                                   >> 5U)))
                : ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))
                    ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                        << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                     >> 5U)) : 0U)));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__5(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__5\n"); );
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hbf29b99b__0;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hbf29b99b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfed56884__0;
    __VdfgTmp_hfed56884__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc5088954__0;
    __VdfgTmp_hc5088954__0 = 0;
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)) 
           & (((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                           >> 0x14U)) == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 0xfU))) 
                & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                    >> 2U) & (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 0x14U))))) 
               & ((IData)((0U != (0x802U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req))) 
              | ((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                             >> 0x19U)) == (0x1fU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 0xfU))) 
                  & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 2U) & (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                >> 0x19U))))) 
                 & ((IData)((0U != (0x3000402U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    vlSelf->__VdfgTmp_hceefb3fb__0 = (((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 0x19U)) 
                                       == (0x1fU & 
                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      >> 0x19U)))));
    vlSelf->__VdfgTmp_h308c3a77__0 = (((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 0x14U)) 
                                       == (0x1fU & 
                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      >> 0x14U)))));
    __VdfgTmp_hfed56884__0 = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard) 
                              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hbf29b99b__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data 
        = ((IData)(vlSelf->__VdfgTmp_hceefb3fb__0) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
        = ((IData)(vlSelf->__VdfgTmp_h308c3a77__0) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i 
        = ((IData)(__VdfgTmp_hfed56884__0) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall 
        = ((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hbf29b99b__0) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__store_busy));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
        = ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
        = ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
        = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                             >> 5U)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_next 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_next 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_next 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_next 
            = (7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                >> 0x1eU)));
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_next 
            = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                     >> 0x1fU));
        if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1) {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                    : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2);
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                    : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1);
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2;
            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_next 
            = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                     >> 0x1fU));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
            << 0x1fU) | ((0x40000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)) 
                             - (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                                   >> 2U) 
                                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                     >> 0x1fU)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))), 
                      VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                             ((6U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output 
        = ((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                           >> 4U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
            : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
               - vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
            << 0x1fU) | ((0x40000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgTmp_h267a80af__0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0 
        = (1U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                          >> 0x1fU)) ^ (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
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
                                                 >> 0x1fU))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
        = ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
            : (~ ((8ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                 >> 0x1dU))))
                   ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                   : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev)));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result 
        = ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
            ? ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? 0U : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                             ? 0U : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                : ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                        : VL_SHIFTRS_III(32,32,5, vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 
                                         (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                    : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           >> (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                        : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           << (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))))
            : ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                         >> 0x20U)))
                        : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                    : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           ^ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                : ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                    ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                           & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output)
                    : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])
                        ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output
                        : 0U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req 
        = (1U & ((~ (IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hbf29b99b__0)) 
                 & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                     >> 2U) | ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                >> 1U) & ((0x800000U 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                           ? ((0x400000U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                               ? ((~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                    >> 0x15U)) 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                             >> 0x20U)))
                                               : ((0x200000U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                                   : 
                                                  (~ (IData)(
                                                             (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                              >> 0x20U)))))
                                           : ((0x400000U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                               ? ((0x200000U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                                   ? 
                                                  (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                                   : 
                                                  (0U 
                                                   != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                               : ((
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                   >> 0x15U) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en = 1ULL;
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffffdULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 1U));
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data)));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 1U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 1U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffffbULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 2U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 1U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 1U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 2U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 2U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffff7ULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 3U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 2U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 2U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 3U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 3U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffffefULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 4U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 3U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 3U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 4U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 4U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffffdfULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 5U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 4U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 4U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 5U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 5U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffffbfULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 6U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 5U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 5U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 6U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 6U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffff7fULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 7U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 6U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 6U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 7U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 7U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffeffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 8U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 7U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 7U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 8U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 8U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffdffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 9U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 8U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 8U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 9U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                        >> 9U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffffbffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0xaU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 9U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 9U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xaU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xaU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffff7ffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0xbU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xaU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xaU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xbU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xbU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffefffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0xcU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xbU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xbU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xcU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xcU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffdfffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0xdU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xcU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xcU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xdU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xdU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffffbfffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0xeU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xdU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xdU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xeU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xeU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffff7fffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0xfU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xeU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xeU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0xfU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                          >> 0xfU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffeffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x10U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0xfU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0xfU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x10U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x10U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffdffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x11U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x10U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x10U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x11U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x11U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fffbffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x12U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x11U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x11U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x12U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x12U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fff7ffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x13U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x12U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x12U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x13U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x13U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffefffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x14U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x13U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x13U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x14U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x14U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffdfffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x15U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x14U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x14U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x15U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x15U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ffbfffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x16U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x15U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x15U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x16U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x16U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1ff7fffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x17U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x16U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x16U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x17U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x17U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1feffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x18U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x17U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x17U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x18U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x18U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fdffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x19U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x18U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x18U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x19U)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x19U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1fbffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x1aU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x19U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x19U))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1aU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1aU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1f7ffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x1bU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1aU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1aU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1bU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1bU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1efffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x1cU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1bU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1bU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1cU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1cU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1dfffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x1dU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1cU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1cU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1dU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1dU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x1bfffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x1eU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1dU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1dU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1eU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1eU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0x17fffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x1fU));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1eU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                 >> 0x1eU))));
    }
    pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0 
        = (1U & ((9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                             >> 0x1fU)) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                                           >> 0x1fU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
        = ((0xffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en) 
           | ((QData)((IData)(pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____Vlvbound_h4d69f270__0)) 
              << 0x20U));
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en 
                       >> 0x1fU)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result 
            = (0x3fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result) 
                        + (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data 
                           >> 0x1fU)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2))
            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1
            : 0U);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 1U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 1U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 2U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 2U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 3U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 3U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 4U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 4U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 5U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 5U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 6U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 6U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 7U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 7U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 8U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 8U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 9U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                     ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                        << 9U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0xaU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                          << 0xaU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0xbU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                          << 0xbU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0xcU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                          << 0xcU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0xdU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                          << 0xdU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0xeU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                          << 0xeU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0xfU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                          << 0xfU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x10U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x10U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x11U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x11U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x12U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x12U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x13U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x13U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x14U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x14U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x15U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x15U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x16U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x16U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x17U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x17U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x18U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x18U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x19U))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x19U))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x1aU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x1aU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x1bU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x1bU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x1cU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x1cU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x1dU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x1dU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                         >> 0x1eU))) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                           << 0x1eU))
            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
        = ((0U != (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2 
                   >> 0x1fU)) ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                 ^ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1 
                                    << 0x1fU)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result);
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    __VdfgTmp_hc5088954__0 = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req)) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
            << 0x1fU) | ((0x40000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush) 
            << 8U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                       << 7U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush) 
                                  << 6U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                             << 5U) 
                                            | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i) 
                                                << 4U) 
                                               | (((IData)(__VdfgTmp_hfed56884__0) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h308c3a77__0) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->__VdfgTmp_hceefb3fb__0)))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req) 
           | (IData)(__VdfgTmp_hc5088954__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if 
        = (((IData)(__VdfgTmp_hc5088954__0) << 3U) 
           | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req) 
               << 2U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0) 
                          << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result 
        = (((((((((1ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                 >> 0x1dU)))) 
                  | (2ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                   >> 0x1dU))))) 
                 | (3ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))) 
                | (4ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                 >> 0x1dU))))) 
               | (5ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU))))) 
              | (6ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))) 
             | (((7ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))) 
                 | (8ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))) 
                | (9ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                 >> 0x1dU)))))) 
            | (0xaULL == (0x1ffffffffULL & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU)))))
            ? ((1ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU))))
                ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                    << 1U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                : ((2ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))
                    ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                        << 2U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                    : ((3ULL == (0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    << 3U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                      >> 0x1dU))))
                        ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                            << 3U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : ((4ULL == (0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                   >> 0x1dU))))
                            ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                               & (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                            : ((5ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))
                                ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                   | (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                : ((6ULL == (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                   >> 0x1dU))))
                                    ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       ^ (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                    : ((((7ULL == (0x1ffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                       << 3U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                         >> 0x1dU)))) 
                                         | (8ULL == 
                                            (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                   >> 0x1dU))))) 
                                        | (9ULL == 
                                           (0x1ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU)))))
                                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result)
                                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))))))))
            : (((((((((0xbULL == (0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))) 
                      | (0xcULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))) 
                     | (0xdULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                     << 3U) | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))) 
                    | (0xeULL == (0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU))))) 
                   | (0xfULL == (0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    << 3U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                      >> 0x1dU))))) 
                  | (0x10ULL == (0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    << 3U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                      >> 0x1dU))))) 
                 | (0x11ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                     >> 0x1dU))))) 
                | ((0x12ULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                     >> 0x1dU)))) 
                   | (0x13ULL == (0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU))))))
                ? ((0xbULL == (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU))))
                    ? ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                      >> 0x20U))) ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                        : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                    : ((0xcULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                     << 3U) | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))
                        ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                            : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                        : ((0xdULL == (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU))))
                            ? ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                            : ((0xeULL == (0x1ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                 >> 0x1dU))))
                                ? (((- (IData)((1U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                : ((0xfULL == (0x1ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                     >> 0x1dU))))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                    : ((0x10ULL == 
                                        (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))
                                        ? (0xffffU 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                        : ((0x11ULL 
                                            == (0x1ffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    << 3U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                      >> 0x1dU))))
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)) 
                                               | ((0x1fU 
                                                   >= 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                                   ? 
                                                  (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                                   : 0U))
                                            : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)) 
                                               | ((0x1fU 
                                                   >= 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                                   ? 
                                                  (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                                   : 0U)))))))))
                : (((((((((0x14ULL == (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU)))) 
                          | (0x15ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU))))) 
                         | ((0x16ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU)))) 
                            | (0x17ULL == (0x1ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                 >> 0x1dU)))))) 
                        | ((0x1cULL == (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))) 
                           | (0x1dULL == (0x1ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                >> 0x1dU)))))) 
                       | ((0x18ULL == (0x1ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                           << 3U) | 
                                          ((QData)((IData)(
                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                           >> 0x1dU)))) 
                          | (0x19ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU)))))) 
                      | ((0x1aULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU)))) 
                         | (0x1bULL == (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU)))))) 
                     | (0x1eULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))) 
                    | (0x20ULL == (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                     << 3U) | ((QData)((IData)(
                                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                               >> 0x1dU)))))
                    ? ((0x14ULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))
                        ? (((- (IData)((0U != (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                               >> 0x18U)))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                             >> 0x10U))))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                                >> 8U))))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))))))))
                        : ((0x15ULL == (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                              >> 0x1dU))))
                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                    >> 8U)) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 0x18U))))
                            : (((0x16ULL == (0x1ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                   >> 0x1dU)))) 
                                | (0x17ULL == (0x1ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                     >> 0x1dU)))))
                                ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                   & (~ ((0x1fU >= 
                                          (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                          ? ((IData)(1U) 
                                             << (0x1fU 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                          : 0U))) : 
                               (((0x1cULL == (0x1ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))) 
                                 | (0x1dULL == (0x1ffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                    << 3U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                      >> 0x1dU)))))
                                 ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                    | ((0x1fU >= (0x1fU 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                        ? ((IData)(1U) 
                                           << (0x1fU 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                        : 0U)) : ((
                                                   (0x18ULL 
                                                    == 
                                                    (0x1ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                           >> 0x1dU)))) 
                                                   | (0x19ULL 
                                                      == 
                                                      (0x1ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                           << 3U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                             >> 0x1dU)))))
                                                   ? 
                                                  (0U 
                                                   != 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                    & ((0x1fU 
                                                        >= 
                                                        (0x1fU 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                                        : 0U)))
                                                   : 
                                                  (((0x1aULL 
                                                     == 
                                                     (0x1ffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                          << 3U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                            >> 0x1dU)))) 
                                                    | (0x1bULL 
                                                       == 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                              >> 0x1dU)))))
                                                    ? 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                    ^ 
                                                    ((0x1fU 
                                                      >= 
                                                      (0x1fU 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                                      : 0U))
                                                    : 
                                                   ((0x1eULL 
                                                     == 
                                                     (0x1ffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                          << 3U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                            >> 0x1dU))))
                                                     ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result)))))))
                    : ((0x1fULL == (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result 
                           >> 1U) : 0U))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
        = ((((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
              ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                          >> 0x14U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data) 
            << 5U) | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
        = ((((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
              ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                          >> 0x14U)) : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data) 
            >> 0x1bU) | ((IData)((((QData)((IData)(
                                                   ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                       >> 5U)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                                   >> 5U)))))) 
                         << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
        = (((IData)((((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        << 0x1bU) | 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                        >> 5U)))) << 0x20U) 
                     | (QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                         << 0x1bU) 
                                        | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 5U)))))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      << 0x1bU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                        >> 5U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                                    >> 5U))))) 
                                  >> 0x20U)) << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
        = ((0x1ffe0U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                         << 0xcU) | (0xfe0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                               >> 0x14U)))) 
           | ((IData)(((((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           << 0x1bU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                             >> 5U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                       << 0x1bU) 
                                                      | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                         >> 5U))))) 
                       >> 0x20U)) >> 0x1bU));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
        = ((0xf8000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                        << 3U)) | ((0x7000U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                               << 7U)) 
                                   | ((0xf80U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 0x11U)) 
                                      | ((0x78U & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                   >> 0xcU)) 
                                         | ((4U & (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                         >> 0x13U)))
                                                     ? 
                                                    ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                                     >> 1U)
                                                     : 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                     >> 3U)) 
                                                   << 2U)) 
                                            | (3U & 
                                               (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                >> 1U)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff;
    if ((1U & ((IData)((0U != (0xeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)))) 
               | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)) 
                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0xeU;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff;
    if ((1U & ((IData)((0U != (0xcU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)))) 
               | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if)) 
                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next = 0U;
    } else if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync) 
                & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data;
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U] 
        = (IData)((((QData)((IData)(((0U != (7U & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                   >> 1U)))
                                      ? ((IData)((0U 
                                                  != 
                                                  (6U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                          ? (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
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
                                          : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                    >> 5U))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U] 
        = (IData)(((((QData)((IData)(((0U != (7U & 
                                              (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                               >> 1U)))
                                       ? ((IData)((0U 
                                                   != 
                                                   (6U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                           ? (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
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
                                           : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                     >> 5U))))) 
                   >> 0x20U));
    if ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
            = (1U | vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U];
    } else if ((0x10U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U];
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next) 
            << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    if ((0x100U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next = 0U;
    } else if ((0x80U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
}
