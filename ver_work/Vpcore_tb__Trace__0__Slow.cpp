// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpcore_tb__Syms.h"


VL_ATTR_COLD void Vpcore_tb___024root__trace_init_sub__TOP__0(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"reset", false,-1);
    tracep->pushNamePrefix("pcore_tb ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"reset", false,-1);
    tracep->declBit(c+1,"irq_soft", false,-1);
    tracep->declBit(c+2,"uart_rx", false,-1);
    tracep->declBit(c+731,"uart_tx", false,-1);
    tracep->declBit(c+1424,"spi_clk", false,-1);
    tracep->declBit(c+1425,"spi_cs", false,-1);
    tracep->declBit(c+1426,"spi_mosi", false,-1);
    tracep->declBit(c+3,"spi_miso", false,-1);
    tracep->declArray(c+4,"firmware", false,-1, 1023,0);
    tracep->declArray(c+36,"max_cycles", false,-1, 1023,0);
    tracep->declArray(c+499,"main_time", false,-1, 1023,0);
    tracep->declBus(c+531,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+1427,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+532,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+1428,"r_sg", false,-1, 7,0);
    tracep->declBus(c+1429,"r_an", false,-1, 7,0);
    tracep->declBit(c+157,"sig_en", false,-1);
    tracep->declBit(c+158,"halt_en", false,-1);
    tracep->declArray(c+1430,"signature_file", false,-1, 1023,0);
    tracep->declBus(c+68,"write_sig", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1,"irq_soft_i", false,-1);
    tracep->declBus(c+732,"spi_clk_o", false,-1, 1,0);
    tracep->declBus(c+733,"spi_cs_o", false,-1, 1,0);
    tracep->declBus(c+1462,"spi_miso_i", false,-1, 1,0);
    tracep->declBus(c+734,"spi_mosi_o", false,-1, 1,0);
    tracep->declBus(c+531,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+1427,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+532,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+69,"uart_rxd_i", false,-1, 1,0);
    tracep->declBus(c+735,"uart_txd_o", false,-1, 1,0);
    tracep->pushNamePrefix("mcu_top_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1,"irq_soft_i", false,-1);
    tracep->declBus(c+732,"spi_clk_o", false,-1, 1,0);
    tracep->declBus(c+733,"spi_cs_o", false,-1, 1,0);
    tracep->declBus(c+1462,"spi_miso_i", false,-1, 1,0);
    tracep->declBus(c+734,"spi_mosi_o", false,-1, 1,0);
    tracep->declBus(c+531,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+1427,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+532,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+69,"uart_rxd_i", false,-1, 1,0);
    tracep->declBus(c+735,"uart_txd_o", false,-1, 1,0);
    tracep->pushNamePrefix("if2mem\206 ");
    tracep->declBus(c+533,"addr", false,-1, 31,0);
    tracep->declBit(c+400,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+1389,"r_data", false,-1, 31,0);
    tracep->declBit(c+1390,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+159,"r_data", false,-1, 31,0);
    tracep->declBit(c+160,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe\206 ");
    tracep->declBus(c+1223,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+1224,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+1225,"timer_irq", false,-1);
    tracep->declBit(c+1226,"soft_irq", false,-1);
    tracep->declBit(c+1227,"uart_irq", false,-1);
    tracep->declBit(c+1228,"spi_irq", false,-1);
    tracep->declBit(c+1229,"gpio_irq", false,-1);
    tracep->declBit(c+1230,"sw_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+534,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+535,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+166,"dmem_sel", false,-1);
    tracep->declBit(c+167,"uart0_sel", false,-1);
    tracep->declBit(c+168,"uart1_sel", false,-1);
    tracep->declBit(c+169,"clint_sel", false,-1);
    tracep->declBit(c+170,"plic_sel", false,-1);
    tracep->declBit(c+1463,"bmem_sel", false,-1);
    tracep->declBit(c+171,"spi0_sel", false,-1);
    tracep->declBit(c+172,"spi1_sel", false,-1);
    tracep->declBit(c+173,"gpioA_sel", false,-1);
    tracep->declBit(c+174,"gpioB_sel", false,-1);
    tracep->declBit(c+175,"gpioC_sel", false,-1);
    tracep->declBit(c+176,"gpsw_sel", false,-1);
    tracep->declBit(c+177,"gpled_sel", false,-1);
    tracep->declBit(c+178,"store_busy", false,-1);
    tracep->declBit(c+1464,"lsu_flush", false,-1);
    tracep->declBit(c+736,"irq_uart", false,-1);
    tracep->declBit(c+737,"irq_spi", false,-1);
    tracep->declBit(c+536,"irq_gpio", false,-1);
    tracep->declBit(c+537,"irq_sw", false,-1);
    tracep->declBit(c+538,"irq_clint_timer", false,-1);
    tracep->declBit(c+539,"irq_plic_target_0", false,-1);
    tracep->declBit(c+540,"irq_plic_target_1", false,-1);
    tracep->pushNamePrefix("mem2dbus\206 ");
    tracep->declBus(c+101,"r_data", false,-1, 31,0);
    tracep->declBit(c+102,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus\206 ");
    tracep->declBus(c+179,"r_data", false,-1, 31,0);
    tracep->declBit(c+180,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus\206 ");
    tracep->declBus(c+541,"r_data", false,-1, 31,0);
    tracep->declBit(c+542,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus\206 ");
    tracep->declBus(c+543,"r_data", false,-1, 31,0);
    tracep->declBit(c+544,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus\206 ");
    tracep->declBus(c+181,"r_data", false,-1, 31,0);
    tracep->declBit(c+182,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus\206 ");
    tracep->declBus(c+183,"r_data", false,-1, 31,0);
    tracep->declBit(c+184,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2clint_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_o\206 ");
    tracep->declBus(c+541,"r_data", false,-1, 31,0);
    tracep->declBit(c+542,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+169,"clint_sel_i", false,-1);
    tracep->pushNamePrefix("clint2csr_o\206 ");
    tracep->declBus(c+534,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+535,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+538,"clint_timer_irq_o", false,-1);
    tracep->declBus(c+185,"r_data", false,-1, 31,0);
    tracep->declBus(c+186,"w_data", false,-1, 31,0);
    tracep->declBus(c+187,"addr_offset", false,-1, 15,0);
    tracep->declBit(c+188,"r_req", false,-1);
    tracep->declBit(c+189,"w_req", false,-1);
    tracep->declQuad(c+545,"mtime_ff", false,-1, 63,0);
    tracep->declQuad(c+190,"mtime_next", false,-1, 63,0);
    tracep->declQuad(c+547,"mtimecmp_ff", false,-1, 63,0);
    tracep->declQuad(c+192,"mtimecmp_next", false,-1, 63,0);
    tracep->declBit(c+194,"mtime_lo_wr_flag", false,-1);
    tracep->declBit(c+195,"mtime_hi_wr_flag", false,-1);
    tracep->declBit(c+196,"mtimecmp_lo_wr_flag", false,-1);
    tracep->declBit(c+197,"mtimecmp_hi_wr_flag", false,-1);
    tracep->declBit(c+538,"timer_overflow_ff", false,-1);
    tracep->declBit(c+549,"timer_overflow_next", false,-1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+534,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+535,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_ff\206 ");
    tracep->declBus(c+541,"r_data", false,-1, 31,0);
    tracep->declBit(c+542,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus_interconnect_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("lsu2dbus_i\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_o\206 ");
    tracep->declBus(c+159,"r_data", false,-1, 31,0);
    tracep->declBit(c+160,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2dbus_i\206 ");
    tracep->declBus(c+101,"r_data", false,-1, 31,0);
    tracep->declBit(c+102,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_i\206 ");
    tracep->declBus(c+179,"r_data", false,-1, 31,0);
    tracep->declBit(c+180,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_i\206 ");
    tracep->declBus(c+541,"r_data", false,-1, 31,0);
    tracep->declBit(c+542,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_i\206 ");
    tracep->declBus(c+543,"r_data", false,-1, 31,0);
    tracep->declBit(c+544,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_i\206 ");
    tracep->declBus(c+181,"r_data", false,-1, 31,0);
    tracep->declBit(c+182,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_i\206 ");
    tracep->declBus(c+183,"r_data", false,-1, 31,0);
    tracep->declBit(c+184,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+166,"dmem_sel_o", false,-1);
    tracep->declBit(c+167,"uart0_sel_o", false,-1);
    tracep->declBit(c+168,"uart1_sel_o", false,-1);
    tracep->declBit(c+169,"clint_sel_o", false,-1);
    tracep->declBit(c+170,"plic_sel_o", false,-1);
    tracep->declBit(c+171,"spi0_sel_o", false,-1);
    tracep->declBit(c+172,"spi1_sel_o", false,-1);
    tracep->declBit(c+173,"gpioA_sel_o", false,-1);
    tracep->declBit(c+174,"gpioB_sel_o", false,-1);
    tracep->declBit(c+175,"gpioC_sel_o", false,-1);
    tracep->declBit(c+176,"gpsw_sel_o", false,-1);
    tracep->declBit(c+177,"gpled_sel_o", false,-1);
    tracep->pushNamePrefix("dbus2peri_o\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+75,"dbus_addr", false,-1, 31,0);
    tracep->declBit(c+76,"ld_req", false,-1);
    tracep->declBit(c+77,"st_req", false,-1);
    tracep->declBit(c+198,"dbus_req", false,-1);
    tracep->declBit(c+78,"dmem_addr_match", false,-1);
    tracep->declBit(c+79,"uart0_addr_match", false,-1);
    tracep->declBit(c+80,"uart1_addr_match", false,-1);
    tracep->declBit(c+81,"clint_addr_match", false,-1);
    tracep->declBit(c+82,"plic_addr_match", false,-1);
    tracep->declBit(c+83,"spi0_addr_match", false,-1);
    tracep->declBit(c+84,"spi1_addr_match", false,-1);
    tracep->declBit(c+85,"gpioA_addr_match", false,-1);
    tracep->declBit(c+86,"gpioB_addr_match", false,-1);
    tracep->declBit(c+87,"gpioC_addr_match", false,-1);
    tracep->declBit(c+88,"gpsw_addr_match", false,-1);
    tracep->declBit(c+89,"gpled_addr_match", false,-1);
    tracep->declBit(c+166,"dmem_sel", false,-1);
    tracep->declBit(c+199,"uart_sel", false,-1);
    tracep->declBit(c+167,"uart0_sel", false,-1);
    tracep->declBit(c+168,"uart1_sel", false,-1);
    tracep->declBit(c+169,"clint_sel", false,-1);
    tracep->declBit(c+170,"plic_sel", false,-1);
    tracep->declBit(c+171,"spi0_sel", false,-1);
    tracep->declBit(c+172,"spi1_sel", false,-1);
    tracep->declBit(c+200,"spi_sel", false,-1);
    tracep->declBit(c+173,"gpioA_sel", false,-1);
    tracep->declBit(c+174,"gpioB_sel", false,-1);
    tracep->declBit(c+175,"gpioC_sel", false,-1);
    tracep->declBit(c+176,"gpsw_sel", false,-1);
    tracep->declBit(c+177,"gpled_sel", false,-1);
    tracep->declBit(c+201,"gpio_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio_top_module ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+173,"gpioA_sel_i", false,-1);
    tracep->declBit(c+174,"gpioB_sel_i", false,-1);
    tracep->declBit(c+175,"gpioC_sel_i", false,-1);
    tracep->declBit(c+176,"gpsw_sel_i", false,-1);
    tracep->declBit(c+177,"gpled_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+183,"r_data", false,-1, 31,0);
    tracep->declBit(c+184,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+536,"gpio_irq_o", false,-1);
    tracep->declBit(c+537,"sw_irq_o", false,-1);
    tracep->declBus(c+531,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+1427,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+532,"gp_led_o", false,-1, 15,0);
    tracep->declBit(c+550,"gpioA_irq", false,-1);
    tracep->declBit(c+551,"gpioB_irq", false,-1);
    tracep->declBit(c+552,"gpioC_irq", false,-1);
    tracep->pushNamePrefix("dbusA2gpio\206 ");
    tracep->declBus(c+202,"addr", false,-1, 31,0);
    tracep->declBus(c+203,"w_data", false,-1, 31,0);
    tracep->declBus(c+204,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+205,"w_en", false,-1);
    tracep->declBit(c+206,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioA2dbus\206 ");
    tracep->declBus(c+553,"r_data", false,-1, 31,0);
    tracep->declBit(c+554,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusB2gpio\206 ");
    tracep->declBus(c+207,"addr", false,-1, 31,0);
    tracep->declBus(c+208,"w_data", false,-1, 31,0);
    tracep->declBus(c+209,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+210,"w_en", false,-1);
    tracep->declBit(c+211,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioB2dbus\206 ");
    tracep->declBus(c+555,"r_data", false,-1, 31,0);
    tracep->declBit(c+556,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusC2gpio\206 ");
    tracep->declBus(c+212,"addr", false,-1, 31,0);
    tracep->declBus(c+213,"w_data", false,-1, 31,0);
    tracep->declBus(c+214,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+215,"w_en", false,-1);
    tracep->declBit(c+216,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioC2dbus\206 ");
    tracep->declBus(c+557,"r_data", false,-1, 31,0);
    tracep->declBit(c+558,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusSP2gpio\206 ");
    tracep->declBus(c+217,"addr", false,-1, 31,0);
    tracep->declBus(c+218,"w_data", false,-1, 31,0);
    tracep->declBus(c+219,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBit(c+221,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioSP2dbus\206 ");
    tracep->declBus(c+559,"r_data", false,-1, 31,0);
    tracep->declBit(c+560,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gp_sw_led ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+176,"gpsw_sel_i", false,-1);
    tracep->declBit(c+177,"gpled_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+217,"addr", false,-1, 31,0);
    tracep->declBus(c+218,"w_data", false,-1, 31,0);
    tracep->declBus(c+219,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBit(c+221,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+559,"r_data", false,-1, 31,0);
    tracep->declBit(c+560,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+537,"sw_irq_o", false,-1);
    tracep->declBus(c+1427,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+532,"gp_led_o", false,-1, 15,0);
    tracep->declBit(c+222,"gpled_sel_data", false,-1);
    tracep->declBit(c+223,"sw_sel_ie", false,-1);
    tracep->declBit(c+224,"sw_sel_int_lvl", false,-1);
    tracep->declBus(c+561,"reg_sw_data_ff", false,-1, 15,0);
    tracep->declBus(c+1427,"reg_sw_data_next", false,-1, 15,0);
    tracep->declBus(c+532,"reg_led_data_ff", false,-1, 15,0);
    tracep->declBus(c+103,"reg_led_data_next", false,-1, 15,0);
    tracep->declBus(c+562,"reg_sw_ip_ff", false,-1, 15,0);
    tracep->declBus(c+563,"reg_sw_ip_next", false,-1, 15,0);
    tracep->declBus(c+564,"reg_sw_ie_ff", false,-1, 15,0);
    tracep->declBus(c+104,"reg_sw_ie_next", false,-1, 15,0);
    tracep->declBus(c+565,"reg_sw_int_lvl_ff", false,-1, 15,0);
    tracep->declBus(c+105,"reg_sw_int_lvl_next", false,-1, 15,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+217,"addr", false,-1, 31,0);
    tracep->declBus(c+218,"w_data", false,-1, 31,0);
    tracep->declBus(c+219,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBit(c+221,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+559,"r_data", false,-1, 31,0);
    tracep->declBit(c+560,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+225,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+226,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+227,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+228,"reg_rd_req", false,-1);
    tracep->declBit(c+229,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio_A ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+173,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+202,"addr", false,-1, 31,0);
    tracep->declBus(c+203,"w_data", false,-1, 31,0);
    tracep->declBus(c+204,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+205,"w_en", false,-1);
    tracep->declBit(c+206,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+553,"r_data", false,-1, 31,0);
    tracep->declBit(c+554,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+550,"gpio_irq_o", false,-1);
    tracep->declBus(c+566,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+1465,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+230,"gpio_sel_data", false,-1);
    tracep->declBit(c+231,"gpio_sel_dir", false,-1);
    tracep->declBit(c+232,"gpio_sel_ie", false,-1);
    tracep->declBit(c+233,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+567,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+234,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+568,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+106,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+569,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+235,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+570,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+107,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+571,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+108,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+202,"addr", false,-1, 31,0);
    tracep->declBus(c+203,"w_data", false,-1, 31,0);
    tracep->declBus(c+204,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+205,"w_en", false,-1);
    tracep->declBit(c+206,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+553,"r_data", false,-1, 31,0);
    tracep->declBit(c+554,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+236,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+237,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+238,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+239,"reg_rd_req", false,-1);
    tracep->declBit(c+240,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1466,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1466,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpio_B ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+174,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+207,"addr", false,-1, 31,0);
    tracep->declBus(c+208,"w_data", false,-1, 31,0);
    tracep->declBus(c+209,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+210,"w_en", false,-1);
    tracep->declBit(c+211,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+555,"r_data", false,-1, 31,0);
    tracep->declBit(c+556,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+551,"gpio_irq_o", false,-1);
    tracep->declBus(c+572,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+1467,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+241,"gpio_sel_data", false,-1);
    tracep->declBit(c+242,"gpio_sel_dir", false,-1);
    tracep->declBit(c+243,"gpio_sel_ie", false,-1);
    tracep->declBit(c+244,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+573,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+245,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+574,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+109,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+575,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+246,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+576,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+110,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+577,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+111,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+207,"addr", false,-1, 31,0);
    tracep->declBus(c+208,"w_data", false,-1, 31,0);
    tracep->declBus(c+209,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+210,"w_en", false,-1);
    tracep->declBit(c+211,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+555,"r_data", false,-1, 31,0);
    tracep->declBit(c+556,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+247,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+248,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+249,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+250,"reg_rd_req", false,-1);
    tracep->declBit(c+251,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1466,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1466,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpio_C ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+175,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+212,"addr", false,-1, 31,0);
    tracep->declBus(c+213,"w_data", false,-1, 31,0);
    tracep->declBus(c+214,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+215,"w_en", false,-1);
    tracep->declBit(c+216,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+557,"r_data", false,-1, 31,0);
    tracep->declBit(c+558,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+552,"gpio_irq_o", false,-1);
    tracep->declBus(c+578,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+1468,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+252,"gpio_sel_data", false,-1);
    tracep->declBit(c+253,"gpio_sel_dir", false,-1);
    tracep->declBit(c+254,"gpio_sel_ie", false,-1);
    tracep->declBit(c+255,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+579,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+256,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+580,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+112,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+581,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+257,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+582,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+113,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+583,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+114,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+212,"addr", false,-1, 31,0);
    tracep->declBus(c+213,"w_data", false,-1, 31,0);
    tracep->declBus(c+214,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+215,"w_en", false,-1);
    tracep->declBit(c+216,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+557,"r_data", false,-1, 31,0);
    tracep->declBit(c+558,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+258,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+259,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+260,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+261,"reg_rd_req", false,-1);
    tracep->declBit(c+262,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1466,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1466,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem_top_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_i\206 ");
    tracep->declBus(c+533,"addr", false,-1, 31,0);
    tracep->declBit(c+400,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_o\206 ");
    tracep->declBus(c+1391,"r_data", false,-1, 31,0);
    tracep->declBit(c+1392,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+166,"dmem_sel", false,-1);
    tracep->declBit(c+178,"store_busy", false,-1);
    tracep->pushNamePrefix("exe2mem_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2wrb_o\206 ");
    tracep->declBus(c+101,"r_data", false,-1, 31,0);
    tracep->declBit(c+102,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+738,"c_state", false,-1, 1,0);
    tracep->declBus(c+122,"n_state", false,-1, 1,0);
    tracep->declBit(c+263,"load_req", false,-1);
    tracep->declBit(c+264,"store_req", false,-1);
    tracep->declBit(c+265,"mem_read", false,-1);
    tracep->declBit(c+266,"mem_modify", false,-1);
    tracep->declBit(c+267,"mem_write", false,-1);
    tracep->declBus(c+268,"read_data", false,-1, 31,0);
    tracep->declBus(c+269,"write_data", false,-1, 31,0);
    tracep->declBus(c+115,"changed_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_top_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_o\206 ");
    tracep->declBus(c+533,"addr", false,-1, 31,0);
    tracep->declBit(c+400,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_i\206 ");
    tracep->declBus(c+1389,"r_data", false,-1, 31,0);
    tracep->declBit(c+1390,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i\206 ");
    tracep->declBus(c+159,"r_data", false,-1, 31,0);
    tracep->declBit(c+160,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+178,"store_busy", false,-1);
    tracep->declBit(c+1231,"lsu_flush_o", false,-1);
    tracep->pushNamePrefix("clint2csr_i\206 ");
    tracep->declBus(c+534,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+535,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe_i\206 ");
    tracep->declBus(c+1223,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+1224,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+1225,"timer_irq", false,-1);
    tracep->declBit(c+1226,"soft_irq", false,-1);
    tracep->declBit(c+1227,"uart_irq", false,-1);
    tracep->declBit(c+1228,"spi_irq", false,-1);
    tracep->declBit(c+1229,"gpio_irq", false,-1);
    tracep->declBit(c+1230,"sw_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+487,"instr", false,-1, 31,0);
    tracep->declBus(c+488,"pc", false,-1, 31,0);
    tracep->declBus(c+489,"pc_next", false,-1, 31,0);
    tracep->declBus(c+490,"exc_code", false,-1, 3,0);
    tracep->declBit(c+491,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_next\206 ");
    tracep->declBus(c+492,"instr", false,-1, 31,0);
    tracep->declBus(c+493,"pc", false,-1, 31,0);
    tracep->declBus(c+494,"pc_next", false,-1, 31,0);
    tracep->declBus(c+495,"exc_code", false,-1, 3,0);
    tracep->declBit(c+496,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+401,"exc_req", false,-1);
    tracep->declBit(c+402,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_next\206 ");
    tracep->declBit(c+403,"exc_req", false,-1);
    tracep->declBit(c+404,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+688,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+689,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+690,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+691,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+693,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+694,"st_ops", false,-1, 1,0);
    tracep->declBus(c+695,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+696,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+697,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+698,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+699,"alu_opr1_sel", false,-1);
    tracep->declBit(c+700,"alu_opr2_sel", false,-1);
    tracep->declBit(c+701,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+702,"csr_opr_sel", false,-1);
    tracep->declBus(c+703,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+704,"exc_req", false,-1);
    tracep->declBit(c+705,"rd_wr_req", false,-1);
    tracep->declBit(c+706,"jump_req", false,-1);
    tracep->declBit(c+707,"branch_req", false,-1);
    tracep->declBit(c+708,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_next\206 ");
    tracep->declBus(c+1469,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+1470,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+1471,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+1472,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+1474,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1475,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1476,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1477,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1478,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1479,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1480,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1481,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1482,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1483,"csr_opr_sel", false,-1);
    tracep->declBus(c+1484,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1485,"exc_req", false,-1);
    tracep->declBit(c+1486,"rd_wr_req", false,-1);
    tracep->declBit(c+1487,"jump_req", false,-1);
    tracep->declBit(c+1488,"branch_req", false,-1);
    tracep->declBit(c+1489,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+1342,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1343,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1344,"instr", false,-1, 31,0);
    tracep->declBus(c+1345,"pc", false,-1, 31,0);
    tracep->declBus(c+1346,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1347,"imm", false,-1, 31,0);
    tracep->declBus(c+1348,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1349,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_next\206 ");
    tracep->declBus(c+1490,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1491,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1492,"instr", false,-1, 31,0);
    tracep->declBus(c+1493,"pc", false,-1, 31,0);
    tracep->declBus(c+1494,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1495,"imm", false,-1, 31,0);
    tracep->declBus(c+1496,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1497,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+1350,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+709,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+710,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+711,"st_ops", false,-1, 1,0);
    tracep->declBus(c+712,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+713,"rd_wr_req", false,-1);
    tracep->declBit(c+714,"jump_req", false,-1);
    tracep->declBit(c+715,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_next\206 ");
    tracep->declBus(c+405,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+406,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+407,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+408,"st_ops", false,-1, 1,0);
    tracep->declBus(c+409,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+410,"rd_wr_req", false,-1);
    tracep->declBit(c+411,"jump_req", false,-1);
    tracep->declBit(c+412,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+90,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1351,"pc_next", false,-1, 31,0);
    tracep->declBus(c+413,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_next\206 ");
    tracep->declBus(c+414,"alu_result", false,-1, 31,0);
    tracep->declBus(c+415,"pc_next", false,-1, 31,0);
    tracep->declBus(c+416,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+417,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+418,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+716,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+1352,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+1353,"pc", false,-1, 31,0);
    tracep->declBus(c+1354,"instr", false,-1, 31,0);
    tracep->declBus(c+91,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+1355,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1356,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_next\206 ");
    tracep->declBus(c+419,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+420,"pc", false,-1, 31,0);
    tracep->declBus(c+421,"instr", false,-1, 31,0);
    tracep->declBus(c+422,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+423,"exc_code", false,-1, 3,0);
    tracep->declBit(c+424,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+1357,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1358,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1359,"exc_req", false,-1);
    tracep->declBit(c+1360,"irq_req", false,-1);
    tracep->declBit(c+1361,"csr_rd_req", false,-1);
    tracep->declBit(c+1362,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_next\206 ");
    tracep->declBus(c+425,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+426,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+427,"exc_req", false,-1);
    tracep->declBit(c+428,"irq_req", false,-1);
    tracep->declBit(c+429,"csr_rd_req", false,-1);
    tracep->declBit(c+430,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+584,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+585,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1195,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+270,"w_data", false,-1, 31,0);
    tracep->declBus(c+1393,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+739,"amo_done", false,-1);
    tracep->declBit(c+1232,"ld_req", false,-1);
    tracep->declBit(c+1233,"st_req", false,-1);
    tracep->declBit(c+1234,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+271,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+272,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+273,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+274,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+275,"is_amo", false,-1);
    tracep->declBit(c+276,"amo_flush", false,-1);
    tracep->declBit(c+277,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+159,"r_data", false,-1, 31,0);
    tracep->declBit(c+160,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mem\206 ");
    tracep->declBus(c+533,"addr", false,-1, 31,0);
    tracep->declBit(c+400,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+1389,"r_data", false,-1, 31,0);
    tracep->declBit(c+1390,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+1215,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1216,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+1394,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1395,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1396,"r_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+1235,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+1236,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_next\206 ");
    tracep->declBus(c+1498,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1499,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1500,"r_data", false,-1, 31,0);
    tracep->declBus(c+1501,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_next\206 ");
    tracep->declBus(c+1502,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1503,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_next\206 ");
    tracep->declBus(c+1504,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_next\206 ");
    tracep->declBus(c+1505,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+1237,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1238,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+740,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+431,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb\206 ");
    tracep->declBus(c+278,"rd_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+584,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+278,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+1363,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+1364,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+92,"new_pc_req", false,-1);
    tracep->declBit(c+717,"use_rs1", false,-1);
    tracep->declBit(c+718,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd\206 ");
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+279,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+280,"rd_wr_req", false,-1);
    tracep->declBit(c+281,"lsu_req", false,-1);
    tracep->declBit(c+282,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+1239,"new_pc_req", false,-1);
    tracep->declBit(c+1240,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1241,"wfi_req", false,-1);
    tracep->declBit(c+586,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+741,"div_req", false,-1);
    tracep->declBit(c+742,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+432,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+433,"fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+434,"exe_new_pc_req", false,-1);
    tracep->declBit(c+435,"csr_new_pc_req", false,-1);
    tracep->declBit(c+436,"wfi_req", false,-1);
    tracep->declBit(c+437,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+587,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu\206 ");
    tracep->declBit(c+1242,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop\206 ");
    tracep->declBit(c+438,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+439,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+440,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+441,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+442,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+443,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+444,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+445,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+446,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_pipe_ff\206 ");
    tracep->declBus(c+588,"instr", false,-1, 31,0);
    tracep->declBus(c+589,"pc", false,-1, 31,0);
    tracep->declBus(c+590,"pc_next", false,-1, 31,0);
    tracep->declBus(c+591,"exc_code", false,-1, 3,0);
    tracep->declBit(c+592,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_pipe_ff\206 ");
    tracep->declBit(c+593,"exc_req", false,-1);
    tracep->declBit(c+594,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_pipe_ff\206 ");
    tracep->declBus(c+595,"alu_result", false,-1, 31,0);
    tracep->declBus(c+596,"pc_next", false,-1, 31,0);
    tracep->declBus(c+597,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_pipe_ff\206 ");
    tracep->declBus(c+1196,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1197,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1198,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1199,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1201,"rd_wr_req", false,-1);
    tracep->declBit(c+1202,"jump_req", false,-1);
    tracep->declBit(c+1203,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_pipe_ff\206 ");
    tracep->declBus(c+598,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+599,"pc", false,-1, 31,0);
    tracep->declBus(c+600,"instr", false,-1, 31,0);
    tracep->declBus(c+601,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+602,"exc_code", false,-1, 3,0);
    tracep->declBit(c+603,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_pipe_ff\206 ");
    tracep->declBus(c+604,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+605,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+606,"exc_req", false,-1);
    tracep->declBit(c+607,"irq_req", false,-1);
    tracep->declBit(c+608,"csr_rd_req", false,-1);
    tracep->declBit(c+609,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("lsu2amo_data_i\206 ");
    tracep->declBus(c+271,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+272,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+273,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_i\206 ");
    tracep->declBus(c+274,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+275,"is_amo", false,-1);
    tracep->declBit(c+276,"amo_flush", false,-1);
    tracep->declBit(c+277,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_o\206 ");
    tracep->declBus(c+270,"w_data", false,-1, 31,0);
    tracep->declBus(c+1393,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_o\206 ");
    tracep->declBit(c+739,"amo_done", false,-1);
    tracep->declBit(c+1232,"ld_req", false,-1);
    tracep->declBit(c+1233,"st_req", false,-1);
    tracep->declBit(c+1234,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+271,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+272,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+273,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+274,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+275,"is_amo", false,-1);
    tracep->declBit(c+276,"amo_flush", false,-1);
    tracep->declBit(c+277,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+270,"w_data", false,-1, 31,0);
    tracep->declBus(c+1393,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+739,"amo_done", false,-1);
    tracep->declBit(c+1232,"ld_req", false,-1);
    tracep->declBit(c+1233,"st_req", false,-1);
    tracep->declBit(c+1234,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1243,"ld_req", false,-1);
    tracep->declBit(c+1244,"st_req", false,-1);
    tracep->declBit(c+1245,"rd_wr_req", false,-1);
    tracep->declBus(c+270,"w_data", false,-1, 31,0);
    tracep->declBus(c+1393,"amo_wrb_data", false,-1, 31,0);
    tracep->declBus(c+1204,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1205,"is_amo", false,-1);
    tracep->declBit(c+1206,"is_lr", false,-1);
    tracep->declBus(c+743,"amo_buffer_data_ff", false,-1, 31,0);
    tracep->declBus(c+744,"amo_buffer_addr_ff", false,-1, 31,0);
    tracep->declBus(c+283,"amo_operand_a", false,-1, 31,0);
    tracep->declBus(c+610,"amo_operand_a_ff", false,-1, 31,0);
    tracep->declBus(c+611,"amo_operand_b", false,-1, 31,0);
    tracep->declBus(c+284,"amo_result", false,-1, 31,0);
    tracep->declBit(c+745,"amo_done", false,-1);
    tracep->declBit(c+285,"a_slt_b", false,-1);
    tracep->declBit(c+286,"a_uslt_b", false,-1);
    tracep->declBit(c+1207,"is_sc", false,-1);
    tracep->declBit(c+287,"sc_pass", false,-1);
    tracep->declBit(c+746,"amo_reserve_ff", false,-1);
    tracep->declBit(c+288,"amo_save", false,-1);
    tracep->declBus(c+747,"state", false,-1, 2,0);
    tracep->declBus(c+289,"state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("exe2csr_data_i\206 ");
    tracep->declBus(c+598,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+599,"pc", false,-1, 31,0);
    tracep->declBus(c+600,"instr", false,-1, 31,0);
    tracep->declBus(c+601,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+602,"exc_code", false,-1, 3,0);
    tracep->declBit(c+603,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_i\206 ");
    tracep->declBus(c+604,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+605,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+606,"exc_req", false,-1);
    tracep->declBit(c+607,"irq_req", false,-1);
    tracep->declBit(c+608,"csr_rd_req", false,-1);
    tracep->declBit(c+609,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_i\206 ");
    tracep->declBus(c+584,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+585,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_i\206 ");
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1195,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr_i\206 ");
    tracep->declBus(c+534,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+535,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipe2csr_i\206 ");
    tracep->declBus(c+1223,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+1224,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+1225,"timer_irq", false,-1);
    tracep->declBit(c+1226,"soft_irq", false,-1);
    tracep->declBit(c+1227,"uart_irq", false,-1);
    tracep->declBit(c+1228,"spi_irq", false,-1);
    tracep->declBit(c+1229,"gpio_irq", false,-1);
    tracep->declBit(c+1230,"sw_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_o\206 ");
    tracep->declBus(c+1235,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_i\206 ");
    tracep->declBit(c+587,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_o\206 ");
    tracep->declBit(c+1239,"new_pc_req", false,-1);
    tracep->declBit(c+1240,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1241,"wfi_req", false,-1);
    tracep->declBit(c+586,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_o\206 ");
    tracep->declBus(c+740,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_o\206 ");
    tracep->declBus(c+1237,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1238,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+598,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+599,"pc", false,-1, 31,0);
    tracep->declBus(c+600,"instr", false,-1, 31,0);
    tracep->declBus(c+601,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+602,"exc_code", false,-1, 3,0);
    tracep->declBit(c+603,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+604,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+605,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+606,"exc_req", false,-1);
    tracep->declBit(c+607,"irq_req", false,-1);
    tracep->declBit(c+608,"csr_rd_req", false,-1);
    tracep->declBit(c+609,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+584,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+585,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1195,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+1235,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+1237,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1238,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+740,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+1239,"new_pc_req", false,-1);
    tracep->declBit(c+1240,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1241,"wfi_req", false,-1);
    tracep->declBit(c+586,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+587,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+534,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+535,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1246,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+1247,"csr_wdata", false,-1, 31,0);
    tracep->declBit(c+1506,"csr_rd_exc_req", false,-1);
    tracep->declBit(c+1506,"csr_wr_exc_req", false,-1);
    tracep->declBus(c+1507,"csr_rd_exc_code", false,-1, 3,0);
    tracep->declBus(c+1508,"csr_wr_exc_code", false,-1, 3,0);
    tracep->declBit(c+1506,"csr_exc_req", false,-1);
    tracep->declBit(c+1208,"exc_req", false,-1);
    tracep->declBus(c+1209,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1248,"irq_req_sync", false,-1);
    tracep->declBus(c+748,"csr_pc_ff", false,-1, 31,0);
    tracep->declBus(c+1249,"csr_pc_next", false,-1, 31,0);
    tracep->declBit(c+612,"pipe_stall_flush", false,-1);
    tracep->declBus(c+749,"csr_mcycle_ff", false,-1, 31,0);
    tracep->declBus(c+1250,"csr_mcycle_next", false,-1, 31,0);
    tracep->declBus(c+750,"csr_mcycleh_ff", false,-1, 31,0);
    tracep->declBus(c+1251,"csr_mcycleh_next", false,-1, 31,0);
    tracep->declBus(c+751,"csr_minstret_ff", false,-1, 31,0);
    tracep->declBus(c+1252,"csr_minstret_next", false,-1, 31,0);
    tracep->declBus(c+752,"csr_minstreth_ff", false,-1, 31,0);
    tracep->declBus(c+1253,"csr_minstreth_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mcountinhibit_ff\206 ");
    tracep->declBus(c+753,"warl1", false,-1, 27,0);
    tracep->declBit(c+754,"hpm3", false,-1);
    tracep->declBit(c+755,"ir", false,-1);
    tracep->declBit(c+756,"warl0", false,-1);
    tracep->declBit(c+757,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mcountinhibit_next\206 ");
    tracep->declBus(c+1254,"warl1", false,-1, 27,0);
    tracep->declBit(c+1255,"hpm3", false,-1);
    tracep->declBit(c+1256,"ir", false,-1);
    tracep->declBit(c+1257,"warl0", false,-1);
    tracep->declBit(c+1258,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_ff\206 ");
    tracep->declBit(c+758,"sd", false,-1);
    tracep->declBus(c+759,"wpri3", false,-1, 7,0);
    tracep->declBit(c+760,"tsr", false,-1);
    tracep->declBit(c+761,"tw", false,-1);
    tracep->declBit(c+762,"tvm", false,-1);
    tracep->declBit(c+763,"mxr", false,-1);
    tracep->declBit(c+764,"sum", false,-1);
    tracep->declBit(c+765,"mprv", false,-1);
    tracep->declBus(c+766,"xs", false,-1, 1,0);
    tracep->declBus(c+767,"fs", false,-1, 1,0);
    tracep->declBus(c+768,"mpp", false,-1, 1,0);
    tracep->declBus(c+769,"vs", false,-1, 1,0);
    tracep->declBit(c+770,"spp", false,-1);
    tracep->declBit(c+771,"mpie", false,-1);
    tracep->declBit(c+772,"ube", false,-1);
    tracep->declBit(c+773,"spie", false,-1);
    tracep->declBit(c+774,"wpri2", false,-1);
    tracep->declBit(c+775,"mie", false,-1);
    tracep->declBit(c+776,"wpri1", false,-1);
    tracep->declBit(c+777,"sie", false,-1);
    tracep->declBit(c+778,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_next\206 ");
    tracep->declBit(c+1259,"sd", false,-1);
    tracep->declBus(c+1260,"wpri3", false,-1, 7,0);
    tracep->declBit(c+1261,"tsr", false,-1);
    tracep->declBit(c+1262,"tw", false,-1);
    tracep->declBit(c+1263,"tvm", false,-1);
    tracep->declBit(c+1264,"mxr", false,-1);
    tracep->declBit(c+1265,"sum", false,-1);
    tracep->declBit(c+1266,"mprv", false,-1);
    tracep->declBus(c+1267,"xs", false,-1, 1,0);
    tracep->declBus(c+1268,"fs", false,-1, 1,0);
    tracep->declBus(c+1269,"mpp", false,-1, 1,0);
    tracep->declBus(c+1270,"vs", false,-1, 1,0);
    tracep->declBit(c+1271,"spp", false,-1);
    tracep->declBit(c+1272,"mpie", false,-1);
    tracep->declBit(c+1273,"ube", false,-1);
    tracep->declBit(c+1274,"spie", false,-1);
    tracep->declBit(c+1275,"wpri2", false,-1);
    tracep->declBit(c+1276,"mie", false,-1);
    tracep->declBit(c+1277,"wpri1", false,-1);
    tracep->declBit(c+1278,"sie", false,-1);
    tracep->declBit(c+1279,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_ff\206 ");
    tracep->declBus(c+779,"warl7", false,-1, 11,0);
    tracep->declBit(c+780,"gpsw_ie", false,-1);
    tracep->declBit(c+781,"gpio_ie", false,-1);
    tracep->declBit(c+782,"spi_ie", false,-1);
    tracep->declBit(c+783,"uart_ie", false,-1);
    tracep->declBus(c+784,"warl6", false,-1, 3,0);
    tracep->declBit(c+785,"meie", false,-1);
    tracep->declBit(c+786,"warl5", false,-1);
    tracep->declBit(c+787,"seie", false,-1);
    tracep->declBit(c+788,"warl4", false,-1);
    tracep->declBit(c+789,"mtie", false,-1);
    tracep->declBit(c+790,"warl3", false,-1);
    tracep->declBit(c+791,"stie", false,-1);
    tracep->declBit(c+792,"warl2", false,-1);
    tracep->declBit(c+793,"msie", false,-1);
    tracep->declBit(c+794,"warl1", false,-1);
    tracep->declBit(c+795,"ssie", false,-1);
    tracep->declBit(c+796,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_next\206 ");
    tracep->declBus(c+1280,"warl7", false,-1, 11,0);
    tracep->declBit(c+1281,"gpsw_ie", false,-1);
    tracep->declBit(c+1282,"gpio_ie", false,-1);
    tracep->declBit(c+1283,"spi_ie", false,-1);
    tracep->declBit(c+1284,"uart_ie", false,-1);
    tracep->declBus(c+1285,"warl6", false,-1, 3,0);
    tracep->declBit(c+1286,"meie", false,-1);
    tracep->declBit(c+1287,"warl5", false,-1);
    tracep->declBit(c+1288,"seie", false,-1);
    tracep->declBit(c+1289,"warl4", false,-1);
    tracep->declBit(c+1290,"mtie", false,-1);
    tracep->declBit(c+1291,"warl3", false,-1);
    tracep->declBit(c+1292,"stie", false,-1);
    tracep->declBit(c+1293,"warl2", false,-1);
    tracep->declBit(c+1294,"msie", false,-1);
    tracep->declBit(c+1295,"warl1", false,-1);
    tracep->declBit(c+1296,"ssie", false,-1);
    tracep->declBit(c+1297,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_ff\206 ");
    tracep->declBus(c+797,"base", false,-1, 29,0);
    tracep->declBus(c+798,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_next\206 ");
    tracep->declBus(c+1298,"base", false,-1, 29,0);
    tracep->declBus(c+1299,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+799,"csr_mscratch_ff", false,-1, 31,0);
    tracep->declBus(c+1398,"csr_mscratch_next", false,-1, 31,0);
    tracep->declBus(c+800,"csr_mepc_ff", false,-1, 31,0);
    tracep->declBus(c+1300,"csr_mepc_next", false,-1, 31,0);
    tracep->declBus(c+801,"csr_mcause_ff", false,-1, 31,0);
    tracep->declBus(c+1301,"csr_mcause_next", false,-1, 31,0);
    tracep->declBus(c+802,"csr_mtval_ff", false,-1, 31,0);
    tracep->declBus(c+1399,"csr_mtval_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mip_ff\206 ");
    tracep->declBus(c+803,"warl7", false,-1, 11,0);
    tracep->declBit(c+804,"gpsw_ip", false,-1);
    tracep->declBit(c+805,"gpio_ip", false,-1);
    tracep->declBit(c+806,"spi_ip", false,-1);
    tracep->declBit(c+807,"uart_ip", false,-1);
    tracep->declBus(c+808,"warl6", false,-1, 3,0);
    tracep->declBit(c+809,"meip", false,-1);
    tracep->declBit(c+810,"warl5", false,-1);
    tracep->declBit(c+811,"seip", false,-1);
    tracep->declBit(c+812,"warl4", false,-1);
    tracep->declBit(c+813,"mtip", false,-1);
    tracep->declBit(c+814,"warl3", false,-1);
    tracep->declBit(c+815,"stip", false,-1);
    tracep->declBit(c+816,"warl2", false,-1);
    tracep->declBit(c+817,"msip", false,-1);
    tracep->declBit(c+818,"warl1", false,-1);
    tracep->declBit(c+819,"ssip", false,-1);
    tracep->declBit(c+820,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mip_next\206 ");
    tracep->declBus(c+1302,"warl7", false,-1, 11,0);
    tracep->declBit(c+1303,"gpsw_ip", false,-1);
    tracep->declBit(c+1304,"gpio_ip", false,-1);
    tracep->declBit(c+1305,"spi_ip", false,-1);
    tracep->declBit(c+1306,"uart_ip", false,-1);
    tracep->declBus(c+1307,"warl6", false,-1, 3,0);
    tracep->declBit(c+1308,"meip", false,-1);
    tracep->declBit(c+1309,"warl5", false,-1);
    tracep->declBit(c+1310,"seip", false,-1);
    tracep->declBit(c+1311,"warl4", false,-1);
    tracep->declBit(c+1312,"mtip", false,-1);
    tracep->declBit(c+1313,"warl3", false,-1);
    tracep->declBit(c+1314,"stip", false,-1);
    tracep->declBit(c+1315,"warl2", false,-1);
    tracep->declBit(c+1316,"msip", false,-1);
    tracep->declBit(c+1317,"warl1", false,-1);
    tracep->declBit(c+1318,"ssip", false,-1);
    tracep->declBit(c+1319,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+613,"csr_mcycle_wr_flag", false,-1);
    tracep->declBit(c+614,"csr_mcycleh_wr_flag", false,-1);
    tracep->declBit(c+615,"csr_minstret_wr_flag", false,-1);
    tracep->declBit(c+616,"csr_minstreth_wr_flag", false,-1);
    tracep->declBit(c+617,"csr_mcountinhibit_wr_flag", false,-1);
    tracep->declBit(c+618,"csr_mstatus_wr_flag", false,-1);
    tracep->declBit(c+619,"csr_mie_wr_flag", false,-1);
    tracep->declBit(c+620,"csr_mtvec_wr_flag", false,-1);
    tracep->declBit(c+621,"csr_mscratch_wr_flag", false,-1);
    tracep->declBit(c+622,"csr_mepc_wr_flag", false,-1);
    tracep->declBit(c+623,"csr_mcause_wr_flag", false,-1);
    tracep->declBit(c+624,"csr_mtval_wr_flag", false,-1);
    tracep->declBit(c+625,"csr_mip_wr_flag", false,-1);
    tracep->declBus(c+821,"priv_mode_ff", false,-1, 1,0);
    tracep->declBus(c+1320,"trap_priv_mode", false,-1, 1,0);
    tracep->pushNamePrefix("pipe2csr\206 ");
    tracep->declBus(c+1223,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+1224,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+1225,"timer_irq", false,-1);
    tracep->declBit(c+1226,"soft_irq", false,-1);
    tracep->declBit(c+1227,"uart_irq", false,-1);
    tracep->declBit(c+1228,"spi_irq", false,-1);
    tracep->declBit(c+1229,"gpio_irq", false,-1);
    tracep->declBit(c+1230,"sw_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1321,"irq_code", false,-1, 4,0);
    tracep->declBus(c+1322,"m_mode_new_pc", false,-1, 31,0);
    tracep->declBit(c+1400,"m_irq_req", false,-1);
    tracep->declBit(c+1323,"irq_req", false,-1);
    tracep->declBit(c+1324,"meip_irq_req", false,-1);
    tracep->declBit(c+1325,"mtip_irq_req", false,-1);
    tracep->declBit(c+1326,"msip_irq_req", false,-1);
    tracep->declBit(c+1509,"seip_irq_req", false,-1);
    tracep->declBit(c+1510,"stip_irq_req", false,-1);
    tracep->declBit(c+1511,"ssip_irq_req", false,-1);
    tracep->declBit(c+822,"uart_irq_req", false,-1);
    tracep->declBit(c+823,"spi_irq_req", false,-1);
    tracep->declBit(c+824,"gpio_irq_req", false,-1);
    tracep->declBit(c+825,"gpsw_irq_req", false,-1);
    tracep->declBit(c+826,"timer_irq_ff", false,-1);
    tracep->declBit(c+827,"ext_irq0_ff", false,-1);
    tracep->declBit(c+828,"ext_irq1_ff", false,-1);
    tracep->declBit(c+829,"uart_irq_ff", false,-1);
    tracep->declBit(c+830,"spi_irq_ff", false,-1);
    tracep->declBit(c+831,"gpio_irq_ff", false,-1);
    tracep->declBit(c+832,"sw_irq_ff", false,-1);
    tracep->declBit(c+833,"m_mode_global_ie", false,-1);
    tracep->declBit(c+1327,"m_mode_exc_req", false,-1);
    tracep->declBit(c+1328,"m_mode_irq_req", false,-1);
    tracep->declBit(c+1329,"m_mode_pc_req", false,-1);
    tracep->declBit(c+1218,"m_mode_misalign_exc_req", false,-1);
    tracep->declBit(c+1506,"m_mode_ileg_inst_exc_req", false,-1);
    tracep->declBit(c+1219,"m_mode_break_exc_req", false,-1);
    tracep->declBit(c+1330,"mret_pc_req", false,-1);
    tracep->declBit(c+1210,"break_exc_req", false,-1);
    tracep->declBit(c+626,"mret_req", false,-1);
    tracep->declBit(c+627,"wfi_req", false,-1);
    tracep->declBit(c+834,"wfi_ff", false,-1);
    tracep->declBit(c+1331,"wfi_next", false,-1);
    tracep->declBus(c+584,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1211,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1212,"is_ld_st_ops", false,-1);
    tracep->declBit(c+1213,"ld_misalign_exc_req", false,-1);
    tracep->declBit(c+1214,"st_misalign_exc_req", false,-1);
    tracep->declBit(c+1332,"csr_mcycle_inc", false,-1);
    tracep->declBit(c+1333,"csr_mcycleh_inc", false,-1);
    tracep->declBit(c+1334,"csr_minstret_inc", false,-1);
    tracep->declBit(c+1335,"csr_minstreth_inc", false,-1);
    tracep->declBit(c+1336,"is_not_ebreak", false,-1);
    tracep->declBit(c+1337,"is_not_ecall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("if2id_data_i\206 ");
    tracep->declBus(c+588,"instr", false,-1, 31,0);
    tracep->declBus(c+589,"pc", false,-1, 31,0);
    tracep->declBus(c+590,"pc_next", false,-1, 31,0);
    tracep->declBus(c+591,"exc_code", false,-1, 3,0);
    tracep->declBit(c+592,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_i\206 ");
    tracep->declBit(c+593,"exc_req", false,-1);
    tracep->declBit(c+594,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_o\206 ");
    tracep->declBus(c+1342,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1343,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1344,"instr", false,-1, 31,0);
    tracep->declBus(c+1345,"pc", false,-1, 31,0);
    tracep->declBus(c+1346,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1347,"imm", false,-1, 31,0);
    tracep->declBus(c+1348,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1349,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_o\206 ");
    tracep->declBus(c+688,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+689,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+690,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+691,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+693,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+694,"st_ops", false,-1, 1,0);
    tracep->declBus(c+695,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+696,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+697,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+698,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+699,"alu_opr1_sel", false,-1);
    tracep->declBit(c+700,"alu_opr2_sel", false,-1);
    tracep->declBit(c+701,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+702,"csr_opr_sel", false,-1);
    tracep->declBus(c+703,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+704,"exc_req", false,-1);
    tracep->declBit(c+705,"rd_wr_req", false,-1);
    tracep->declBit(c+706,"jump_req", false,-1);
    tracep->declBit(c+707,"branch_req", false,-1);
    tracep->declBit(c+708,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_i\206 ");
    tracep->declBus(c+740,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_i\206 ");
    tracep->declBus(c+278,"rd_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+628,"id2rf_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+629,"id2rf_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+630,"instr_codeword", false,-1, 31,0);
    tracep->declBus(c+1401,"rf2id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+1402,"rf2id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1365,"illegal_instr", false,-1);
    tracep->declBus(c+631,"funct3_opcode", false,-1, 2,0);
    tracep->declBus(c+632,"funct7_opcode", false,-1, 6,0);
    tracep->declBus(c+629,"funct5_opcode", false,-1, 4,0);
    tracep->declBus(c+629,"shift_amt", false,-1, 4,0);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+593,"exc_req", false,-1);
    tracep->declBit(c+594,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+588,"instr", false,-1, 31,0);
    tracep->declBus(c+589,"pc", false,-1, 31,0);
    tracep->declBus(c+590,"pc_next", false,-1, 31,0);
    tracep->declBus(c+591,"exc_code", false,-1, 3,0);
    tracep->declBit(c+592,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+688,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+689,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+690,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+691,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+693,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+694,"st_ops", false,-1, 1,0);
    tracep->declBus(c+695,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+696,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+697,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+698,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+699,"alu_opr1_sel", false,-1);
    tracep->declBit(c+700,"alu_opr2_sel", false,-1);
    tracep->declBit(c+701,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+702,"csr_opr_sel", false,-1);
    tracep->declBus(c+703,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+704,"exc_req", false,-1);
    tracep->declBit(c+705,"rd_wr_req", false,-1);
    tracep->declBit(c+706,"jump_req", false,-1);
    tracep->declBit(c+707,"branch_req", false,-1);
    tracep->declBit(c+708,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+1342,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1343,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1344,"instr", false,-1, 31,0);
    tracep->declBus(c+1345,"pc", false,-1, 31,0);
    tracep->declBus(c+1346,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1347,"imm", false,-1, 31,0);
    tracep->declBus(c+1348,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1349,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+740,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+633,"instr_opcode", false,-1, 4,0);
    tracep->pushNamePrefix("rf_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBus(c+628,"id2rf_rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+629,"id2rf_rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+1401,"rf2id_rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+1402,"rf2id_rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+1220,"id2rf_rd_wr_req_i", false,-1);
    tracep->declBus(c+1403,"id2rf_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+278,"id2rf_rd_data_i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1162+i*1,"register_file", true,(i+0), 31,0);
    }
    tracep->declBit(c+634,"rs1_addr_valid", false,-1);
    tracep->declBit(c+635,"rs2_addr_valid", false,-1);
    tracep->declBit(c+1404,"rf_wr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("divide_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("exe2div_i\206 ");
    tracep->declBus(c+417,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+418,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+716,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+290,"fwd2div_stall_i", false,-1);
    tracep->declBit(c+447,"fwd2div_flush_i", false,-1);
    tracep->pushNamePrefix("div2fwd_o\206 ");
    tracep->declBit(c+741,"div_req", false,-1);
    tracep->declBit(c+742,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_o\206 ");
    tracep->declBus(c+1236,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+417,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+418,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+716,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+741,"div_req", false,-1);
    tracep->declBit(c+742,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+1236,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+716,"alu_d_ops", false,-1, 2,0);
    tracep->declBus(c+1405,"alu_d_ops_next", false,-1, 2,0);
    tracep->declBus(c+835,"alu_d_ops_ff", false,-1, 2,0);
    tracep->declBus(c+417,"alu_opr_1", false,-1, 31,0);
    tracep->declBus(c+1406,"alu_d_opr_1", false,-1, 31,0);
    tracep->declBus(c+448,"alu_d_opr1_next", false,-1, 31,0);
    tracep->declBus(c+836,"alu_d_opr1_ff", false,-1, 31,0);
    tracep->declBus(c+418,"alu_opr_2", false,-1, 31,0);
    tracep->declBus(c+1407,"alu_d_opr_2", false,-1, 31,0);
    tracep->declBus(c+449,"alu_d_opr2_next", false,-1, 31,0);
    tracep->declBus(c+837,"alu_d_opr2_ff", false,-1, 31,0);
    tracep->declBit(c+1408,"alu_d_opr1_sign_next", false,-1);
    tracep->declBit(c+838,"alu_d_opr1_sign_ff", false,-1);
    tracep->declBit(c+1409,"alu_d_opr2_sign_next", false,-1);
    tracep->declBit(c+839,"alu_d_opr2_sign_ff", false,-1);
    tracep->declBit(c+840,"alu_d_req", false,-1);
    tracep->declBit(c+1338,"alu_d_ack_next", false,-1);
    tracep->declBit(c+841,"alu_d_ack_ff", false,-1);
    tracep->declBus(c+1339,"alu_d_result_next", false,-1, 31,0);
    tracep->declBus(c+1512,"div", false,-1, 31,0);
    tracep->declBus(c+636,"div_u", false,-1, 31,0);
    tracep->declBus(c+1513,"rem", false,-1, 31,0);
    tracep->declBus(c+637,"rem_u", false,-1, 31,0);
    tracep->declBit(c+638,"div_done", false,-1);
    tracep->declBit(c+1514,"div_valid", false,-1);
    tracep->pushNamePrefix("divider_module ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst", false,-1);
    tracep->declBit(c+1410,"start_i", false,-1);
    tracep->declBus(c+836,"opr1_i", false,-1, 31,0);
    tracep->declBus(c+837,"opr2_i", false,-1, 31,0);
    tracep->declBit(c+638,"done_o", false,-1);
    tracep->declBus(c+636,"quo_o", false,-1, 31,0);
    tracep->declBus(c+637,"rem_o", false,-1, 31,0);
    tracep->declBit(c+639,"busy_ff", false,-1);
    tracep->declBit(c+638,"done_ff", false,-1);
    tracep->declBus(c+640,"opr2_ff", false,-1, 31,0);
    tracep->declBus(c+636,"quo_ff", false,-1, 31,0);
    tracep->declBus(c+641,"quo_next", false,-1, 31,0);
    tracep->declQuad(c+642,"acc_ff", false,-1, 32,0);
    tracep->declQuad(c+644,"acc_next", false,-1, 32,0);
    tracep->declQuad(c+646,"rem_ff", false,-1, 32,0);
    tracep->declBus(c+648,"counter", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("id2exe_data_i\206 ");
    tracep->declBus(c+1342,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1343,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1344,"instr", false,-1, 31,0);
    tracep->declBus(c+1345,"pc", false,-1, 31,0);
    tracep->declBus(c+1346,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1347,"imm", false,-1, 31,0);
    tracep->declBus(c+1348,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1349,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_i\206 ");
    tracep->declBus(c+688,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+689,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+690,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+691,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+693,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+694,"st_ops", false,-1, 1,0);
    tracep->declBus(c+695,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+696,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+697,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+698,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+699,"alu_opr1_sel", false,-1);
    tracep->declBit(c+700,"alu_opr2_sel", false,-1);
    tracep->declBit(c+701,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+702,"csr_opr_sel", false,-1);
    tracep->declBus(c+703,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+704,"exc_req", false,-1);
    tracep->declBit(c+705,"rd_wr_req", false,-1);
    tracep->declBit(c+706,"jump_req", false,-1);
    tracep->declBit(c+707,"branch_req", false,-1);
    tracep->declBit(c+708,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div_o\206 ");
    tracep->declBus(c+417,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+418,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+716,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_o\206 ");
    tracep->declBus(c+90,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1351,"pc_next", false,-1, 31,0);
    tracep->declBus(c+413,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_o\206 ");
    tracep->declBus(c+1350,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+709,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+710,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+711,"st_ops", false,-1, 1,0);
    tracep->declBus(c+712,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+713,"rd_wr_req", false,-1);
    tracep->declBit(c+714,"jump_req", false,-1);
    tracep->declBit(c+715,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_o\206 ");
    tracep->declBus(c+1352,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+1353,"pc", false,-1, 31,0);
    tracep->declBus(c+1354,"instr", false,-1, 31,0);
    tracep->declBus(c+91,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+1355,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1356,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_o\206 ");
    tracep->declBus(c+1357,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1358,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1359,"exc_req", false,-1);
    tracep->declBit(c+1360,"irq_req", false,-1);
    tracep->declBit(c+1361,"csr_rd_req", false,-1);
    tracep->declBit(c+1362,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_i\206 ");
    tracep->declBit(c+432,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+433,"fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_o\206 ");
    tracep->declBus(c+1363,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+1364,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+92,"new_pc_req", false,-1);
    tracep->declBit(c+717,"use_rs1", false,-1);
    tracep->declBit(c+718,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_o\206 ");
    tracep->declBus(c+431,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+584,"lsu2exe_fb_alu_result_i", false,-1, 31,0);
    tracep->declBus(c+278,"wrb2exe_fb_rd_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+688,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+689,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+690,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+691,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+693,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+694,"st_ops", false,-1, 1,0);
    tracep->declBus(c+695,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+696,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+697,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+698,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+699,"alu_opr1_sel", false,-1);
    tracep->declBit(c+700,"alu_opr2_sel", false,-1);
    tracep->declBit(c+701,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+702,"csr_opr_sel", false,-1);
    tracep->declBus(c+703,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+704,"exc_req", false,-1);
    tracep->declBit(c+705,"rd_wr_req", false,-1);
    tracep->declBit(c+706,"jump_req", false,-1);
    tracep->declBit(c+707,"branch_req", false,-1);
    tracep->declBit(c+708,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+1342,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1343,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1344,"instr", false,-1, 31,0);
    tracep->declBus(c+1345,"pc", false,-1, 31,0);
    tracep->declBus(c+1346,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1347,"imm", false,-1, 31,0);
    tracep->declBus(c+1348,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1349,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+1350,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+709,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+710,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+711,"st_ops", false,-1, 1,0);
    tracep->declBus(c+712,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+713,"rd_wr_req", false,-1);
    tracep->declBit(c+714,"jump_req", false,-1);
    tracep->declBit(c+715,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+90,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1351,"pc_next", false,-1, 31,0);
    tracep->declBus(c+413,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+1357,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1358,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1359,"exc_req", false,-1);
    tracep->declBit(c+1360,"irq_req", false,-1);
    tracep->declBit(c+1361,"csr_rd_req", false,-1);
    tracep->declBit(c+1362,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+1352,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+1353,"pc", false,-1, 31,0);
    tracep->declBus(c+1354,"instr", false,-1, 31,0);
    tracep->declBus(c+91,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+1355,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1356,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+417,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+418,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+716,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+431,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+719,"alu_i_operator", false,-1, 3,0);
    tracep->declBus(c+720,"branch_ops", false,-1, 2,0);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+1363,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+1364,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+92,"new_pc_req", false,-1);
    tracep->declBit(c+717,"use_rs1", false,-1);
    tracep->declBit(c+718,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+432,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+433,"fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+584,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+278,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->declBus(c+450,"operand_rs1_data", false,-1, 31,0);
    tracep->declBus(c+413,"operand_rs2_data", false,-1, 31,0);
    tracep->declBus(c+451,"alu_adder_output", false,-1, 31,0);
    tracep->declBus(c+417,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+418,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+452,"alu_result", false,-1, 31,0);
    tracep->declBus(c+450,"cmp_operand_1", false,-1, 31,0);
    tracep->declBus(c+453,"cmp_operand_2", false,-1, 31,0);
    tracep->declQuad(c+454,"cmp_output", false,-1, 32,0);
    tracep->declBit(c+456,"cmp_not_zero", false,-1);
    tracep->declBit(c+457,"cmp_neg", false,-1);
    tracep->declBit(c+458,"cmp_overflow", false,-1);
    tracep->declBit(c+93,"branch_res", false,-1);
    tracep->declBus(c+459,"shift_amt", false,-1, 4,0);
    tracep->declBus(c+1366,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+1367,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+1368,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+721,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+460,"alu_b_result", false,-1, 31,0);
    tracep->declBit(c+723,"bitmanip_cmd", false,-1);
    tracep->declBit(c+724,"is_ctz", false,-1);
    tracep->declBus(c+461,"max_result", false,-1, 31,0);
    tracep->declBus(c+462,"maxu_result", false,-1, 31,0);
    tracep->declBus(c+463,"min_result", false,-1, 31,0);
    tracep->declBus(c+464,"minu_result", false,-1, 31,0);
    tracep->declBit(c+725,"is_cpop", false,-1);
    tracep->declBus(c+465,"cnt_data", false,-1, 31,0);
    tracep->declQuad(c+466,"cnt_en", false,-1, 32,0);
    tracep->declBus(c+468,"cnt_result", false,-1, 5,0);
    tracep->declBus(c+469,"alu_operand_1_rev", false,-1, 31,0);
    tracep->declBus(c+470,"alu_operand_2_rev", false,-1, 31,0);
    tracep->declBus(c+471,"zbs_index", false,-1, 31,0);
    tracep->declBus(c+472,"clmul_operand_1", false,-1, 31,0);
    tracep->declBus(c+473,"clmul_operand_2", false,-1, 31,0);
    tracep->declBus(c+474,"clmul_result", false,-1, 31,0);
    tracep->declBus(c+475,"clmulr_result", false,-1, 31,0);
    tracep->declBus(c+726,"alu_m_ops", false,-1, 2,0);
    tracep->declBit(c+727,"is_opr1_signed", false,-1);
    tracep->declBit(c+728,"is_opr2_signed", false,-1);
    tracep->declBit(c+94,"opr1_sgn", false,-1);
    tracep->declBit(c+95,"opr2_sgn", false,-1);
    tracep->declBit(c+729,"mul_cmd", false,-1);
    tracep->declBit(c+730,"mul_cmd_hi", false,-1);
    tracep->declQuad(c+96,"mul_opr1", false,-1, 32,0);
    tracep->declQuad(c+98,"mul_opr2", false,-1, 32,0);
    tracep->declQuad(c+476,"mul_output", false,-1, 63,0);
    tracep->declBus(c+100,"alu_m_result", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1515,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1516,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_o\206 ");
    tracep->declBus(c+533,"addr", false,-1, 31,0);
    tracep->declBit(c+400,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_i\206 ");
    tracep->declBus(c+1389,"r_data", false,-1, 31,0);
    tracep->declBit(c+1390,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_o\206 ");
    tracep->declBus(c+487,"instr", false,-1, 31,0);
    tracep->declBus(c+488,"pc", false,-1, 31,0);
    tracep->declBus(c+489,"pc_next", false,-1, 31,0);
    tracep->declBus(c+490,"exc_code", false,-1, 3,0);
    tracep->declBit(c+491,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_o\206 ");
    tracep->declBit(c+401,"exc_req", false,-1);
    tracep->declBit(c+402,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_i\206 ");
    tracep->declBus(c+431,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_i\206 ");
    tracep->declBus(c+1237,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1238,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_i\206 ");
    tracep->declBit(c+434,"exe_new_pc_req", false,-1);
    tracep->declBit(c+435,"csr_new_pc_req", false,-1);
    tracep->declBit(c+436,"wfi_req", false,-1);
    tracep->declBit(c+437,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+1389,"r_data", false,-1, 31,0);
    tracep->declBit(c+1390,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+487,"instr", false,-1, 31,0);
    tracep->declBus(c+488,"pc", false,-1, 31,0);
    tracep->declBus(c+489,"pc_next", false,-1, 31,0);
    tracep->declBus(c+490,"exc_code", false,-1, 3,0);
    tracep->declBit(c+491,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+401,"exc_req", false,-1);
    tracep->declBit(c+402,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+431,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+1237,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1238,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+434,"exe_new_pc_req", false,-1);
    tracep->declBit(c+435,"csr_new_pc_req", false,-1);
    tracep->declBit(c+436,"wfi_req", false,-1);
    tracep->declBit(c+437,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+478,"exc_code_next", false,-1, 3,0);
    tracep->declBus(c+649,"exc_code_ff", false,-1, 3,0);
    tracep->declBit(c+479,"exc_req_next", false,-1);
    tracep->declBit(c+650,"exc_req_ff", false,-1);
    tracep->declBit(c+480,"irq_req_next", false,-1);
    tracep->declBit(c+651,"irq_req_ff", false,-1);
    tracep->declBit(c+481,"kill_req", false,-1);
    tracep->declBus(c+533,"pc_ff", false,-1, 31,0);
    tracep->declBus(c+652,"pc_plus_4", false,-1, 31,0);
    tracep->declBus(c+497,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1411,"instr_word", false,-1, 31,0);
    tracep->declBit(c+482,"if_stall", false,-1);
    tracep->declBit(c+653,"pc_misaligned", false,-1);
    tracep->declBus(c+1412,"jal_imm", false,-1, 31,0);
    tracep->declBit(c+498,"is_jal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forward_stall_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("wrb2fwd_i\206 ");
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd_i\206 ");
    tracep->declBus(c+279,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+280,"rd_wr_req", false,-1);
    tracep->declBit(c+281,"lsu_req", false,-1);
    tracep->declBit(c+282,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+178,"store_busy", false,-1);
    tracep->pushNamePrefix("div2fwd_i\206 ");
    tracep->declBit(c+741,"div_req", false,-1);
    tracep->declBit(c+742,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_i\206 ");
    tracep->declBus(c+1363,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+1364,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+92,"new_pc_req", false,-1);
    tracep->declBit(c+717,"use_rs1", false,-1);
    tracep->declBit(c+718,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_i\206 ");
    tracep->declBit(c+1239,"new_pc_req", false,-1);
    tracep->declBit(c+1240,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1241,"wfi_req", false,-1);
    tracep->declBit(c+586,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_o\206 ");
    tracep->declBit(c+434,"exe_new_pc_req", false,-1);
    tracep->declBit(c+435,"csr_new_pc_req", false,-1);
    tracep->declBit(c+436,"wfi_req", false,-1);
    tracep->declBit(c+437,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_o\206 ");
    tracep->declBit(c+432,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+433,"fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_o\206 ");
    tracep->declBit(c+587,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_o\206 ");
    tracep->declBit(c+1242,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop_o\206 ");
    tracep->declBit(c+438,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+439,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+440,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+441,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+442,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+443,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+444,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+445,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+446,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+279,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+280,"rd_wr_req", false,-1);
    tracep->declBit(c+281,"lsu_req", false,-1);
    tracep->declBit(c+282,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd\206 ");
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+1363,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+1364,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+92,"new_pc_req", false,-1);
    tracep->declBit(c+717,"use_rs1", false,-1);
    tracep->declBit(c+718,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+1239,"new_pc_req", false,-1);
    tracep->declBit(c+1240,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1241,"wfi_req", false,-1);
    tracep->declBit(c+586,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+741,"div_req", false,-1);
    tracep->declBit(c+742,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1369,"rs1_valid", false,-1);
    tracep->declBit(c+1370,"rs2_valid", false,-1);
    tracep->declBit(c+1413,"lsu2rs1_hazard", false,-1);
    tracep->declBit(c+1414,"lsu2rs2_hazard", false,-1);
    tracep->declBit(c+1415,"ld_use_rs1_hazard", false,-1);
    tracep->declBit(c+1416,"ld_use_rs2_hazard", false,-1);
    tracep->declBit(c+483,"ld_use_hazard", false,-1);
    tracep->declBit(c+1340,"lsu_div_csr_req", false,-1);
    tracep->declBit(c+484,"if_id_exe_stall", false,-1);
    tracep->declBit(c+290,"lsu_div_stall", false,-1);
    tracep->declBit(c+1231,"lsu_flush", false,-1);
    tracep->declBit(c+654,"lsu_stall_ff", false,-1);
    tracep->declBit(c+291,"lsu_stall_next", false,-1);
    tracep->declBit(c+842,"div_stall_ff", false,-1);
    tracep->declBit(c+843,"div_stall_next", false,-1);
    tracep->declBit(c+655,"lsu_div_stall_ff", false,-1);
    tracep->declBit(c+485,"id_exe_flush", false,-1);
    tracep->declBit(c+486,"exe_new_pc_req", false,-1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+434,"exe_new_pc_req", false,-1);
    tracep->declBit(c+435,"csr_new_pc_req", false,-1);
    tracep->declBit(c+436,"wfi_req", false,-1);
    tracep->declBit(c+437,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+432,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+433,"fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+587,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu\206 ");
    tracep->declBit(c+1242,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop\206 ");
    tracep->declBit(c+438,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+439,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+440,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+441,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+442,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+443,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+444,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+445,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+446,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("exe2lsu_data_i\206 ");
    tracep->declBus(c+595,"alu_result", false,-1, 31,0);
    tracep->declBus(c+596,"pc_next", false,-1, 31,0);
    tracep->declBus(c+597,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_i\206 ");
    tracep->declBus(c+1196,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1197,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1198,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1199,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1201,"rd_wr_req", false,-1);
    tracep->declBit(c+1202,"jump_req", false,-1);
    tracep->declBit(c+1203,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_o\206 ");
    tracep->declBus(c+584,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+585,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_o\206 ");
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1195,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_i\206 ");
    tracep->declBus(c+270,"w_data", false,-1, 31,0);
    tracep->declBus(c+1393,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_i\206 ");
    tracep->declBit(c+739,"amo_done", false,-1);
    tracep->declBit(c+1232,"ld_req", false,-1);
    tracep->declBit(c+1233,"st_req", false,-1);
    tracep->declBit(c+1234,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data_o\206 ");
    tracep->declBus(c+271,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+272,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+273,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_o\206 ");
    tracep->declBus(c+274,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+275,"is_amo", false,-1);
    tracep->declBit(c+276,"amo_flush", false,-1);
    tracep->declBit(c+277,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_o\206 ");
    tracep->declBus(c+1394,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1395,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1396,"r_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_o\206 ");
    tracep->declBus(c+1215,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1216,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+584,"lsu2exe_fb_alu_result_o", false,-1, 31,0);
    tracep->pushNamePrefix("lsu2fwd_o\206 ");
    tracep->declBus(c+279,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+280,"rd_wr_req", false,-1);
    tracep->declBit(c+281,"lsu_req", false,-1);
    tracep->declBit(c+282,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_i\206 ");
    tracep->declBit(c+1242,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i\206 ");
    tracep->declBus(c+159,"r_data", false,-1, 31,0);
    tracep->declBit(c+160,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1231,"lsu_flush_o", false,-1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+595,"alu_result", false,-1, 31,0);
    tracep->declBus(c+596,"pc_next", false,-1, 31,0);
    tracep->declBus(c+597,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+1196,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1197,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1198,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1199,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1201,"rd_wr_req", false,-1);
    tracep->declBit(c+1202,"jump_req", false,-1);
    tracep->declBit(c+1203,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+1394,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1395,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1396,"r_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+1215,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1216,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+70,"addr", false,-1, 31,0);
    tracep->declBus(c+71,"w_data", false,-1, 31,0);
    tracep->declBus(c+72,"st_ops", false,-1, 1,0);
    tracep->declBit(c+73,"ld_req", false,-1);
    tracep->declBit(c+74,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+159,"r_data", false,-1, 31,0);
    tracep->declBit(c+160,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+584,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+585,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1195,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+270,"w_data", false,-1, 31,0);
    tracep->declBus(c+1393,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+739,"amo_done", false,-1);
    tracep->declBit(c+1232,"ld_req", false,-1);
    tracep->declBit(c+1233,"st_req", false,-1);
    tracep->declBit(c+1234,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+271,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+272,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+273,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+274,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+275,"is_amo", false,-1);
    tracep->declBit(c+276,"amo_flush", false,-1);
    tracep->declBit(c+277,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+279,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+280,"rd_wr_req", false,-1);
    tracep->declBit(c+281,"lsu_req", false,-1);
    tracep->declBit(c+282,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+584,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+292,"rdata_word", false,-1, 31,0);
    tracep->declBus(c+293,"rdata_hword", false,-1, 15,0);
    tracep->declBus(c+294,"rdata_byte", false,-1, 7,0);
    tracep->declBit(c+1341,"ld_req", false,-1);
    tracep->declBus(c+1194,"ld_ops", false,-1, 2,0);
    tracep->declBit(c+1221,"st_req", false,-1);
    tracep->declBit(c+1205,"is_amo", false,-1);
    tracep->declBit(c+1222,"lsu_amo_req", false,-1);
    tracep->declBit(c+1417,"lsu_amo_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("lsu2wrb_data_i\206 ");
    tracep->declBus(c+1394,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1395,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1396,"r_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_i\206 ");
    tracep->declBus(c+1215,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1216,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_i\206 ");
    tracep->declBus(c+1235,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_i\206 ");
    tracep->declBus(c+1236,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_o\206 ");
    tracep->declBus(c+278,"rd_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+278,"wrb2exe_fb_rd_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("wrb2fwd_o\206 ");
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+1394,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1395,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1396,"r_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+1215,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1216,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+1235,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+1236,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb\206 ");
    tracep->declBus(c+278,"rd_data", false,-1, 31,0);
    tracep->declBus(c+1397,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1217,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+278,"wrb_rd_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_top_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o\206 ");
    tracep->declBus(c+543,"r_data", false,-1, 31,0);
    tracep->declBit(c+544,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+170,"plic_sel_i", false,-1);
    tracep->declBus(c+1517,"edge_select_i", false,-1, 1,0);
    tracep->declBus(c+844,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+656,"irq_targets_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+295,"claim_req", false,-1, 1,0);
    tracep->declBus(c+296,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+297,"[0]", false,-1, 1,0);
    tracep->declBus(c+298,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+657,"irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_th");
    tracep->declBus(c+658,"[0]", false,-1, 2,0);
    tracep->declBus(c+659,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ie");
    tracep->declBus(c+662,"[0]", false,-1, 1,0);
    tracep->declBus(c+663,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+664,"[0]", false,-1, 1,0);
    tracep->declBus(c+665,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+657,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+662,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+658,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+539,"irq_req_o", false,-1);
    tracep->declBus(c+666,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+657,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+662,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+667,"prio_th", false,-1, 2,0);
    tracep->declBit(c+539,"irq_req_ff", false,-1);
    tracep->declBit(c+668,"irq_req_next", false,-1);
    tracep->declBus(c+666,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+669,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1518,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+657,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+663,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+659,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+540,"irq_req_o", false,-1);
    tracep->declBus(c+670,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+657,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+663,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+671,"prio_th", false,-1, 2,0);
    tracep->declBit(c+540,"irq_req_ff", false,-1);
    tracep->declBit(c+672,"irq_req_next", false,-1);
    tracep->declBus(c+670,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+673,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1518,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("plic_gateway_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBus(c+844,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+1517,"edge_select_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway_i\206 ");
    tracep->declBus(c+295,"claim_req", false,-1, 1,0);
    tracep->declBus(c+296,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+297,"[0]", false,-1, 1,0);
    tracep->declBus(c+298,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+664,"[0]", false,-1, 1,0);
    tracep->declBus(c+665,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+657,"irq_pending_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+295,"claim_req", false,-1, 1,0);
    tracep->declBus(c+296,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+297,"[0]", false,-1, 1,0);
    tracep->declBus(c+298,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+657,"irq_pending_ff", false,-1, 1,0);
    tracep->declBus(c+299,"irq_pending_next", false,-1, 1,0);
    tracep->declBus(c+674,"irq_active_ff", false,-1, 1,0);
    tracep->declBus(c+300,"irq_active_next", false,-1, 1,0);
    tracep->declBus(c+301,"irq_set_pending", false,-1, 1,0);
    tracep->declBus(c+302,"irq_set_active", false,-1, 1,0);
    tracep->declBus(c+844,"irq_req", false,-1, 1,0);
    tracep->declBus(c+675,"irq_src_ff", false,-1, 1,0);
    tracep->declBus(c+844,"irq_src_next", false,-1, 1,0);
    tracep->declBus(c+303,"claim", false,-1, 1,0);
    tracep->declBus(c+304,"complete", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+664,"[0]", false,-1, 1,0);
    tracep->declBus(c+665,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+305,"[0]", false,-1, 1,0);
    tracep->declBus(c+306,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1519,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1519,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_regs_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o\206 ");
    tracep->declBus(c+543,"r_data", false,-1, 31,0);
    tracep->declBit(c+544,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+170,"plic_sel_i", false,-1);
    tracep->pushNamePrefix("regs_ie_o");
    tracep->declBus(c+662,"[0]", false,-1, 1,0);
    tracep->declBus(c+663,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_o");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_th_o");
    tracep->declBus(c+658,"[0]", false,-1, 2,0);
    tracep->declBus(c+659,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+657,"irq_pending_i", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+664,"[0]", false,-1, 1,0);
    tracep->declBus(c+665,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway_o\206 ");
    tracep->declBus(c+295,"claim_req", false,-1, 1,0);
    tracep->declBus(c+296,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+297,"[0]", false,-1, 1,0);
    tracep->declBus(c+298,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+295,"claim_req", false,-1, 1,0);
    tracep->declBus(c+296,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+297,"[0]", false,-1, 1,0);
    tracep->declBus(c+298,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+307,"claim_req", false,-1, 1,0);
    tracep->declBus(c+308,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+305,"[0]", false,-1, 1,0);
    tracep->declBus(c+306,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+309,"reg_addr", false,-1, 23,0);
    tracep->declBit(c+310,"reg_rd_req", false,-1);
    tracep->declBit(c+311,"reg_wr_req", false,-1);
    tracep->declBus(c+312,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+186,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+313,"prio_th_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+314,"prio_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+315,"ie_reg_wr_flag", false,-1, 1,0);
    tracep->pushNamePrefix("plic_reg_prio_th_ff");
    tracep->declBus(c+658,"[0]", false,-1, 2,0);
    tracep->declBus(c+659,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_th_next");
    tracep->declBus(c+316,"[0]", false,-1, 2,0);
    tracep->declBus(c+317,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_ff");
    tracep->declBus(c+660,"[0]", false,-1, 2,0);
    tracep->declBus(c+661,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_next");
    tracep->declBus(c+318,"[0]", false,-1, 2,0);
    tracep->declBus(c+319,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_ff");
    tracep->declBus(c+662,"[0]", false,-1, 1,0);
    tracep->declBus(c+663,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_next");
    tracep->declBus(c+116,"[0]", false,-1, 1,0);
    tracep->declBus(c+117,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+657,"plic_reg_irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+664,"[0]", false,-1, 1,0);
    tracep->declBus(c+665,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_ff\206 ");
    tracep->declBus(c+543,"r_data", false,-1, 31,0);
    tracep->declBit(c+544,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1519,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1519,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1519,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi_top_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+171,"spi0_sel_i", false,-1);
    tracep->declBit(c+172,"spi1_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2spi_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o\206 ");
    tracep->declBus(c+181,"r_data", false,-1, 31,0);
    tracep->declBit(c+182,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+737,"spi_irq_o", false,-1);
    tracep->declBus(c+1462,"spi_miso_i", false,-1, 1,0);
    tracep->declBus(c+734,"spi_mosi_o", false,-1, 1,0);
    tracep->declBus(c+732,"spi_clk_o", false,-1, 1,0);
    tracep->declBus(c+733,"spi_cs_o", false,-1, 1,0);
    tracep->declBit(c+845,"spi0_mosi", false,-1);
    tracep->declBit(c+846,"spi0_clk", false,-1);
    tracep->declBit(c+847,"spi0_cs", false,-1);
    tracep->declBit(c+848,"spi0_irq", false,-1);
    tracep->declBit(c+849,"spi1_mosi", false,-1);
    tracep->declBit(c+850,"spi1_clk", false,-1);
    tracep->declBit(c+851,"spi1_cs", false,-1);
    tracep->declBit(c+852,"spi1_irq", false,-1);
    tracep->pushNamePrefix("dbus2spi0\206 ");
    tracep->declBus(c+320,"addr", false,-1, 31,0);
    tracep->declBus(c+321,"w_data", false,-1, 31,0);
    tracep->declBus(c+322,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+323,"w_en", false,-1);
    tracep->declBit(c+324,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi0_2dbus\206 ");
    tracep->declBus(c+118,"r_data", false,-1, 31,0);
    tracep->declBit(c+676,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2spi1\206 ");
    tracep->declBus(c+325,"addr", false,-1, 31,0);
    tracep->declBus(c+326,"w_data", false,-1, 31,0);
    tracep->declBus(c+327,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+328,"w_en", false,-1);
    tracep->declBit(c+329,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi1_2dbus\206 ");
    tracep->declBus(c+119,"r_data", false,-1, 31,0);
    tracep->declBit(c+677,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi0_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2spi_i\206 ");
    tracep->declBus(c+320,"addr", false,-1, 31,0);
    tracep->declBus(c+321,"w_data", false,-1, 31,0);
    tracep->declBus(c+322,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+323,"w_en", false,-1);
    tracep->declBit(c+324,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o\206 ");
    tracep->declBus(c+118,"r_data", false,-1, 31,0);
    tracep->declBit(c+676,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+171,"spi_sel_i", false,-1);
    tracep->declBit(c+846,"spi_clk_o", false,-1);
    tracep->declBus(c+853,"spi_cs_o", false,-1, 1,0);
    tracep->declBit(c+848,"spi_irq_o", false,-1);
    tracep->declBit(c+1520,"spi_miso_i", false,-1);
    tracep->declBit(c+845,"spi_mosi_o", false,-1);
    tracep->declBus(c+854,"spi_reg_cs_default", false,-1, 1,0);
    tracep->declBus(c+855,"spi_reg_cs_id", false,-1, 1,0);
    tracep->declBus(c+856,"spi_clock_period", false,-1, 11,0);
    tracep->declBit(c+857,"spi_clk_phase", false,-1);
    tracep->declBit(c+858,"spi_clk_polarity", false,-1);
    tracep->declBus(c+859,"spi_cs_mode", false,-1, 1,0);
    tracep->declBus(c+860,"spi_c2t_time", false,-1, 7,0);
    tracep->declBus(c+861,"spi_t2c_time", false,-1, 7,0);
    tracep->declBus(c+862,"spi_inter_cs_time", false,-1, 7,0);
    tracep->declBus(c+863,"spi_inter_fr_time", false,-1, 7,0);
    tracep->declBus(c+864,"spi_data_size", false,-1, 3,0);
    tracep->declBit(c+865,"spi_rx_fifo_wr_disable", false,-1);
    tracep->declBit(c+866,"spi_busy", false,-1);
    tracep->declBit(c+867,"spi_hold_off", false,-1);
    tracep->declBit(c+868,"mosi_mux_sel", false,-1);
    tracep->declBit(c+869,"spi_tx_fifo_empty", false,-1);
    tracep->declBit(c+870,"spi_mosi_fst_transmit", false,-1);
    tracep->declBit(c+871,"spi_mosi_en", false,-1);
    tracep->declBit(c+872,"spi_miso_en", false,-1);
    tracep->declBit(c+873,"tx_shift_load", false,-1);
    tracep->declBit(c+874,"spi_tx_fifo_read", false,-1);
    tracep->declBit(c+875,"spi_rx_fifo_write", false,-1);
    tracep->declBit(c+876,"spi_tx_fifo_full", false,-1);
    tracep->declBit(c+877,"spi_rx_fifo_empty", false,-1);
    tracep->declBus(c+878,"spi_rx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+879,"spi_tx_fifo_data", false,-1, 7,0);
    tracep->declBit(c+330,"spi_rx_fifo_read", false,-1);
    tracep->declBit(c+880,"spi_tx_fifo_write", false,-1);
    tracep->declBit(c+881,"spi_rx_fifo_mark", false,-1);
    tracep->declBit(c+882,"spi_tx_fifo_mark", false,-1);
    tracep->declBus(c+883,"spi_tx_water_mark", false,-1, 2,0);
    tracep->declBus(c+884,"spi_rx_water_mark", false,-1, 2,0);
    tracep->declBit(c+885,"spi_shift_direct", false,-1);
    tracep->pushNamePrefix("spi_controller_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBus(c+853,"spi_slave_sel_i", false,-1, 1,0);
    tracep->declBus(c+854,"reg_cs_default_ff_i", false,-1, 1,0);
    tracep->declBus(c+855,"reg_cs_id_ff_i", false,-1, 1,0);
    tracep->declBus(c+856,"spi_clock_period_i", false,-1, 11,0);
    tracep->declBit(c+857,"spi_clk_phase_i", false,-1);
    tracep->declBit(c+858,"spi_clk_polarity_i", false,-1);
    tracep->declBus(c+859,"spi_cs_mode_i", false,-1, 1,0);
    tracep->declBus(c+860,"c2t_time_i", false,-1, 7,0);
    tracep->declBus(c+861,"t2c_time_i", false,-1, 7,0);
    tracep->declBus(c+862,"inter_cs_time_i", false,-1, 7,0);
    tracep->declBus(c+863,"inter_frame_time_i", false,-1, 7,0);
    tracep->declBus(c+864,"spi_data_size_i", false,-1, 3,0);
    tracep->declBit(c+865,"rx_fifo_wr_disable_i", false,-1);
    tracep->declBit(c+866,"spi_busy_o", false,-1);
    tracep->declBit(c+867,"spi_hold_off_o", false,-1);
    tracep->declBit(c+869,"tx_fifo_empty_i", false,-1);
    tracep->declBit(c+870,"spi_mosi_first_transmit_o", false,-1);
    tracep->declBit(c+871,"spi_mosi_en_o", false,-1);
    tracep->declBit(c+872,"spi_miso_en_o", false,-1);
    tracep->declBit(c+873,"tx_shift_load_o", false,-1);
    tracep->declBit(c+874,"tx_fifo_read_o", false,-1);
    tracep->declBit(c+875,"rx_fifo_write_o", false,-1);
    tracep->declBit(c+868,"mosi_mux_sel_o", false,-1);
    tracep->declBit(c+846,"sclk_r_o", false,-1);
    tracep->declBus(c+886,"c2t_delay", false,-1, 8,0);
    tracep->declBus(c+887,"t2c_delay", false,-1, 8,0);
    tracep->declBus(c+888,"count_intercs", false,-1, 7,0);
    tracep->declBus(c+889,"count_interfr", false,-1, 7,0);
    tracep->declBus(c+890,"data_cnt", false,-1, 4,0);
    tracep->declBus(c+891,"clock_cnt", false,-1, 11,0);
    tracep->declBus(c+892,"count_up", false,-1, 1,0);
    tracep->declBus(c+893,"max_data_count", false,-1, 4,0);
    tracep->declBus(c+894,"spi_state_ff", false,-1, 2,0);
    tracep->declBus(c+895,"spi_state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi_datapath_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1520,"miso_i", false,-1);
    tracep->declBit(c+845,"mosi_o", false,-1);
    tracep->declBit(c+873,"tx_shift_load_i", false,-1);
    tracep->declBit(c+872,"miso_en_i", false,-1);
    tracep->declBit(c+870,"mosi_first_en_i", false,-1);
    tracep->declBit(c+871,"mosi_transmit_en_i", false,-1);
    tracep->declBit(c+868,"mosi_mux_sel_i", false,-1);
    tracep->declBit(c+874,"tx_fifo_read_i", false,-1);
    tracep->declBit(c+875,"rx_fifo_write_i", false,-1);
    tracep->declBit(c+869,"tx_fifo_empty_o", false,-1);
    tracep->declBit(c+885,"spi_shift_direct_i", false,-1);
    tracep->declBus(c+883,"tx_water_mark_i", false,-1, 2,0);
    tracep->declBus(c+884,"rx_water_mark_i", false,-1, 2,0);
    tracep->declBit(c+881,"rx_fifo_mark_o", false,-1);
    tracep->declBit(c+882,"tx_fifo_mark_o", false,-1);
    tracep->declBit(c+330,"rx_fifo_read_i", false,-1);
    tracep->declBit(c+880,"tx_fifo_write_i", false,-1);
    tracep->declBus(c+879,"tx_fifo_data_i", false,-1, 7,0);
    tracep->declBit(c+876,"tx_fifo_full_o", false,-1);
    tracep->declBit(c+877,"rx_fifo_empty_o", false,-1);
    tracep->declBus(c+878,"rx_fifo_data_o", false,-1, 7,0);
    tracep->declBus(c+896,"rx_shift_data_ff", false,-1, 7,0);
    tracep->declBus(c+897,"rx_shift_data_next", false,-1, 7,0);
    tracep->declBus(c+898,"tx_shift_data_ff", false,-1, 7,0);
    tracep->declBus(c+899,"tx_shift_data_next", false,-1, 7,0);
    tracep->declBit(c+900,"mosi_next", false,-1);
    tracep->declBus(c+901,"tx_fifo_count", false,-1, 8,0);
    tracep->declBus(c+902,"rx_fifo_count", false,-1, 8,0);
    tracep->declBus(c+903,"reg_tx_data", false,-1, 7,0);
    tracep->pushNamePrefix("rx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+896,"in_data_i", false,-1, 7,0);
    tracep->declBus(c+878,"out_data_o", false,-1, 7,0);
    tracep->declBus(c+902,"data_count_o", false,-1, 8,0);
    tracep->declBit(c+330,"fifo_read_i", false,-1);
    tracep->declBit(c+875,"fifo_write_i", false,-1);
    tracep->declBit(c+904,"fifo_full_o", false,-1);
    tracep->declBit(c+877,"fifo_empty_o", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+905+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+913,"read_ptr", false,-1, 8,0);
    tracep->declBus(c+914,"write_ptr", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+915,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+879,"in_data_i", false,-1, 7,0);
    tracep->declBus(c+903,"out_data_o", false,-1, 7,0);
    tracep->declBus(c+901,"data_count_o", false,-1, 8,0);
    tracep->declBit(c+874,"fifo_read_i", false,-1);
    tracep->declBit(c+880,"fifo_write_i", false,-1);
    tracep->declBit(c+876,"fifo_full_o", false,-1);
    tracep->declBit(c+869,"fifo_empty_o", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+916+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+924,"read_ptr", false,-1, 8,0);
    tracep->declBus(c+925,"write_ptr", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+926,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi_regs_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+171,"spi_sel_i", false,-1);
    tracep->declBit(c+848,"irq_o", false,-1);
    tracep->pushNamePrefix("dbus2spi_i\206 ");
    tracep->declBus(c+320,"addr", false,-1, 31,0);
    tracep->declBus(c+321,"w_data", false,-1, 31,0);
    tracep->declBus(c+322,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+323,"w_en", false,-1);
    tracep->declBit(c+324,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o\206 ");
    tracep->declBus(c+118,"r_data", false,-1, 31,0);
    tracep->declBit(c+676,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+866,"spi_busy_i", false,-1);
    tracep->declBit(c+867,"spi_hold_off_i", false,-1);
    tracep->declBus(c+856,"spi_clock_period_o", false,-1, 11,0);
    tracep->declBit(c+857,"spi_clk_phase_o", false,-1);
    tracep->declBit(c+858,"spi_clk_polarity_o", false,-1);
    tracep->declBus(c+859,"reg_cs_mode_ff_o", false,-1, 1,0);
    tracep->declBus(c+860,"c2t_time_o", false,-1, 7,0);
    tracep->declBus(c+861,"t2c_time_o", false,-1, 7,0);
    tracep->declBus(c+862,"inter_cs_time_o", false,-1, 7,0);
    tracep->declBus(c+863,"inter_frame_time_o", false,-1, 7,0);
    tracep->declBus(c+864,"spi_data_size_o", false,-1, 3,0);
    tracep->declBus(c+854,"reg_cs_default_ff_o", false,-1, 1,0);
    tracep->declBus(c+855,"reg_cs_id_ff_o", false,-1, 1,0);
    tracep->declBit(c+876,"tx_fifo_full_i", false,-1);
    tracep->declBit(c+877,"rx_fifo_empty_i", false,-1);
    tracep->declBus(c+878,"rx_fifo_data_i", false,-1, 7,0);
    tracep->declBus(c+879,"reg_tx_data_ff_o", false,-1, 7,0);
    tracep->declBit(c+865,"rx_fifo_wr_disable_o", false,-1);
    tracep->declBit(c+330,"rx_fifo_read_o", false,-1);
    tracep->declBit(c+880,"tx_fifo_write_o", false,-1);
    tracep->declBit(c+881,"rx_fifo_mark_i", false,-1);
    tracep->declBit(c+882,"tx_fifo_mark_i", false,-1);
    tracep->declBus(c+883,"tx_water_mark_o", false,-1, 2,0);
    tracep->declBus(c+884,"rx_water_mark_o", false,-1, 2,0);
    tracep->declBit(c+885,"spi_shift_direct_o", false,-1);
    tracep->pushNamePrefix("dbus2spi\206 ");
    tracep->declBus(c+320,"addr", false,-1, 31,0);
    tracep->declBus(c+321,"w_data", false,-1, 31,0);
    tracep->declBus(c+322,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+323,"w_en", false,-1);
    tracep->declBit(c+324,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_ff\206 ");
    tracep->declBus(c+678,"r_data", false,-1, 31,0);
    tracep->declBit(c+679,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+331,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+332,"reg_rd_req", false,-1);
    tracep->declBit(c+333,"reg_wr_req", false,-1);
    tracep->declBus(c+334,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+335,"reg_r_data", false,-1, 31,0);
    tracep->declBit(c+927,"rx_fifo_empty_ff", false,-1);
    tracep->declBit(c+336,"spi_sel_sdiv", false,-1);
    tracep->declBit(c+337,"spi_sel_ckmode", false,-1);
    tracep->declBit(c+338,"spi_sel_csid", false,-1);
    tracep->declBit(c+339,"spi_sel_csdef", false,-1);
    tracep->declBit(c+340,"spi_sel_csmode", false,-1);
    tracep->declBit(c+341,"spi_sel_del0", false,-1);
    tracep->declBit(c+342,"spi_sel_del1", false,-1);
    tracep->declBit(c+343,"spi_sel_fmt", false,-1);
    tracep->declBit(c+344,"spi_sel_txdata", false,-1);
    tracep->declBit(c+345,"spi_sel_txmark", false,-1);
    tracep->declBit(c+346,"spi_sel_rxmark", false,-1);
    tracep->declBit(c+347,"spi_sel_ie", false,-1);
    tracep->declBus(c+123,"reg_sck_div_next", false,-1, 11,0);
    tracep->declBus(c+856,"reg_sck_div_ff", false,-1, 11,0);
    tracep->declBus(c+124,"reg_sck_mode_next", false,-1, 1,0);
    tracep->declBus(c+928,"reg_sck_mode_ff", false,-1, 1,0);
    tracep->declBus(c+125,"reg_cs_id_next", false,-1, 1,0);
    tracep->declBus(c+126,"reg_cs_default_next", false,-1, 1,0);
    tracep->declBus(c+127,"reg_cs_mode_next", false,-1, 1,0);
    tracep->declBus(c+128,"reg_delay0_next", false,-1, 15,0);
    tracep->declBus(c+929,"reg_delay0_ff", false,-1, 15,0);
    tracep->declBus(c+129,"reg_delay1_next", false,-1, 15,0);
    tracep->declBus(c+930,"reg_delay1_ff", false,-1, 15,0);
    tracep->declBus(c+130,"reg_fmt_next", false,-1, 7,0);
    tracep->declBus(c+931,"reg_fmt_ff", false,-1, 7,0);
    tracep->declBus(c+131,"reg_tx_data_next", false,-1, 7,0);
    tracep->declBus(c+1521,"reg_rx_data_next", false,-1, 7,0);
    tracep->declBus(c+1522,"reg_rx_data_ff", false,-1, 7,0);
    tracep->declBus(c+132,"reg_tx_mark_next", false,-1, 2,0);
    tracep->declBus(c+883,"reg_tx_mark_ff", false,-1, 2,0);
    tracep->declBus(c+133,"reg_rx_mark_next", false,-1, 2,0);
    tracep->declBus(c+884,"reg_rx_mark_ff", false,-1, 2,0);
    tracep->declBus(c+134,"reg_intr_enable_next", false,-1, 1,0);
    tracep->declBus(c+932,"reg_intr_enable_ff", false,-1, 1,0);
    tracep->declBus(c+933,"reg_intr_pend_next", false,-1, 1,0);
    tracep->declBus(c+934,"reg_intr_pend_ff", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("spi1_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2spi_i\206 ");
    tracep->declBus(c+325,"addr", false,-1, 31,0);
    tracep->declBus(c+326,"w_data", false,-1, 31,0);
    tracep->declBus(c+327,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+328,"w_en", false,-1);
    tracep->declBit(c+329,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o\206 ");
    tracep->declBus(c+119,"r_data", false,-1, 31,0);
    tracep->declBit(c+677,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+172,"spi_sel_i", false,-1);
    tracep->declBit(c+850,"spi_clk_o", false,-1);
    tracep->declBus(c+935,"spi_cs_o", false,-1, 1,0);
    tracep->declBit(c+852,"spi_irq_o", false,-1);
    tracep->declBit(c+1523,"spi_miso_i", false,-1);
    tracep->declBit(c+849,"spi_mosi_o", false,-1);
    tracep->declBus(c+936,"spi_reg_cs_default", false,-1, 1,0);
    tracep->declBus(c+937,"spi_reg_cs_id", false,-1, 1,0);
    tracep->declBus(c+938,"spi_clock_period", false,-1, 11,0);
    tracep->declBit(c+939,"spi_clk_phase", false,-1);
    tracep->declBit(c+940,"spi_clk_polarity", false,-1);
    tracep->declBus(c+941,"spi_cs_mode", false,-1, 1,0);
    tracep->declBus(c+942,"spi_c2t_time", false,-1, 7,0);
    tracep->declBus(c+943,"spi_t2c_time", false,-1, 7,0);
    tracep->declBus(c+944,"spi_inter_cs_time", false,-1, 7,0);
    tracep->declBus(c+945,"spi_inter_fr_time", false,-1, 7,0);
    tracep->declBus(c+946,"spi_data_size", false,-1, 3,0);
    tracep->declBit(c+947,"spi_rx_fifo_wr_disable", false,-1);
    tracep->declBit(c+948,"spi_busy", false,-1);
    tracep->declBit(c+949,"spi_hold_off", false,-1);
    tracep->declBit(c+950,"mosi_mux_sel", false,-1);
    tracep->declBit(c+951,"spi_tx_fifo_empty", false,-1);
    tracep->declBit(c+952,"spi_mosi_fst_transmit", false,-1);
    tracep->declBit(c+953,"spi_mosi_en", false,-1);
    tracep->declBit(c+954,"spi_miso_en", false,-1);
    tracep->declBit(c+955,"tx_shift_load", false,-1);
    tracep->declBit(c+956,"spi_tx_fifo_read", false,-1);
    tracep->declBit(c+957,"spi_rx_fifo_write", false,-1);
    tracep->declBit(c+958,"spi_tx_fifo_full", false,-1);
    tracep->declBit(c+959,"spi_rx_fifo_empty", false,-1);
    tracep->declBus(c+960,"spi_rx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+961,"spi_tx_fifo_data", false,-1, 7,0);
    tracep->declBit(c+348,"spi_rx_fifo_read", false,-1);
    tracep->declBit(c+962,"spi_tx_fifo_write", false,-1);
    tracep->declBit(c+963,"spi_rx_fifo_mark", false,-1);
    tracep->declBit(c+964,"spi_tx_fifo_mark", false,-1);
    tracep->declBus(c+965,"spi_tx_water_mark", false,-1, 2,0);
    tracep->declBus(c+966,"spi_rx_water_mark", false,-1, 2,0);
    tracep->declBit(c+967,"spi_shift_direct", false,-1);
    tracep->pushNamePrefix("spi_controller_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBus(c+935,"spi_slave_sel_i", false,-1, 1,0);
    tracep->declBus(c+936,"reg_cs_default_ff_i", false,-1, 1,0);
    tracep->declBus(c+937,"reg_cs_id_ff_i", false,-1, 1,0);
    tracep->declBus(c+938,"spi_clock_period_i", false,-1, 11,0);
    tracep->declBit(c+939,"spi_clk_phase_i", false,-1);
    tracep->declBit(c+940,"spi_clk_polarity_i", false,-1);
    tracep->declBus(c+941,"spi_cs_mode_i", false,-1, 1,0);
    tracep->declBus(c+942,"c2t_time_i", false,-1, 7,0);
    tracep->declBus(c+943,"t2c_time_i", false,-1, 7,0);
    tracep->declBus(c+944,"inter_cs_time_i", false,-1, 7,0);
    tracep->declBus(c+945,"inter_frame_time_i", false,-1, 7,0);
    tracep->declBus(c+946,"spi_data_size_i", false,-1, 3,0);
    tracep->declBit(c+947,"rx_fifo_wr_disable_i", false,-1);
    tracep->declBit(c+948,"spi_busy_o", false,-1);
    tracep->declBit(c+949,"spi_hold_off_o", false,-1);
    tracep->declBit(c+951,"tx_fifo_empty_i", false,-1);
    tracep->declBit(c+952,"spi_mosi_first_transmit_o", false,-1);
    tracep->declBit(c+953,"spi_mosi_en_o", false,-1);
    tracep->declBit(c+954,"spi_miso_en_o", false,-1);
    tracep->declBit(c+955,"tx_shift_load_o", false,-1);
    tracep->declBit(c+956,"tx_fifo_read_o", false,-1);
    tracep->declBit(c+957,"rx_fifo_write_o", false,-1);
    tracep->declBit(c+950,"mosi_mux_sel_o", false,-1);
    tracep->declBit(c+850,"sclk_r_o", false,-1);
    tracep->declBus(c+968,"c2t_delay", false,-1, 8,0);
    tracep->declBus(c+969,"t2c_delay", false,-1, 8,0);
    tracep->declBus(c+970,"count_intercs", false,-1, 7,0);
    tracep->declBus(c+971,"count_interfr", false,-1, 7,0);
    tracep->declBus(c+972,"data_cnt", false,-1, 4,0);
    tracep->declBus(c+973,"clock_cnt", false,-1, 11,0);
    tracep->declBus(c+974,"count_up", false,-1, 1,0);
    tracep->declBus(c+975,"max_data_count", false,-1, 4,0);
    tracep->declBus(c+976,"spi_state_ff", false,-1, 2,0);
    tracep->declBus(c+977,"spi_state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi_datapath_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1523,"miso_i", false,-1);
    tracep->declBit(c+849,"mosi_o", false,-1);
    tracep->declBit(c+955,"tx_shift_load_i", false,-1);
    tracep->declBit(c+954,"miso_en_i", false,-1);
    tracep->declBit(c+952,"mosi_first_en_i", false,-1);
    tracep->declBit(c+953,"mosi_transmit_en_i", false,-1);
    tracep->declBit(c+950,"mosi_mux_sel_i", false,-1);
    tracep->declBit(c+956,"tx_fifo_read_i", false,-1);
    tracep->declBit(c+957,"rx_fifo_write_i", false,-1);
    tracep->declBit(c+951,"tx_fifo_empty_o", false,-1);
    tracep->declBit(c+967,"spi_shift_direct_i", false,-1);
    tracep->declBus(c+965,"tx_water_mark_i", false,-1, 2,0);
    tracep->declBus(c+966,"rx_water_mark_i", false,-1, 2,0);
    tracep->declBit(c+963,"rx_fifo_mark_o", false,-1);
    tracep->declBit(c+964,"tx_fifo_mark_o", false,-1);
    tracep->declBit(c+348,"rx_fifo_read_i", false,-1);
    tracep->declBit(c+962,"tx_fifo_write_i", false,-1);
    tracep->declBus(c+961,"tx_fifo_data_i", false,-1, 7,0);
    tracep->declBit(c+958,"tx_fifo_full_o", false,-1);
    tracep->declBit(c+959,"rx_fifo_empty_o", false,-1);
    tracep->declBus(c+960,"rx_fifo_data_o", false,-1, 7,0);
    tracep->declBus(c+978,"rx_shift_data_ff", false,-1, 7,0);
    tracep->declBus(c+979,"rx_shift_data_next", false,-1, 7,0);
    tracep->declBus(c+980,"tx_shift_data_ff", false,-1, 7,0);
    tracep->declBus(c+981,"tx_shift_data_next", false,-1, 7,0);
    tracep->declBit(c+982,"mosi_next", false,-1);
    tracep->declBus(c+983,"tx_fifo_count", false,-1, 8,0);
    tracep->declBus(c+984,"rx_fifo_count", false,-1, 8,0);
    tracep->declBus(c+985,"reg_tx_data", false,-1, 7,0);
    tracep->pushNamePrefix("rx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+978,"in_data_i", false,-1, 7,0);
    tracep->declBus(c+960,"out_data_o", false,-1, 7,0);
    tracep->declBus(c+984,"data_count_o", false,-1, 8,0);
    tracep->declBit(c+348,"fifo_read_i", false,-1);
    tracep->declBit(c+957,"fifo_write_i", false,-1);
    tracep->declBit(c+986,"fifo_full_o", false,-1);
    tracep->declBit(c+959,"fifo_empty_o", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+987+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+995,"read_ptr", false,-1, 8,0);
    tracep->declBus(c+996,"write_ptr", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+997,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+961,"in_data_i", false,-1, 7,0);
    tracep->declBus(c+985,"out_data_o", false,-1, 7,0);
    tracep->declBus(c+983,"data_count_o", false,-1, 8,0);
    tracep->declBit(c+956,"fifo_read_i", false,-1);
    tracep->declBit(c+962,"fifo_write_i", false,-1);
    tracep->declBit(c+958,"fifo_full_o", false,-1);
    tracep->declBit(c+951,"fifo_empty_o", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+998+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+1006,"read_ptr", false,-1, 8,0);
    tracep->declBus(c+1007,"write_ptr", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1008,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi_regs_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+172,"spi_sel_i", false,-1);
    tracep->declBit(c+852,"irq_o", false,-1);
    tracep->pushNamePrefix("dbus2spi_i\206 ");
    tracep->declBus(c+325,"addr", false,-1, 31,0);
    tracep->declBus(c+326,"w_data", false,-1, 31,0);
    tracep->declBus(c+327,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+328,"w_en", false,-1);
    tracep->declBit(c+329,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o\206 ");
    tracep->declBus(c+119,"r_data", false,-1, 31,0);
    tracep->declBit(c+677,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+948,"spi_busy_i", false,-1);
    tracep->declBit(c+949,"spi_hold_off_i", false,-1);
    tracep->declBus(c+938,"spi_clock_period_o", false,-1, 11,0);
    tracep->declBit(c+939,"spi_clk_phase_o", false,-1);
    tracep->declBit(c+940,"spi_clk_polarity_o", false,-1);
    tracep->declBus(c+941,"reg_cs_mode_ff_o", false,-1, 1,0);
    tracep->declBus(c+942,"c2t_time_o", false,-1, 7,0);
    tracep->declBus(c+943,"t2c_time_o", false,-1, 7,0);
    tracep->declBus(c+944,"inter_cs_time_o", false,-1, 7,0);
    tracep->declBus(c+945,"inter_frame_time_o", false,-1, 7,0);
    tracep->declBus(c+946,"spi_data_size_o", false,-1, 3,0);
    tracep->declBus(c+936,"reg_cs_default_ff_o", false,-1, 1,0);
    tracep->declBus(c+937,"reg_cs_id_ff_o", false,-1, 1,0);
    tracep->declBit(c+958,"tx_fifo_full_i", false,-1);
    tracep->declBit(c+959,"rx_fifo_empty_i", false,-1);
    tracep->declBus(c+960,"rx_fifo_data_i", false,-1, 7,0);
    tracep->declBus(c+961,"reg_tx_data_ff_o", false,-1, 7,0);
    tracep->declBit(c+947,"rx_fifo_wr_disable_o", false,-1);
    tracep->declBit(c+348,"rx_fifo_read_o", false,-1);
    tracep->declBit(c+962,"tx_fifo_write_o", false,-1);
    tracep->declBit(c+963,"rx_fifo_mark_i", false,-1);
    tracep->declBit(c+964,"tx_fifo_mark_i", false,-1);
    tracep->declBus(c+965,"tx_water_mark_o", false,-1, 2,0);
    tracep->declBus(c+966,"rx_water_mark_o", false,-1, 2,0);
    tracep->declBit(c+967,"spi_shift_direct_o", false,-1);
    tracep->pushNamePrefix("dbus2spi\206 ");
    tracep->declBus(c+325,"addr", false,-1, 31,0);
    tracep->declBus(c+326,"w_data", false,-1, 31,0);
    tracep->declBus(c+327,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+328,"w_en", false,-1);
    tracep->declBit(c+329,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_ff\206 ");
    tracep->declBus(c+680,"r_data", false,-1, 31,0);
    tracep->declBit(c+681,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+349,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+350,"reg_rd_req", false,-1);
    tracep->declBit(c+351,"reg_wr_req", false,-1);
    tracep->declBus(c+352,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+353,"reg_r_data", false,-1, 31,0);
    tracep->declBit(c+1009,"rx_fifo_empty_ff", false,-1);
    tracep->declBit(c+354,"spi_sel_sdiv", false,-1);
    tracep->declBit(c+355,"spi_sel_ckmode", false,-1);
    tracep->declBit(c+356,"spi_sel_csid", false,-1);
    tracep->declBit(c+357,"spi_sel_csdef", false,-1);
    tracep->declBit(c+358,"spi_sel_csmode", false,-1);
    tracep->declBit(c+359,"spi_sel_del0", false,-1);
    tracep->declBit(c+360,"spi_sel_del1", false,-1);
    tracep->declBit(c+361,"spi_sel_fmt", false,-1);
    tracep->declBit(c+362,"spi_sel_txdata", false,-1);
    tracep->declBit(c+363,"spi_sel_txmark", false,-1);
    tracep->declBit(c+364,"spi_sel_rxmark", false,-1);
    tracep->declBit(c+365,"spi_sel_ie", false,-1);
    tracep->declBus(c+135,"reg_sck_div_next", false,-1, 11,0);
    tracep->declBus(c+938,"reg_sck_div_ff", false,-1, 11,0);
    tracep->declBus(c+136,"reg_sck_mode_next", false,-1, 1,0);
    tracep->declBus(c+1010,"reg_sck_mode_ff", false,-1, 1,0);
    tracep->declBus(c+137,"reg_cs_id_next", false,-1, 1,0);
    tracep->declBus(c+138,"reg_cs_default_next", false,-1, 1,0);
    tracep->declBus(c+139,"reg_cs_mode_next", false,-1, 1,0);
    tracep->declBus(c+140,"reg_delay0_next", false,-1, 15,0);
    tracep->declBus(c+1011,"reg_delay0_ff", false,-1, 15,0);
    tracep->declBus(c+141,"reg_delay1_next", false,-1, 15,0);
    tracep->declBus(c+1012,"reg_delay1_ff", false,-1, 15,0);
    tracep->declBus(c+142,"reg_fmt_next", false,-1, 7,0);
    tracep->declBus(c+1013,"reg_fmt_ff", false,-1, 7,0);
    tracep->declBus(c+143,"reg_tx_data_next", false,-1, 7,0);
    tracep->declBus(c+1524,"reg_rx_data_next", false,-1, 7,0);
    tracep->declBus(c+1525,"reg_rx_data_ff", false,-1, 7,0);
    tracep->declBus(c+144,"reg_tx_mark_next", false,-1, 2,0);
    tracep->declBus(c+965,"reg_tx_mark_ff", false,-1, 2,0);
    tracep->declBus(c+145,"reg_rx_mark_next", false,-1, 2,0);
    tracep->declBus(c+966,"reg_rx_mark_ff", false,-1, 2,0);
    tracep->declBus(c+146,"reg_intr_enable_next", false,-1, 1,0);
    tracep->declBus(c+1014,"reg_intr_enable_ff", false,-1, 1,0);
    tracep->declBus(c+1015,"reg_intr_pend_next", false,-1, 1,0);
    tracep->declBus(c+1016,"reg_intr_pend_ff", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("uart_top_module ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+167,"uart0_sel_i", false,-1);
    tracep->declBit(c+168,"uart1_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2uart_i\206 ");
    tracep->declBus(c+161,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"w_data", false,-1, 31,0);
    tracep->declBus(c+163,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+164,"w_en", false,-1);
    tracep->declBit(c+165,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o\206 ");
    tracep->declBus(c+179,"r_data", false,-1, 31,0);
    tracep->declBit(c+180,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+736,"uart_irq_o", false,-1);
    tracep->declBus(c+69,"uart_rxd_i", false,-1, 1,0);
    tracep->declBus(c+735,"uart_txd_o", false,-1, 1,0);
    tracep->declBit(c+1017,"uart0_irq", false,-1);
    tracep->declBit(c+1526,"uart0_rxd", false,-1);
    tracep->declBit(c+731,"uart0_txd", false,-1);
    tracep->declBit(c+1018,"uart1_irq", false,-1);
    tracep->declBit(c+1527,"uart1_rxd", false,-1);
    tracep->declBit(c+1019,"uart1_txd", false,-1);
    tracep->pushNamePrefix("dbus2uart0\206 ");
    tracep->declBus(c+366,"addr", false,-1, 31,0);
    tracep->declBus(c+367,"w_data", false,-1, 31,0);
    tracep->declBus(c+368,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+369,"w_en", false,-1);
    tracep->declBit(c+370,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart0_2dbus\206 ");
    tracep->declBus(c+120,"r_data", false,-1, 31,0);
    tracep->declBit(c+682,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2uart1\206 ");
    tracep->declBus(c+371,"addr", false,-1, 31,0);
    tracep->declBus(c+372,"w_data", false,-1, 31,0);
    tracep->declBus(c+373,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+374,"w_en", false,-1);
    tracep->declBit(c+375,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart1_2dbus\206 ");
    tracep->declBus(c+121,"r_data", false,-1, 31,0);
    tracep->declBit(c+683,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart0_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2uart_i\206 ");
    tracep->declBus(c+366,"addr", false,-1, 31,0);
    tracep->declBus(c+367,"w_data", false,-1, 31,0);
    tracep->declBus(c+368,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+369,"w_en", false,-1);
    tracep->declBit(c+370,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o\206 ");
    tracep->declBus(c+120,"r_data", false,-1, 31,0);
    tracep->declBit(c+682,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+167,"uart_sel_i", false,-1);
    tracep->declBit(c+1017,"uart_irq_o", false,-1);
    tracep->declBit(c+2,"uart_rxd_i", false,-1);
    tracep->declBit(c+731,"uart_txd_o", false,-1);
    tracep->declBit(c+1020,"uart_rx_fifo_empty", false,-1);
    tracep->declBit(c+1021,"uart_tx_fifo_full", false,-1);
    tracep->declBus(c+1022,"uart_rx_fifo_data", false,-1, 7,0);
    tracep->declBit(c+376,"uart_rx_fifo_read", false,-1);
    tracep->declBit(c+1023,"uart_tx_fifo_write", false,-1);
    tracep->declBus(c+1024,"uart_tx_data", false,-1, 7,0);
    tracep->declBit(c+1025,"uart_rx_fifo_mark", false,-1);
    tracep->declBit(c+1026,"uart_tx_fifo_mark", false,-1);
    tracep->declBus(c+1027,"uart_rx_watermark", false,-1, 2,0);
    tracep->declBus(c+1028,"uart_tx_watermark", false,-1, 2,0);
    tracep->declBit(c+1029,"uart_tx_en", false,-1);
    tracep->declBit(c+1030,"uart_rx_en", false,-1);
    tracep->declBit(c+1031,"uart_two_stop_bits", false,-1);
    tracep->declBus(c+1032,"uart_baud_rate", false,-1, 15,0);
    tracep->pushNamePrefix("uart_receiver_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+2,"rx_pin_i", false,-1);
    tracep->declBit(c+376,"rx_fifo_read_i", false,-1);
    tracep->declBit(c+1020,"rx_fifo_empty_o", false,-1);
    tracep->declBus(c+1022,"rx_fifo_data_o", false,-1, 7,0);
    tracep->declBit(c+1025,"rx_fifo_mark_o", false,-1);
    tracep->declBus(c+1027,"rx_watermark_i", false,-1, 2,0);
    tracep->declBit(c+1030,"rx_en_i", false,-1);
    tracep->declBus(c+1032,"baud_rate_i", false,-1, 15,0);
    tracep->declBus(c+1033,"rx_state_ff", false,-1, 1,0);
    tracep->declBus(c+1418,"rx_state_next", false,-1, 1,0);
    tracep->declBit(c+1034,"baud_cnt_ovf", false,-1);
    tracep->declBit(c+1371,"baud_count_en", false,-1);
    tracep->declBit(c+1372,"baud_count_reset", false,-1);
    tracep->declBit(c+1373,"shifter_en", false,-1);
    tracep->declBit(c+1374,"bit_count_en", false,-1);
    tracep->declBit(c+1375,"bit_count_load_en", false,-1);
    tracep->declBit(c+1376,"sbit_count_reset", false,-1);
    tracep->declBit(c+1377,"sbit_count_en", false,-1);
    tracep->declBit(c+1378,"fifo_load_en", false,-1);
    tracep->declBus(c+1035,"bit_counter", false,-1, 3,0);
    tracep->declBus(c+1036,"baud_counter", false,-1, 15,0);
    tracep->declBus(c+1037,"sbit_sample_counter", false,-1, 15,0);
    tracep->declBit(c+1038,"sbit_mid_point", false,-1);
    tracep->declBit(c+1419,"rx_pin_ff", false,-1);
    tracep->declBus(c+1039,"shifter_ff", false,-1, 7,0);
    tracep->declBus(c+1420,"shifter_next", false,-1, 7,0);
    tracep->declBus(c+1040,"rx_fifo_count", false,-1, 3,0);
    tracep->declBit(c+1041,"rx_fifo_full", false,-1);
    tracep->declBit(c+1042,"rx_busy", false,-1);
    tracep->pushNamePrefix("rx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+1039,"data_in", false,-1, 7,0);
    tracep->declBus(c+1022,"data_out", false,-1, 7,0);
    tracep->declBus(c+1040,"data_count", false,-1, 3,0);
    tracep->declBit(c+376,"fifo_read", false,-1);
    tracep->declBit(c+1378,"fifo_write", false,-1);
    tracep->declBit(c+1041,"fifo_full", false,-1);
    tracep->declBit(c+1020,"fifo_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1043+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+1051,"read_ptr", false,-1, 3,0);
    tracep->declBus(c+1052,"write_ptr", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1053,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("uart_regs_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+167,"uart_sel_i", false,-1);
    tracep->declBit(c+1017,"irq_o", false,-1);
    tracep->pushNamePrefix("dbus2uart_i\206 ");
    tracep->declBus(c+366,"addr", false,-1, 31,0);
    tracep->declBus(c+367,"w_data", false,-1, 31,0);
    tracep->declBus(c+368,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+369,"w_en", false,-1);
    tracep->declBit(c+370,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o\206 ");
    tracep->declBus(c+120,"r_data", false,-1, 31,0);
    tracep->declBit(c+682,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1020,"rx_fifo_empty_i", false,-1);
    tracep->declBit(c+1021,"tx_fifo_full_i", false,-1);
    tracep->declBus(c+1022,"rx_fifo_data_i", false,-1, 7,0);
    tracep->declBit(c+376,"rx_fifo_read_o", false,-1);
    tracep->declBit(c+1023,"tx_fifo_write_o", false,-1);
    tracep->declBus(c+1024,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+1025,"rx_fifo_mark_i", false,-1);
    tracep->declBit(c+1026,"tx_fifo_mark_i", false,-1);
    tracep->declBus(c+1027,"rx_watermark_o", false,-1, 2,0);
    tracep->declBus(c+1028,"tx_watermark_o", false,-1, 2,0);
    tracep->declBit(c+1029,"tx_en_o", false,-1);
    tracep->declBit(c+1030,"rx_en_o", false,-1);
    tracep->declBit(c+1031,"two_stop_bits_o", false,-1);
    tracep->declBus(c+1032,"baud_rate_o", false,-1, 15,0);
    tracep->declBit(c+1054,"rx_fifo_empty", false,-1);
    tracep->declBit(c+1023,"tx_valid_ff", false,-1);
    tracep->declBit(c+377,"tx_valid_next", false,-1);
    tracep->declBus(c+1024,"uart_reg_tx_ff", false,-1, 7,0);
    tracep->declBus(c+147,"uart_reg_tx_next", false,-1, 7,0);
    tracep->declBus(c+1055,"uart_reg_txctrl_ff", false,-1, 4,0);
    tracep->declBus(c+148,"uart_reg_txctrl_next", false,-1, 4,0);
    tracep->declBus(c+1056,"uart_reg_rxctrl_ff", false,-1, 3,0);
    tracep->declBus(c+149,"uart_reg_rxctrl_next", false,-1, 3,0);
    tracep->declBus(c+1057,"uart_reg_int_en_ff", false,-1, 1,0);
    tracep->declBus(c+150,"uart_reg_int_en_next", false,-1, 1,0);
    tracep->declBus(c+1058,"uart_reg_int_pend_ff", false,-1, 1,0);
    tracep->declBus(c+1059,"uart_reg_int_pend_next", false,-1, 1,0);
    tracep->declBus(c+1032,"uart_reg_baud_ff", false,-1, 15,0);
    tracep->declBus(c+151,"uart_reg_baud_next", false,-1, 15,0);
    tracep->declBit(c+378,"tx_reg_wr_flag", false,-1);
    tracep->declBit(c+379,"txctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+380,"rxctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+381,"int_en_reg_wr_flag", false,-1);
    tracep->declBit(c+382,"baud_reg_wr_flag", false,-1);
    tracep->declBus(c+383,"reg_addr", false,-1, 3,0);
    tracep->declBit(c+384,"reg_rd_req", false,-1);
    tracep->declBit(c+385,"reg_wr_req", false,-1);
    tracep->declBus(c+386,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+387,"reg_w_data", false,-1, 31,0);
    tracep->pushNamePrefix("uart2dbus_ff\206 ");
    tracep->declBus(c+684,"r_data", false,-1, 31,0);
    tracep->declBit(c+685,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_transmitter_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+731,"txd_pin_o", false,-1);
    tracep->declBit(c+1021,"tx_fifo_full_o", false,-1);
    tracep->declBit(c+1023,"tx_fifo_write_i", false,-1);
    tracep->declBus(c+1024,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+1026,"tx_fifo_mark_o", false,-1);
    tracep->declBus(c+1028,"tx_watermark_i", false,-1, 2,0);
    tracep->declBit(c+1029,"tx_en_i", false,-1);
    tracep->declBit(c+1031,"two_stop_bits_i", false,-1);
    tracep->declBus(c+1032,"baud_rate_i", false,-1, 15,0);
    tracep->declBus(c+1060,"tx_state_ff", false,-1, 1,0);
    tracep->declBus(c+1061,"tx_state_next", false,-1, 1,0);
    tracep->declBit(c+1062,"baud_cnt_ovf", false,-1);
    tracep->declBit(c+1063,"baud_count_en", false,-1);
    tracep->declBit(c+1064,"baud_count_reset", false,-1);
    tracep->declBit(c+1065,"shifter_load_en", false,-1);
    tracep->declBit(c+1066,"shifter_en", false,-1);
    tracep->declBit(c+1067,"bit_count_en", false,-1);
    tracep->declBit(c+1068,"bit_count_load_en", false,-1);
    tracep->declBit(c+1069,"txd_mux_sel", false,-1);
    tracep->declBit(c+1070,"tx_fifo_read", false,-1);
    tracep->declBus(c+1071,"shifter_ff", false,-1, 10,0);
    tracep->declBus(c+1072,"shifter_next", false,-1, 10,0);
    tracep->declBus(c+1073,"bit_counter", false,-1, 3,0);
    tracep->declBus(c+1074,"uart_frame_size", false,-1, 3,0);
    tracep->declBus(c+1075,"baud_counter", false,-1, 15,0);
    tracep->declBit(c+1076,"tx_busy", false,-1);
    tracep->declBit(c+1077,"tx_fifo_empty", false,-1);
    tracep->declBus(c+1078,"tx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+1079,"tx_fifo_count", false,-1, 3,0);
    tracep->pushNamePrefix("tx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+1024,"data_in", false,-1, 7,0);
    tracep->declBus(c+1078,"data_out", false,-1, 7,0);
    tracep->declBus(c+1079,"data_count", false,-1, 3,0);
    tracep->declBit(c+1070,"fifo_read", false,-1);
    tracep->declBit(c+1023,"fifo_write", false,-1);
    tracep->declBit(c+1021,"fifo_full", false,-1);
    tracep->declBit(c+1077,"fifo_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1080+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+1088,"read_ptr", false,-1, 3,0);
    tracep->declBus(c+1089,"write_ptr", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1090,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("uart1_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->pushNamePrefix("dbus2uart_i\206 ");
    tracep->declBus(c+371,"addr", false,-1, 31,0);
    tracep->declBus(c+372,"w_data", false,-1, 31,0);
    tracep->declBus(c+373,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+374,"w_en", false,-1);
    tracep->declBit(c+375,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o\206 ");
    tracep->declBus(c+121,"r_data", false,-1, 31,0);
    tracep->declBit(c+683,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+168,"uart_sel_i", false,-1);
    tracep->declBit(c+1018,"uart_irq_o", false,-1);
    tracep->declBit(c+1506,"uart_rxd_i", false,-1);
    tracep->declBit(c+1019,"uart_txd_o", false,-1);
    tracep->declBit(c+1091,"uart_rx_fifo_empty", false,-1);
    tracep->declBit(c+1092,"uart_tx_fifo_full", false,-1);
    tracep->declBus(c+1093,"uart_rx_fifo_data", false,-1, 7,0);
    tracep->declBit(c+388,"uart_rx_fifo_read", false,-1);
    tracep->declBit(c+1094,"uart_tx_fifo_write", false,-1);
    tracep->declBus(c+1095,"uart_tx_data", false,-1, 7,0);
    tracep->declBit(c+1096,"uart_rx_fifo_mark", false,-1);
    tracep->declBit(c+1097,"uart_tx_fifo_mark", false,-1);
    tracep->declBus(c+1098,"uart_rx_watermark", false,-1, 2,0);
    tracep->declBus(c+1099,"uart_tx_watermark", false,-1, 2,0);
    tracep->declBit(c+1100,"uart_tx_en", false,-1);
    tracep->declBit(c+1101,"uart_rx_en", false,-1);
    tracep->declBit(c+1102,"uart_two_stop_bits", false,-1);
    tracep->declBus(c+1103,"uart_baud_rate", false,-1, 15,0);
    tracep->pushNamePrefix("uart_receiver_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1506,"rx_pin_i", false,-1);
    tracep->declBit(c+388,"rx_fifo_read_i", false,-1);
    tracep->declBit(c+1091,"rx_fifo_empty_o", false,-1);
    tracep->declBus(c+1093,"rx_fifo_data_o", false,-1, 7,0);
    tracep->declBit(c+1096,"rx_fifo_mark_o", false,-1);
    tracep->declBus(c+1098,"rx_watermark_i", false,-1, 2,0);
    tracep->declBit(c+1101,"rx_en_i", false,-1);
    tracep->declBus(c+1103,"baud_rate_i", false,-1, 15,0);
    tracep->declBus(c+1104,"rx_state_ff", false,-1, 1,0);
    tracep->declBus(c+1421,"rx_state_next", false,-1, 1,0);
    tracep->declBit(c+1105,"baud_cnt_ovf", false,-1);
    tracep->declBit(c+1379,"baud_count_en", false,-1);
    tracep->declBit(c+1380,"baud_count_reset", false,-1);
    tracep->declBit(c+1381,"shifter_en", false,-1);
    tracep->declBit(c+1382,"bit_count_en", false,-1);
    tracep->declBit(c+1383,"bit_count_load_en", false,-1);
    tracep->declBit(c+1384,"sbit_count_reset", false,-1);
    tracep->declBit(c+1385,"sbit_count_en", false,-1);
    tracep->declBit(c+1386,"fifo_load_en", false,-1);
    tracep->declBus(c+1106,"bit_counter", false,-1, 3,0);
    tracep->declBus(c+1107,"baud_counter", false,-1, 15,0);
    tracep->declBus(c+1108,"sbit_sample_counter", false,-1, 15,0);
    tracep->declBit(c+1109,"sbit_mid_point", false,-1);
    tracep->declBit(c+1422,"rx_pin_ff", false,-1);
    tracep->declBus(c+1110,"shifter_ff", false,-1, 7,0);
    tracep->declBus(c+1423,"shifter_next", false,-1, 7,0);
    tracep->declBus(c+1111,"rx_fifo_count", false,-1, 3,0);
    tracep->declBit(c+1112,"rx_fifo_full", false,-1);
    tracep->declBit(c+1113,"rx_busy", false,-1);
    tracep->pushNamePrefix("rx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+1110,"data_in", false,-1, 7,0);
    tracep->declBus(c+1093,"data_out", false,-1, 7,0);
    tracep->declBus(c+1111,"data_count", false,-1, 3,0);
    tracep->declBit(c+388,"fifo_read", false,-1);
    tracep->declBit(c+1386,"fifo_write", false,-1);
    tracep->declBit(c+1112,"fifo_full", false,-1);
    tracep->declBit(c+1091,"fifo_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1114+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+1122,"read_ptr", false,-1, 3,0);
    tracep->declBus(c+1123,"write_ptr", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1124,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("uart_regs_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+168,"uart_sel_i", false,-1);
    tracep->declBit(c+1018,"irq_o", false,-1);
    tracep->pushNamePrefix("dbus2uart_i\206 ");
    tracep->declBus(c+371,"addr", false,-1, 31,0);
    tracep->declBus(c+372,"w_data", false,-1, 31,0);
    tracep->declBus(c+373,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+374,"w_en", false,-1);
    tracep->declBit(c+375,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o\206 ");
    tracep->declBus(c+121,"r_data", false,-1, 31,0);
    tracep->declBit(c+683,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1091,"rx_fifo_empty_i", false,-1);
    tracep->declBit(c+1092,"tx_fifo_full_i", false,-1);
    tracep->declBus(c+1093,"rx_fifo_data_i", false,-1, 7,0);
    tracep->declBit(c+388,"rx_fifo_read_o", false,-1);
    tracep->declBit(c+1094,"tx_fifo_write_o", false,-1);
    tracep->declBus(c+1095,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+1096,"rx_fifo_mark_i", false,-1);
    tracep->declBit(c+1097,"tx_fifo_mark_i", false,-1);
    tracep->declBus(c+1098,"rx_watermark_o", false,-1, 2,0);
    tracep->declBus(c+1099,"tx_watermark_o", false,-1, 2,0);
    tracep->declBit(c+1100,"tx_en_o", false,-1);
    tracep->declBit(c+1101,"rx_en_o", false,-1);
    tracep->declBit(c+1102,"two_stop_bits_o", false,-1);
    tracep->declBus(c+1103,"baud_rate_o", false,-1, 15,0);
    tracep->declBit(c+1125,"rx_fifo_empty", false,-1);
    tracep->declBit(c+1094,"tx_valid_ff", false,-1);
    tracep->declBit(c+389,"tx_valid_next", false,-1);
    tracep->declBus(c+1095,"uart_reg_tx_ff", false,-1, 7,0);
    tracep->declBus(c+152,"uart_reg_tx_next", false,-1, 7,0);
    tracep->declBus(c+1126,"uart_reg_txctrl_ff", false,-1, 4,0);
    tracep->declBus(c+153,"uart_reg_txctrl_next", false,-1, 4,0);
    tracep->declBus(c+1127,"uart_reg_rxctrl_ff", false,-1, 3,0);
    tracep->declBus(c+154,"uart_reg_rxctrl_next", false,-1, 3,0);
    tracep->declBus(c+1128,"uart_reg_int_en_ff", false,-1, 1,0);
    tracep->declBus(c+155,"uart_reg_int_en_next", false,-1, 1,0);
    tracep->declBus(c+1129,"uart_reg_int_pend_ff", false,-1, 1,0);
    tracep->declBus(c+1130,"uart_reg_int_pend_next", false,-1, 1,0);
    tracep->declBus(c+1103,"uart_reg_baud_ff", false,-1, 15,0);
    tracep->declBus(c+156,"uart_reg_baud_next", false,-1, 15,0);
    tracep->declBit(c+390,"tx_reg_wr_flag", false,-1);
    tracep->declBit(c+391,"txctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+392,"rxctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+393,"int_en_reg_wr_flag", false,-1);
    tracep->declBit(c+394,"baud_reg_wr_flag", false,-1);
    tracep->declBus(c+395,"reg_addr", false,-1, 3,0);
    tracep->declBit(c+396,"reg_rd_req", false,-1);
    tracep->declBit(c+397,"reg_wr_req", false,-1);
    tracep->declBus(c+398,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+399,"reg_w_data", false,-1, 31,0);
    tracep->pushNamePrefix("uart2dbus_ff\206 ");
    tracep->declBus(c+686,"r_data", false,-1, 31,0);
    tracep->declBit(c+687,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_transmitter_module ");
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1019,"txd_pin_o", false,-1);
    tracep->declBit(c+1092,"tx_fifo_full_o", false,-1);
    tracep->declBit(c+1094,"tx_fifo_write_i", false,-1);
    tracep->declBus(c+1095,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+1097,"tx_fifo_mark_o", false,-1);
    tracep->declBus(c+1099,"tx_watermark_i", false,-1, 2,0);
    tracep->declBit(c+1100,"tx_en_i", false,-1);
    tracep->declBit(c+1102,"two_stop_bits_i", false,-1);
    tracep->declBus(c+1103,"baud_rate_i", false,-1, 15,0);
    tracep->declBus(c+1131,"tx_state_ff", false,-1, 1,0);
    tracep->declBus(c+1132,"tx_state_next", false,-1, 1,0);
    tracep->declBit(c+1133,"baud_cnt_ovf", false,-1);
    tracep->declBit(c+1134,"baud_count_en", false,-1);
    tracep->declBit(c+1135,"baud_count_reset", false,-1);
    tracep->declBit(c+1136,"shifter_load_en", false,-1);
    tracep->declBit(c+1137,"shifter_en", false,-1);
    tracep->declBit(c+1138,"bit_count_en", false,-1);
    tracep->declBit(c+1139,"bit_count_load_en", false,-1);
    tracep->declBit(c+1140,"txd_mux_sel", false,-1);
    tracep->declBit(c+1141,"tx_fifo_read", false,-1);
    tracep->declBus(c+1142,"shifter_ff", false,-1, 10,0);
    tracep->declBus(c+1143,"shifter_next", false,-1, 10,0);
    tracep->declBus(c+1144,"bit_counter", false,-1, 3,0);
    tracep->declBus(c+1145,"uart_frame_size", false,-1, 3,0);
    tracep->declBus(c+1146,"baud_counter", false,-1, 15,0);
    tracep->declBit(c+1147,"tx_busy", false,-1);
    tracep->declBit(c+1148,"tx_fifo_empty", false,-1);
    tracep->declBus(c+1149,"tx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+1150,"tx_fifo_count", false,-1, 3,0);
    tracep->pushNamePrefix("tx_fifo ");
    tracep->declBit(c+1387,"clk", false,-1);
    tracep->declBit(c+1388,"rst_n", false,-1);
    tracep->declBus(c+1095,"data_in", false,-1, 7,0);
    tracep->declBus(c+1149,"data_out", false,-1, 7,0);
    tracep->declBus(c+1150,"data_count", false,-1, 3,0);
    tracep->declBit(c+1141,"fifo_read", false,-1);
    tracep->declBit(c+1094,"fifo_write", false,-1);
    tracep->declBit(c+1092,"fifo_full", false,-1);
    tracep->declBit(c+1148,"fifo_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1151+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+1159,"read_ptr", false,-1, 3,0);
    tracep->declBus(c+1160,"write_ptr", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1161,"i", false,-1, 31,0);
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_init_sub__TOP____024unit__0(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1528,"CSR_MTVEC_BASE_ALIGN_VECTOR", false,-1, 31,0);
    tracep->declBus(c+1529,"CSR_MTVEC_BASE_ALIGN_DIRECT", false,-1, 31,0);
    tracep->declBus(c+1530,"MODE_BIT", false,-1, 31,0);
    tracep->declBus(c+1531,"EXC_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1532,"S_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1533,"M_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1534,"S_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1535,"M_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1536,"S_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1537,"M_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1538,"UART_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1539,"SPI_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1540,"GPIO_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1541,"GPSW_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1519,"MIE_SSIP", false,-1, 31,0);
    tracep->declBus(c+1466,"MIE_MSIP", false,-1, 31,0);
    tracep->declBus(c+1542,"MIE_STIP", false,-1, 31,0);
    tracep->declBus(c+1543,"MIE_MTIP", false,-1, 31,0);
    tracep->declBus(c+1544,"MIE_SEIP", false,-1, 31,0);
    tracep->declBus(c+1545,"MIE_MEIP", false,-1, 31,0);
    tracep->declBus(c+1546,"MIE_UART", false,-1, 31,0);
    tracep->declBus(c+1547,"MIE_SPI", false,-1, 31,0);
    tracep->declBus(c+1548,"MIE_GPIO", false,-1, 31,0);
    tracep->declBus(c+1549,"MIE_GPSW", false,-1, 31,0);
    tracep->declBus(c+1550,"MIE_MASK", false,-1, 31,0);
    tracep->declBus(c+1550,"MIP_MASK", false,-1, 31,0);
    tracep->declBus(c+1551,"MSTATUS_MASK", false,-1, 31,0);
    tracep->declBus(c+1534,"IRQ_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1552,"TVEC_MODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1553,"TVEC_BASE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1554,"PLIC_SOURCE_COUNT", false,-1, 31,0);
    tracep->declBus(c+1554,"PLIC_TARGET_COUNT", false,-1, 31,0);
    tracep->declBus(c+1555,"PLIC_PRIO_LEVELS", false,-1, 31,0);
    tracep->declBus(c+1554,"PLIC_SOURCE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1556,"PLIC_PRIO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1557,"SPI_DEPTH_FIFO", false,-1, 31,0);
    tracep->declBus(c+1533,"SPI_ADDR_FIFO", false,-1, 31,0);
    tracep->declBus(c+1557,"UART_DEPTH_FIFO", false,-1, 31,0);
    tracep->declBus(c+1533,"UART_ADDR_FIFO", false,-1, 31,0);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_init_top(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_top\n"); );
    // Body
    Vpcore_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vpcore_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpcore_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpcore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpcore_tb___024root__trace_register(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpcore_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpcore_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpcore_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_full_top_0\n"); );
    // Init
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpcore_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->pcore_tb__DOT__irq_soft));
    bufp->fullBit(oldp+2,(vlSelf->pcore_tb__DOT__uart_rx));
    bufp->fullBit(oldp+3,(vlSelf->pcore_tb__DOT__spi_miso));
    bufp->fullWData(oldp+4,(vlSelf->pcore_tb__DOT__firmware),1024);
    bufp->fullWData(oldp+36,(vlSelf->pcore_tb__DOT__max_cycles),1024);
    bufp->fullIData(oldp+68,(vlSelf->pcore_tb__DOT__write_sig),32);
    bufp->fullCData(oldp+69,(vlSelf->pcore_tb__DOT__uart_rx),2);
    bufp->fullIData(oldp+70,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                               << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                            >> 4U))),32);
    bufp->fullIData(oldp+71,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                               << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                            >> 4U))),32);
    bufp->fullCData(oldp+72,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                    >> 2U))),2);
    bufp->fullBit(oldp+73,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+74,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    bufp->fullIData(oldp+75,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                               << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                            >> 4U))),32);
    bufp->fullBit(oldp+76,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+77,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    bufp->fullBit(oldp+78,((0x200000U > (0x3fffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                            >> 4U)))));
    bufp->fullBit(oldp+79,((0x20U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+80,((0x21U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+81,(((0x301000U < (0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 4U))) 
                            & (0x31ffffU >= (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))))));
    bufp->fullBit(oldp+82,(((0x300000U < (0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 4U))) 
                            & (0x300fffU >= (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))))));
    bufp->fullBit(oldp+83,((0x22U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+84,((0x23U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+85,((0x24U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+86,((0x25U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+87,((0x26U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+88,((0x28U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+89,((0x27U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullIData(oldp+90,(((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                            >> 1U)))
                               ? ((IData)((0U != (6U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
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
    bufp->fullIData(oldp+91,(((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                               ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x14U))
                               : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)),32);
    bufp->fullBit(oldp+92,((1U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
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
    bufp->fullBit(oldp+93,((1U & ((0x800000U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                   ? ((0x400000U & 
                                       vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
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
                                   : ((0x400000U & 
                                       vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                       ? ((0x200000U 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                           ? (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                           : (0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                       : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                           >> 0x15U) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))));
    bufp->fullBit(oldp+94,((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 2U) & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+95,((IData)(((6U == (6U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                    & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                       >> 0x1fU)))));
    bufp->fullQData(oldp+96,((((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                 >> 2U) 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   >> 0x1fU)))) 
                               << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))),33);
    bufp->fullQData(oldp+98,((((QData)((IData)(((6U 
                                                 == 
                                                 (6U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                   >> 0x1fU)))) 
                               << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))),33);
    bufp->fullIData(oldp+100,(((IData)((0U != (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
                                           >> 0x20U))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output))),32);
    bufp->fullIData(oldp+101,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req)
                                         ? (1ULL | 
                                            ((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                                                             [
                                                             (0x3fffffU 
                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                 >> 8U))])) 
                                             << 1U))
                                         : 0ULL) >> 1U))),32);
    bufp->fullBit(oldp+102,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req)
                                            ? (1ULL 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                                                                  [
                                                                  (0x3fffffU 
                                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                      >> 8U))])) 
                                                  << 1U))
                                            : 0ULL)))));
    bufp->fullSData(oldp+103,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
                                           ? ((0x20U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                               ? ((0x10U 
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
                                               : ((0x10U 
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
    bufp->fullSData(oldp+104,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie)
                                           ? ((0x20U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                               ? ((0x10U 
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
                                               : ((0x10U 
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
    bufp->fullSData(oldp+105,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl)
                                           ? ((0x20U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])
                                               ? ((0x10U 
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
                                               : ((0x10U 
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
    bufp->fullCData(oldp+106,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+107,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+108,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)))),8);
    bufp->fullCData(oldp+109,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+110,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+111,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)))),8);
    bufp->fullCData(oldp+112,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+113,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+114,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)))),8);
    bufp->fullIData(oldp+115,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__dualport_memory
                              [(0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 8U))]),32);
    bufp->fullCData(oldp+116,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
    bufp->fullCData(oldp+117,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                         >> 2U)))),2);
    bufp->fullIData(oldp+118,(((0x4cU == (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                                   >> 6U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data
                                : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                           >> 1U)))),32);
    bufp->fullIData(oldp+119,(((0x4cU == (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                                   >> 6U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data
                                : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                           >> 1U)))),32);
    bufp->fullIData(oldp+120,(((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                               >> 8U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data
                                : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                           >> 1U)))),32);
    bufp->fullIData(oldp+121,(((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                               >> 8U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data
                                : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                           >> 1U)))),32);
    bufp->fullCData(oldp+122,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state))
                                ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state))
                                                   ? 2U
                                                   : 0U))),2);
    bufp->fullSData(oldp+123,((0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
    bufp->fullCData(oldp+124,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))),2);
    bufp->fullCData(oldp+125,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id)))),2);
    bufp->fullCData(oldp+126,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default)))),2);
    bufp->fullCData(oldp+127,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode)))),2);
    bufp->fullSData(oldp+128,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0)
                                ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 0xeU)) 
                                   | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),16);
    bufp->fullSData(oldp+129,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1)
                                ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 0xeU)) 
                                   | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),16);
    bufp->fullCData(oldp+130,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
                                ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             >> 0x12U)) 
                                   | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                              >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))),8);
    bufp->fullCData(oldp+131,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_data)))),8);
    bufp->fullCData(oldp+132,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),3);
    bufp->fullCData(oldp+133,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))),3);
    bufp->fullCData(oldp+134,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))),2);
    bufp->fullSData(oldp+135,((0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
    bufp->fullCData(oldp+136,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))),2);
    bufp->fullCData(oldp+137,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id)))),2);
    bufp->fullCData(oldp+138,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default)))),2);
    bufp->fullCData(oldp+139,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode)))),2);
    bufp->fullSData(oldp+140,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0)
                                ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 0xeU)) 
                                   | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),16);
    bufp->fullSData(oldp+141,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1)
                                ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 0xeU)) 
                                   | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),16);
    bufp->fullCData(oldp+142,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
                                ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             >> 0x12U)) 
                                   | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                              >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))),8);
    bufp->fullCData(oldp+143,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_data)))),8);
    bufp->fullCData(oldp+144,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),3);
    bufp->fullCData(oldp+145,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))),3);
    bufp->fullCData(oldp+146,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))),2);
    bufp->fullCData(oldp+147,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff)))),8);
    bufp->fullCData(oldp+148,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
                                ? (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                         >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))),5);
    bufp->fullCData(oldp+149,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
                                ? (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                         >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))),4);
    bufp->fullCData(oldp+150,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))),2);
    bufp->fullSData(oldp+151,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                                           ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                               << 0x1aU) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                                 >> 6U))
                                           : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)))),16);
    bufp->fullCData(oldp+152,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff)))),8);
    bufp->fullCData(oldp+153,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag)
                                ? (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                         >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))),5);
    bufp->fullCData(oldp+154,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag)
                                ? (1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                         >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))),4);
    bufp->fullCData(oldp+155,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff)))),2);
    bufp->fullSData(oldp+156,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag)
                                           ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                               << 0x1aU) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                                 >> 6U))
                                           : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff)))),16);
    bufp->fullBit(oldp+157,(((0x1ffe68U == ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write))));
    bufp->fullBit(oldp+158,(((0x1ffe6cU == ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write))));
    bufp->fullIData(oldp+159,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu 
                                       >> 1U))),32);
    bufp->fullBit(oldp+160,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu))));
    bufp->fullIData(oldp+161,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+162,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+163,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+164,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+165,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
    bufp->fullBit(oldp+166,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dmem_sel));
    bufp->fullBit(oldp+167,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel));
    bufp->fullBit(oldp+168,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel));
    bufp->fullBit(oldp+169,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__clint_sel));
    bufp->fullBit(oldp+170,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__plic_sel));
    bufp->fullBit(oldp+171,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel));
    bufp->fullBit(oldp+172,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel));
    bufp->fullBit(oldp+173,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel));
    bufp->fullBit(oldp+174,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel));
    bufp->fullBit(oldp+175,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel));
    bufp->fullBit(oldp+176,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpsw_sel));
    bufp->fullBit(oldp+177,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpled_sel));
    bufp->fullBit(oldp+178,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__store_busy));
    bufp->fullIData(oldp+179,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+180,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart2dbus))));
    bufp->fullIData(oldp+181,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+182,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi2dbus))));
    bufp->fullIData(oldp+183,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+184,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio2dbus))));
    bufp->fullIData(oldp+185,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_data),32);
    bufp->fullIData(oldp+186,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+187,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 6U))),16);
    bufp->fullBit(oldp+188,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__r_req));
    bufp->fullBit(oldp+189,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__w_req));
    bufp->fullQData(oldp+190,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_next),64);
    bufp->fullQData(oldp+192,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_next),64);
    bufp->fullBit(oldp+194,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_lo_wr_flag));
    bufp->fullBit(oldp+195,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_hi_wr_flag));
    bufp->fullBit(oldp+196,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
    bufp->fullBit(oldp+197,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
    bufp->fullBit(oldp+198,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus_req));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart0_sel) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__uart1_sel))));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi0_sel) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__spi1_sel))));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                   | (IData)(vlSelf->__VdfgTmp_hf0169590__0))))));
    bufp->fullIData(oldp+202,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+203,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+204,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+205,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+206,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U])));
    bufp->fullIData(oldp+207,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+208,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+209,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+210,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+211,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U])));
    bufp->fullIData(oldp+212,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+213,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+214,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+215,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+216,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U])));
    bufp->fullIData(oldp+217,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+218,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+219,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+220,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+221,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])));
    bufp->fullBit(oldp+222,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data));
    bufp->fullBit(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_ie));
    bufp->fullBit(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__sw_sel_int_lvl));
    bufp->fullCData(oldp+225,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+226,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data),32);
    bufp->fullIData(oldp+227,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req));
    bufp->fullBit(oldp+229,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req));
    bufp->fullBit(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data));
    bufp->fullBit(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next),8);
    bufp->fullCData(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+236,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+237,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data),32);
    bufp->fullIData(oldp+238,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+239,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req));
    bufp->fullBit(oldp+240,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req));
    bufp->fullBit(oldp+241,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data));
    bufp->fullBit(oldp+242,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+243,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+244,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+245,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next),8);
    bufp->fullCData(oldp+246,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+247,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+248,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data),32);
    bufp->fullIData(oldp+249,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req));
    bufp->fullBit(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req));
    bufp->fullBit(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data));
    bufp->fullBit(oldp+253,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+254,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+255,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+256,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next),8);
    bufp->fullCData(oldp+257,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+258,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+259,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data),32);
    bufp->fullIData(oldp+260,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+261,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req));
    bufp->fullBit(oldp+262,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req));
    bufp->fullBit(oldp+263,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__load_req));
    bufp->fullBit(oldp+264,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__store_req));
    bufp->fullBit(oldp+265,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_read));
    bufp->fullBit(oldp+266,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_modify));
    bufp->fullBit(oldp+267,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__mem_write));
    bufp->fullIData(oldp+268,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__read_data),32);
    bufp->fullIData(oldp+269,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__write_data),32);
    bufp->fullIData(oldp+270,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
    bufp->fullIData(oldp+271,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[2U]),32);
    bufp->fullIData(oldp+272,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[1U]),32);
    bufp->fullIData(oldp+273,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_data[0U]),32);
    bufp->fullCData(oldp+274,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl) 
                                       >> 3U))),4);
    bufp->fullBit(oldp+275,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+276,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+277,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__lsu2amo_ctrl))));
    bufp->fullIData(oldp+278,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
    bufp->fullCData(oldp+279,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                                        >> 3U))),5);
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                                   >> 2U))));
    bufp->fullBit(oldp+281,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd) 
                                   >> 1U))));
    bufp->fullBit(oldp+282,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2fwd))));
    bufp->fullIData(oldp+283,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a),32);
    bufp->fullIData(oldp+284,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
    bufp->fullBit(oldp+285,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
    bufp->fullBit(oldp+286,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
    bufp->fullBit(oldp+287,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
    bufp->fullBit(oldp+288,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
    bufp->fullCData(oldp+289,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
    bufp->fullBit(oldp+290,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i));
    bufp->fullBit(oldp+291,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    bufp->fullIData(oldp+292,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
    bufp->fullSData(oldp+293,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
    bufp->fullCData(oldp+294,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
    bufp->fullCData(oldp+295,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+296,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+297,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway))),2);
    bufp->fullCData(oldp+298,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__regs2gateway) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+299,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
    bufp->fullCData(oldp+300,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
    bufp->fullCData(oldp+301,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
    bufp->fullCData(oldp+302,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
    bufp->fullCData(oldp+303,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
    bufp->fullCData(oldp+304,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
    bufp->fullCData(oldp+305,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
    bufp->fullCData(oldp+306,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+307,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
    bufp->fullCData(oldp+308,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
    bufp->fullIData(oldp+309,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U))),24);
    bufp->fullBit(oldp+310,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+311,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+312,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
    bufp->fullCData(oldp+313,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
    bufp->fullCData(oldp+314,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
    bufp->fullCData(oldp+315,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
    bufp->fullCData(oldp+316,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
    bufp->fullCData(oldp+317,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+318,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
    bufp->fullCData(oldp+319,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                     >> 3U))),3);
    bufp->fullIData(oldp+320,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+321,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+322,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+323,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+324,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U])));
    bufp->fullIData(oldp+325,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+326,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+327,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+328,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+329,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U])));
    bufp->fullBit(oldp+330,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_read));
    bufp->fullCData(oldp+331,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                        >> 6U))),8);
    bufp->fullBit(oldp+332,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+333,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+334,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi0[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+335,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_r_data),32);
    bufp->fullBit(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_sdiv));
    bufp->fullBit(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ckmode));
    bufp->fullBit(oldp+338,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csid));
    bufp->fullBit(oldp+339,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csdef));
    bufp->fullBit(oldp+340,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_csmode));
    bufp->fullBit(oldp+341,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del0));
    bufp->fullBit(oldp+342,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_del1));
    bufp->fullBit(oldp+343,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_fmt));
    bufp->fullBit(oldp+344,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
    bufp->fullBit(oldp+345,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_txmark));
    bufp->fullBit(oldp+346,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_rxmark));
    bufp->fullBit(oldp+347,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi_sel_ie));
    bufp->fullBit(oldp+348,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_read));
    bufp->fullCData(oldp+349,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                        >> 6U))),8);
    bufp->fullBit(oldp+350,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+351,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+352,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__dbus2spi1[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+353,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_r_data),32);
    bufp->fullBit(oldp+354,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_sdiv));
    bufp->fullBit(oldp+355,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ckmode));
    bufp->fullBit(oldp+356,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csid));
    bufp->fullBit(oldp+357,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csdef));
    bufp->fullBit(oldp+358,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_csmode));
    bufp->fullBit(oldp+359,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del0));
    bufp->fullBit(oldp+360,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_del1));
    bufp->fullBit(oldp+361,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_fmt));
    bufp->fullBit(oldp+362,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
    bufp->fullBit(oldp+363,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_txmark));
    bufp->fullBit(oldp+364,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_rxmark));
    bufp->fullBit(oldp+365,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi_sel_ie));
    bufp->fullIData(oldp+366,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+367,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+368,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+369,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+370,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U])));
    bufp->fullIData(oldp+371,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+372,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+373,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+374,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+375,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U])));
    bufp->fullBit(oldp+376,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_read));
    bufp->fullBit(oldp+377,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_next));
    bufp->fullBit(oldp+378,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag));
    bufp->fullBit(oldp+379,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag));
    bufp->fullBit(oldp+380,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag));
    bufp->fullBit(oldp+381,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag));
    bufp->fullBit(oldp+382,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag));
    bufp->fullCData(oldp+383,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[1U] 
                                       >> 8U))),4);
    bufp->fullBit(oldp+384,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+385,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+386,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__reg_r_data),32);
    bufp->fullIData(oldp+387,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart0[0U] 
                                          >> 6U))),32);
    bufp->fullBit(oldp+388,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_read));
    bufp->fullBit(oldp+389,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_next));
    bufp->fullBit(oldp+390,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_reg_wr_flag));
    bufp->fullBit(oldp+391,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__txctrl_reg_wr_flag));
    bufp->fullBit(oldp+392,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rxctrl_reg_wr_flag));
    bufp->fullBit(oldp+393,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__int_en_reg_wr_flag));
    bufp->fullBit(oldp+394,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__baud_reg_wr_flag));
    bufp->fullCData(oldp+395,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[1U] 
                                       >> 8U))),4);
    bufp->fullBit(oldp+396,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+397,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+398,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__reg_r_data),32);
    bufp->fullIData(oldp+399,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__dbus2uart1[0U] 
                                          >> 6U))),32);
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)))));
    bufp->fullBit(oldp+401,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+402,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    bufp->fullBit(oldp+403,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next) 
                                   >> 1U))));
    bufp->fullBit(oldp+404,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next))));
    bufp->fullCData(oldp+405,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+406,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+407,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 9U))),3);
    bufp->fullCData(oldp+408,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 7U))),2);
    bufp->fullCData(oldp+409,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                       >> 3U))),4);
    bufp->fullBit(oldp+410,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                   >> 2U))));
    bufp->fullBit(oldp+411,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                   >> 1U))));
    bufp->fullBit(oldp+412,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
    bufp->fullIData(oldp+413,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
    bufp->fullIData(oldp+414,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
    bufp->fullIData(oldp+415,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
    bufp->fullIData(oldp+416,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
    bufp->fullIData(oldp+417,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
    bufp->fullIData(oldp+418,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
    bufp->fullSData(oldp+419,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+420,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+421,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+422,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+423,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+424,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
    bufp->fullCData(oldp+425,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+426,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+427,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 3U))));
    bufp->fullBit(oldp+428,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 2U))));
    bufp->fullBit(oldp+429,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 1U))));
    bufp->fullBit(oldp+430,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
    bufp->fullIData(oldp+431,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
    bufp->fullBit(oldp+432,(vlSelf->__VdfgTmp_h308c3a77__0));
    bufp->fullBit(oldp+433,(vlSelf->__VdfgTmp_hceefb3fb__0));
    bufp->fullBit(oldp+434,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if) 
                                   >> 3U))));
    bufp->fullBit(oldp+435,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if) 
                                   >> 2U))));
    bufp->fullBit(oldp+436,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if) 
                                   >> 1U))));
    bufp->fullBit(oldp+437,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__fwd2if))));
    bufp->fullBit(oldp+438,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 8U))));
    bufp->fullBit(oldp+439,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 7U))));
    bufp->fullBit(oldp+440,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 6U))));
    bufp->fullBit(oldp+441,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 5U))));
    bufp->fullBit(oldp+442,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 4U))));
    bufp->fullBit(oldp+443,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 3U))));
    bufp->fullBit(oldp+444,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 2U))));
    bufp->fullBit(oldp+445,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 1U))));
    bufp->fullBit(oldp+446,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
    bufp->fullBit(oldp+447,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i));
    bufp->fullIData(oldp+448,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next),32);
    bufp->fullIData(oldp+449,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next),32);
    bufp->fullIData(oldp+450,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
    bufp->fullIData(oldp+451,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
    bufp->fullIData(oldp+452,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
    bufp->fullIData(oldp+453,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
    bufp->fullQData(oldp+454,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
    bufp->fullBit(oldp+456,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
    bufp->fullBit(oldp+457,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+458,((1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                             >> 0x1fU)) 
                                    & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                           >> 0x1fU)) 
                                       & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                          >> 0x1fU))) 
                                   | ((~ (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                  >> 0x1fU))) 
                                      & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                             >> 0x1fU)) 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                            >> 0x1fU)))))));
    bufp->fullCData(oldp+459,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
    bufp->fullIData(oldp+460,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result),32);
    bufp->fullIData(oldp+461,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+462,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+463,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullIData(oldp+464,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullIData(oldp+465,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data),32);
    bufp->fullQData(oldp+466,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en),33);
    bufp->fullCData(oldp+468,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result),6);
    bufp->fullIData(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev),32);
    bufp->fullIData(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev),32);
    bufp->fullIData(oldp+471,(((0x1fU >= (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                ? ((IData)(1U) << (0x1fU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                : 0U)),32);
    bufp->fullIData(oldp+472,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1),32);
    bufp->fullIData(oldp+473,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2),32);
    bufp->fullIData(oldp+474,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result),32);
    bufp->fullIData(oldp+475,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result),32);
    bufp->fullQData(oldp+476,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output),64);
    bufp->fullCData(oldp+478,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
    bufp->fullBit(oldp+479,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+480,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    bufp->fullBit(oldp+481,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req));
    bufp->fullBit(oldp+482,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0))));
    bufp->fullBit(oldp+483,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
    bufp->fullBit(oldp+484,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
    bufp->fullBit(oldp+485,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
    bufp->fullBit(oldp+486,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    bufp->fullIData(oldp+487,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+488,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+489,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+490,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+491,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U])));
    bufp->fullIData(oldp+492,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+493,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+494,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+495,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+496,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
    bufp->fullIData(oldp+497,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
    bufp->fullBit(oldp+498,((0x1bU == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                >> 7U)))));
    bufp->fullWData(oldp+499,(vlSelf->pcore_tb__DOT__main_time),1024);
    bufp->fullIData(oldp+531,(vlSelf->pcore_tb__DOT__gpio_io),24);
    bufp->fullSData(oldp+532,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff),16);
    bufp->fullIData(oldp+533,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
    bufp->fullIData(oldp+534,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff)),32);
    bufp->fullIData(oldp+535,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+536,((0U != (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)) 
                                    | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                       | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)))))));
    bufp->fullBit(oldp+537,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff)))));
    bufp->fullBit(oldp+538,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__timer_overflow_ff));
    bufp->fullBit(oldp+539,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullBit(oldp+540,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+541,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+542,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__clint2dbus_ff))));
    bufp->fullIData(oldp+543,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+544,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
    bufp->fullQData(oldp+545,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff),64);
    bufp->fullQData(oldp+547,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff),64);
    bufp->fullBit(oldp+549,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtime_ff 
                             >= vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__clint_module__DOT__mtimecmp_ff)));
    bufp->fullBit(oldp+550,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff)))));
    bufp->fullBit(oldp+551,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)))));
    bufp->fullBit(oldp+552,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)))));
    bufp->fullIData(oldp+553,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+554,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+555,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+556,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+557,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+558,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+559,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+560,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff))));
    bufp->fullSData(oldp+561,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff),16);
    bufp->fullSData(oldp+562,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ip_ff),16);
    bufp->fullSData(oldp+563,((0xffffU & (~ ((IData)(vlSelf->pcore_tb__DOT__gp_switch_i) 
                                             ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff))))),16);
    bufp->fullSData(oldp+564,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_ie_ff),16);
    bufp->fullSData(oldp+565,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_int_lvl_ff),16);
    bufp->fullCData(oldp+566,((0xffU & vlSelf->pcore_tb__DOT__gpio_io)),8);
    bufp->fullCData(oldp+567,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+568,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+569,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+570,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+571,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff),8);
    bufp->fullCData(oldp+572,((0xffU & (vlSelf->pcore_tb__DOT__gpio_io 
                                        >> 8U))),8);
    bufp->fullCData(oldp+573,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+574,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+575,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+576,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+577,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff),8);
    bufp->fullCData(oldp+578,((0xffU & (vlSelf->pcore_tb__DOT__gpio_io 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+579,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+580,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+581,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+582,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+583,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff),8);
    bufp->fullIData(oldp+584,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+585,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullBit(oldp+586,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+587,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
    bufp->fullIData(oldp+588,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+589,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+590,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+591,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+592,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+594,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))));
    bufp->fullIData(oldp+595,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+596,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullIData(oldp+597,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullSData(oldp+598,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+599,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+600,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+601,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+602,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+603,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
    bufp->fullCData(oldp+604,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+605,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+606,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+607,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+608,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+609,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
    bufp->fullIData(oldp+610,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
    bufp->fullIData(oldp+611,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullBit(oldp+612,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
    bufp->fullBit(oldp+613,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
    bufp->fullBit(oldp+614,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
    bufp->fullBit(oldp+615,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
    bufp->fullBit(oldp+616,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
    bufp->fullBit(oldp+617,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
    bufp->fullBit(oldp+618,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
    bufp->fullBit(oldp+619,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
    bufp->fullBit(oldp+620,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
    bufp->fullBit(oldp+621,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
    bufp->fullBit(oldp+622,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
    bufp->fullBit(oldp+623,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
    bufp->fullBit(oldp+624,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
    bufp->fullBit(oldp+625,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
    bufp->fullBit(oldp+626,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
    bufp->fullBit(oldp+627,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
    bufp->fullCData(oldp+628,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+629,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x19U))),5);
    bufp->fullIData(oldp+630,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+631,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U))),3);
    bufp->fullCData(oldp+632,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x1eU)))),7);
    bufp->fullCData(oldp+633,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+634,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+635,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x19U)))));
    bufp->fullIData(oldp+636,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff),32);
    bufp->fullIData(oldp+637,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)),32);
    bufp->fullBit(oldp+638,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
    bufp->fullBit(oldp+639,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__busy_ff));
    bufp->fullIData(oldp+640,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__opr2_ff),32);
    bufp->fullIData(oldp+641,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_next),32);
    bufp->fullQData(oldp+642,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_ff),33);
    bufp->fullQData(oldp+644,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_next),33);
    bufp->fullQData(oldp+646,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff),33);
    bufp->fullCData(oldp+648,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__counter),5);
    bufp->fullCData(oldp+649,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
    bufp->fullBit(oldp+650,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
    bufp->fullBit(oldp+651,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+652,(((IData)(4U) + vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)),32);
    bufp->fullBit(oldp+653,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
    bufp->fullBit(oldp+654,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
    bufp->fullBit(oldp+655,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
    bufp->fullCData(oldp+656,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
    bufp->fullCData(oldp+657,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
    bufp->fullCData(oldp+658,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
    bufp->fullCData(oldp+659,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+660,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
    bufp->fullCData(oldp+661,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+662,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
    bufp->fullCData(oldp+663,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+664,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i))),2);
    bufp->fullCData(oldp+665,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT____Vcellinp__plic_gateway_module__claim_idx_i) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+666,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+667,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+668,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+669,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+670,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+671,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+672,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+673,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+674,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
    bufp->fullCData(oldp+675,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
    bufp->fullBit(oldp+676,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
    bufp->fullBit(oldp+677,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
    bufp->fullIData(oldp+678,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+679,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
    bufp->fullIData(oldp+680,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+681,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
    bufp->fullBit(oldp+682,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
    bufp->fullBit(oldp+683,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
    bufp->fullIData(oldp+684,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+685,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
    bufp->fullIData(oldp+686,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+687,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart2dbus_ff))));
    bufp->fullCData(oldp+688,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+689,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 1U))),3);
    bufp->fullCData(oldp+690,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                >> 0x1eU)))),3);
    bufp->fullQData(oldp+691,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))),33);
    bufp->fullCData(oldp+693,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+694,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+695,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x15U))),3);
    bufp->fullCData(oldp+696,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x13U))),2);
    bufp->fullCData(oldp+697,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 0xfU))),4);
    bufp->fullCData(oldp+698,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+699,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+700,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+701,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+702,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 8U))));
    bufp->fullCData(oldp+703,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+704,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+705,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+706,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+707,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+708,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])));
    bufp->fullCData(oldp+709,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 5U))),3);
    bufp->fullCData(oldp+710,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+711,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+712,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 0xfU))),4);
    bufp->fullBit(oldp+713,((1U & ((0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 0x13U)))
                                    ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 1U) : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 3U)))));
    bufp->fullBit(oldp+714,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+715,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 1U))));
    bufp->fullCData(oldp+716,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                >> 0x1eU)))),3);
    bufp->fullBit(oldp+717,((IData)((0U != (0x802U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
    bufp->fullBit(oldp+718,((IData)((0U != (0x3000402U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
    bufp->fullCData(oldp+719,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+720,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x15U))),3);
    bufp->fullQData(oldp+721,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))),33);
    bufp->fullBit(oldp+723,((0U != (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+724,((8ULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU))))));
    bufp->fullBit(oldp+725,((9ULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU))))));
    bufp->fullCData(oldp+726,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+727,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                   >> 2U))));
    bufp->fullBit(oldp+728,((IData)((6U == (6U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    bufp->fullBit(oldp+729,((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+730,((IData)((0U != (6U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    bufp->fullBit(oldp+731,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff)))));
    bufp->fullCData(oldp+732,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_clk) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_clk))),2);
    bufp->fullCData(oldp+733,(((2U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi1_module__spi_cs_o) 
                                      << 1U)) | (1U 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi0_module__spi_cs_o)))),2);
    bufp->fullCData(oldp+734,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_mosi) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_mosi))),2);
    bufp->fullCData(oldp+735,(((2U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                       | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff))))),2);
    bufp->fullBit(oldp+736,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart));
    bufp->fullBit(oldp+737,((1U & (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                     >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))) 
                                   | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                       >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))))));
    bufp->fullCData(oldp+738,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__mem_top_module__DOT__c_state),2);
    bufp->fullBit(oldp+739,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullCData(oldp+740,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+741,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
    bufp->fullBit(oldp+742,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
    bufp->fullIData(oldp+743,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
    bufp->fullIData(oldp+744,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
    bufp->fullBit(oldp+745,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullBit(oldp+746,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
    bufp->fullCData(oldp+747,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
    bufp->fullIData(oldp+748,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
    bufp->fullIData(oldp+749,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
    bufp->fullIData(oldp+750,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
    bufp->fullIData(oldp+751,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
    bufp->fullIData(oldp+752,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
    bufp->fullIData(oldp+753,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                               >> 4U)),28);
    bufp->fullBit(oldp+754,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+755,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+756,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+757,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
    bufp->fullBit(oldp+758,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                             >> 0x1fU)));
    bufp->fullCData(oldp+759,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0x17U))),8);
    bufp->fullBit(oldp+760,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x16U))));
    bufp->fullBit(oldp+761,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x15U))));
    bufp->fullBit(oldp+762,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x14U))));
    bufp->fullBit(oldp+763,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+764,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+765,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x11U))));
    bufp->fullCData(oldp+766,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+767,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+768,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+769,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 9U))),2);
    bufp->fullBit(oldp+770,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+771,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+772,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+773,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+774,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+775,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+776,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+777,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+778,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
    bufp->fullSData(oldp+779,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+780,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+781,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+782,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x11U))));
    bufp->fullBit(oldp+783,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+784,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+785,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+786,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+787,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+788,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+789,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+790,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+791,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+792,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+793,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+794,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+795,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+796,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
    bufp->fullIData(oldp+797,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                               >> 2U)),30);
    bufp->fullCData(oldp+798,((3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
    bufp->fullIData(oldp+799,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
    bufp->fullIData(oldp+800,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
    bufp->fullIData(oldp+801,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
    bufp->fullIData(oldp+802,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
    bufp->fullSData(oldp+803,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+804,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+805,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+806,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x11U))));
    bufp->fullBit(oldp+807,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+808,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+814,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+815,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+816,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+817,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+818,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+819,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+820,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
    bufp->fullCData(oldp+821,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+822,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
    bufp->fullBit(oldp+823,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req));
    bufp->fullBit(oldp+824,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req));
    bufp->fullBit(oldp+825,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpsw_irq_req));
    bufp->fullBit(oldp+826,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
    bufp->fullBit(oldp+827,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
    bufp->fullBit(oldp+828,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
    bufp->fullBit(oldp+829,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff));
    bufp->fullBit(oldp+830,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff));
    bufp->fullBit(oldp+831,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff));
    bufp->fullBit(oldp+832,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sw_irq_ff));
    bufp->fullBit(oldp+833,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
    bufp->fullBit(oldp+834,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
    bufp->fullCData(oldp+835,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff),3);
    bufp->fullIData(oldp+836,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff),32);
    bufp->fullIData(oldp+837,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff),32);
    bufp->fullBit(oldp+838,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
    bufp->fullBit(oldp+839,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
    bufp->fullBit(oldp+840,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
    bufp->fullBit(oldp+841,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
    bufp->fullBit(oldp+842,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_ff));
    bufp->fullBit(oldp+843,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next));
    bufp->fullCData(oldp+844,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__irq_uart),2);
    bufp->fullBit(oldp+845,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_mosi));
    bufp->fullBit(oldp+846,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_clk));
    bufp->fullBit(oldp+847,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi0_module__spi_cs_o))));
    bufp->fullBit(oldp+848,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                    >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))))));
    bufp->fullBit(oldp+849,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_mosi));
    bufp->fullBit(oldp+850,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_clk));
    bufp->fullBit(oldp+851,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi1_module__spi_cs_o))));
    bufp->fullBit(oldp+852,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                    >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))))));
    bufp->fullCData(oldp+853,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi0_module__spi_cs_o),2);
    bufp->fullCData(oldp+854,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_default),2);
    bufp->fullCData(oldp+855,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_reg_cs_id),2);
    bufp->fullSData(oldp+856,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_div_ff),12);
    bufp->fullBit(oldp+857,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
    bufp->fullBit(oldp+858,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                   >> 1U))));
    bufp->fullCData(oldp+859,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_cs_mode),2);
    bufp->fullCData(oldp+860,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),8);
    bufp->fullCData(oldp+861,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+862,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),8);
    bufp->fullCData(oldp+863,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+864,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+865,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+866,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff))));
    bufp->fullBit(oldp+867,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_hold_off));
    bufp->fullBit(oldp+868,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff))));
    bufp->fullBit(oldp+869,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
    bufp->fullBit(oldp+870,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_fst_transmit));
    bufp->fullBit(oldp+871,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_en));
    bufp->fullBit(oldp+872,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_miso_en));
    bufp->fullBit(oldp+873,((((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff)) 
                              | (4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff))) 
                             & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_next)))));
    bufp->fullBit(oldp+874,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_read));
    bufp->fullBit(oldp+875,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_write));
    bufp->fullBit(oldp+876,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
    bufp->fullBit(oldp+877,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
    bufp->fullCData(oldp+878,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_data),8);
    bufp->fullCData(oldp+879,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_data),8);
    bufp->fullBit(oldp+880,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_write));
    bufp->fullBit(oldp+881,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_mark));
    bufp->fullBit(oldp+882,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_mark));
    bufp->fullCData(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff),3);
    bufp->fullCData(oldp+884,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff),3);
    bufp->fullBit(oldp+885,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                   >> 2U))));
    bufp->fullSData(oldp+886,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__c2t_delay),9);
    bufp->fullSData(oldp+887,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__t2c_delay),9);
    bufp->fullCData(oldp+888,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__count_intercs),8);
    bufp->fullCData(oldp+889,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__count_interfr),8);
    bufp->fullCData(oldp+890,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__data_cnt),5);
    bufp->fullSData(oldp+891,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__clock_cnt),12);
    bufp->fullCData(oldp+892,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__count_up),2);
    bufp->fullCData(oldp+893,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__max_data_count),5);
    bufp->fullCData(oldp+894,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_ff),3);
    bufp->fullCData(oldp+895,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_controller_module__DOT__spi_state_next),3);
    bufp->fullCData(oldp+896,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff),8);
    bufp->fullCData(oldp+897,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_miso_en)
                                ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                    ? ((0x80U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                                 << 7U)) 
                                       | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                                   >> 1U)))
                                    : ((0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                                 << 1U)) 
                                       | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i))))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff))),8);
    bufp->fullCData(oldp+898,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff),8);
    bufp->fullCData(oldp+899,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_en) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_fst_transmit))
                                ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                    ? (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                >> 1U))
                                    : (0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                << 1U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff))),8);
    bufp->fullBit(oldp+900,((1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_en) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_mosi_fst_transmit))
                                    ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff)
                                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                           >> 7U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_mosi)))));
    bufp->fullSData(oldp+901,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo_count),9);
    bufp->fullSData(oldp+902,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo_count),9);
    bufp->fullCData(oldp+903,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__reg_tx_data),8);
    bufp->fullBit(oldp+904,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
    bufp->fullCData(oldp+905,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+906,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+907,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+908,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+909,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+910,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+911,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+912,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullSData(oldp+913,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr),9);
    bufp->fullSData(oldp+914,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr),9);
    bufp->fullIData(oldp+915,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+916,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+917,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+918,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+919,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+920,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+921,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+922,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+923,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullSData(oldp+924,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr),9);
    bufp->fullSData(oldp+925,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr),9);
    bufp->fullIData(oldp+926,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+927,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff));
    bufp->fullCData(oldp+928,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff),2);
    bufp->fullSData(oldp+929,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay0_ff),16);
    bufp->fullSData(oldp+930,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_delay1_ff),16);
    bufp->fullCData(oldp+931,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_fmt_ff),8);
    bufp->fullCData(oldp+932,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff),2);
    bufp->fullCData(oldp+933,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_rx_fifo_mark) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_tx_fifo_mark))),2);
    bufp->fullCData(oldp+934,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff),2);
    bufp->fullCData(oldp+935,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT____Vcellout__spi1_module__spi_cs_o),2);
    bufp->fullCData(oldp+936,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_default),2);
    bufp->fullCData(oldp+937,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_reg_cs_id),2);
    bufp->fullSData(oldp+938,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_div_ff),12);
    bufp->fullBit(oldp+939,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
    bufp->fullBit(oldp+940,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                   >> 1U))));
    bufp->fullCData(oldp+941,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_cs_mode),2);
    bufp->fullCData(oldp+942,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),8);
    bufp->fullCData(oldp+943,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+944,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),8);
    bufp->fullCData(oldp+945,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+946,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+947,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+948,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff))));
    bufp->fullBit(oldp+949,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_hold_off));
    bufp->fullBit(oldp+950,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff))));
    bufp->fullBit(oldp+951,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
    bufp->fullBit(oldp+952,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_fst_transmit));
    bufp->fullBit(oldp+953,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_en));
    bufp->fullBit(oldp+954,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_miso_en));
    bufp->fullBit(oldp+955,((((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff)) 
                              | (4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff))) 
                             & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_next)))));
    bufp->fullBit(oldp+956,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_read));
    bufp->fullBit(oldp+957,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_write));
    bufp->fullBit(oldp+958,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
    bufp->fullBit(oldp+959,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
    bufp->fullCData(oldp+960,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_data),8);
    bufp->fullCData(oldp+961,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_data),8);
    bufp->fullBit(oldp+962,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_write));
    bufp->fullBit(oldp+963,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_mark));
    bufp->fullBit(oldp+964,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_mark));
    bufp->fullCData(oldp+965,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff),3);
    bufp->fullCData(oldp+966,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff),3);
    bufp->fullBit(oldp+967,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                   >> 2U))));
    bufp->fullSData(oldp+968,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__c2t_delay),9);
    bufp->fullSData(oldp+969,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__t2c_delay),9);
    bufp->fullCData(oldp+970,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__count_intercs),8);
    bufp->fullCData(oldp+971,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__count_interfr),8);
    bufp->fullCData(oldp+972,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__data_cnt),5);
    bufp->fullSData(oldp+973,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__clock_cnt),12);
    bufp->fullCData(oldp+974,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__count_up),2);
    bufp->fullCData(oldp+975,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__max_data_count),5);
    bufp->fullCData(oldp+976,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_ff),3);
    bufp->fullCData(oldp+977,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_controller_module__DOT__spi_state_next),3);
    bufp->fullCData(oldp+978,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff),8);
    bufp->fullCData(oldp+979,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_miso_en)
                                ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                    ? ((0x80U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                                 << 6U)) 
                                       | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                                   >> 1U)))
                                    : ((0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff) 
                                                 << 1U)) 
                                       | (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                                >> 1U))))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_shift_data_ff))),8);
    bufp->fullCData(oldp+980,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff),8);
    bufp->fullCData(oldp+981,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_en) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_fst_transmit))
                                ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                    ? (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                >> 1U))
                                    : (0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                                << 1U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff))),8);
    bufp->fullBit(oldp+982,((1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_en) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_mosi_fst_transmit))
                                    ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff)
                                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_shift_data_ff) 
                                           >> 7U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_mosi)))));
    bufp->fullSData(oldp+983,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo_count),9);
    bufp->fullSData(oldp+984,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo_count),9);
    bufp->fullCData(oldp+985,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__reg_tx_data),8);
    bufp->fullBit(oldp+986,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
    bufp->fullCData(oldp+987,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+988,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+989,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+990,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+991,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+992,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+993,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+994,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullSData(oldp+995,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr),9);
    bufp->fullSData(oldp+996,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr),9);
    bufp->fullIData(oldp+997,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+998,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+999,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+1000,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+1001,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+1002,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+1003,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+1004,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+1005,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullSData(oldp+1006,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr),9);
    bufp->fullSData(oldp+1007,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr),9);
    bufp->fullIData(oldp+1008,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1009,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__rx_fifo_empty_ff));
    bufp->fullCData(oldp+1010,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff),2);
    bufp->fullSData(oldp+1011,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay0_ff),16);
    bufp->fullSData(oldp+1012,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_delay1_ff),16);
    bufp->fullCData(oldp+1013,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_fmt_ff),8);
    bufp->fullCData(oldp+1014,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff),2);
    bufp->fullCData(oldp+1015,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_rx_fifo_mark) 
                                 << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_tx_fifo_mark))),2);
    bufp->fullCData(oldp+1016,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff),2);
    bufp->fullBit(oldp+1017,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)))));
    bufp->fullBit(oldp+1018,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff)))));
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__txd_mux_sel) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)))));
    bufp->fullBit(oldp+1020,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
    bufp->fullBit(oldp+1021,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
    bufp->fullCData(oldp+1022,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_data),8);
    bufp->fullBit(oldp+1023,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__tx_valid_ff));
    bufp->fullCData(oldp+1024,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff),8);
    bufp->fullBit(oldp+1025,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_mark));
    bufp->fullBit(oldp+1026,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_tx_fifo_mark));
    bufp->fullCData(oldp+1027,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                      >> 1U))),3);
    bufp->fullCData(oldp+1028,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                      >> 2U))),3);
    bufp->fullBit(oldp+1029,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))));
    bufp->fullBit(oldp+1030,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))));
    bufp->fullBit(oldp+1031,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                    >> 1U))));
    bufp->fullSData(oldp+1032,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff),16);
    bufp->fullCData(oldp+1033,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff),2);
    bufp->fullBit(oldp+1034,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter))));
    bufp->fullCData(oldp+1035,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter),4);
    bufp->fullSData(oldp+1036,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter),16);
    bufp->fullSData(oldp+1037,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter),16);
    bufp->fullBit(oldp+1038,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                              == (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                             >> 1U)))));
    bufp->fullCData(oldp+1039,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff),8);
    bufp->fullCData(oldp+1040,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count),4);
    bufp->fullBit(oldp+1041,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
    bufp->fullBit(oldp+1042,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter))));
    bufp->fullCData(oldp+1043,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+1044,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+1045,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+1046,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+1047,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+1048,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+1049,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+1050,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullCData(oldp+1051,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__read_ptr),4);
    bufp->fullCData(oldp+1052,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__write_ptr),4);
    bufp->fullIData(oldp+1053,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1054,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__rx_fifo_empty));
    bufp->fullCData(oldp+1055,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff),5);
    bufp->fullCData(oldp+1056,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff),4);
    bufp->fullCData(oldp+1057,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff),2);
    bufp->fullCData(oldp+1058,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff),2);
    bufp->fullCData(oldp+1059,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_rx_fifo_mark) 
                                 << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_tx_fifo_mark))),2);
    bufp->fullCData(oldp+1060,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_state_ff),2);
    bufp->fullCData(oldp+1061,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_state_next),2);
    bufp->fullBit(oldp+1062,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_counter))));
    bufp->fullBit(oldp+1063,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_count_en));
    bufp->fullBit(oldp+1064,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_count_reset));
    bufp->fullBit(oldp+1065,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_load_en));
    bufp->fullBit(oldp+1066,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_en));
    bufp->fullBit(oldp+1067,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_count_en));
    bufp->fullBit(oldp+1068,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_count_load_en));
    bufp->fullBit(oldp+1069,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__txd_mux_sel));
    bufp->fullBit(oldp+1070,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_read));
    bufp->fullSData(oldp+1071,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff),11);
    bufp->fullSData(oldp+1072,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_load_en)
                                 ? ((0x600U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff)) 
                                    | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_data) 
                                       << 1U)) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_en)
                                                   ? 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff) 
                                                         >> 1U)))
                                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__shifter_ff)))),11);
    bufp->fullCData(oldp+1073,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_counter),4);
    bufp->fullCData(oldp+1074,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))
                                 ? 0xbU : 0xaU)),4);
    bufp->fullSData(oldp+1075,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__baud_counter),16);
    bufp->fullBit(oldp+1076,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__bit_counter))));
    bufp->fullBit(oldp+1077,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
    bufp->fullCData(oldp+1078,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_data),8);
    bufp->fullCData(oldp+1079,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo_count),4);
    bufp->fullCData(oldp+1080,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+1081,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+1082,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+1083,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+1084,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+1085,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+1086,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+1087,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullCData(oldp+1088,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__read_ptr),4);
    bufp->fullCData(oldp+1089,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__write_ptr),4);
    bufp->fullIData(oldp+1090,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1091,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
    bufp->fullBit(oldp+1092,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
    bufp->fullCData(oldp+1093,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_data),8);
    bufp->fullBit(oldp+1094,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__tx_valid_ff));
    bufp->fullCData(oldp+1095,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_tx_ff),8);
    bufp->fullBit(oldp+1096,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_mark));
    bufp->fullBit(oldp+1097,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_tx_fifo_mark));
    bufp->fullCData(oldp+1098,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                      >> 1U))),3);
    bufp->fullCData(oldp+1099,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                      >> 2U))),3);
    bufp->fullBit(oldp+1100,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))));
    bufp->fullBit(oldp+1101,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff))));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff) 
                                    >> 1U))));
    bufp->fullSData(oldp+1103,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff),16);
    bufp->fullCData(oldp+1104,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff),2);
    bufp->fullBit(oldp+1105,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter))));
    bufp->fullCData(oldp+1106,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter),4);
    bufp->fullSData(oldp+1107,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter),16);
    bufp->fullSData(oldp+1108,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter),16);
    bufp->fullBit(oldp+1109,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                              == (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                             >> 1U)))));
    bufp->fullCData(oldp+1110,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff),8);
    bufp->fullCData(oldp+1111,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count),4);
    bufp->fullBit(oldp+1112,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))));
    bufp->fullBit(oldp+1113,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter))));
    bufp->fullCData(oldp+1114,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+1115,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+1116,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+1117,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+1118,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+1119,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+1120,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+1121,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullCData(oldp+1122,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__read_ptr),4);
    bufp->fullCData(oldp+1123,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__write_ptr),4);
    bufp->fullIData(oldp+1124,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1125,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__rx_fifo_empty));
    bufp->fullCData(oldp+1126,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff),5);
    bufp->fullCData(oldp+1127,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff),4);
    bufp->fullCData(oldp+1128,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_en_ff),2);
    bufp->fullCData(oldp+1129,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_int_pend_ff),2);
    bufp->fullCData(oldp+1130,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_rx_fifo_mark) 
                                 << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_tx_fifo_mark))),2);
    bufp->fullCData(oldp+1131,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_state_ff),2);
    bufp->fullCData(oldp+1132,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_state_next),2);
    bufp->fullBit(oldp+1133,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_counter))));
    bufp->fullBit(oldp+1134,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_count_en));
    bufp->fullBit(oldp+1135,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_count_reset));
    bufp->fullBit(oldp+1136,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_load_en));
    bufp->fullBit(oldp+1137,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_en));
    bufp->fullBit(oldp+1138,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_count_en));
    bufp->fullBit(oldp+1139,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_count_load_en));
    bufp->fullBit(oldp+1140,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__txd_mux_sel));
    bufp->fullBit(oldp+1141,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_read));
    bufp->fullSData(oldp+1142,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff),11);
    bufp->fullSData(oldp+1143,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_load_en)
                                 ? ((0x600U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)) 
                                    | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_data) 
                                       << 1U)) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_en)
                                                   ? 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff) 
                                                         >> 1U)))
                                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__shifter_ff)))),11);
    bufp->fullCData(oldp+1144,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_counter),4);
    bufp->fullCData(oldp+1145,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_txctrl_ff))
                                 ? 0xbU : 0xaU)),4);
    bufp->fullSData(oldp+1146,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__baud_counter),16);
    bufp->fullBit(oldp+1147,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__bit_counter))));
    bufp->fullBit(oldp+1148,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count))));
    bufp->fullCData(oldp+1149,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_data),8);
    bufp->fullCData(oldp+1150,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo_count),4);
    bufp->fullCData(oldp+1151,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+1152,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+1153,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+1154,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+1155,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+1156,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+1157,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+1158,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullCData(oldp+1159,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__read_ptr),4);
    bufp->fullCData(oldp+1160,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__write_ptr),4);
    bufp->fullIData(oldp+1161,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_transmitter_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1162,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
    bufp->fullIData(oldp+1163,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
    bufp->fullIData(oldp+1164,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
    bufp->fullIData(oldp+1165,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
    bufp->fullIData(oldp+1166,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
    bufp->fullIData(oldp+1167,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
    bufp->fullIData(oldp+1168,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
    bufp->fullIData(oldp+1169,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
    bufp->fullIData(oldp+1170,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
    bufp->fullIData(oldp+1171,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
    bufp->fullIData(oldp+1172,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
    bufp->fullIData(oldp+1173,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
    bufp->fullIData(oldp+1174,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
    bufp->fullIData(oldp+1175,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
    bufp->fullIData(oldp+1176,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
    bufp->fullIData(oldp+1177,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
    bufp->fullIData(oldp+1178,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
    bufp->fullIData(oldp+1179,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
    bufp->fullIData(oldp+1180,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
    bufp->fullIData(oldp+1181,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
    bufp->fullIData(oldp+1182,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
    bufp->fullIData(oldp+1183,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
    bufp->fullIData(oldp+1184,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
    bufp->fullIData(oldp+1185,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
    bufp->fullIData(oldp+1186,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
    bufp->fullIData(oldp+1187,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
    bufp->fullIData(oldp+1188,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
    bufp->fullIData(oldp+1189,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
    bufp->fullIData(oldp+1190,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
    bufp->fullIData(oldp+1191,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
    bufp->fullIData(oldp+1192,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
    bufp->fullIData(oldp+1193,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    bufp->fullCData(oldp+1194,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 9U))),3);
    bufp->fullCData(oldp+1195,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1196,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1197,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1198,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 9U))),3);
    bufp->fullCData(oldp+1199,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1200,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 3U))),4);
    bufp->fullBit(oldp+1201,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 2U))));
    bufp->fullBit(oldp+1202,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 1U))));
    bufp->fullBit(oldp+1203,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
    bufp->fullCData(oldp+1204,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 3U))),4);
    bufp->fullBit(oldp+1205,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 3U)))));
    bufp->fullBit(oldp+1206,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 3U)))));
    bufp->fullBit(oldp+1207,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 3U)))));
    bufp->fullBit(oldp+1208,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
    bufp->fullCData(oldp+1209,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
    bufp->fullBit(oldp+1210,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
    bufp->fullCData(oldp+1211,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 7U))),2);
    bufp->fullBit(oldp+1212,((IData)((0U != (0xf80U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
    bufp->fullBit(oldp+1213,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req));
    bufp->fullBit(oldp+1214,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    bufp->fullCData(oldp+1215,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                      >> 1U))),3);
    bufp->fullBit(oldp+1216,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+1217,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+1218,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))));
    bufp->fullBit(oldp+1219,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                              & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))));
    bufp->fullBit(oldp+1220,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+1221,(((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 3U)))
                               ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                               : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 7U))))));
    bufp->fullBit(oldp+1222,((IData)((((0U != (0x78U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                                       | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req)) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)))));
    bufp->fullIData(oldp+1223,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                        >> 8U))),32);
    bufp->fullCData(oldp+1224,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                              >> 6U)))),2);
    bufp->fullBit(oldp+1225,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                            >> 5U)))));
    bufp->fullBit(oldp+1226,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                            >> 4U)))));
    bufp->fullBit(oldp+1227,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                            >> 3U)))));
    bufp->fullBit(oldp+1228,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                            >> 2U)))));
    bufp->fullBit(oldp+1229,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe 
                                            >> 1U)))));
    bufp->fullBit(oldp+1230,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__core2pipe))));
    bufp->fullBit(oldp+1231,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+1232,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+1233,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+1234,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+1235,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+1236,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
    bufp->fullIData(oldp+1237,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0),32);
    bufp->fullBit(oldp+1238,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
    bufp->fullBit(oldp+1239,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
    bufp->fullBit(oldp+1240,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+1241,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
    bufp->fullBit(oldp+1242,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+1243,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+1244,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+1245,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+1246,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+1247,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1248,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
    bufp->fullIData(oldp+1249,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
    bufp->fullIData(oldp+1250,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
    bufp->fullIData(oldp+1251,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
    bufp->fullIData(oldp+1252,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
    bufp->fullIData(oldp+1253,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
    bufp->fullIData(oldp+1254,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                >> 4U)),28);
    bufp->fullBit(oldp+1255,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1256,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1257,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1258,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
    bufp->fullBit(oldp+1259,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                              >> 0x1fU)));
    bufp->fullCData(oldp+1260,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0x17U))),8);
    bufp->fullBit(oldp+1261,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1262,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1263,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1264,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1265,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1266,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x11U))));
    bufp->fullCData(oldp+1267,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0xfU))),2);
    bufp->fullCData(oldp+1268,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0xdU))),2);
    bufp->fullCData(oldp+1269,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0xbU))),2);
    bufp->fullCData(oldp+1270,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 9U))),2);
    bufp->fullBit(oldp+1271,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 8U))));
    bufp->fullBit(oldp+1272,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 7U))));
    bufp->fullBit(oldp+1273,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 6U))));
    bufp->fullBit(oldp+1274,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 5U))));
    bufp->fullBit(oldp+1275,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 4U))));
    bufp->fullBit(oldp+1276,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1277,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1278,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1279,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
    bufp->fullSData(oldp+1280,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                >> 0x14U)),12);
    bufp->fullBit(oldp+1281,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1282,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1283,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1284,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0x10U))));
    bufp->fullCData(oldp+1285,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                        >> 0xcU))),4);
    bufp->fullBit(oldp+1286,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1287,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1288,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 9U))));
    bufp->fullBit(oldp+1289,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 8U))));
    bufp->fullBit(oldp+1290,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 7U))));
    bufp->fullBit(oldp+1291,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 6U))));
    bufp->fullBit(oldp+1292,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 5U))));
    bufp->fullBit(oldp+1293,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 4U))));
    bufp->fullBit(oldp+1294,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1295,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1296,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1297,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
    bufp->fullIData(oldp+1298,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                                >> 2U)),30);
    bufp->fullCData(oldp+1299,((3U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
    bufp->fullIData(oldp+1300,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
    bufp->fullIData(oldp+1301,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
    bufp->fullSData(oldp+1302,((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                >> 0x14U)),12);
    bufp->fullBit(oldp+1303,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1304,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1305,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1306,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0x10U))));
    bufp->fullCData(oldp+1307,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                        >> 0xcU))),4);
    bufp->fullBit(oldp+1308,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1309,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1310,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 9U))));
    bufp->fullBit(oldp+1311,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 8U))));
    bufp->fullBit(oldp+1312,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 7U))));
    bufp->fullBit(oldp+1313,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 6U))));
    bufp->fullBit(oldp+1314,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 5U))));
    bufp->fullBit(oldp+1315,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 4U))));
    bufp->fullBit(oldp+1316,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1317,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1318,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1319,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
    bufp->fullCData(oldp+1320,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
    bufp->fullCData(oldp+1321,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),5);
    bufp->fullIData(oldp+1322,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
    bufp->fullBit(oldp+1323,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
    bufp->fullBit(oldp+1324,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
    bufp->fullBit(oldp+1325,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
    bufp->fullBit(oldp+1326,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
    bufp->fullBit(oldp+1327,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
    bufp->fullBit(oldp+1328,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+1329,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
    bufp->fullBit(oldp+1330,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
    bufp->fullBit(oldp+1331,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
    bufp->fullBit(oldp+1332,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
    bufp->fullBit(oldp+1333,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
    bufp->fullBit(oldp+1334,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
    bufp->fullBit(oldp+1335,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
    bufp->fullBit(oldp+1336,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
    bufp->fullBit(oldp+1337,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
    bufp->fullBit(oldp+1338,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next));
    bufp->fullIData(oldp+1339,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
    bufp->fullBit(oldp+1340,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req));
    bufp->fullBit(oldp+1341,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    bufp->fullIData(oldp+1342,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1343,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1344,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1345,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1346,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1347,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1348,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1349,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullCData(oldp+1350,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0xcU))),5);
    bufp->fullIData(oldp+1351,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                              >> 5U))),32);
    bufp->fullSData(oldp+1352,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                           << 7U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                           >> 0x19U)))),12);
    bufp->fullIData(oldp+1353,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1354,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1355,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1356,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullCData(oldp+1357,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1358,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1359,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                    >> 3U))));
    bufp->fullBit(oldp+1360,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                    >> 2U))));
    bufp->fullBit(oldp+1361,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                    >> 1U))));
    bufp->fullBit(oldp+1362,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
    bufp->fullCData(oldp+1363,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1364,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x19U))),5);
    bufp->fullBit(oldp+1365,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
    bufp->fullCData(oldp+1366,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1367,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x19U))),5);
    bufp->fullCData(oldp+1368,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0xcU))),5);
    bufp->fullBit(oldp+1369,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 0x14U)))));
    bufp->fullBit(oldp+1370,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 0x19U)))));
    bufp->fullBit(oldp+1371,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_count_en));
    bufp->fullBit(oldp+1372,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_count_reset));
    bufp->fullBit(oldp+1373,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_en));
    bufp->fullBit(oldp+1374,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_count_en));
    bufp->fullBit(oldp+1375,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_count_load_en));
    bufp->fullBit(oldp+1376,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_count_reset));
    bufp->fullBit(oldp+1377,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_count_en));
    bufp->fullBit(oldp+1378,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__fifo_load_en));
    bufp->fullBit(oldp+1379,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_count_en));
    bufp->fullBit(oldp+1380,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_count_reset));
    bufp->fullBit(oldp+1381,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_en));
    bufp->fullBit(oldp+1382,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_count_en));
    bufp->fullBit(oldp+1383,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_count_load_en));
    bufp->fullBit(oldp+1384,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_count_reset));
    bufp->fullBit(oldp+1385,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_count_en));
    bufp->fullBit(oldp+1386,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__fifo_load_en));
    bufp->fullBit(oldp+1387,(vlSelf->clk));
    bufp->fullBit(oldp+1388,(vlSelf->reset));
    bufp->fullIData(oldp+1389,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                          ? 0ULL : 
                                         (1ULL | ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                                  << 1U))) 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1390,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                             ? 0ULL
                                             : (1ULL 
                                                | ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                                   << 1U)))))));
    bufp->fullIData(oldp+1391,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                          ? 0ULL : 
                                         (1ULL | ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                                  << 1U))) 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1392,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                             ? 0ULL
                                             : (1ULL 
                                                | ((QData)((IData)(vlSelf->__VdfgTmp_h0be19abe__0)) 
                                                   << 1U)))))));
    bufp->fullIData(oldp+1393,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 3U)))
                                 ? (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                                 : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)),32);
    bufp->fullIData(oldp+1394,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1395,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1396,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1397,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullIData(oldp+1398,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                 : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->fullIData(oldp+1399,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                 : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                      & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))) 
                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))
                                     ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                                              ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                              : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff)))),32);
    bufp->fullBit(oldp+1400,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                              | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                 | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_hc11b4cfe__0))))));
    bufp->fullIData(oldp+1401,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x14U)))
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U))]
                                 : 0U)),32);
    bufp->fullIData(oldp+1402,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x19U)))
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x19U))]
                                 : 0U)),32);
    bufp->fullCData(oldp+1403,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullBit(oldp+1404,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullCData(oldp+1405,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)
                                       ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)
                                       : ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                           << 2U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                           >> 0x1eU))))),3);
    bufp->fullIData(oldp+1406,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                 ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                     >> 0x1fU) ? ((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                 : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+1407,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                 ? ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                     >> 0x1fU) ? ((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                     : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                 : vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullBit(oldp+1408,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff)
                                     : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                        >> 0x1fU)))));
    bufp->fullBit(oldp+1409,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_stall_i)
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)
                                     : (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                        >> 0x1fU)))));
    bufp->fullBit(oldp+1410,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
                                       >> 2U) & (~ 
                                                 ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff) 
                                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next)))))));
    bufp->fullIData(oldp+1411,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)
                                 ? 0x13U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
                                             ? 0U : vlSelf->__VdfgTmp_h0be19abe__0))),32);
    bufp->fullIData(oldp+1412,((((- (IData)((((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)) 
                                              & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req))) 
                                             & (vlSelf->__VdfgTmp_h0be19abe__0 
                                                >> 0x1fU)))) 
                                 << 0x14U) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgTmp_h3350089b__0)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__kill_req)
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
    bufp->fullBit(oldp+1413,((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x14U)) 
                               == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0xfU))) 
                              & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                  >> 2U) & (0U != (0x1fU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      >> 0x14U)))))));
    bufp->fullBit(oldp+1414,((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                         >> 0x19U)) 
                               == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0xfU))) 
                              & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                  >> 2U) & (0U != (0x1fU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                      >> 0x19U)))))));
    bufp->fullBit(oldp+1415,(((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                          >> 0x14U)) 
                                == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 0xfU))) 
                               & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 2U) & (0U != 
                                             (0x1fU 
                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 0x14U))))) 
                              & ((IData)((0U != (0x802U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->fullBit(oldp+1416,(((((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                          >> 0x19U)) 
                                == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 0xfU))) 
                               & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 2U) & (0U != 
                                             (0x1fU 
                                              & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 0x19U))))) 
                              & ((IData)((0U != (0x3000402U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->fullBit(oldp+1417,((1U & ((0U != (0xfU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 3U)))
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__dbus2lsu)))));
    bufp->fullCData(oldp+1418,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                 ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                     ? ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__baud_counter))
                                         ? 0U : 3U)
                                     : ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__bit_counter))
                                         ? 2U : 3U))
                                 : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                     ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                         == (0xffffU 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                                >> 1U)))
                                         ? 2U : 1U)
                                     : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                          & (8U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_fifo_count))) 
                                         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff)))
                                         ? 1U : 0U)))),2);
    bufp->fullBit(oldp+1419,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff));
    bufp->fullCData(oldp+1420,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_en)
                                 ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                                     << 7U) | (0x7fU 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff) 
                                                  >> 1U)))
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_module__DOT__uart_receiver_module__DOT__shifter_ff))),8);
    bufp->fullCData(oldp+1421,(((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                 ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                     ? ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__baud_counter))
                                         ? 0U : 3U)
                                     : ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__bit_counter))
                                         ? 2U : 3U))
                                 : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_state_ff))
                                     ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__sbit_sample_counter) 
                                         == (0xffffU 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_baud_ff) 
                                                >> 1U)))
                                         ? 2U : 1U)
                                     : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_regs_module__DOT__uart_reg_rxctrl_ff) 
                                          & (8U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_fifo_count))) 
                                         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff)))
                                         ? 1U : 0U)))),2);
    bufp->fullBit(oldp+1422,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff));
    bufp->fullCData(oldp+1423,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_en)
                                 ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__rx_pin_ff) 
                                     << 7U) | (0x7fU 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff) 
                                                  >> 1U)))
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_module__DOT__uart_receiver_module__DOT__shifter_ff))),8);
    bufp->fullBit(oldp+1424,(vlSelf->pcore_tb__DOT__spi_clk));
    bufp->fullBit(oldp+1425,(vlSelf->pcore_tb__DOT__spi_cs));
    bufp->fullBit(oldp+1426,(vlSelf->pcore_tb__DOT__spi_mosi));
    bufp->fullSData(oldp+1427,(vlSelf->pcore_tb__DOT__gp_switch_i),16);
    bufp->fullCData(oldp+1428,(vlSelf->pcore_tb__DOT__r_sg),8);
    bufp->fullCData(oldp+1429,(vlSelf->pcore_tb__DOT__r_an),8);
    bufp->fullWData(oldp+1430,(vlSelf->pcore_tb__DOT__signature_file),1024);
    bufp->fullCData(oldp+1462,(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i),2);
    bufp->fullBit(oldp+1463,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__bmem_sel));
    bufp->fullBit(oldp+1464,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__lsu_flush));
    bufp->fullCData(oldp+1465,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_pin_en),8);
    bufp->fullIData(oldp+1466,(8U),32);
    bufp->fullCData(oldp+1467,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_pin_en),8);
    bufp->fullCData(oldp+1468,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_pin_en),8);
    bufp->fullCData(oldp+1469,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1470,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                      >> 1U))),3);
    bufp->fullCData(oldp+1471,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                       << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[1U] 
                                                 >> 0x1eU)))),3);
    bufp->fullQData(oldp+1472,((0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U])) 
                                                     >> 0x1dU)))),33);
    bufp->fullCData(oldp+1474,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x1aU))),3);
    bufp->fullCData(oldp+1475,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x18U))),2);
    bufp->fullCData(oldp+1476,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x15U))),3);
    bufp->fullCData(oldp+1477,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x13U))),2);
    bufp->fullCData(oldp+1478,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                        >> 0xfU))),4);
    bufp->fullCData(oldp+1479,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+1480,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1481,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1482,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1483,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 8U))));
    bufp->fullCData(oldp+1484,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 5U))),3);
    bufp->fullBit(oldp+1485,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1486,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1487,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1488,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1489,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U])));
    bufp->fullIData(oldp+1490,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1491,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1492,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1493,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1494,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1495,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1496,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1497,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U])));
    bufp->fullIData(oldp+1498,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1499,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1500,(((vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1501,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U])),5);
    bufp->fullCData(oldp+1502,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next) 
                                      >> 1U))),3);
    bufp->fullBit(oldp+1503,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next))));
    bufp->fullIData(oldp+1504,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_next),32);
    bufp->fullIData(oldp+1505,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__div2wrb_next),32);
    bufp->fullBit(oldp+1506,(0U));
    bufp->fullCData(oldp+1507,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_code),4);
    bufp->fullCData(oldp+1508,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_code),4);
    bufp->fullBit(oldp+1509,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req));
    bufp->fullBit(oldp+1510,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req));
    bufp->fullBit(oldp+1511,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req));
    bufp->fullIData(oldp+1512,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__div),32);
    bufp->fullIData(oldp+1513,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__rem),32);
    bufp->fullBit(oldp+1514,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__pipeline_top_module__DOT__divide_module__DOT__div_valid));
    bufp->fullIData(oldp+1515,(0x21U),32);
    bufp->fullIData(oldp+1516,(0x20U),32);
    bufp->fullCData(oldp+1517,(0U),2);
    bufp->fullIData(oldp+1518,(0xffffffffU),32);
    bufp->fullIData(oldp+1519,(2U),32);
    bufp->fullBit(oldp+1520,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i))));
    bufp->fullCData(oldp+1521,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_data_next),8);
    bufp->fullCData(oldp+1522,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi0_module__DOT__spi_regs_module__DOT__reg_rx_data_ff),8);
    bufp->fullBit(oldp+1523,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_miso_i) 
                                    >> 1U))));
    bufp->fullCData(oldp+1524,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_data_next),8);
    bufp->fullCData(oldp+1525,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__spi_top_module__DOT__spi1_module__DOT__spi_regs_module__DOT__reg_rx_data_ff),8);
    bufp->fullBit(oldp+1526,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart0_rxd));
    bufp->fullBit(oldp+1527,(vlSelf->pcore_tb__DOT__dut__DOT__mcu_top_module__DOT__uart_top_module__DOT__uart1_rxd));
    bufp->fullIData(oldp+1528,(6U),32);
    bufp->fullIData(oldp+1529,(2U),32);
    bufp->fullIData(oldp+1530,(0U),32);
    bufp->fullIData(oldp+1531,(4U),32);
    bufp->fullIData(oldp+1532,(1U),32);
    bufp->fullIData(oldp+1533,(3U),32);
    bufp->fullIData(oldp+1534,(5U),32);
    bufp->fullIData(oldp+1535,(7U),32);
    bufp->fullIData(oldp+1536,(9U),32);
    bufp->fullIData(oldp+1537,(0xbU),32);
    bufp->fullIData(oldp+1538,(0x10U),32);
    bufp->fullIData(oldp+1539,(0x11U),32);
    bufp->fullIData(oldp+1540,(0x12U),32);
    bufp->fullIData(oldp+1541,(0x13U),32);
    bufp->fullIData(oldp+1542,(0x20U),32);
    bufp->fullIData(oldp+1543,(0x80U),32);
    bufp->fullIData(oldp+1544,(0x200U),32);
    bufp->fullIData(oldp+1545,(0x800U),32);
    bufp->fullIData(oldp+1546,(0x10000U),32);
    bufp->fullIData(oldp+1547,(0x20000U),32);
    bufp->fullIData(oldp+1548,(0x40000U),32);
    bufp->fullIData(oldp+1549,(0x80000U),32);
    bufp->fullIData(oldp+1550,(0xf0888U),32);
    bufp->fullIData(oldp+1551,(0x1888U),32);
    bufp->fullIData(oldp+1552,(2U),32);
    bufp->fullIData(oldp+1553,(0x1eU),32);
    bufp->fullIData(oldp+1554,(2U),32);
    bufp->fullIData(oldp+1555,(7U),32);
    bufp->fullIData(oldp+1556,(3U),32);
    bufp->fullIData(oldp+1557,(8U),32);
}
