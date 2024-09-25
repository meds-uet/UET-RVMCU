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
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"reset", false,-1);
    tracep->pushNamePrefix("pcore_tb ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"reset", false,-1);
    tracep->declBit(c+1,"irq_ext", false,-1);
    tracep->declBit(c+2,"irq_soft", false,-1);
    tracep->declBit(c+3,"uart_rx", false,-1);
    tracep->declBit(c+939,"uart_tx", false,-1);
    tracep->declBit(c+940,"spi_clk", false,-1);
    tracep->declBit(c+941,"spi_cs", false,-1);
    tracep->declBit(c+942,"spi_mosi", false,-1);
    tracep->declBit(c+4,"spi_miso", false,-1);
    tracep->declArray(c+5,"firmware", false,-1, 1023,0);
    tracep->declArray(c+37,"max_cycles", false,-1, 1023,0);
    tracep->declArray(c+351,"main_time", false,-1, 1023,0);
    tracep->declBus(c+383,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+943,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+944,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+384,"r_sg", false,-1, 7,0);
    tracep->declBus(c+385,"r_an", false,-1, 7,0);
    tracep->declBit(c+945,"sig_en", false,-1);
    tracep->declBit(c+945,"halt_en", false,-1);
    tracep->declArray(c+946,"signature_file", false,-1, 1023,0);
    tracep->declBus(c+69,"write_sig", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+1,"irq_ext_i", false,-1);
    tracep->declBit(c+2,"irq_soft_i", false,-1);
    tracep->declBus(c+383,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+943,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+944,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+384,"r_sg", false,-1, 7,0);
    tracep->declBus(c+385,"r_an", false,-1, 7,0);
    tracep->pushNamePrefix("if2mem\206 ");
    tracep->declBus(c+386,"addr", false,-1, 31,0);
    tracep->declBit(c+978,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+387,"r_data", false,-1, 31,0);
    tracep->declBit(c+978,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+126,"r_data", false,-1, 31,0);
    tracep->declBit(c+127,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe\206 ");
    tracep->declBus(c+718,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+719,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+720,"timer_irq", false,-1);
    tracep->declBit(c+721,"soft_irq", false,-1);
    tracep->declBit(c+722,"uart_irq", false,-1);
    tracep->declBit(c+723,"spi_irq", false,-1);
    tracep->declBit(c+724,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+388,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+389,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+945,"dmem_sel", false,-1);
    tracep->declBit(c+894,"uart_sel", false,-1);
    tracep->declBit(c+895,"clint_sel", false,-1);
    tracep->declBit(c+896,"plic_sel", false,-1);
    tracep->declBit(c+979,"bmem_sel", false,-1);
    tracep->declBit(c+897,"spi_sel", false,-1);
    tracep->declBit(c+898,"gpioA_sel", false,-1);
    tracep->declBit(c+899,"gpioB_sel", false,-1);
    tracep->declBit(c+900,"gpioC_sel", false,-1);
    tracep->declBit(c+901,"gpsw_sel", false,-1);
    tracep->declBit(c+244,"gpled_sel", false,-1);
    tracep->declBit(c+980,"lsu_flush", false,-1);
    tracep->declBit(c+611,"store_busy", false,-1);
    tracep->declBit(c+981,"irq_uart", false,-1);
    tracep->declBit(c+982,"irq_spi", false,-1);
    tracep->declBit(c+390,"irq_gpio", false,-1);
    tracep->declBit(c+391,"irq_clint_timer", false,-1);
    tracep->declBit(c+392,"irq_plic_target_0", false,-1);
    tracep->declBit(c+393,"irq_plic_target_1", false,-1);
    tracep->pushNamePrefix("mem2dbus\206 ");
    tracep->declBus(c+983,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus\206 ");
    tracep->declBus(c+985,"r_data", false,-1, 31,0);
    tracep->declBit(c+986,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus\206 ");
    tracep->declBus(c+394,"r_data", false,-1, 31,0);
    tracep->declBit(c+395,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus\206 ");
    tracep->declBus(c+396,"r_data", false,-1, 31,0);
    tracep->declBit(c+397,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus\206 ");
    tracep->declBus(c+987,"r_data", false,-1, 31,0);
    tracep->declBit(c+988,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus\206 ");
    tracep->declBus(c+902,"r_data", false,-1, 31,0);
    tracep->declBit(c+903,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+398,"w_sg", false,-1, 7,0);
    tracep->declBus(c+399,"w_an", false,-1, 7,0);
    tracep->pushNamePrefix("clint_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("dbus2clint_i\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_o\206 ");
    tracep->declBus(c+394,"r_data", false,-1, 31,0);
    tracep->declBit(c+395,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+895,"clint_sel_i", false,-1);
    tracep->pushNamePrefix("clint2csr_o\206 ");
    tracep->declBus(c+388,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+389,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+391,"clint_timer_irq_o", false,-1);
    tracep->declBus(c+136,"r_data", false,-1, 31,0);
    tracep->declBus(c+137,"w_data", false,-1, 31,0);
    tracep->declBus(c+138,"addr_offset", false,-1, 15,0);
    tracep->declBit(c+139,"r_req", false,-1);
    tracep->declBit(c+140,"w_req", false,-1);
    tracep->declQuad(c+400,"mtime_ff", false,-1, 63,0);
    tracep->declQuad(c+141,"mtime_next", false,-1, 63,0);
    tracep->declQuad(c+402,"mtimecmp_ff", false,-1, 63,0);
    tracep->declQuad(c+143,"mtimecmp_next", false,-1, 63,0);
    tracep->declBit(c+145,"mtime_lo_wr_flag", false,-1);
    tracep->declBit(c+146,"mtime_hi_wr_flag", false,-1);
    tracep->declBit(c+147,"mtimecmp_lo_wr_flag", false,-1);
    tracep->declBit(c+148,"mtimecmp_hi_wr_flag", false,-1);
    tracep->declBit(c+391,"timer_overflow_ff", false,-1);
    tracep->declBit(c+404,"timer_overflow_next", false,-1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+388,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+389,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_ff\206 ");
    tracep->declBus(c+394,"r_data", false,-1, 31,0);
    tracep->declBit(c+395,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus_interconnect_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("lsu2dbus_i\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_o\206 ");
    tracep->declBus(c+126,"r_data", false,-1, 31,0);
    tracep->declBit(c+127,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2dbus_i\206 ");
    tracep->declBus(c+983,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_i\206 ");
    tracep->declBus(c+985,"r_data", false,-1, 31,0);
    tracep->declBit(c+986,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_i\206 ");
    tracep->declBus(c+394,"r_data", false,-1, 31,0);
    tracep->declBit(c+395,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_i\206 ");
    tracep->declBus(c+396,"r_data", false,-1, 31,0);
    tracep->declBit(c+397,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_i\206 ");
    tracep->declBus(c+987,"r_data", false,-1, 31,0);
    tracep->declBit(c+988,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_i\206 ");
    tracep->declBus(c+902,"r_data", false,-1, 31,0);
    tracep->declBit(c+903,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+945,"dmem_sel_o", false,-1);
    tracep->declBit(c+894,"uart_sel_o", false,-1);
    tracep->declBit(c+895,"clint_sel_o", false,-1);
    tracep->declBit(c+896,"plic_sel_o", false,-1);
    tracep->declBit(c+897,"spi_sel_o", false,-1);
    tracep->declBit(c+898,"gpioA_sel_o", false,-1);
    tracep->declBit(c+899,"gpioB_sel_o", false,-1);
    tracep->declBit(c+900,"gpioC_sel_o", false,-1);
    tracep->declBit(c+901,"gpsw_sel_o", false,-1);
    tracep->declBit(c+244,"gpled_sel_o", false,-1);
    tracep->pushNamePrefix("dbus2peri_o\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+91,"dbus_addr", false,-1, 31,0);
    tracep->declBit(c+92,"ld_req", false,-1);
    tracep->declBit(c+93,"st_req", false,-1);
    tracep->declBit(c+149,"dbus_req", false,-1);
    tracep->declBit(c+945,"dmem_addr_match", false,-1);
    tracep->declBit(c+94,"uart_addr_match", false,-1);
    tracep->declBit(c+95,"clint_addr_match", false,-1);
    tracep->declBit(c+96,"plic_addr_match", false,-1);
    tracep->declBit(c+97,"spi_addr_match", false,-1);
    tracep->declBit(c+98,"gpioA_addr_match", false,-1);
    tracep->declBit(c+99,"gpioB_addr_match", false,-1);
    tracep->declBit(c+100,"gpioC_addr_match", false,-1);
    tracep->declBit(c+101,"gpsw_addr_match", false,-1);
    tracep->declBit(c+102,"gpled_addr_match", false,-1);
    tracep->declBit(c+945,"dmem_sel", false,-1);
    tracep->declBit(c+894,"uart_sel", false,-1);
    tracep->declBit(c+895,"clint_sel", false,-1);
    tracep->declBit(c+896,"plic_sel", false,-1);
    tracep->declBit(c+897,"spi_sel", false,-1);
    tracep->declBit(c+898,"gpioA_sel", false,-1);
    tracep->declBit(c+899,"gpioB_sel", false,-1);
    tracep->declBit(c+900,"gpioC_sel", false,-1);
    tracep->declBit(c+901,"gpsw_sel", false,-1);
    tracep->declBit(c+244,"gpled_sel", false,-1);
    tracep->declBit(c+904,"gpio_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio_top_module ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+898,"gpioA_sel_i", false,-1);
    tracep->declBit(c+899,"gpioB_sel_i", false,-1);
    tracep->declBit(c+900,"gpioC_sel_i", false,-1);
    tracep->declBit(c+901,"gpsw_sel_i", false,-1);
    tracep->declBit(c+244,"gpled_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+902,"r_data", false,-1, 31,0);
    tracep->declBit(c+903,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+390,"gpio_irq_o", false,-1);
    tracep->declBus(c+383,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+943,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+944,"gp_led_o", false,-1, 15,0);
    tracep->declBit(c+405,"gpioA_irq", false,-1);
    tracep->declBus(c+406,"gpioA_io", false,-1, 7,0);
    tracep->declBit(c+407,"gpioB_irq", false,-1);
    tracep->declBus(c+408,"gpioB_io", false,-1, 7,0);
    tracep->declBit(c+409,"gpioC_irq", false,-1);
    tracep->declBus(c+410,"gpioC_io", false,-1, 7,0);
    tracep->pushNamePrefix("dbusA2gpio\206 ");
    tracep->declBus(c+150,"addr", false,-1, 31,0);
    tracep->declBus(c+151,"w_data", false,-1, 31,0);
    tracep->declBus(c+152,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+153,"w_en", false,-1);
    tracep->declBit(c+154,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioA2dbus\206 ");
    tracep->declBus(c+411,"r_data", false,-1, 31,0);
    tracep->declBit(c+412,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusB2gpio\206 ");
    tracep->declBus(c+155,"addr", false,-1, 31,0);
    tracep->declBus(c+156,"w_data", false,-1, 31,0);
    tracep->declBus(c+157,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+158,"w_en", false,-1);
    tracep->declBit(c+159,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioB2dbus\206 ");
    tracep->declBus(c+413,"r_data", false,-1, 31,0);
    tracep->declBit(c+414,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusC2gpio\206 ");
    tracep->declBus(c+160,"addr", false,-1, 31,0);
    tracep->declBus(c+161,"w_data", false,-1, 31,0);
    tracep->declBus(c+162,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+163,"w_en", false,-1);
    tracep->declBit(c+164,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioC2dbus\206 ");
    tracep->declBus(c+415,"r_data", false,-1, 31,0);
    tracep->declBit(c+416,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusSP2gpio\206 ");
    tracep->declBus(c+245,"addr", false,-1, 31,0);
    tracep->declBus(c+246,"w_data", false,-1, 31,0);
    tracep->declBus(c+247,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+248,"w_en", false,-1);
    tracep->declBit(c+249,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioSP2dbus\206 ");
    tracep->declBus(c+417,"r_data", false,-1, 31,0);
    tracep->declBit(c+418,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gp_sw_led ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+901,"gpsw_sel_i", false,-1);
    tracep->declBit(c+244,"gpled_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+245,"addr", false,-1, 31,0);
    tracep->declBus(c+246,"w_data", false,-1, 31,0);
    tracep->declBus(c+247,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+248,"w_en", false,-1);
    tracep->declBit(c+249,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+417,"r_data", false,-1, 31,0);
    tracep->declBit(c+418,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+943,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+944,"gp_led_o", false,-1, 15,0);
    tracep->declBit(c+250,"gpled_sel_data", false,-1);
    tracep->declBus(c+419,"reg_sw_data_ff", false,-1, 15,0);
    tracep->declBus(c+943,"reg_sw_data_next", false,-1, 15,0);
    tracep->declBus(c+420,"reg_led_data_ff", false,-1, 15,0);
    tracep->declBus(c+905,"reg_led_data_next", false,-1, 15,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+245,"addr", false,-1, 31,0);
    tracep->declBus(c+246,"w_data", false,-1, 31,0);
    tracep->declBus(c+247,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+248,"w_en", false,-1);
    tracep->declBit(c+249,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+417,"r_data", false,-1, 31,0);
    tracep->declBit(c+418,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+251,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+252,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+253,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+254,"reg_rd_req", false,-1);
    tracep->declBit(c+255,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio_A ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+898,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+150,"addr", false,-1, 31,0);
    tracep->declBus(c+151,"w_data", false,-1, 31,0);
    tracep->declBus(c+152,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+153,"w_en", false,-1);
    tracep->declBit(c+154,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+411,"r_data", false,-1, 31,0);
    tracep->declBit(c+412,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+405,"gpio_irq_o", false,-1);
    tracep->declBus(c+406,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+989,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+165,"gpio_sel_data", false,-1);
    tracep->declBit(c+166,"gpio_sel_dir", false,-1);
    tracep->declBit(c+167,"gpio_sel_ie", false,-1);
    tracep->declBit(c+168,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+421,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+169,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+422,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+114,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+423,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+170,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+424,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+115,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+425,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+116,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+150,"addr", false,-1, 31,0);
    tracep->declBus(c+151,"w_data", false,-1, 31,0);
    tracep->declBus(c+152,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+153,"w_en", false,-1);
    tracep->declBit(c+154,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+411,"r_data", false,-1, 31,0);
    tracep->declBit(c+412,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+171,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+172,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+173,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+174,"reg_rd_req", false,-1);
    tracep->declBit(c+175,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+990,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+990,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpio_B ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+899,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+155,"addr", false,-1, 31,0);
    tracep->declBus(c+156,"w_data", false,-1, 31,0);
    tracep->declBus(c+157,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+158,"w_en", false,-1);
    tracep->declBit(c+159,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+413,"r_data", false,-1, 31,0);
    tracep->declBit(c+414,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+407,"gpio_irq_o", false,-1);
    tracep->declBus(c+408,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+991,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+176,"gpio_sel_data", false,-1);
    tracep->declBit(c+177,"gpio_sel_dir", false,-1);
    tracep->declBit(c+178,"gpio_sel_ie", false,-1);
    tracep->declBit(c+179,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+426,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+180,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+427,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+117,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+428,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+181,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+429,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+118,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+430,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+119,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+155,"addr", false,-1, 31,0);
    tracep->declBus(c+156,"w_data", false,-1, 31,0);
    tracep->declBus(c+157,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+158,"w_en", false,-1);
    tracep->declBit(c+159,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+413,"r_data", false,-1, 31,0);
    tracep->declBit(c+414,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+182,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+183,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+184,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+185,"reg_rd_req", false,-1);
    tracep->declBit(c+186,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+990,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+990,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpio_C ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+900,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+160,"addr", false,-1, 31,0);
    tracep->declBus(c+161,"w_data", false,-1, 31,0);
    tracep->declBus(c+162,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+163,"w_en", false,-1);
    tracep->declBit(c+164,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+415,"r_data", false,-1, 31,0);
    tracep->declBit(c+416,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+409,"gpio_irq_o", false,-1);
    tracep->declBus(c+410,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+992,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+187,"gpio_sel_data", false,-1);
    tracep->declBit(c+188,"gpio_sel_dir", false,-1);
    tracep->declBit(c+189,"gpio_sel_ie", false,-1);
    tracep->declBit(c+190,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+431,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+191,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+432,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+120,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+433,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+192,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+434,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+121,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+435,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+122,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+160,"addr", false,-1, 31,0);
    tracep->declBus(c+161,"w_data", false,-1, 31,0);
    tracep->declBus(c+162,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+163,"w_en", false,-1);
    tracep->declBit(c+164,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+415,"r_data", false,-1, 31,0);
    tracep->declBit(c+416,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+193,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+194,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+195,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+196,"reg_rd_req", false,-1);
    tracep->declBit(c+197,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+990,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+990,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("m_7segcon1 ");
    tracep->declBit(c+892,"w_clk", false,-1);
    tracep->declBit(c+993,"w_rst_x", false,-1);
    tracep->declBit(c+945,"w_load", false,-1);
    tracep->declBus(c+906,"w_din", false,-1, 31,0);
    tracep->declBus(c+398,"r_sg", false,-1, 7,0);
    tracep->declBus(c+399,"r_an", false,-1, 7,0);
    tracep->declBus(c+436,"r_val", false,-1, 31,0);
    tracep->declBus(c+437,"r_cnt", false,-1, 31,0);
    tracep->declBus(c+438,"r_in", false,-1, 3,0);
    tracep->declBus(c+439,"r_digit", false,-1, 2,0);
    tracep->declBus(c+440,"r_init", false,-1, 7,0);
    tracep->declBus(c+441,"r_load", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+70+i*1,"r_load_mem", true,(i+0), 7,0);
    }
    tracep->declBus(c+994,"i", false,-1, 31,0);
    tracep->declBus(c+995,"r_load_cnt", false,-1, 24,0);
    tracep->declBus(c+996,"r_lcnt", false,-1, 3,0);
    tracep->declBus(c+442,"w_segments", false,-1, 7,0);
    tracep->pushNamePrefix("m_7segled ");
    tracep->declBus(c+438,"w_in", false,-1, 3,0);
    tracep->declBus(c+442,"r_led", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_top_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_i\206 ");
    tracep->declBus(c+386,"addr", false,-1, 31,0);
    tracep->declBit(c+978,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_o\206 ");
    tracep->declBus(c+387,"r_data", false,-1, 31,0);
    tracep->declBit(c+978,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+945,"dmem_sel", false,-1);
    tracep->declBit(c+611,"store_busy", false,-1);
    tracep->pushNamePrefix("exe2mem_i\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2wrb_o\206 ");
    tracep->declBus(c+983,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+612,"c_state", false,-1, 1,0);
    tracep->declBus(c+613,"n_state", false,-1, 1,0);
    tracep->declBit(c+997,"load_req", false,-1);
    tracep->declBit(c+997,"store_req", false,-1);
    tracep->declBit(c+614,"mem_read", false,-1);
    tracep->declBit(c+615,"mem_modify", false,-1);
    tracep->declBit(c+616,"mem_write", false,-1);
    tracep->declBus(c+907,"read_data", false,-1, 31,0);
    tracep->declBus(c+198,"write_data", false,-1, 31,0);
    tracep->declBus(c+123,"changed_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_top_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_o\206 ");
    tracep->declBus(c+386,"addr", false,-1, 31,0);
    tracep->declBit(c+978,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_i\206 ");
    tracep->declBus(c+387,"r_data", false,-1, 31,0);
    tracep->declBit(c+978,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i\206 ");
    tracep->declBus(c+126,"r_data", false,-1, 31,0);
    tracep->declBit(c+127,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+611,"store_busy", false,-1);
    tracep->declBit(c+752,"lsu_flush_o", false,-1);
    tracep->pushNamePrefix("clint2csr_i\206 ");
    tracep->declBus(c+388,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+389,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe_i\206 ");
    tracep->declBus(c+718,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+719,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+720,"timer_irq", false,-1);
    tracep->declBit(c+721,"soft_irq", false,-1);
    tracep->declBit(c+722,"uart_irq", false,-1);
    tracep->declBit(c+723,"spi_irq", false,-1);
    tracep->declBit(c+724,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+339,"instr", false,-1, 31,0);
    tracep->declBus(c+340,"pc", false,-1, 31,0);
    tracep->declBus(c+341,"pc_next", false,-1, 31,0);
    tracep->declBus(c+342,"exc_code", false,-1, 3,0);
    tracep->declBit(c+343,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_next\206 ");
    tracep->declBus(c+344,"instr", false,-1, 31,0);
    tracep->declBus(c+345,"pc", false,-1, 31,0);
    tracep->declBus(c+346,"pc_next", false,-1, 31,0);
    tracep->declBus(c+347,"exc_code", false,-1, 3,0);
    tracep->declBit(c+348,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+256,"exc_req", false,-1);
    tracep->declBit(c+257,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_next\206 ");
    tracep->declBit(c+258,"exc_req", false,-1);
    tracep->declBit(c+259,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+536,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+537,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+538,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+539,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+541,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+542,"st_ops", false,-1, 1,0);
    tracep->declBus(c+543,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+544,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+545,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+546,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+547,"alu_opr1_sel", false,-1);
    tracep->declBit(c+548,"alu_opr2_sel", false,-1);
    tracep->declBit(c+549,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+550,"csr_opr_sel", false,-1);
    tracep->declBus(c+551,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+552,"exc_req", false,-1);
    tracep->declBit(c+553,"rd_wr_req", false,-1);
    tracep->declBit(c+554,"jump_req", false,-1);
    tracep->declBit(c+555,"branch_req", false,-1);
    tracep->declBit(c+556,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_next\206 ");
    tracep->declBus(c+998,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+999,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+1000,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+1001,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+1003,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1004,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1005,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1006,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1007,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1008,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1009,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1010,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1011,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1012,"csr_opr_sel", false,-1);
    tracep->declBus(c+1013,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1014,"exc_req", false,-1);
    tracep->declBit(c+1015,"rd_wr_req", false,-1);
    tracep->declBit(c+1016,"jump_req", false,-1);
    tracep->declBit(c+1017,"branch_req", false,-1);
    tracep->declBit(c+1018,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+861,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+862,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+863,"instr", false,-1, 31,0);
    tracep->declBus(c+864,"pc", false,-1, 31,0);
    tracep->declBus(c+865,"pc_next", false,-1, 31,0);
    tracep->declBus(c+866,"imm", false,-1, 31,0);
    tracep->declBus(c+867,"exc_code", false,-1, 3,0);
    tracep->declBit(c+868,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_next\206 ");
    tracep->declBus(c+1019,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1020,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1021,"instr", false,-1, 31,0);
    tracep->declBus(c+1022,"pc", false,-1, 31,0);
    tracep->declBus(c+1023,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1024,"imm", false,-1, 31,0);
    tracep->declBus(c+1025,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1026,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+869,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+557,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+558,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+559,"st_ops", false,-1, 1,0);
    tracep->declBus(c+560,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+561,"rd_wr_req", false,-1);
    tracep->declBit(c+562,"jump_req", false,-1);
    tracep->declBit(c+563,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_next\206 ");
    tracep->declBus(c+260,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+261,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+262,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+263,"st_ops", false,-1, 1,0);
    tracep->declBus(c+264,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+265,"rd_wr_req", false,-1);
    tracep->declBit(c+266,"jump_req", false,-1);
    tracep->declBit(c+267,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+870,"pc_next", false,-1, 31,0);
    tracep->declBus(c+268,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_next\206 ");
    tracep->declBus(c+269,"alu_result", false,-1, 31,0);
    tracep->declBus(c+270,"pc_next", false,-1, 31,0);
    tracep->declBus(c+271,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+272,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+273,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+564,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+871,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+872,"pc", false,-1, 31,0);
    tracep->declBus(c+873,"instr", false,-1, 31,0);
    tracep->declBus(c+104,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+874,"exc_code", false,-1, 3,0);
    tracep->declBit(c+875,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_next\206 ");
    tracep->declBus(c+274,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+275,"pc", false,-1, 31,0);
    tracep->declBus(c+276,"instr", false,-1, 31,0);
    tracep->declBus(c+277,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+278,"exc_code", false,-1, 3,0);
    tracep->declBit(c+279,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+876,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+877,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+878,"exc_req", false,-1);
    tracep->declBit(c+879,"irq_req", false,-1);
    tracep->declBit(c+880,"csr_rd_req", false,-1);
    tracep->declBit(c+881,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_next\206 ");
    tracep->declBus(c+280,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+281,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+282,"exc_req", false,-1);
    tracep->declBit(c+283,"irq_req", false,-1);
    tracep->declBit(c+284,"csr_rd_req", false,-1);
    tracep->declBit(c+285,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+443,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+444,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+726,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+199,"w_data", false,-1, 31,0);
    tracep->declBus(c+908,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+617,"amo_done", false,-1);
    tracep->declBit(c+753,"ld_req", false,-1);
    tracep->declBit(c+754,"st_req", false,-1);
    tracep->declBit(c+755,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+128,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+130,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+201,"is_amo", false,-1);
    tracep->declBit(c+202,"amo_flush", false,-1);
    tracep->declBit(c+203,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+126,"r_data", false,-1, 31,0);
    tracep->declBit(c+127,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mem\206 ");
    tracep->declBus(c+386,"addr", false,-1, 31,0);
    tracep->declBit(c+978,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+387,"r_data", false,-1, 31,0);
    tracep->declBit(c+978,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+746,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+747,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+909,"alu_result", false,-1, 31,0);
    tracep->declBus(c+910,"pc_next", false,-1, 31,0);
    tracep->declBus(c+911,"r_data", false,-1, 31,0);
    tracep->declBus(c+912,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+756,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+757,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_next\206 ");
    tracep->declBus(c+1027,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1028,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1029,"r_data", false,-1, 31,0);
    tracep->declBus(c+1030,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_next\206 ");
    tracep->declBus(c+1031,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1032,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_next\206 ");
    tracep->declBus(c+1033,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_next\206 ");
    tracep->declBus(c+1034,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+758,"pc_new", false,-1, 31,0);
    tracep->declBit(c+759,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+618,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+286,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb\206 ");
    tracep->declBus(c+913,"rd_data", false,-1, 31,0);
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+443,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+913,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+882,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+883,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+565,"use_rs1", false,-1);
    tracep->declBit(c+566,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd\206 ");
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+204,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+205,"rd_wr_req", false,-1);
    tracep->declBit(c+206,"lsu_req", false,-1);
    tracep->declBit(c+207,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+760,"new_pc_req", false,-1);
    tracep->declBit(c+761,"irq_flush_lsu", false,-1);
    tracep->declBit(c+762,"wfi_req", false,-1);
    tracep->declBit(c+445,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+619,"div_req", false,-1);
    tracep->declBit(c+620,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+287,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+288,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+289,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+290,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+291,"exe_new_pc_req", false,-1);
    tracep->declBit(c+292,"csr_new_pc_req", false,-1);
    tracep->declBit(c+293,"wfi_req", false,-1);
    tracep->declBit(c+294,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+446,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu\206 ");
    tracep->declBit(c+763,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop\206 ");
    tracep->declBit(c+295,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+296,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+297,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+298,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+299,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+300,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+301,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+302,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+303,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_pipe_ff\206 ");
    tracep->declBus(c+447,"instr", false,-1, 31,0);
    tracep->declBus(c+448,"pc", false,-1, 31,0);
    tracep->declBus(c+449,"pc_next", false,-1, 31,0);
    tracep->declBus(c+450,"exc_code", false,-1, 3,0);
    tracep->declBit(c+451,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_pipe_ff\206 ");
    tracep->declBit(c+452,"exc_req", false,-1);
    tracep->declBit(c+453,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_pipe_ff\206 ");
    tracep->declBus(c+454,"alu_result", false,-1, 31,0);
    tracep->declBus(c+455,"pc_next", false,-1, 31,0);
    tracep->declBus(c+456,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_pipe_ff\206 ");
    tracep->declBus(c+727,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+728,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+729,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+730,"st_ops", false,-1, 1,0);
    tracep->declBus(c+731,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+732,"rd_wr_req", false,-1);
    tracep->declBit(c+733,"jump_req", false,-1);
    tracep->declBit(c+734,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_pipe_ff\206 ");
    tracep->declBus(c+457,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+458,"pc", false,-1, 31,0);
    tracep->declBus(c+459,"instr", false,-1, 31,0);
    tracep->declBus(c+460,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+461,"exc_code", false,-1, 3,0);
    tracep->declBit(c+462,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_pipe_ff\206 ");
    tracep->declBus(c+463,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+464,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+465,"exc_req", false,-1);
    tracep->declBit(c+466,"irq_req", false,-1);
    tracep->declBit(c+467,"csr_rd_req", false,-1);
    tracep->declBit(c+468,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("lsu2amo_data_i\206 ");
    tracep->declBus(c+128,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+130,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_i\206 ");
    tracep->declBus(c+200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+201,"is_amo", false,-1);
    tracep->declBit(c+202,"amo_flush", false,-1);
    tracep->declBit(c+203,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_o\206 ");
    tracep->declBus(c+199,"w_data", false,-1, 31,0);
    tracep->declBus(c+908,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_o\206 ");
    tracep->declBit(c+617,"amo_done", false,-1);
    tracep->declBit(c+753,"ld_req", false,-1);
    tracep->declBit(c+754,"st_req", false,-1);
    tracep->declBit(c+755,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+128,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+130,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+201,"is_amo", false,-1);
    tracep->declBit(c+202,"amo_flush", false,-1);
    tracep->declBit(c+203,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+199,"w_data", false,-1, 31,0);
    tracep->declBus(c+908,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+617,"amo_done", false,-1);
    tracep->declBit(c+753,"ld_req", false,-1);
    tracep->declBit(c+754,"st_req", false,-1);
    tracep->declBit(c+755,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+764,"ld_req", false,-1);
    tracep->declBit(c+765,"st_req", false,-1);
    tracep->declBit(c+766,"rd_wr_req", false,-1);
    tracep->declBus(c+199,"w_data", false,-1, 31,0);
    tracep->declBus(c+908,"amo_wrb_data", false,-1, 31,0);
    tracep->declBus(c+735,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+736,"is_amo", false,-1);
    tracep->declBit(c+737,"is_lr", false,-1);
    tracep->declBus(c+621,"amo_buffer_data_ff", false,-1, 31,0);
    tracep->declBus(c+622,"amo_buffer_addr_ff", false,-1, 31,0);
    tracep->declBus(c+208,"amo_operand_a", false,-1, 31,0);
    tracep->declBus(c+469,"amo_operand_a_ff", false,-1, 31,0);
    tracep->declBus(c+470,"amo_operand_b", false,-1, 31,0);
    tracep->declBus(c+209,"amo_result", false,-1, 31,0);
    tracep->declBit(c+623,"amo_done", false,-1);
    tracep->declBit(c+210,"a_slt_b", false,-1);
    tracep->declBit(c+211,"a_uslt_b", false,-1);
    tracep->declBit(c+738,"is_sc", false,-1);
    tracep->declBit(c+212,"sc_pass", false,-1);
    tracep->declBit(c+624,"amo_reserve_ff", false,-1);
    tracep->declBit(c+213,"amo_save", false,-1);
    tracep->declBus(c+625,"state", false,-1, 2,0);
    tracep->declBus(c+214,"state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("exe2csr_data_i\206 ");
    tracep->declBus(c+457,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+458,"pc", false,-1, 31,0);
    tracep->declBus(c+459,"instr", false,-1, 31,0);
    tracep->declBus(c+460,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+461,"exc_code", false,-1, 3,0);
    tracep->declBit(c+462,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_i\206 ");
    tracep->declBus(c+463,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+464,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+465,"exc_req", false,-1);
    tracep->declBit(c+466,"irq_req", false,-1);
    tracep->declBit(c+467,"csr_rd_req", false,-1);
    tracep->declBit(c+468,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_i\206 ");
    tracep->declBus(c+443,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+444,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_i\206 ");
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+726,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr_i\206 ");
    tracep->declBus(c+388,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+389,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipe2csr_i\206 ");
    tracep->declBus(c+718,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+719,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+720,"timer_irq", false,-1);
    tracep->declBit(c+721,"soft_irq", false,-1);
    tracep->declBit(c+722,"uart_irq", false,-1);
    tracep->declBit(c+723,"spi_irq", false,-1);
    tracep->declBit(c+724,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_o\206 ");
    tracep->declBus(c+756,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_i\206 ");
    tracep->declBit(c+446,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_o\206 ");
    tracep->declBit(c+760,"new_pc_req", false,-1);
    tracep->declBit(c+761,"irq_flush_lsu", false,-1);
    tracep->declBit(c+762,"wfi_req", false,-1);
    tracep->declBit(c+445,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_o\206 ");
    tracep->declBus(c+618,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_o\206 ");
    tracep->declBus(c+758,"pc_new", false,-1, 31,0);
    tracep->declBit(c+759,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+457,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+458,"pc", false,-1, 31,0);
    tracep->declBus(c+459,"instr", false,-1, 31,0);
    tracep->declBus(c+460,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+461,"exc_code", false,-1, 3,0);
    tracep->declBit(c+462,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+463,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+464,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+465,"exc_req", false,-1);
    tracep->declBit(c+466,"irq_req", false,-1);
    tracep->declBit(c+467,"csr_rd_req", false,-1);
    tracep->declBit(c+468,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+443,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+444,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+726,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+756,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+758,"pc_new", false,-1, 31,0);
    tracep->declBit(c+759,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+618,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+760,"new_pc_req", false,-1);
    tracep->declBit(c+761,"irq_flush_lsu", false,-1);
    tracep->declBit(c+762,"wfi_req", false,-1);
    tracep->declBit(c+445,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+446,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+388,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+389,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+767,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+768,"csr_wdata", false,-1, 31,0);
    tracep->declBit(c+945,"csr_rd_exc_req", false,-1);
    tracep->declBit(c+945,"csr_wr_exc_req", false,-1);
    tracep->declBus(c+1035,"csr_rd_exc_code", false,-1, 3,0);
    tracep->declBus(c+1036,"csr_wr_exc_code", false,-1, 3,0);
    tracep->declBit(c+945,"csr_exc_req", false,-1);
    tracep->declBit(c+739,"exc_req", false,-1);
    tracep->declBus(c+740,"exc_code", false,-1, 3,0);
    tracep->declBit(c+769,"irq_req_sync", false,-1);
    tracep->declBus(c+626,"csr_pc_ff", false,-1, 31,0);
    tracep->declBus(c+770,"csr_pc_next", false,-1, 31,0);
    tracep->declBit(c+471,"pipe_stall_flush", false,-1);
    tracep->declBus(c+627,"csr_mcycle_ff", false,-1, 31,0);
    tracep->declBus(c+771,"csr_mcycle_next", false,-1, 31,0);
    tracep->declBus(c+628,"csr_mcycleh_ff", false,-1, 31,0);
    tracep->declBus(c+772,"csr_mcycleh_next", false,-1, 31,0);
    tracep->declBus(c+629,"csr_minstret_ff", false,-1, 31,0);
    tracep->declBus(c+773,"csr_minstret_next", false,-1, 31,0);
    tracep->declBus(c+630,"csr_minstreth_ff", false,-1, 31,0);
    tracep->declBus(c+774,"csr_minstreth_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mcountinhibit_ff\206 ");
    tracep->declBus(c+631,"warl1", false,-1, 27,0);
    tracep->declBit(c+632,"hpm3", false,-1);
    tracep->declBit(c+633,"ir", false,-1);
    tracep->declBit(c+634,"warl0", false,-1);
    tracep->declBit(c+635,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mcountinhibit_next\206 ");
    tracep->declBus(c+775,"warl1", false,-1, 27,0);
    tracep->declBit(c+776,"hpm3", false,-1);
    tracep->declBit(c+777,"ir", false,-1);
    tracep->declBit(c+778,"warl0", false,-1);
    tracep->declBit(c+779,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_ff\206 ");
    tracep->declBit(c+636,"sd", false,-1);
    tracep->declBus(c+637,"wpri3", false,-1, 7,0);
    tracep->declBit(c+638,"tsr", false,-1);
    tracep->declBit(c+639,"tw", false,-1);
    tracep->declBit(c+640,"tvm", false,-1);
    tracep->declBit(c+641,"mxr", false,-1);
    tracep->declBit(c+642,"sum", false,-1);
    tracep->declBit(c+643,"mprv", false,-1);
    tracep->declBus(c+644,"xs", false,-1, 1,0);
    tracep->declBus(c+645,"fs", false,-1, 1,0);
    tracep->declBus(c+646,"mpp", false,-1, 1,0);
    tracep->declBus(c+647,"vs", false,-1, 1,0);
    tracep->declBit(c+648,"spp", false,-1);
    tracep->declBit(c+649,"mpie", false,-1);
    tracep->declBit(c+650,"ube", false,-1);
    tracep->declBit(c+651,"spie", false,-1);
    tracep->declBit(c+652,"wpri2", false,-1);
    tracep->declBit(c+653,"mie", false,-1);
    tracep->declBit(c+654,"wpri1", false,-1);
    tracep->declBit(c+655,"sie", false,-1);
    tracep->declBit(c+656,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_next\206 ");
    tracep->declBit(c+780,"sd", false,-1);
    tracep->declBus(c+781,"wpri3", false,-1, 7,0);
    tracep->declBit(c+782,"tsr", false,-1);
    tracep->declBit(c+783,"tw", false,-1);
    tracep->declBit(c+784,"tvm", false,-1);
    tracep->declBit(c+785,"mxr", false,-1);
    tracep->declBit(c+786,"sum", false,-1);
    tracep->declBit(c+787,"mprv", false,-1);
    tracep->declBus(c+788,"xs", false,-1, 1,0);
    tracep->declBus(c+789,"fs", false,-1, 1,0);
    tracep->declBus(c+790,"mpp", false,-1, 1,0);
    tracep->declBus(c+791,"vs", false,-1, 1,0);
    tracep->declBit(c+792,"spp", false,-1);
    tracep->declBit(c+793,"mpie", false,-1);
    tracep->declBit(c+794,"ube", false,-1);
    tracep->declBit(c+795,"spie", false,-1);
    tracep->declBit(c+796,"wpri2", false,-1);
    tracep->declBit(c+797,"mie", false,-1);
    tracep->declBit(c+798,"wpri1", false,-1);
    tracep->declBit(c+799,"sie", false,-1);
    tracep->declBit(c+800,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_ff\206 ");
    tracep->declBus(c+657,"warl7", false,-1, 12,0);
    tracep->declBit(c+658,"gpio_ie", false,-1);
    tracep->declBit(c+659,"spi_ie", false,-1);
    tracep->declBit(c+660,"uart_ie", false,-1);
    tracep->declBus(c+661,"warl6", false,-1, 3,0);
    tracep->declBit(c+662,"meie", false,-1);
    tracep->declBit(c+663,"warl5", false,-1);
    tracep->declBit(c+664,"seie", false,-1);
    tracep->declBit(c+665,"warl4", false,-1);
    tracep->declBit(c+666,"mtie", false,-1);
    tracep->declBit(c+667,"warl3", false,-1);
    tracep->declBit(c+668,"stie", false,-1);
    tracep->declBit(c+669,"warl2", false,-1);
    tracep->declBit(c+670,"msie", false,-1);
    tracep->declBit(c+671,"warl1", false,-1);
    tracep->declBit(c+672,"ssie", false,-1);
    tracep->declBit(c+673,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_next\206 ");
    tracep->declBus(c+801,"warl7", false,-1, 12,0);
    tracep->declBit(c+802,"gpio_ie", false,-1);
    tracep->declBit(c+803,"spi_ie", false,-1);
    tracep->declBit(c+804,"uart_ie", false,-1);
    tracep->declBus(c+805,"warl6", false,-1, 3,0);
    tracep->declBit(c+806,"meie", false,-1);
    tracep->declBit(c+807,"warl5", false,-1);
    tracep->declBit(c+808,"seie", false,-1);
    tracep->declBit(c+809,"warl4", false,-1);
    tracep->declBit(c+810,"mtie", false,-1);
    tracep->declBit(c+811,"warl3", false,-1);
    tracep->declBit(c+812,"stie", false,-1);
    tracep->declBit(c+813,"warl2", false,-1);
    tracep->declBit(c+814,"msie", false,-1);
    tracep->declBit(c+815,"warl1", false,-1);
    tracep->declBit(c+816,"ssie", false,-1);
    tracep->declBit(c+817,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_ff\206 ");
    tracep->declBus(c+674,"base", false,-1, 29,0);
    tracep->declBus(c+675,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_next\206 ");
    tracep->declBus(c+818,"base", false,-1, 29,0);
    tracep->declBus(c+819,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+676,"csr_mscratch_ff", false,-1, 31,0);
    tracep->declBus(c+915,"csr_mscratch_next", false,-1, 31,0);
    tracep->declBus(c+677,"csr_mepc_ff", false,-1, 31,0);
    tracep->declBus(c+820,"csr_mepc_next", false,-1, 31,0);
    tracep->declBus(c+678,"csr_mcause_ff", false,-1, 31,0);
    tracep->declBus(c+821,"csr_mcause_next", false,-1, 31,0);
    tracep->declBus(c+679,"csr_mtval_ff", false,-1, 31,0);
    tracep->declBus(c+916,"csr_mtval_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mip_ff\206 ");
    tracep->declBus(c+680,"warl7", false,-1, 12,0);
    tracep->declBit(c+681,"gpio_ip", false,-1);
    tracep->declBit(c+682,"spi_ip", false,-1);
    tracep->declBit(c+683,"uart_ip", false,-1);
    tracep->declBus(c+684,"warl6", false,-1, 3,0);
    tracep->declBit(c+685,"meip", false,-1);
    tracep->declBit(c+686,"warl5", false,-1);
    tracep->declBit(c+687,"seip", false,-1);
    tracep->declBit(c+688,"warl4", false,-1);
    tracep->declBit(c+689,"mtip", false,-1);
    tracep->declBit(c+690,"warl3", false,-1);
    tracep->declBit(c+691,"stip", false,-1);
    tracep->declBit(c+692,"warl2", false,-1);
    tracep->declBit(c+693,"msip", false,-1);
    tracep->declBit(c+694,"warl1", false,-1);
    tracep->declBit(c+695,"ssip", false,-1);
    tracep->declBit(c+696,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mip_next\206 ");
    tracep->declBus(c+822,"warl7", false,-1, 12,0);
    tracep->declBit(c+823,"gpio_ip", false,-1);
    tracep->declBit(c+824,"spi_ip", false,-1);
    tracep->declBit(c+825,"uart_ip", false,-1);
    tracep->declBus(c+826,"warl6", false,-1, 3,0);
    tracep->declBit(c+827,"meip", false,-1);
    tracep->declBit(c+828,"warl5", false,-1);
    tracep->declBit(c+829,"seip", false,-1);
    tracep->declBit(c+830,"warl4", false,-1);
    tracep->declBit(c+831,"mtip", false,-1);
    tracep->declBit(c+832,"warl3", false,-1);
    tracep->declBit(c+833,"stip", false,-1);
    tracep->declBit(c+834,"warl2", false,-1);
    tracep->declBit(c+835,"msip", false,-1);
    tracep->declBit(c+836,"warl1", false,-1);
    tracep->declBit(c+837,"ssip", false,-1);
    tracep->declBit(c+838,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+472,"csr_mcycle_wr_flag", false,-1);
    tracep->declBit(c+473,"csr_mcycleh_wr_flag", false,-1);
    tracep->declBit(c+474,"csr_minstret_wr_flag", false,-1);
    tracep->declBit(c+475,"csr_minstreth_wr_flag", false,-1);
    tracep->declBit(c+476,"csr_mcountinhibit_wr_flag", false,-1);
    tracep->declBit(c+477,"csr_mstatus_wr_flag", false,-1);
    tracep->declBit(c+478,"csr_mie_wr_flag", false,-1);
    tracep->declBit(c+479,"csr_mtvec_wr_flag", false,-1);
    tracep->declBit(c+480,"csr_mscratch_wr_flag", false,-1);
    tracep->declBit(c+481,"csr_mepc_wr_flag", false,-1);
    tracep->declBit(c+482,"csr_mcause_wr_flag", false,-1);
    tracep->declBit(c+483,"csr_mtval_wr_flag", false,-1);
    tracep->declBit(c+484,"csr_mip_wr_flag", false,-1);
    tracep->declBus(c+697,"priv_mode_ff", false,-1, 1,0);
    tracep->declBus(c+839,"trap_priv_mode", false,-1, 1,0);
    tracep->pushNamePrefix("pipe2csr\206 ");
    tracep->declBus(c+718,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+719,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+720,"timer_irq", false,-1);
    tracep->declBit(c+721,"soft_irq", false,-1);
    tracep->declBit(c+722,"uart_irq", false,-1);
    tracep->declBit(c+723,"spi_irq", false,-1);
    tracep->declBit(c+724,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+840,"irq_code", false,-1, 4,0);
    tracep->declBus(c+841,"m_mode_new_pc", false,-1, 31,0);
    tracep->declBit(c+917,"m_irq_req", false,-1);
    tracep->declBit(c+842,"irq_req", false,-1);
    tracep->declBit(c+843,"meip_irq_req", false,-1);
    tracep->declBit(c+844,"mtip_irq_req", false,-1);
    tracep->declBit(c+845,"msip_irq_req", false,-1);
    tracep->declBit(c+1037,"seip_irq_req", false,-1);
    tracep->declBit(c+1038,"stip_irq_req", false,-1);
    tracep->declBit(c+1039,"ssip_irq_req", false,-1);
    tracep->declBit(c+698,"uart_irq_req", false,-1);
    tracep->declBit(c+699,"spi_irq_req", false,-1);
    tracep->declBit(c+700,"gpio_irq_req", false,-1);
    tracep->declBit(c+701,"timer_irq_ff", false,-1);
    tracep->declBit(c+702,"ext_irq0_ff", false,-1);
    tracep->declBit(c+703,"ext_irq1_ff", false,-1);
    tracep->declBit(c+704,"uart_irq_ff", false,-1);
    tracep->declBit(c+705,"spi_irq_ff", false,-1);
    tracep->declBit(c+706,"gpio_irq_ff", false,-1);
    tracep->declBit(c+707,"m_mode_global_ie", false,-1);
    tracep->declBit(c+846,"m_mode_exc_req", false,-1);
    tracep->declBit(c+847,"m_mode_irq_req", false,-1);
    tracep->declBit(c+848,"m_mode_pc_req", false,-1);
    tracep->declBit(c+749,"m_mode_misalign_exc_req", false,-1);
    tracep->declBit(c+1040,"m_mode_lsu_pf_exc_req", false,-1);
    tracep->declBit(c+1041,"m_mode_ileg_inst_exc_req", false,-1);
    tracep->declBit(c+1042,"m_mode_i_pf_exc_req", false,-1);
    tracep->declBit(c+1043,"m_mode_break_exc_req", false,-1);
    tracep->declBit(c+849,"mret_pc_req", false,-1);
    tracep->declBit(c+741,"break_exc_req", false,-1);
    tracep->declBit(c+485,"mret_req", false,-1);
    tracep->declBit(c+486,"wfi_req", false,-1);
    tracep->declBit(c+708,"wfi_ff", false,-1);
    tracep->declBit(c+850,"wfi_next", false,-1);
    tracep->declBus(c+443,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+742,"st_ops", false,-1, 1,0);
    tracep->declBit(c+743,"is_ld_st_ops", false,-1);
    tracep->declBit(c+744,"ld_misalign_exc_req", false,-1);
    tracep->declBit(c+745,"st_misalign_exc_req", false,-1);
    tracep->declBit(c+851,"csr_mcycle_inc", false,-1);
    tracep->declBit(c+852,"csr_mcycleh_inc", false,-1);
    tracep->declBit(c+853,"csr_minstret_inc", false,-1);
    tracep->declBit(c+854,"csr_minstreth_inc", false,-1);
    tracep->declBit(c+855,"is_not_ebreak", false,-1);
    tracep->declBit(c+856,"is_not_ecall", false,-1);
    tracep->declBit(c+487,"i_pf_exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("if2id_data_i\206 ");
    tracep->declBus(c+447,"instr", false,-1, 31,0);
    tracep->declBus(c+448,"pc", false,-1, 31,0);
    tracep->declBus(c+449,"pc_next", false,-1, 31,0);
    tracep->declBus(c+450,"exc_code", false,-1, 3,0);
    tracep->declBit(c+451,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_i\206 ");
    tracep->declBit(c+452,"exc_req", false,-1);
    tracep->declBit(c+453,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_o\206 ");
    tracep->declBus(c+861,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+862,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+863,"instr", false,-1, 31,0);
    tracep->declBus(c+864,"pc", false,-1, 31,0);
    tracep->declBus(c+865,"pc_next", false,-1, 31,0);
    tracep->declBus(c+866,"imm", false,-1, 31,0);
    tracep->declBus(c+867,"exc_code", false,-1, 3,0);
    tracep->declBit(c+868,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_o\206 ");
    tracep->declBus(c+536,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+537,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+538,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+539,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+541,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+542,"st_ops", false,-1, 1,0);
    tracep->declBus(c+543,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+544,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+545,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+546,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+547,"alu_opr1_sel", false,-1);
    tracep->declBit(c+548,"alu_opr2_sel", false,-1);
    tracep->declBit(c+549,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+550,"csr_opr_sel", false,-1);
    tracep->declBus(c+551,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+552,"exc_req", false,-1);
    tracep->declBit(c+553,"rd_wr_req", false,-1);
    tracep->declBit(c+554,"jump_req", false,-1);
    tracep->declBit(c+555,"branch_req", false,-1);
    tracep->declBit(c+556,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_i\206 ");
    tracep->declBus(c+618,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_i\206 ");
    tracep->declBus(c+913,"rd_data", false,-1, 31,0);
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+488,"id2rf_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+489,"id2rf_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+490,"instr_codeword", false,-1, 31,0);
    tracep->declBus(c+918,"rf2id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+919,"rf2id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+884,"illegal_instr", false,-1);
    tracep->declBus(c+491,"funct3_opcode", false,-1, 2,0);
    tracep->declBus(c+492,"funct7_opcode", false,-1, 6,0);
    tracep->declBus(c+489,"funct5_opcode", false,-1, 4,0);
    tracep->declBus(c+489,"shift_amt", false,-1, 4,0);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+452,"exc_req", false,-1);
    tracep->declBit(c+453,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+447,"instr", false,-1, 31,0);
    tracep->declBus(c+448,"pc", false,-1, 31,0);
    tracep->declBus(c+449,"pc_next", false,-1, 31,0);
    tracep->declBus(c+450,"exc_code", false,-1, 3,0);
    tracep->declBit(c+451,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+536,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+537,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+538,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+539,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+541,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+542,"st_ops", false,-1, 1,0);
    tracep->declBus(c+543,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+544,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+545,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+546,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+547,"alu_opr1_sel", false,-1);
    tracep->declBit(c+548,"alu_opr2_sel", false,-1);
    tracep->declBit(c+549,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+550,"csr_opr_sel", false,-1);
    tracep->declBus(c+551,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+552,"exc_req", false,-1);
    tracep->declBit(c+553,"rd_wr_req", false,-1);
    tracep->declBit(c+554,"jump_req", false,-1);
    tracep->declBit(c+555,"branch_req", false,-1);
    tracep->declBit(c+556,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+861,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+862,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+863,"instr", false,-1, 31,0);
    tracep->declBus(c+864,"pc", false,-1, 31,0);
    tracep->declBus(c+865,"pc_next", false,-1, 31,0);
    tracep->declBus(c+866,"imm", false,-1, 31,0);
    tracep->declBus(c+867,"exc_code", false,-1, 3,0);
    tracep->declBit(c+868,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+618,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+493,"instr_opcode", false,-1, 4,0);
    tracep->pushNamePrefix("rf_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBus(c+488,"id2rf_rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+489,"id2rf_rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+918,"rf2id_rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+919,"rf2id_rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+750,"id2rf_rd_wr_req_i", false,-1);
    tracep->declBus(c+920,"id2rf_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+913,"id2rf_rd_data_i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+579+i*1,"register_file", true,(i+0), 31,0);
    }
    tracep->declBit(c+494,"rs1_addr_valid", false,-1);
    tracep->declBit(c+495,"rs2_addr_valid", false,-1);
    tracep->declBit(c+921,"rf_wr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("divide_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("exe2div_i\206 ");
    tracep->declBus(c+272,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+273,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+564,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+215,"fwd2div_stall_i", false,-1);
    tracep->declBit(c+922,"fwd2div_flush_i", false,-1);
    tracep->pushNamePrefix("div2fwd_o\206 ");
    tracep->declBit(c+619,"div_req", false,-1);
    tracep->declBit(c+620,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_o\206 ");
    tracep->declBus(c+757,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+272,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+273,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+564,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+619,"div_req", false,-1);
    tracep->declBit(c+620,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+757,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+564,"alu_d_ops", false,-1, 2,0);
    tracep->declBus(c+923,"alu_d_ops_next", false,-1, 2,0);
    tracep->declBus(c+709,"alu_d_ops_ff", false,-1, 2,0);
    tracep->declBus(c+272,"alu_opr_1", false,-1, 31,0);
    tracep->declBus(c+924,"alu_d_opr_1", false,-1, 31,0);
    tracep->declBus(c+304,"alu_d_opr1_next", false,-1, 31,0);
    tracep->declBus(c+710,"alu_d_opr1_ff", false,-1, 31,0);
    tracep->declBus(c+273,"alu_opr_2", false,-1, 31,0);
    tracep->declBus(c+925,"alu_d_opr_2", false,-1, 31,0);
    tracep->declBus(c+305,"alu_d_opr2_next", false,-1, 31,0);
    tracep->declBus(c+711,"alu_d_opr2_ff", false,-1, 31,0);
    tracep->declBit(c+926,"alu_d_opr1_sign_next", false,-1);
    tracep->declBit(c+712,"alu_d_opr1_sign_ff", false,-1);
    tracep->declBit(c+927,"alu_d_opr2_sign_next", false,-1);
    tracep->declBit(c+713,"alu_d_opr2_sign_ff", false,-1);
    tracep->declBit(c+714,"alu_d_req", false,-1);
    tracep->declBit(c+857,"alu_d_ack_next", false,-1);
    tracep->declBit(c+715,"alu_d_ack_ff", false,-1);
    tracep->declBus(c+858,"alu_d_result_next", false,-1, 31,0);
    tracep->declBus(c+1044,"div", false,-1, 31,0);
    tracep->declBus(c+496,"div_u", false,-1, 31,0);
    tracep->declBus(c+1045,"rem", false,-1, 31,0);
    tracep->declBus(c+497,"rem_u", false,-1, 31,0);
    tracep->declBit(c+498,"div_done", false,-1);
    tracep->declBit(c+1046,"div_valid", false,-1);
    tracep->pushNamePrefix("divider_module ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst", false,-1);
    tracep->declBit(c+928,"start_i", false,-1);
    tracep->declBus(c+710,"opr1_i", false,-1, 31,0);
    tracep->declBus(c+711,"opr2_i", false,-1, 31,0);
    tracep->declBit(c+498,"done_o", false,-1);
    tracep->declBus(c+496,"quo_o", false,-1, 31,0);
    tracep->declBus(c+497,"rem_o", false,-1, 31,0);
    tracep->declBit(c+499,"busy_ff", false,-1);
    tracep->declBit(c+498,"done_ff", false,-1);
    tracep->declBus(c+500,"opr2_ff", false,-1, 31,0);
    tracep->declBus(c+496,"quo_ff", false,-1, 31,0);
    tracep->declBus(c+501,"quo_next", false,-1, 31,0);
    tracep->declQuad(c+502,"acc_ff", false,-1, 32,0);
    tracep->declQuad(c+504,"acc_next", false,-1, 32,0);
    tracep->declQuad(c+506,"rem_ff", false,-1, 32,0);
    tracep->declBus(c+508,"counter", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("id2exe_data_i\206 ");
    tracep->declBus(c+861,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+862,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+863,"instr", false,-1, 31,0);
    tracep->declBus(c+864,"pc", false,-1, 31,0);
    tracep->declBus(c+865,"pc_next", false,-1, 31,0);
    tracep->declBus(c+866,"imm", false,-1, 31,0);
    tracep->declBus(c+867,"exc_code", false,-1, 3,0);
    tracep->declBit(c+868,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_i\206 ");
    tracep->declBus(c+536,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+537,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+538,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+539,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+541,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+542,"st_ops", false,-1, 1,0);
    tracep->declBus(c+543,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+544,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+545,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+546,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+547,"alu_opr1_sel", false,-1);
    tracep->declBit(c+548,"alu_opr2_sel", false,-1);
    tracep->declBit(c+549,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+550,"csr_opr_sel", false,-1);
    tracep->declBus(c+551,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+552,"exc_req", false,-1);
    tracep->declBit(c+553,"rd_wr_req", false,-1);
    tracep->declBit(c+554,"jump_req", false,-1);
    tracep->declBit(c+555,"branch_req", false,-1);
    tracep->declBit(c+556,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div_o\206 ");
    tracep->declBus(c+272,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+273,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+564,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_o\206 ");
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+870,"pc_next", false,-1, 31,0);
    tracep->declBus(c+268,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_o\206 ");
    tracep->declBus(c+869,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+557,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+558,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+559,"st_ops", false,-1, 1,0);
    tracep->declBus(c+560,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+561,"rd_wr_req", false,-1);
    tracep->declBit(c+562,"jump_req", false,-1);
    tracep->declBit(c+563,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_o\206 ");
    tracep->declBus(c+871,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+872,"pc", false,-1, 31,0);
    tracep->declBus(c+873,"instr", false,-1, 31,0);
    tracep->declBus(c+104,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+874,"exc_code", false,-1, 3,0);
    tracep->declBit(c+875,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_o\206 ");
    tracep->declBus(c+876,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+877,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+878,"exc_req", false,-1);
    tracep->declBit(c+879,"irq_req", false,-1);
    tracep->declBit(c+880,"csr_rd_req", false,-1);
    tracep->declBit(c+881,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_i\206 ");
    tracep->declBit(c+287,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+288,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+289,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+290,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_o\206 ");
    tracep->declBus(c+882,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+883,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+565,"use_rs1", false,-1);
    tracep->declBit(c+566,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_o\206 ");
    tracep->declBus(c+286,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+443,"lsu2exe_fb_alu_result_i", false,-1, 31,0);
    tracep->declBus(c+913,"wrb2exe_fb_rd_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+536,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+537,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+538,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+539,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+541,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+542,"st_ops", false,-1, 1,0);
    tracep->declBus(c+543,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+544,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+545,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+546,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+547,"alu_opr1_sel", false,-1);
    tracep->declBit(c+548,"alu_opr2_sel", false,-1);
    tracep->declBit(c+549,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+550,"csr_opr_sel", false,-1);
    tracep->declBus(c+551,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+552,"exc_req", false,-1);
    tracep->declBit(c+553,"rd_wr_req", false,-1);
    tracep->declBit(c+554,"jump_req", false,-1);
    tracep->declBit(c+555,"branch_req", false,-1);
    tracep->declBit(c+556,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+861,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+862,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+863,"instr", false,-1, 31,0);
    tracep->declBus(c+864,"pc", false,-1, 31,0);
    tracep->declBus(c+865,"pc_next", false,-1, 31,0);
    tracep->declBus(c+866,"imm", false,-1, 31,0);
    tracep->declBus(c+867,"exc_code", false,-1, 3,0);
    tracep->declBit(c+868,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+869,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+557,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+558,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+559,"st_ops", false,-1, 1,0);
    tracep->declBus(c+560,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+561,"rd_wr_req", false,-1);
    tracep->declBit(c+562,"jump_req", false,-1);
    tracep->declBit(c+563,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+870,"pc_next", false,-1, 31,0);
    tracep->declBus(c+268,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+876,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+877,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+878,"exc_req", false,-1);
    tracep->declBit(c+879,"irq_req", false,-1);
    tracep->declBit(c+880,"csr_rd_req", false,-1);
    tracep->declBit(c+881,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+871,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+872,"pc", false,-1, 31,0);
    tracep->declBus(c+873,"instr", false,-1, 31,0);
    tracep->declBus(c+104,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+874,"exc_code", false,-1, 3,0);
    tracep->declBit(c+875,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+272,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+273,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+564,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+286,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+567,"alu_i_operator", false,-1, 3,0);
    tracep->declBus(c+568,"branch_ops", false,-1, 2,0);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+882,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+883,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+565,"use_rs1", false,-1);
    tracep->declBit(c+566,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+287,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+288,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+289,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+290,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+443,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+913,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->declBus(c+306,"operand_rs1_data", false,-1, 31,0);
    tracep->declBus(c+268,"operand_rs2_data", false,-1, 31,0);
    tracep->declBus(c+307,"alu_adder_output", false,-1, 31,0);
    tracep->declBus(c+272,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+273,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+308,"alu_result", false,-1, 31,0);
    tracep->declBus(c+306,"cmp_operand_1", false,-1, 31,0);
    tracep->declBus(c+309,"cmp_operand_2", false,-1, 31,0);
    tracep->declQuad(c+310,"cmp_output", false,-1, 32,0);
    tracep->declBit(c+312,"cmp_not_zero", false,-1);
    tracep->declBit(c+313,"cmp_neg", false,-1);
    tracep->declBit(c+314,"cmp_overflow", false,-1);
    tracep->declBit(c+106,"branch_res", false,-1);
    tracep->declBus(c+315,"shift_amt", false,-1, 4,0);
    tracep->declBus(c+885,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+886,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+887,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+569,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+316,"alu_b_result", false,-1, 31,0);
    tracep->declBit(c+571,"bitmanip_cmd", false,-1);
    tracep->declBit(c+572,"is_ctz", false,-1);
    tracep->declBus(c+317,"max_result", false,-1, 31,0);
    tracep->declBus(c+318,"maxu_result", false,-1, 31,0);
    tracep->declBus(c+319,"min_result", false,-1, 31,0);
    tracep->declBus(c+320,"minu_result", false,-1, 31,0);
    tracep->declBit(c+573,"is_cpop", false,-1);
    tracep->declBus(c+321,"cnt_data", false,-1, 31,0);
    tracep->declQuad(c+322,"cnt_en", false,-1, 32,0);
    tracep->declBus(c+324,"cnt_result", false,-1, 5,0);
    tracep->declBus(c+325,"alu_operand_1_rev", false,-1, 31,0);
    tracep->declBus(c+326,"alu_operand_2_rev", false,-1, 31,0);
    tracep->declBus(c+327,"zbs_index", false,-1, 31,0);
    tracep->declBus(c+328,"clmul_operand_1", false,-1, 31,0);
    tracep->declBus(c+329,"clmul_operand_2", false,-1, 31,0);
    tracep->declBus(c+330,"clmul_result", false,-1, 31,0);
    tracep->declBus(c+331,"clmulr_result", false,-1, 31,0);
    tracep->declBus(c+574,"alu_m_ops", false,-1, 2,0);
    tracep->declBit(c+575,"is_opr1_signed", false,-1);
    tracep->declBit(c+576,"is_opr2_signed", false,-1);
    tracep->declBit(c+107,"opr1_sgn", false,-1);
    tracep->declBit(c+108,"opr2_sgn", false,-1);
    tracep->declBit(c+577,"mul_cmd", false,-1);
    tracep->declBit(c+578,"mul_cmd_hi", false,-1);
    tracep->declQuad(c+109,"mul_opr1", false,-1, 32,0);
    tracep->declQuad(c+111,"mul_opr2", false,-1, 32,0);
    tracep->declQuad(c+332,"mul_output", false,-1, 63,0);
    tracep->declBus(c+113,"alu_m_result", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1047,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1048,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_o\206 ");
    tracep->declBus(c+386,"addr", false,-1, 31,0);
    tracep->declBit(c+978,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_i\206 ");
    tracep->declBus(c+387,"r_data", false,-1, 31,0);
    tracep->declBit(c+978,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_o\206 ");
    tracep->declBus(c+339,"instr", false,-1, 31,0);
    tracep->declBus(c+340,"pc", false,-1, 31,0);
    tracep->declBus(c+341,"pc_next", false,-1, 31,0);
    tracep->declBus(c+342,"exc_code", false,-1, 3,0);
    tracep->declBit(c+343,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_o\206 ");
    tracep->declBit(c+256,"exc_req", false,-1);
    tracep->declBit(c+257,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_i\206 ");
    tracep->declBus(c+286,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_i\206 ");
    tracep->declBus(c+758,"pc_new", false,-1, 31,0);
    tracep->declBit(c+759,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_i\206 ");
    tracep->declBit(c+291,"exe_new_pc_req", false,-1);
    tracep->declBit(c+292,"csr_new_pc_req", false,-1);
    tracep->declBit(c+293,"wfi_req", false,-1);
    tracep->declBit(c+294,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+387,"r_data", false,-1, 31,0);
    tracep->declBit(c+978,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+339,"instr", false,-1, 31,0);
    tracep->declBus(c+340,"pc", false,-1, 31,0);
    tracep->declBus(c+341,"pc_next", false,-1, 31,0);
    tracep->declBus(c+342,"exc_code", false,-1, 3,0);
    tracep->declBit(c+343,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+256,"exc_req", false,-1);
    tracep->declBit(c+257,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+286,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+758,"pc_new", false,-1, 31,0);
    tracep->declBit(c+759,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+291,"exe_new_pc_req", false,-1);
    tracep->declBit(c+292,"csr_new_pc_req", false,-1);
    tracep->declBit(c+293,"wfi_req", false,-1);
    tracep->declBit(c+294,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+334,"exc_code_next", false,-1, 3,0);
    tracep->declBus(c+509,"exc_code_ff", false,-1, 3,0);
    tracep->declBit(c+335,"exc_req_next", false,-1);
    tracep->declBit(c+510,"exc_req_ff", false,-1);
    tracep->declBit(c+336,"irq_req_next", false,-1);
    tracep->declBit(c+511,"irq_req_ff", false,-1);
    tracep->declBit(c+929,"kill_req", false,-1);
    tracep->declBus(c+386,"pc_ff", false,-1, 31,0);
    tracep->declBus(c+512,"pc_plus_4", false,-1, 31,0);
    tracep->declBus(c+349,"pc_next", false,-1, 31,0);
    tracep->declBus(c+930,"instr_word", false,-1, 31,0);
    tracep->declBit(c+931,"if_stall", false,-1);
    tracep->declBit(c+513,"pc_misaligned", false,-1);
    tracep->declBus(c+932,"jal_imm", false,-1, 31,0);
    tracep->declBit(c+350,"is_jal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forward_stall_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("wrb2fwd_i\206 ");
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd_i\206 ");
    tracep->declBus(c+204,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+205,"rd_wr_req", false,-1);
    tracep->declBit(c+206,"lsu_req", false,-1);
    tracep->declBit(c+207,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+611,"store_busy", false,-1);
    tracep->pushNamePrefix("div2fwd_i\206 ");
    tracep->declBit(c+619,"div_req", false,-1);
    tracep->declBit(c+620,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_i\206 ");
    tracep->declBus(c+882,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+883,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+565,"use_rs1", false,-1);
    tracep->declBit(c+566,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_i\206 ");
    tracep->declBit(c+760,"new_pc_req", false,-1);
    tracep->declBit(c+761,"irq_flush_lsu", false,-1);
    tracep->declBit(c+762,"wfi_req", false,-1);
    tracep->declBit(c+445,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_o\206 ");
    tracep->declBit(c+291,"exe_new_pc_req", false,-1);
    tracep->declBit(c+292,"csr_new_pc_req", false,-1);
    tracep->declBit(c+293,"wfi_req", false,-1);
    tracep->declBit(c+294,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_o\206 ");
    tracep->declBit(c+287,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+288,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+289,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+290,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_o\206 ");
    tracep->declBit(c+446,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_o\206 ");
    tracep->declBit(c+763,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop_o\206 ");
    tracep->declBit(c+295,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+296,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+297,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+298,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+299,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+300,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+301,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+302,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+303,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+204,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+205,"rd_wr_req", false,-1);
    tracep->declBit(c+206,"lsu_req", false,-1);
    tracep->declBit(c+207,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd\206 ");
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+882,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+883,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+565,"use_rs1", false,-1);
    tracep->declBit(c+566,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+760,"new_pc_req", false,-1);
    tracep->declBit(c+761,"irq_flush_lsu", false,-1);
    tracep->declBit(c+762,"wfi_req", false,-1);
    tracep->declBit(c+445,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+619,"div_req", false,-1);
    tracep->declBit(c+620,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+888,"rs1_valid", false,-1);
    tracep->declBit(c+889,"rs2_valid", false,-1);
    tracep->declBit(c+890,"lsu2rs1_hazard", false,-1);
    tracep->declBit(c+891,"lsu2rs2_hazard", false,-1);
    tracep->declBit(c+933,"ld_use_rs1_hazard", false,-1);
    tracep->declBit(c+934,"ld_use_rs2_hazard", false,-1);
    tracep->declBit(c+935,"ld_use_hazard", false,-1);
    tracep->declBit(c+859,"lsu_div_csr_req", false,-1);
    tracep->declBit(c+936,"if_id_exe_stall", false,-1);
    tracep->declBit(c+215,"lsu_div_stall", false,-1);
    tracep->declBit(c+752,"lsu_flush", false,-1);
    tracep->declBit(c+514,"lsu_stall_ff", false,-1);
    tracep->declBit(c+216,"lsu_stall_next", false,-1);
    tracep->declBit(c+716,"div_stall_ff", false,-1);
    tracep->declBit(c+717,"div_stall_next", false,-1);
    tracep->declBit(c+515,"lsu_div_stall_ff", false,-1);
    tracep->declBit(c+337,"id_exe_flush", false,-1);
    tracep->declBit(c+338,"exe_new_pc_req", false,-1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+291,"exe_new_pc_req", false,-1);
    tracep->declBit(c+292,"csr_new_pc_req", false,-1);
    tracep->declBit(c+293,"wfi_req", false,-1);
    tracep->declBit(c+294,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+287,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+288,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+289,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+290,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+446,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu\206 ");
    tracep->declBit(c+763,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop\206 ");
    tracep->declBit(c+295,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+296,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+297,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+298,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+299,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+300,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+301,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+302,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+303,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("exe2lsu_data_i\206 ");
    tracep->declBus(c+454,"alu_result", false,-1, 31,0);
    tracep->declBus(c+455,"pc_next", false,-1, 31,0);
    tracep->declBus(c+456,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_i\206 ");
    tracep->declBus(c+727,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+728,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+729,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+730,"st_ops", false,-1, 1,0);
    tracep->declBus(c+731,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+732,"rd_wr_req", false,-1);
    tracep->declBit(c+733,"jump_req", false,-1);
    tracep->declBit(c+734,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_o\206 ");
    tracep->declBus(c+443,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+444,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_o\206 ");
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+726,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_i\206 ");
    tracep->declBus(c+199,"w_data", false,-1, 31,0);
    tracep->declBus(c+908,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_i\206 ");
    tracep->declBit(c+617,"amo_done", false,-1);
    tracep->declBit(c+753,"ld_req", false,-1);
    tracep->declBit(c+754,"st_req", false,-1);
    tracep->declBit(c+755,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data_o\206 ");
    tracep->declBus(c+128,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+130,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_o\206 ");
    tracep->declBus(c+200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+201,"is_amo", false,-1);
    tracep->declBit(c+202,"amo_flush", false,-1);
    tracep->declBit(c+203,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_o\206 ");
    tracep->declBus(c+909,"alu_result", false,-1, 31,0);
    tracep->declBus(c+910,"pc_next", false,-1, 31,0);
    tracep->declBus(c+911,"r_data", false,-1, 31,0);
    tracep->declBus(c+912,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_o\206 ");
    tracep->declBus(c+746,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+747,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+443,"lsu2exe_fb_alu_result_o", false,-1, 31,0);
    tracep->pushNamePrefix("lsu2fwd_o\206 ");
    tracep->declBus(c+204,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+205,"rd_wr_req", false,-1);
    tracep->declBit(c+206,"lsu_req", false,-1);
    tracep->declBit(c+207,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_i\206 ");
    tracep->declBit(c+763,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i\206 ");
    tracep->declBus(c+126,"r_data", false,-1, 31,0);
    tracep->declBit(c+127,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+752,"lsu_flush_o", false,-1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+454,"alu_result", false,-1, 31,0);
    tracep->declBus(c+455,"pc_next", false,-1, 31,0);
    tracep->declBus(c+456,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+727,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+728,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+729,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+730,"st_ops", false,-1, 1,0);
    tracep->declBus(c+731,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+732,"rd_wr_req", false,-1);
    tracep->declBit(c+733,"jump_req", false,-1);
    tracep->declBit(c+734,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+909,"alu_result", false,-1, 31,0);
    tracep->declBus(c+910,"pc_next", false,-1, 31,0);
    tracep->declBus(c+911,"r_data", false,-1, 31,0);
    tracep->declBus(c+912,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+746,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+747,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+126,"r_data", false,-1, 31,0);
    tracep->declBit(c+127,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+443,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+444,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+726,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+199,"w_data", false,-1, 31,0);
    tracep->declBus(c+908,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+617,"amo_done", false,-1);
    tracep->declBit(c+753,"ld_req", false,-1);
    tracep->declBit(c+754,"st_req", false,-1);
    tracep->declBit(c+755,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+128,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+130,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+200,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+201,"is_amo", false,-1);
    tracep->declBit(c+202,"amo_flush", false,-1);
    tracep->declBit(c+203,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+204,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+205,"rd_wr_req", false,-1);
    tracep->declBit(c+206,"lsu_req", false,-1);
    tracep->declBit(c+207,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+443,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+937,"rdata_word", false,-1, 31,0);
    tracep->declBus(c+217,"rdata_hword", false,-1, 15,0);
    tracep->declBus(c+218,"rdata_byte", false,-1, 7,0);
    tracep->declBit(c+860,"ld_req", false,-1);
    tracep->declBus(c+725,"ld_ops", false,-1, 2,0);
    tracep->declBit(c+751,"st_req", false,-1);
    tracep->declBit(c+736,"is_amo", false,-1);
    tracep->declBit(c+736,"lsu_amo_req", false,-1);
    tracep->declBit(c+938,"lsu_amo_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("lsu2wrb_data_i\206 ");
    tracep->declBus(c+909,"alu_result", false,-1, 31,0);
    tracep->declBus(c+910,"pc_next", false,-1, 31,0);
    tracep->declBus(c+911,"r_data", false,-1, 31,0);
    tracep->declBus(c+912,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_i\206 ");
    tracep->declBus(c+746,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+747,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_i\206 ");
    tracep->declBus(c+756,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_i\206 ");
    tracep->declBus(c+757,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_o\206 ");
    tracep->declBus(c+913,"rd_data", false,-1, 31,0);
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+913,"wrb2exe_fb_rd_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("wrb2fwd_o\206 ");
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+909,"alu_result", false,-1, 31,0);
    tracep->declBus(c+910,"pc_next", false,-1, 31,0);
    tracep->declBus(c+911,"r_data", false,-1, 31,0);
    tracep->declBus(c+912,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+746,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+747,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+756,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+757,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb\206 ");
    tracep->declBus(c+913,"rd_data", false,-1, 31,0);
    tracep->declBus(c+914,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+748,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+913,"wrb_rd_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_top_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o\206 ");
    tracep->declBus(c+396,"r_data", false,-1, 31,0);
    tracep->declBit(c+397,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+896,"plic_sel_i", false,-1);
    tracep->declBus(c+1049,"edge_select_i", false,-1, 1,0);
    tracep->declBus(c+1050,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+516,"irq_targets_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+219,"claim_req", false,-1, 1,0);
    tracep->declBus(c+220,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+221,"[0]", false,-1, 1,0);
    tracep->declBus(c+222,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+517,"irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_th");
    tracep->declBus(c+518,"[0]", false,-1, 2,0);
    tracep->declBus(c+519,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ie");
    tracep->declBus(c+522,"[0]", false,-1, 1,0);
    tracep->declBus(c+523,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+524,"[0]", false,-1, 1,0);
    tracep->declBus(c+525,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBus(c+517,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+522,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+518,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+392,"irq_req_o", false,-1);
    tracep->declBus(c+526,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+517,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+522,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+527,"prio_th", false,-1, 2,0);
    tracep->declBit(c+392,"irq_req_ff", false,-1);
    tracep->declBit(c+528,"irq_req_next", false,-1);
    tracep->declBus(c+526,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+529,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1051,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBus(c+517,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+523,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+519,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+393,"irq_req_o", false,-1);
    tracep->declBus(c+530,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+517,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+523,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+531,"prio_th", false,-1, 2,0);
    tracep->declBit(c+393,"irq_req_ff", false,-1);
    tracep->declBit(c+532,"irq_req_next", false,-1);
    tracep->declBus(c+530,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+533,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1051,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("plic_gateway_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->declBus(c+1050,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+1049,"edge_select_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway_i\206 ");
    tracep->declBus(c+219,"claim_req", false,-1, 1,0);
    tracep->declBus(c+220,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+221,"[0]", false,-1, 1,0);
    tracep->declBus(c+222,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+524,"[0]", false,-1, 1,0);
    tracep->declBus(c+525,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+517,"irq_pending_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+219,"claim_req", false,-1, 1,0);
    tracep->declBus(c+220,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+221,"[0]", false,-1, 1,0);
    tracep->declBus(c+222,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+517,"irq_pending_ff", false,-1, 1,0);
    tracep->declBus(c+223,"irq_pending_next", false,-1, 1,0);
    tracep->declBus(c+534,"irq_active_ff", false,-1, 1,0);
    tracep->declBus(c+224,"irq_active_next", false,-1, 1,0);
    tracep->declBus(c+225,"irq_set_pending", false,-1, 1,0);
    tracep->declBus(c+226,"irq_set_active", false,-1, 1,0);
    tracep->declBus(c+1050,"irq_req", false,-1, 1,0);
    tracep->declBus(c+535,"irq_src_ff", false,-1, 1,0);
    tracep->declBus(c+1050,"irq_src_next", false,-1, 1,0);
    tracep->declBus(c+227,"claim", false,-1, 1,0);
    tracep->declBus(c+228,"complete", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+524,"[0]", false,-1, 1,0);
    tracep->declBus(c+525,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+229,"[0]", false,-1, 1,0);
    tracep->declBus(c+230,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1052,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1052,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_regs_module ");
    tracep->declBit(c+893,"rst_n", false,-1);
    tracep->declBit(c+892,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i\206 ");
    tracep->declBus(c+131,"addr", false,-1, 31,0);
    tracep->declBus(c+132,"w_data", false,-1, 31,0);
    tracep->declBus(c+133,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+134,"w_en", false,-1);
    tracep->declBit(c+135,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o\206 ");
    tracep->declBus(c+396,"r_data", false,-1, 31,0);
    tracep->declBit(c+397,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+896,"plic_sel_i", false,-1);
    tracep->pushNamePrefix("regs_ie_o");
    tracep->declBus(c+522,"[0]", false,-1, 1,0);
    tracep->declBus(c+523,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_o");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_th_o");
    tracep->declBus(c+518,"[0]", false,-1, 2,0);
    tracep->declBus(c+519,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+517,"irq_pending_i", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+524,"[0]", false,-1, 1,0);
    tracep->declBus(c+525,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway_o\206 ");
    tracep->declBus(c+219,"claim_req", false,-1, 1,0);
    tracep->declBus(c+220,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+221,"[0]", false,-1, 1,0);
    tracep->declBus(c+222,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+219,"claim_req", false,-1, 1,0);
    tracep->declBus(c+220,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+221,"[0]", false,-1, 1,0);
    tracep->declBus(c+222,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+231,"claim_req", false,-1, 1,0);
    tracep->declBus(c+232,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+229,"[0]", false,-1, 1,0);
    tracep->declBus(c+230,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+233,"reg_addr", false,-1, 23,0);
    tracep->declBit(c+234,"reg_rd_req", false,-1);
    tracep->declBit(c+235,"reg_wr_req", false,-1);
    tracep->declBus(c+236,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+137,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+237,"prio_th_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+238,"prio_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+239,"ie_reg_wr_flag", false,-1, 1,0);
    tracep->pushNamePrefix("plic_reg_prio_th_ff");
    tracep->declBus(c+518,"[0]", false,-1, 2,0);
    tracep->declBus(c+519,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_th_next");
    tracep->declBus(c+240,"[0]", false,-1, 2,0);
    tracep->declBus(c+241,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_ff");
    tracep->declBus(c+520,"[0]", false,-1, 2,0);
    tracep->declBus(c+521,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_next");
    tracep->declBus(c+242,"[0]", false,-1, 2,0);
    tracep->declBus(c+243,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_ff");
    tracep->declBus(c+522,"[0]", false,-1, 1,0);
    tracep->declBus(c+523,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_next");
    tracep->declBus(c+124,"[0]", false,-1, 1,0);
    tracep->declBus(c+125,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+517,"plic_reg_irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+524,"[0]", false,-1, 1,0);
    tracep->declBus(c+525,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_ff\206 ");
    tracep->declBus(c+396,"r_data", false,-1, 31,0);
    tracep->declBit(c+397,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1052,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1052,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1052,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_init_sub__TOP____024unit__0(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1053,"CSR_MTVEC_BASE_ALIGN_VECTOR", false,-1, 31,0);
    tracep->declBus(c+1054,"CSR_MTVEC_BASE_ALIGN_DIRECT", false,-1, 31,0);
    tracep->declBus(c+1055,"MODE_BIT", false,-1, 31,0);
    tracep->declBus(c+1056,"EXC_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1057,"S_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1058,"M_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1059,"S_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1060,"M_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1061,"S_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1062,"M_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1063,"UART_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1064,"SPI_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1065,"GPIO_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1052,"MIE_SSIP", false,-1, 31,0);
    tracep->declBus(c+990,"MIE_MSIP", false,-1, 31,0);
    tracep->declBus(c+1066,"MIE_STIP", false,-1, 31,0);
    tracep->declBus(c+1067,"MIE_MTIP", false,-1, 31,0);
    tracep->declBus(c+1068,"MIE_SEIP", false,-1, 31,0);
    tracep->declBus(c+1069,"MIE_MEIP", false,-1, 31,0);
    tracep->declBus(c+1070,"MIE_UART", false,-1, 31,0);
    tracep->declBus(c+1071,"MIE_SPI", false,-1, 31,0);
    tracep->declBus(c+1072,"MIE_GPIO", false,-1, 31,0);
    tracep->declBus(c+1073,"MIE_MASK", false,-1, 31,0);
    tracep->declBus(c+1073,"MIP_MASK", false,-1, 31,0);
    tracep->declBus(c+1074,"MSTATUS_MASK", false,-1, 31,0);
    tracep->declBus(c+1059,"IRQ_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1075,"TVEC_MODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1076,"TVEC_BASE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1077,"PLIC_SOURCE_COUNT", false,-1, 31,0);
    tracep->declBus(c+1077,"PLIC_TARGET_COUNT", false,-1, 31,0);
    tracep->declBus(c+1078,"PLIC_PRIO_LEVELS", false,-1, 31,0);
    tracep->declBus(c+1077,"PLIC_SOURCE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1079,"PLIC_PRIO_WIDTH", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->pcore_tb__DOT__irq_ext));
    bufp->fullBit(oldp+2,(vlSelf->pcore_tb__DOT__irq_soft));
    bufp->fullBit(oldp+3,(vlSelf->pcore_tb__DOT__uart_rx));
    bufp->fullBit(oldp+4,(vlSelf->pcore_tb__DOT__spi_miso));
    bufp->fullWData(oldp+5,(vlSelf->pcore_tb__DOT__firmware),1024);
    bufp->fullWData(oldp+37,(vlSelf->pcore_tb__DOT__max_cycles),1024);
    bufp->fullIData(oldp+69,(vlSelf->pcore_tb__DOT__write_sig),32);
    bufp->fullCData(oldp+70,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[0]),8);
    bufp->fullCData(oldp+71,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[1]),8);
    bufp->fullCData(oldp+72,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[2]),8);
    bufp->fullCData(oldp+73,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[3]),8);
    bufp->fullCData(oldp+74,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[4]),8);
    bufp->fullCData(oldp+75,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[5]),8);
    bufp->fullCData(oldp+76,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[6]),8);
    bufp->fullCData(oldp+77,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[7]),8);
    bufp->fullCData(oldp+78,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[8]),8);
    bufp->fullCData(oldp+79,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[9]),8);
    bufp->fullCData(oldp+80,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[10]),8);
    bufp->fullCData(oldp+81,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[11]),8);
    bufp->fullCData(oldp+82,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[12]),8);
    bufp->fullCData(oldp+83,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[13]),8);
    bufp->fullCData(oldp+84,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[14]),8);
    bufp->fullCData(oldp+85,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load_mem[15]),8);
    bufp->fullIData(oldp+86,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                               << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                            >> 4U))),32);
    bufp->fullIData(oldp+87,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                               << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                            >> 4U))),32);
    bufp->fullCData(oldp+88,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                    >> 2U))),2);
    bufp->fullBit(oldp+89,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+90,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    bufp->fullIData(oldp+91,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                               << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                            >> 4U))),32);
    bufp->fullBit(oldp+92,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+93,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    bufp->fullBit(oldp+94,((0x20U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+95,(((0x101000U < (0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 4U))) 
                            & (0x11ffffU >= (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))))));
    bufp->fullBit(oldp+96,(((0x100000U < (0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 4U))) 
                            & (0x100fffU >= (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))))));
    bufp->fullBit(oldp+97,((0x21U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+98,((0x22U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+99,((0x23U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x14U)))));
    bufp->fullBit(oldp+100,((0x24U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 0x14U)))));
    bufp->fullBit(oldp+101,((0x25U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 0x14U)))));
    bufp->fullBit(oldp+102,((0x26U == (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 0x14U)))));
    bufp->fullIData(oldp+103,(((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                             >> 1U)))
                                ? ((IData)((0U != (6U 
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
    bufp->fullIData(oldp+104,(((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                            >> 0x14U))
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)),32);
    bufp->fullBit(oldp+105,((1U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
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
    bufp->fullBit(oldp+106,((1U & ((0x800000U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                    ? ((0x400000U & 
                                        vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
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
                                    : ((0x400000U & 
                                        vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                        ? ((0x200000U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])
                                            ? (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0))
                                            : (0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                        : ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                            >> 0x15U) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))));
    bufp->fullBit(oldp+107,((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      >> 2U) & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+108,((IData)(((6U == (6U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                     & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                        >> 0x1fU)))));
    bufp->fullQData(oldp+109,((((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                                  >> 2U) 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)))),33);
    bufp->fullQData(oldp+111,((((QData)((IData)(((6U 
                                                  == 
                                                  (6U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])) 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))),33);
    bufp->fullIData(oldp+113,(((IData)((0U != (6U & 
                                               vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))
                                ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output 
                                           >> 0x20U))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output))),32);
    bufp->fullCData(oldp+114,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+115,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+116,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)))),8);
    bufp->fullCData(oldp+117,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+118,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+119,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)))),8);
    bufp->fullCData(oldp+120,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+121,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+122,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)))),8);
    bufp->fullIData(oldp+123,(((0x3fffffeU >= (0x3ffffffU 
                                               & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 8U))))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                               [(0x3ffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x18U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 8U)))]
                                : 0U)),32);
    bufp->fullCData(oldp+124,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
    bufp->fullCData(oldp+125,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                         >> 2U)))),2);
    bufp->fullIData(oldp+126,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                       >> 1U))),32);
    bufp->fullBit(oldp+127,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
    bufp->fullIData(oldp+128,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U]),32);
    bufp->fullIData(oldp+129,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U]),32);
    bufp->fullIData(oldp+130,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]),32);
    bufp->fullIData(oldp+131,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+132,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+133,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+134,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+135,((1U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
    bufp->fullIData(oldp+136,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data),32);
    bufp->fullIData(oldp+137,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+138,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 6U))),16);
    bufp->fullBit(oldp+139,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req));
    bufp->fullBit(oldp+140,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req));
    bufp->fullQData(oldp+141,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next),64);
    bufp->fullQData(oldp+143,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next),64);
    bufp->fullBit(oldp+145,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag));
    bufp->fullBit(oldp+146,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag));
    bufp->fullBit(oldp+147,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
    bufp->fullBit(oldp+148,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
    bufp->fullBit(oldp+149,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    bufp->fullIData(oldp+150,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+151,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+152,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+153,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+154,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U])));
    bufp->fullIData(oldp+155,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+156,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+157,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+158,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+159,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U])));
    bufp->fullIData(oldp+160,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+161,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+162,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+163,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+164,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U])));
    bufp->fullBit(oldp+165,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data));
    bufp->fullBit(oldp+166,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+167,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+168,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+169,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next),8);
    bufp->fullCData(oldp+170,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+171,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+172,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data),32);
    bufp->fullIData(oldp+173,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+174,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req));
    bufp->fullBit(oldp+175,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req));
    bufp->fullBit(oldp+176,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data));
    bufp->fullBit(oldp+177,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+178,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+179,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+180,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next),8);
    bufp->fullCData(oldp+181,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+182,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+183,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data),32);
    bufp->fullIData(oldp+184,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+185,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req));
    bufp->fullBit(oldp+186,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req));
    bufp->fullBit(oldp+187,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data));
    bufp->fullBit(oldp+188,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+189,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+190,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next),8);
    bufp->fullCData(oldp+192,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+193,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+194,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data),32);
    bufp->fullIData(oldp+195,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+196,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req));
    bufp->fullBit(oldp+197,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req));
    bufp->fullIData(oldp+198,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__write_data),32);
    bufp->fullIData(oldp+199,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
    bufp->fullCData(oldp+200,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                       >> 3U))),4);
    bufp->fullBit(oldp+201,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+202,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+203,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))));
    bufp->fullCData(oldp+204,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                        >> 3U))),5);
    bufp->fullBit(oldp+205,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                   >> 2U))));
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                   >> 1U))));
    bufp->fullBit(oldp+207,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd))));
    bufp->fullIData(oldp+208,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a),32);
    bufp->fullIData(oldp+209,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
    bufp->fullBit(oldp+210,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
    bufp->fullBit(oldp+211,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
    bufp->fullBit(oldp+212,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
    bufp->fullBit(oldp+213,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
    bufp->fullCData(oldp+214,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
    bufp->fullBit(oldp+215,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall));
    bufp->fullBit(oldp+216,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    bufp->fullSData(oldp+217,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
    bufp->fullCData(oldp+218,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
    bufp->fullCData(oldp+219,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+220,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+221,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway))),2);
    bufp->fullCData(oldp+222,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
    bufp->fullCData(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
    bufp->fullCData(oldp+225,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
    bufp->fullCData(oldp+226,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
    bufp->fullCData(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
    bufp->fullCData(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
    bufp->fullCData(oldp+229,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
    bufp->fullCData(oldp+230,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
    bufp->fullCData(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
    bufp->fullIData(oldp+233,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U))),24);
    bufp->fullBit(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+236,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
    bufp->fullCData(oldp+237,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
    bufp->fullCData(oldp+238,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
    bufp->fullCData(oldp+239,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
    bufp->fullCData(oldp+240,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
    bufp->fullCData(oldp+241,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+242,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
    bufp->fullCData(oldp+243,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+244,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel));
    bufp->fullIData(oldp+245,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+246,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+247,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+248,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+249,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])));
    bufp->fullBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data));
    bufp->fullCData(oldp+251,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data),32);
    bufp->fullIData(oldp+253,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+254,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req));
    bufp->fullBit(oldp+255,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req));
    bufp->fullBit(oldp+256,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+257,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    bufp->fullBit(oldp+258,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next) 
                                   >> 1U))));
    bufp->fullBit(oldp+259,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next))));
    bufp->fullCData(oldp+260,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+261,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+262,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 9U))),3);
    bufp->fullCData(oldp+263,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 7U))),2);
    bufp->fullCData(oldp+264,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                       >> 3U))),4);
    bufp->fullBit(oldp+265,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                   >> 2U))));
    bufp->fullBit(oldp+266,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                   >> 1U))));
    bufp->fullBit(oldp+267,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
    bufp->fullIData(oldp+268,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
    bufp->fullIData(oldp+269,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
    bufp->fullIData(oldp+270,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
    bufp->fullIData(oldp+271,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
    bufp->fullIData(oldp+272,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
    bufp->fullIData(oldp+273,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
    bufp->fullSData(oldp+274,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+275,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+276,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+277,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+278,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+279,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
    bufp->fullCData(oldp+280,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+281,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+282,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 3U))));
    bufp->fullBit(oldp+283,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 2U))));
    bufp->fullBit(oldp+284,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 1U))));
    bufp->fullBit(oldp+285,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
    bufp->fullIData(oldp+286,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
    bufp->fullBit(oldp+287,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                   >> 3U))));
    bufp->fullBit(oldp+288,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                   >> 2U))));
    bufp->fullBit(oldp+289,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                   >> 1U))));
    bufp->fullBit(oldp+290,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))));
    bufp->fullBit(oldp+291,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                   >> 3U))));
    bufp->fullBit(oldp+292,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                   >> 2U))));
    bufp->fullBit(oldp+293,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                   >> 1U))));
    bufp->fullBit(oldp+294,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))));
    bufp->fullBit(oldp+295,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 8U))));
    bufp->fullBit(oldp+296,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 7U))));
    bufp->fullBit(oldp+297,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 6U))));
    bufp->fullBit(oldp+298,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 5U))));
    bufp->fullBit(oldp+299,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 4U))));
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 3U))));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 2U))));
    bufp->fullBit(oldp+302,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 1U))));
    bufp->fullBit(oldp+303,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
    bufp->fullIData(oldp+304,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next),32);
    bufp->fullIData(oldp+305,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next),32);
    bufp->fullIData(oldp+306,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
    bufp->fullIData(oldp+307,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
    bufp->fullIData(oldp+308,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
    bufp->fullIData(oldp+309,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
    bufp->fullQData(oldp+310,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
    bufp->fullBit(oldp+312,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
    bufp->fullBit(oldp+313,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+314,((1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                             >> 0x1fU)) 
                                    & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                           >> 0x1fU)) 
                                       & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                          >> 0x1fU))) 
                                   | ((~ (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                  >> 0x1fU))) 
                                      & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                             >> 0x1fU)) 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                            >> 0x1fU)))))));
    bufp->fullCData(oldp+315,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
    bufp->fullIData(oldp+316,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result),32);
    bufp->fullIData(oldp+317,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+318,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+319,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullIData(oldp+320,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullIData(oldp+321,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data),32);
    bufp->fullQData(oldp+322,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en),33);
    bufp->fullCData(oldp+324,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result),6);
    bufp->fullIData(oldp+325,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev),32);
    bufp->fullIData(oldp+326,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev),32);
    bufp->fullIData(oldp+327,(((0x1fU >= (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                ? ((IData)(1U) << (0x1fU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                : 0U)),32);
    bufp->fullIData(oldp+328,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1),32);
    bufp->fullIData(oldp+329,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2),32);
    bufp->fullIData(oldp+330,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result),32);
    bufp->fullIData(oldp+331,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result),32);
    bufp->fullQData(oldp+332,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output),64);
    bufp->fullCData(oldp+334,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
    bufp->fullBit(oldp+335,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    bufp->fullBit(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
    bufp->fullBit(oldp+338,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    bufp->fullIData(oldp+339,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+340,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+341,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+342,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+343,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U])));
    bufp->fullIData(oldp+344,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+345,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+346,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+347,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+348,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
    bufp->fullIData(oldp+349,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
    bufp->fullBit(oldp+350,((0x1bU == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                >> 7U)))));
    bufp->fullWData(oldp+351,(vlSelf->pcore_tb__DOT__main_time),1024);
    bufp->fullIData(oldp+383,((vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0 
                               & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io) 
                                    << 0x10U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io))) 
                                  & vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0))),24);
    bufp->fullCData(oldp+384,(vlSelf->pcore_tb__DOT__r_sg),8);
    bufp->fullCData(oldp+385,(vlSelf->pcore_tb__DOT__r_an),8);
    bufp->fullIData(oldp+386,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
    bufp->fullIData(oldp+387,(vlSelf->__VdfgTmp_h72333958__0),32);
    bufp->fullIData(oldp+388,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)),32);
    bufp->fullIData(oldp+389,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+390,((1U & (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
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
                                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff))))))))) 
                                   | (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff)) 
                                        >> 7U) | ((
                                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
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
                                          >> 7U) | 
                                         ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff)) 
                                           >> 6U) | 
                                          ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
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
    bufp->fullBit(oldp+391,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff));
    bufp->fullBit(oldp+392,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullBit(oldp+393,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+394,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+395,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff))));
    bufp->fullIData(oldp+396,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+397,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
    bufp->fullCData(oldp+398,(vlSelf->pcore_tb__DOT__dut__DOT__w_sg),8);
    bufp->fullCData(oldp+399,(vlSelf->pcore_tb__DOT__dut__DOT__w_an),8);
    bufp->fullQData(oldp+400,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff),64);
    bufp->fullQData(oldp+402,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff),64);
    bufp->fullBit(oldp+404,((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                             >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)));
    bufp->fullBit(oldp+405,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
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
    bufp->fullCData(oldp+406,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io),8);
    bufp->fullBit(oldp+407,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
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
    bufp->fullCData(oldp+408,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io),8);
    bufp->fullBit(oldp+409,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
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
    bufp->fullCData(oldp+410,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io),8);
    bufp->fullIData(oldp+411,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+412,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+413,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+414,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+415,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+416,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+417,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+418,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff))));
    bufp->fullSData(oldp+419,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff),16);
    bufp->fullSData(oldp+420,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff),16);
    bufp->fullCData(oldp+421,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+422,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+423,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+424,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+425,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff),8);
    bufp->fullCData(oldp+426,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+427,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+428,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+429,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+430,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff),8);
    bufp->fullCData(oldp+431,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+432,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+433,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+434,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+435,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff),8);
    bufp->fullIData(oldp+436,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_val),32);
    bufp->fullIData(oldp+437,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_cnt),32);
    bufp->fullCData(oldp+438,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_in),4);
    bufp->fullCData(oldp+439,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_digit),3);
    bufp->fullCData(oldp+440,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_init),8);
    bufp->fullCData(oldp+441,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load),8);
    bufp->fullCData(oldp+442,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__w_segments),8);
    bufp->fullIData(oldp+443,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+444,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullBit(oldp+445,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+446,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
    bufp->fullIData(oldp+447,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+448,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+449,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+450,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+451,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
    bufp->fullBit(oldp+452,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+453,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))));
    bufp->fullIData(oldp+454,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+455,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullIData(oldp+456,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullSData(oldp+457,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+458,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+459,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+460,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+461,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+462,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
    bufp->fullCData(oldp+463,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+464,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+465,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+466,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+467,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+468,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
    bufp->fullIData(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
    bufp->fullIData(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullBit(oldp+471,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
    bufp->fullBit(oldp+472,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
    bufp->fullBit(oldp+473,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
    bufp->fullBit(oldp+474,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
    bufp->fullBit(oldp+475,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
    bufp->fullBit(oldp+476,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
    bufp->fullBit(oldp+477,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
    bufp->fullBit(oldp+478,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
    bufp->fullBit(oldp+479,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
    bufp->fullBit(oldp+480,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
    bufp->fullBit(oldp+481,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
    bufp->fullBit(oldp+482,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
    bufp->fullBit(oldp+483,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
    bufp->fullBit(oldp+484,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
    bufp->fullBit(oldp+485,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
    bufp->fullBit(oldp+486,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
    bufp->fullBit(oldp+487,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 3U))));
    bufp->fullCData(oldp+488,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+489,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x19U))),5);
    bufp->fullIData(oldp+490,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+491,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U))),3);
    bufp->fullCData(oldp+492,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x1eU)))),7);
    bufp->fullCData(oldp+493,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+494,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+495,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x19U)))));
    bufp->fullIData(oldp+496,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff),32);
    bufp->fullIData(oldp+497,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)),32);
    bufp->fullBit(oldp+498,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
    bufp->fullBit(oldp+499,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__busy_ff));
    bufp->fullIData(oldp+500,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__opr2_ff),32);
    bufp->fullIData(oldp+501,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_next),32);
    bufp->fullQData(oldp+502,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_ff),33);
    bufp->fullQData(oldp+504,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_next),33);
    bufp->fullQData(oldp+506,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff),33);
    bufp->fullCData(oldp+508,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__counter),5);
    bufp->fullCData(oldp+509,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
    bufp->fullBit(oldp+510,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
    bufp->fullBit(oldp+511,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+512,(((IData)(4U) + vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)),32);
    bufp->fullBit(oldp+513,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
    bufp->fullBit(oldp+514,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
    bufp->fullBit(oldp+515,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
    bufp->fullCData(oldp+516,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
    bufp->fullCData(oldp+517,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
    bufp->fullCData(oldp+518,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
    bufp->fullCData(oldp+519,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+520,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
    bufp->fullCData(oldp+521,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+522,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
    bufp->fullCData(oldp+523,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+524,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))),2);
    bufp->fullCData(oldp+525,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+526,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+527,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+528,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+529,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+530,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+531,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+532,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+533,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+534,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
    bufp->fullCData(oldp+535,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
    bufp->fullCData(oldp+536,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+537,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 1U))),3);
    bufp->fullCData(oldp+538,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                >> 0x1eU)))),3);
    bufp->fullQData(oldp+539,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))),33);
    bufp->fullCData(oldp+541,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+542,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+543,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x15U))),3);
    bufp->fullCData(oldp+544,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x13U))),2);
    bufp->fullCData(oldp+545,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 0xfU))),4);
    bufp->fullCData(oldp+546,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+547,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+548,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+549,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+550,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 8U))));
    bufp->fullCData(oldp+551,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+552,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+553,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+554,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+555,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+556,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])));
    bufp->fullCData(oldp+557,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 5U))),3);
    bufp->fullCData(oldp+558,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+559,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+560,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 0xfU))),4);
    bufp->fullBit(oldp+561,((1U & ((0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 0x13U)))
                                    ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 1U) : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 3U)))));
    bufp->fullBit(oldp+562,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+563,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 1U))));
    bufp->fullCData(oldp+564,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                >> 0x1eU)))),3);
    bufp->fullBit(oldp+565,((IData)((0U != (0x802U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
    bufp->fullBit(oldp+566,((IData)((0U != (0x3000402U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
    bufp->fullCData(oldp+567,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+568,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x15U))),3);
    bufp->fullQData(oldp+569,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))),33);
    bufp->fullBit(oldp+571,((0U != (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+572,((8ULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU))))));
    bufp->fullBit(oldp+573,((9ULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU))))));
    bufp->fullCData(oldp+574,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+575,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                   >> 2U))));
    bufp->fullBit(oldp+576,((IData)((6U == (6U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    bufp->fullBit(oldp+577,((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+578,((IData)((0U != (6U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    bufp->fullIData(oldp+579,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
    bufp->fullIData(oldp+580,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
    bufp->fullIData(oldp+581,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
    bufp->fullIData(oldp+582,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
    bufp->fullIData(oldp+583,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
    bufp->fullIData(oldp+584,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
    bufp->fullIData(oldp+585,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
    bufp->fullIData(oldp+586,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
    bufp->fullIData(oldp+587,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
    bufp->fullIData(oldp+588,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
    bufp->fullIData(oldp+589,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
    bufp->fullIData(oldp+590,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
    bufp->fullIData(oldp+591,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
    bufp->fullIData(oldp+592,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
    bufp->fullIData(oldp+593,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
    bufp->fullIData(oldp+594,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
    bufp->fullIData(oldp+595,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
    bufp->fullIData(oldp+596,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
    bufp->fullIData(oldp+597,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
    bufp->fullIData(oldp+598,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
    bufp->fullIData(oldp+599,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
    bufp->fullIData(oldp+600,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
    bufp->fullIData(oldp+601,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
    bufp->fullIData(oldp+602,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
    bufp->fullIData(oldp+603,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
    bufp->fullIData(oldp+604,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
    bufp->fullIData(oldp+605,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
    bufp->fullIData(oldp+606,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
    bufp->fullIData(oldp+607,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
    bufp->fullIData(oldp+608,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
    bufp->fullIData(oldp+609,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
    bufp->fullIData(oldp+610,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    bufp->fullBit(oldp+611,(vlSelf->pcore_tb__DOT__dut__DOT__store_busy));
    bufp->fullCData(oldp+612,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state),2);
    bufp->fullCData(oldp+613,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                ? 0U : ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                         ? 2U : 0U))),2);
    bufp->fullBit(oldp+614,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read));
    bufp->fullBit(oldp+615,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_modify));
    bufp->fullBit(oldp+616,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write));
    bufp->fullBit(oldp+617,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullCData(oldp+618,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+619,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
    bufp->fullBit(oldp+620,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
    bufp->fullIData(oldp+621,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
    bufp->fullIData(oldp+622,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
    bufp->fullBit(oldp+623,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullBit(oldp+624,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
    bufp->fullCData(oldp+625,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
    bufp->fullIData(oldp+626,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
    bufp->fullIData(oldp+627,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
    bufp->fullIData(oldp+628,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
    bufp->fullIData(oldp+629,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
    bufp->fullIData(oldp+630,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
    bufp->fullIData(oldp+631,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                               >> 4U)),28);
    bufp->fullBit(oldp+632,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+633,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+634,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+635,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
    bufp->fullBit(oldp+636,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                             >> 0x1fU)));
    bufp->fullCData(oldp+637,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0x17U))),8);
    bufp->fullBit(oldp+638,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x16U))));
    bufp->fullBit(oldp+639,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x15U))));
    bufp->fullBit(oldp+640,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x14U))));
    bufp->fullBit(oldp+641,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+642,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+643,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x11U))));
    bufp->fullCData(oldp+644,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+645,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+646,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+647,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 9U))),2);
    bufp->fullBit(oldp+648,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+649,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+650,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+651,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+652,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+653,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+654,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+655,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+656,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
    bufp->fullSData(oldp+657,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+658,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+659,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x11U))));
    bufp->fullBit(oldp+660,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+661,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+662,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+663,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+664,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+665,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+666,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+667,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+668,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+669,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+670,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+671,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+672,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+673,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
    bufp->fullIData(oldp+674,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                               >> 2U)),30);
    bufp->fullCData(oldp+675,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
    bufp->fullIData(oldp+676,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
    bufp->fullIData(oldp+677,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
    bufp->fullIData(oldp+678,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
    bufp->fullIData(oldp+679,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
    bufp->fullSData(oldp+680,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+681,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+682,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x11U))));
    bufp->fullBit(oldp+683,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+684,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+685,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+686,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+687,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+688,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+689,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+690,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+691,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+692,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+693,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+694,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+695,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+696,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
    bufp->fullCData(oldp+697,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+698,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
    bufp->fullBit(oldp+699,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req));
    bufp->fullBit(oldp+700,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req));
    bufp->fullBit(oldp+701,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
    bufp->fullBit(oldp+702,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
    bufp->fullBit(oldp+703,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
    bufp->fullBit(oldp+704,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff));
    bufp->fullBit(oldp+705,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff));
    bufp->fullBit(oldp+706,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff));
    bufp->fullBit(oldp+707,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
    bufp->fullBit(oldp+708,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
    bufp->fullCData(oldp+709,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff),3);
    bufp->fullIData(oldp+710,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff),32);
    bufp->fullIData(oldp+711,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff),32);
    bufp->fullBit(oldp+712,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
    bufp->fullBit(oldp+713,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
    bufp->fullBit(oldp+714,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
    bufp->fullBit(oldp+715,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
    bufp->fullBit(oldp+716,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_ff));
    bufp->fullBit(oldp+717,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next));
    bufp->fullIData(oldp+718,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                       >> 7U))),32);
    bufp->fullCData(oldp+719,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                             >> 5U)))),2);
    bufp->fullBit(oldp+720,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 4U)))));
    bufp->fullBit(oldp+721,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 3U)))));
    bufp->fullBit(oldp+722,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 2U)))));
    bufp->fullBit(oldp+723,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 1U)))));
    bufp->fullBit(oldp+724,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr))));
    bufp->fullCData(oldp+725,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 9U))),3);
    bufp->fullCData(oldp+726,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 7U))),2);
    bufp->fullCData(oldp+727,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+728,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+729,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 9U))),3);
    bufp->fullCData(oldp+730,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 7U))),2);
    bufp->fullCData(oldp+731,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))),4);
    bufp->fullBit(oldp+732,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+733,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+734,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
    bufp->fullCData(oldp+735,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))),4);
    bufp->fullBit(oldp+736,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 3U)))));
    bufp->fullBit(oldp+737,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 3U)))));
    bufp->fullBit(oldp+738,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 3U)))));
    bufp->fullBit(oldp+739,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
    bufp->fullCData(oldp+740,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
    bufp->fullBit(oldp+741,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
    bufp->fullCData(oldp+742,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 7U))),2);
    bufp->fullBit(oldp+743,((IData)((0U != (0xf80U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
    bufp->fullBit(oldp+744,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req));
    bufp->fullBit(oldp+745,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    bufp->fullCData(oldp+746,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+747,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+748,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+749,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))));
    bufp->fullBit(oldp+750,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+751,(((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 3U)))
                              ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                              : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 7U))))));
    bufp->fullBit(oldp+752,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+753,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+754,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+755,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+756,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+757,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
    bufp->fullIData(oldp+758,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0),32);
    bufp->fullBit(oldp+759,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
    bufp->fullBit(oldp+760,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
    bufp->fullBit(oldp+761,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+762,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
    bufp->fullBit(oldp+763,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+764,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+765,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+766,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+767,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+768,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
    bufp->fullBit(oldp+769,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
    bufp->fullIData(oldp+770,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
    bufp->fullIData(oldp+771,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
    bufp->fullIData(oldp+772,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
    bufp->fullIData(oldp+773,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
    bufp->fullIData(oldp+774,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
    bufp->fullIData(oldp+775,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                               >> 4U)),28);
    bufp->fullBit(oldp+776,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 3U))));
    bufp->fullBit(oldp+777,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 2U))));
    bufp->fullBit(oldp+778,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 1U))));
    bufp->fullBit(oldp+779,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
    bufp->fullBit(oldp+780,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                             >> 0x1fU)));
    bufp->fullCData(oldp+781,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0x17U))),8);
    bufp->fullBit(oldp+782,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x16U))));
    bufp->fullBit(oldp+783,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x15U))));
    bufp->fullBit(oldp+784,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x14U))));
    bufp->fullBit(oldp+785,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x13U))));
    bufp->fullBit(oldp+786,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x12U))));
    bufp->fullBit(oldp+787,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x11U))));
    bufp->fullCData(oldp+788,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+789,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+790,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+791,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 9U))),2);
    bufp->fullBit(oldp+792,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 8U))));
    bufp->fullBit(oldp+793,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 7U))));
    bufp->fullBit(oldp+794,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 6U))));
    bufp->fullBit(oldp+795,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 5U))));
    bufp->fullBit(oldp+796,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 4U))));
    bufp->fullBit(oldp+797,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 3U))));
    bufp->fullBit(oldp+798,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 2U))));
    bufp->fullBit(oldp+799,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 1U))));
    bufp->fullBit(oldp+800,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
    bufp->fullSData(oldp+801,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+802,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x12U))));
    bufp->fullBit(oldp+803,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x11U))));
    bufp->fullBit(oldp+804,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x10U))));
    bufp->fullCData(oldp+805,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+806,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0xbU))));
    bufp->fullBit(oldp+807,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0xaU))));
    bufp->fullBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 9U))));
    bufp->fullBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 8U))));
    bufp->fullBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 7U))));
    bufp->fullBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 6U))));
    bufp->fullBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 5U))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 4U))));
    bufp->fullBit(oldp+814,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 3U))));
    bufp->fullBit(oldp+815,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 2U))));
    bufp->fullBit(oldp+816,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 1U))));
    bufp->fullBit(oldp+817,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
    bufp->fullIData(oldp+818,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                               >> 2U)),30);
    bufp->fullCData(oldp+819,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
    bufp->fullIData(oldp+820,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
    bufp->fullIData(oldp+821,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
    bufp->fullSData(oldp+822,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+823,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x12U))));
    bufp->fullBit(oldp+824,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x11U))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x10U))));
    bufp->fullCData(oldp+826,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+827,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0xbU))));
    bufp->fullBit(oldp+828,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0xaU))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 9U))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 8U))));
    bufp->fullBit(oldp+831,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 7U))));
    bufp->fullBit(oldp+832,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 6U))));
    bufp->fullBit(oldp+833,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 5U))));
    bufp->fullBit(oldp+834,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 4U))));
    bufp->fullBit(oldp+835,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 3U))));
    bufp->fullBit(oldp+836,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 2U))));
    bufp->fullBit(oldp+837,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 1U))));
    bufp->fullBit(oldp+838,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
    bufp->fullCData(oldp+839,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
    bufp->fullCData(oldp+840,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),5);
    bufp->fullIData(oldp+841,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
    bufp->fullBit(oldp+842,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
    bufp->fullBit(oldp+843,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
    bufp->fullBit(oldp+844,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
    bufp->fullBit(oldp+845,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
    bufp->fullBit(oldp+846,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
    bufp->fullBit(oldp+847,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+848,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
    bufp->fullBit(oldp+849,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
    bufp->fullBit(oldp+850,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
    bufp->fullBit(oldp+851,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
    bufp->fullBit(oldp+852,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
    bufp->fullBit(oldp+853,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
    bufp->fullBit(oldp+854,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
    bufp->fullBit(oldp+855,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
    bufp->fullBit(oldp+856,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
    bufp->fullBit(oldp+857,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next));
    bufp->fullIData(oldp+858,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
    bufp->fullBit(oldp+859,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req));
    bufp->fullBit(oldp+860,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    bufp->fullIData(oldp+861,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+862,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+863,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+864,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+865,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+866,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+867,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+868,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullCData(oldp+869,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+870,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                             >> 5U))),32);
    bufp->fullSData(oldp+871,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                          << 7U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                          >> 0x19U)))),12);
    bufp->fullIData(oldp+872,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+873,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+874,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+875,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullCData(oldp+876,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+877,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+878,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+879,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+880,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+881,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
    bufp->fullCData(oldp+882,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+883,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x19U))),5);
    bufp->fullBit(oldp+884,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
    bufp->fullCData(oldp+885,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+886,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x19U))),5);
    bufp->fullCData(oldp+887,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0xcU))),5);
    bufp->fullBit(oldp+888,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+889,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+890,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard));
    bufp->fullBit(oldp+891,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard));
    bufp->fullBit(oldp+892,(vlSelf->clk));
    bufp->fullBit(oldp+893,(vlSelf->reset));
    bufp->fullBit(oldp+894,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
    bufp->fullBit(oldp+895,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
    bufp->fullBit(oldp+896,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
    bufp->fullBit(oldp+897,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
    bufp->fullBit(oldp+898,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel));
    bufp->fullBit(oldp+899,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel));
    bufp->fullBit(oldp+900,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel));
    bufp->fullBit(oldp+901,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel));
    bufp->fullIData(oldp+902,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+903,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus))));
    bufp->fullBit(oldp+904,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                   | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel)))))));
    bufp->fullSData(oldp+905,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
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
    bufp->fullIData(oldp+906,(((0x80U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                  >> 1U)) 
                                         << 7U)) | 
                               ((0x40U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                   >> 2U)) 
                                          << 6U)) | 
                                ((0x20U & ((IData)(
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                    >> 3U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                       >> 4U)) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                       >> 5U)) 
                                              << 3U)) 
                                       | ((4U & ((IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                          >> 6U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                        >> 7U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                                           >> 8U))))))))))),32);
    bufp->fullIData(oldp+907,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read)
                                ? ((0x3fffffeU >= (0x3ffffffU 
                                                   & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                       << 0x18U) 
                                                      | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                         >> 8U))))
                                    ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                   [(0x3ffffffU & (
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 8U)))]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+908,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))
                                ? (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)),32);
    bufp->fullIData(oldp+909,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+910,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+911,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+912,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullIData(oldp+913,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
    bufp->fullCData(oldp+914,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullIData(oldp+915,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->fullIData(oldp+916,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
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
    bufp->fullBit(oldp+917,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h8a01cdb0__0))))));
    bufp->fullIData(oldp+918,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x14U))]
                                : 0U)),32);
    bufp->fullIData(oldp+919,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x19U))]
                                : 0U)),32);
    bufp->fullCData(oldp+920,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullBit(oldp+921,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+922,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i));
    bufp->fullCData(oldp+923,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                      ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)
                                      : ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          << 2U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                          >> 0x1eU))))),3);
    bufp->fullIData(oldp+924,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+925,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullBit(oldp+926,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff)
                                    : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+927,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)
                                    : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+928,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
                                      >> 2U) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff) 
                                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next)))))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
                             | (IData)(vlSelf->__VdfgTmp_hb736675d__0))));
    bufp->fullIData(oldp+930,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                                ? 0x13U : vlSelf->__VdfgTmp_h72333958__0)),32);
    bufp->fullBit(oldp+931,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next))));
    bufp->fullIData(oldp+932,((((- (IData)(((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)) 
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
    bufp->fullBit(oldp+933,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
                             & ((IData)((0U != (0x802U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->fullBit(oldp+934,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                             & ((IData)((0U != (0x3000402U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->fullBit(oldp+935,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
    bufp->fullBit(oldp+936,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
    bufp->fullIData(oldp+937,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
    bufp->fullBit(oldp+938,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 3U)))
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    bufp->fullBit(oldp+939,(vlSelf->pcore_tb__DOT__uart_tx));
    bufp->fullBit(oldp+940,(vlSelf->pcore_tb__DOT__spi_clk));
    bufp->fullBit(oldp+941,(vlSelf->pcore_tb__DOT__spi_cs));
    bufp->fullBit(oldp+942,(vlSelf->pcore_tb__DOT__spi_mosi));
    bufp->fullSData(oldp+943,(vlSelf->pcore_tb__DOT__gp_switch_i),16);
    bufp->fullSData(oldp+944,(vlSelf->pcore_tb__DOT__gp_led_o),16);
    bufp->fullBit(oldp+945,(0U));
    bufp->fullWData(oldp+946,(vlSelf->pcore_tb__DOT__signature_file),1024);
    bufp->fullBit(oldp+978,(1U));
    bufp->fullBit(oldp+979,(vlSelf->pcore_tb__DOT__dut__DOT__bmem_sel));
    bufp->fullBit(oldp+980,(vlSelf->pcore_tb__DOT__dut__DOT__lsu_flush));
    bufp->fullBit(oldp+981,(vlSelf->pcore_tb__DOT__dut__DOT__irq_uart));
    bufp->fullBit(oldp+982,(vlSelf->pcore_tb__DOT__dut__DOT__irq_spi));
    bufp->fullIData(oldp+983,(0U),32);
    bufp->fullBit(oldp+984,(0U));
    bufp->fullIData(oldp+985,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__uart2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+986,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart2dbus))));
    bufp->fullIData(oldp+987,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__spi2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+988,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi2dbus))));
    bufp->fullCData(oldp+989,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_pin_en),8);
    bufp->fullIData(oldp+990,(8U),32);
    bufp->fullCData(oldp+991,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_pin_en),8);
    bufp->fullCData(oldp+992,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_pin_en),8);
    bufp->fullBit(oldp+993,(1U));
    bufp->fullIData(oldp+994,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__i),32);
    bufp->fullIData(oldp+995,(0U),25);
    bufp->fullCData(oldp+996,(0U),4);
    bufp->fullBit(oldp+997,(0U));
    bufp->fullCData(oldp+998,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+999,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                     >> 1U))),3);
    bufp->fullCData(oldp+1000,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                       << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[1U] 
                                                 >> 0x1eU)))),3);
    bufp->fullQData(oldp+1001,((0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U])) 
                                                     >> 0x1dU)))),33);
    bufp->fullCData(oldp+1003,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x1aU))),3);
    bufp->fullCData(oldp+1004,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x18U))),2);
    bufp->fullCData(oldp+1005,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x15U))),3);
    bufp->fullCData(oldp+1006,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x13U))),2);
    bufp->fullCData(oldp+1007,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                        >> 0xfU))),4);
    bufp->fullCData(oldp+1008,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+1009,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1010,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1011,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1012,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 8U))));
    bufp->fullCData(oldp+1013,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 5U))),3);
    bufp->fullBit(oldp+1014,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1015,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1016,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1017,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1018,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U])));
    bufp->fullIData(oldp+1019,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1020,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1021,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1022,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1023,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1024,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1025,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1026,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[0U])));
    bufp->fullIData(oldp+1027,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1028,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1029,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1030,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U])),5);
    bufp->fullCData(oldp+1031,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next) 
                                      >> 1U))),3);
    bufp->fullBit(oldp+1032,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next))));
    bufp->fullIData(oldp+1033,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr2wrb_data_next),32);
    bufp->fullIData(oldp+1034,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__div2wrb_next),32);
    bufp->fullCData(oldp+1035,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_code),4);
    bufp->fullCData(oldp+1036,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_code),4);
    bufp->fullBit(oldp+1037,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req));
    bufp->fullBit(oldp+1038,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req));
    bufp->fullBit(oldp+1039,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req));
    bufp->fullBit(oldp+1040,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_lsu_pf_exc_req));
    bufp->fullBit(oldp+1041,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_ileg_inst_exc_req));
    bufp->fullBit(oldp+1042,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_i_pf_exc_req));
    bufp->fullBit(oldp+1043,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_break_exc_req));
    bufp->fullIData(oldp+1044,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__div),32);
    bufp->fullIData(oldp+1045,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__rem),32);
    bufp->fullBit(oldp+1046,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__div_valid));
    bufp->fullIData(oldp+1047,(0x21U),32);
    bufp->fullIData(oldp+1048,(0x20U),32);
    bufp->fullCData(oldp+1049,(0U),2);
    bufp->fullCData(oldp+1050,(vlSelf->pcore_tb__DOT__dut__DOT__irq_uart),2);
    bufp->fullIData(oldp+1051,(0xffffffffU),32);
    bufp->fullIData(oldp+1052,(2U),32);
    bufp->fullIData(oldp+1053,(6U),32);
    bufp->fullIData(oldp+1054,(2U),32);
    bufp->fullIData(oldp+1055,(0U),32);
    bufp->fullIData(oldp+1056,(4U),32);
    bufp->fullIData(oldp+1057,(1U),32);
    bufp->fullIData(oldp+1058,(3U),32);
    bufp->fullIData(oldp+1059,(5U),32);
    bufp->fullIData(oldp+1060,(7U),32);
    bufp->fullIData(oldp+1061,(9U),32);
    bufp->fullIData(oldp+1062,(0xbU),32);
    bufp->fullIData(oldp+1063,(0x10U),32);
    bufp->fullIData(oldp+1064,(0x11U),32);
    bufp->fullIData(oldp+1065,(0x12U),32);
    bufp->fullIData(oldp+1066,(0x20U),32);
    bufp->fullIData(oldp+1067,(0x80U),32);
    bufp->fullIData(oldp+1068,(0x200U),32);
    bufp->fullIData(oldp+1069,(0x800U),32);
    bufp->fullIData(oldp+1070,(0x10000U),32);
    bufp->fullIData(oldp+1071,(0x20000U),32);
    bufp->fullIData(oldp+1072,(0x40000U),32);
    bufp->fullIData(oldp+1073,(0x70888U),32);
    bufp->fullIData(oldp+1074,(0x1888U),32);
    bufp->fullIData(oldp+1075,(2U),32);
    bufp->fullIData(oldp+1076,(0x1eU),32);
    bufp->fullIData(oldp+1077,(2U),32);
    bufp->fullIData(oldp+1078,(7U),32);
    bufp->fullIData(oldp+1079,(3U),32);
}
