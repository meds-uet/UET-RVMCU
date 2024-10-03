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
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"reset", false,-1);
    tracep->pushNamePrefix("pcore_tb ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"reset", false,-1);
    tracep->declBit(c+1,"irq_ext", false,-1);
    tracep->declBit(c+2,"irq_soft", false,-1);
    tracep->declBit(c+3,"uart_rx", false,-1);
    tracep->declBit(c+946,"uart_tx", false,-1);
    tracep->declBit(c+947,"spi_clk", false,-1);
    tracep->declBit(c+948,"spi_cs", false,-1);
    tracep->declBit(c+949,"spi_mosi", false,-1);
    tracep->declBit(c+4,"spi_miso", false,-1);
    tracep->declArray(c+5,"firmware", false,-1, 1023,0);
    tracep->declArray(c+37,"max_cycles", false,-1, 1023,0);
    tracep->declArray(c+382,"main_time", false,-1, 1023,0);
    tracep->declBus(c+414,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+950,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+951,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+415,"r_sg", false,-1, 7,0);
    tracep->declBus(c+416,"r_an", false,-1, 7,0);
    tracep->declBit(c+130,"sig_en", false,-1);
    tracep->declBit(c+131,"halt_en", false,-1);
    tracep->declArray(c+952,"signature_file", false,-1, 1023,0);
    tracep->declBus(c+69,"write_sig", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+1,"irq_ext_i", false,-1);
    tracep->declBit(c+2,"irq_soft_i", false,-1);
    tracep->declBus(c+414,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+950,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+951,"gp_led_o", false,-1, 15,0);
    tracep->declBus(c+415,"r_sg", false,-1, 7,0);
    tracep->declBus(c+416,"r_an", false,-1, 7,0);
    tracep->pushNamePrefix("if2mem\206 ");
    tracep->declBus(c+417,"addr", false,-1, 31,0);
    tracep->declBit(c+984,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+418,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+132,"r_data", false,-1, 31,0);
    tracep->declBit(c+133,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe\206 ");
    tracep->declBus(c+744,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+745,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+746,"timer_irq", false,-1);
    tracep->declBit(c+747,"soft_irq", false,-1);
    tracep->declBit(c+748,"uart_irq", false,-1);
    tracep->declBit(c+749,"spi_irq", false,-1);
    tracep->declBit(c+750,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+419,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+420,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+139,"dmem_sel", false,-1);
    tracep->declBit(c+140,"uart_sel", false,-1);
    tracep->declBit(c+141,"clint_sel", false,-1);
    tracep->declBit(c+142,"plic_sel", false,-1);
    tracep->declBit(c+985,"bmem_sel", false,-1);
    tracep->declBit(c+143,"spi_sel", false,-1);
    tracep->declBit(c+144,"gpioA_sel", false,-1);
    tracep->declBit(c+145,"gpioB_sel", false,-1);
    tracep->declBit(c+146,"gpioC_sel", false,-1);
    tracep->declBit(c+147,"gpsw_sel", false,-1);
    tracep->declBit(c+148,"gpled_sel", false,-1);
    tracep->declBit(c+986,"lsu_flush", false,-1);
    tracep->declBit(c+149,"store_busy", false,-1);
    tracep->declBit(c+987,"irq_uart", false,-1);
    tracep->declBit(c+988,"irq_spi", false,-1);
    tracep->declBit(c+421,"irq_gpio", false,-1);
    tracep->declBit(c+422,"irq_clint_timer", false,-1);
    tracep->declBit(c+423,"irq_plic_target_0", false,-1);
    tracep->declBit(c+424,"irq_plic_target_1", false,-1);
    tracep->pushNamePrefix("mem2dbus\206 ");
    tracep->declBus(c+114,"r_data", false,-1, 31,0);
    tracep->declBit(c+115,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus\206 ");
    tracep->declBus(c+989,"r_data", false,-1, 31,0);
    tracep->declBit(c+990,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus\206 ");
    tracep->declBus(c+425,"r_data", false,-1, 31,0);
    tracep->declBit(c+426,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus\206 ");
    tracep->declBus(c+427,"r_data", false,-1, 31,0);
    tracep->declBit(c+428,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus\206 ");
    tracep->declBus(c+991,"r_data", false,-1, 31,0);
    tracep->declBit(c+992,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus\206 ");
    tracep->declBus(c+150,"r_data", false,-1, 31,0);
    tracep->declBit(c+151,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+429,"w_sg", false,-1, 7,0);
    tracep->declBus(c+430,"w_an", false,-1, 7,0);
    tracep->pushNamePrefix("clint_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("dbus2clint_i\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_o\206 ");
    tracep->declBus(c+425,"r_data", false,-1, 31,0);
    tracep->declBit(c+426,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+141,"clint_sel_i", false,-1);
    tracep->pushNamePrefix("clint2csr_o\206 ");
    tracep->declBus(c+419,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+420,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+422,"clint_timer_irq_o", false,-1);
    tracep->declBus(c+152,"r_data", false,-1, 31,0);
    tracep->declBus(c+153,"w_data", false,-1, 31,0);
    tracep->declBus(c+154,"addr_offset", false,-1, 15,0);
    tracep->declBit(c+155,"r_req", false,-1);
    tracep->declBit(c+156,"w_req", false,-1);
    tracep->declQuad(c+431,"mtime_ff", false,-1, 63,0);
    tracep->declQuad(c+157,"mtime_next", false,-1, 63,0);
    tracep->declQuad(c+433,"mtimecmp_ff", false,-1, 63,0);
    tracep->declQuad(c+159,"mtimecmp_next", false,-1, 63,0);
    tracep->declBit(c+161,"mtime_lo_wr_flag", false,-1);
    tracep->declBit(c+162,"mtime_hi_wr_flag", false,-1);
    tracep->declBit(c+163,"mtimecmp_lo_wr_flag", false,-1);
    tracep->declBit(c+164,"mtimecmp_hi_wr_flag", false,-1);
    tracep->declBit(c+422,"timer_overflow_ff", false,-1);
    tracep->declBit(c+435,"timer_overflow_next", false,-1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+419,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+420,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_ff\206 ");
    tracep->declBus(c+425,"r_data", false,-1, 31,0);
    tracep->declBit(c+426,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus_interconnect_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("lsu2dbus_i\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_o\206 ");
    tracep->declBus(c+132,"r_data", false,-1, 31,0);
    tracep->declBit(c+133,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2dbus_i\206 ");
    tracep->declBus(c+114,"r_data", false,-1, 31,0);
    tracep->declBit(c+115,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_i\206 ");
    tracep->declBus(c+989,"r_data", false,-1, 31,0);
    tracep->declBit(c+990,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_i\206 ");
    tracep->declBus(c+425,"r_data", false,-1, 31,0);
    tracep->declBit(c+426,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_i\206 ");
    tracep->declBus(c+427,"r_data", false,-1, 31,0);
    tracep->declBit(c+428,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_i\206 ");
    tracep->declBus(c+991,"r_data", false,-1, 31,0);
    tracep->declBit(c+992,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_i\206 ");
    tracep->declBus(c+150,"r_data", false,-1, 31,0);
    tracep->declBit(c+151,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+139,"dmem_sel_o", false,-1);
    tracep->declBit(c+140,"uart_sel_o", false,-1);
    tracep->declBit(c+141,"clint_sel_o", false,-1);
    tracep->declBit(c+142,"plic_sel_o", false,-1);
    tracep->declBit(c+143,"spi_sel_o", false,-1);
    tracep->declBit(c+144,"gpioA_sel_o", false,-1);
    tracep->declBit(c+145,"gpioB_sel_o", false,-1);
    tracep->declBit(c+146,"gpioC_sel_o", false,-1);
    tracep->declBit(c+147,"gpsw_sel_o", false,-1);
    tracep->declBit(c+148,"gpled_sel_o", false,-1);
    tracep->pushNamePrefix("dbus2peri_o\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+91,"dbus_addr", false,-1, 31,0);
    tracep->declBit(c+92,"ld_req", false,-1);
    tracep->declBit(c+93,"st_req", false,-1);
    tracep->declBit(c+165,"dbus_req", false,-1);
    tracep->declBit(c+993,"dmem_addr_match", false,-1);
    tracep->declBit(c+94,"uart_addr_match", false,-1);
    tracep->declBit(c+95,"clint_addr_match", false,-1);
    tracep->declBit(c+96,"plic_addr_match", false,-1);
    tracep->declBit(c+97,"spi_addr_match", false,-1);
    tracep->declBit(c+98,"gpioA_addr_match", false,-1);
    tracep->declBit(c+99,"gpioB_addr_match", false,-1);
    tracep->declBit(c+100,"gpioC_addr_match", false,-1);
    tracep->declBit(c+101,"gpsw_addr_match", false,-1);
    tracep->declBit(c+102,"gpled_addr_match", false,-1);
    tracep->declBit(c+139,"dmem_sel", false,-1);
    tracep->declBit(c+140,"uart_sel", false,-1);
    tracep->declBit(c+141,"clint_sel", false,-1);
    tracep->declBit(c+142,"plic_sel", false,-1);
    tracep->declBit(c+143,"spi_sel", false,-1);
    tracep->declBit(c+144,"gpioA_sel", false,-1);
    tracep->declBit(c+145,"gpioB_sel", false,-1);
    tracep->declBit(c+146,"gpioC_sel", false,-1);
    tracep->declBit(c+147,"gpsw_sel", false,-1);
    tracep->declBit(c+148,"gpled_sel", false,-1);
    tracep->declBit(c+166,"gpio_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio_top_module ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+144,"gpioA_sel_i", false,-1);
    tracep->declBit(c+145,"gpioB_sel_i", false,-1);
    tracep->declBit(c+146,"gpioC_sel_i", false,-1);
    tracep->declBit(c+147,"gpsw_sel_i", false,-1);
    tracep->declBit(c+148,"gpled_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+150,"r_data", false,-1, 31,0);
    tracep->declBit(c+151,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+421,"gpio_irq_o", false,-1);
    tracep->declBus(c+414,"gpio_io", false,-1, 23,0);
    tracep->declBus(c+950,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+951,"gp_led_o", false,-1, 15,0);
    tracep->declBit(c+436,"gpioA_irq", false,-1);
    tracep->declBus(c+437,"gpioA_io", false,-1, 7,0);
    tracep->declBit(c+438,"gpioB_irq", false,-1);
    tracep->declBus(c+439,"gpioB_io", false,-1, 7,0);
    tracep->declBit(c+440,"gpioC_irq", false,-1);
    tracep->declBus(c+441,"gpioC_io", false,-1, 7,0);
    tracep->pushNamePrefix("dbusA2gpio\206 ");
    tracep->declBus(c+167,"addr", false,-1, 31,0);
    tracep->declBus(c+168,"w_data", false,-1, 31,0);
    tracep->declBus(c+169,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+170,"w_en", false,-1);
    tracep->declBit(c+171,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioA2dbus\206 ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusB2gpio\206 ");
    tracep->declBus(c+172,"addr", false,-1, 31,0);
    tracep->declBus(c+173,"w_data", false,-1, 31,0);
    tracep->declBus(c+174,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+175,"w_en", false,-1);
    tracep->declBit(c+176,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioB2dbus\206 ");
    tracep->declBus(c+444,"r_data", false,-1, 31,0);
    tracep->declBit(c+445,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusC2gpio\206 ");
    tracep->declBus(c+177,"addr", false,-1, 31,0);
    tracep->declBus(c+178,"w_data", false,-1, 31,0);
    tracep->declBus(c+179,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+180,"w_en", false,-1);
    tracep->declBit(c+181,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioC2dbus\206 ");
    tracep->declBus(c+446,"r_data", false,-1, 31,0);
    tracep->declBit(c+447,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbusSP2gpio\206 ");
    tracep->declBus(c+182,"addr", false,-1, 31,0);
    tracep->declBus(c+183,"w_data", false,-1, 31,0);
    tracep->declBus(c+184,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+185,"w_en", false,-1);
    tracep->declBit(c+186,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpioSP2dbus\206 ");
    tracep->declBus(c+448,"r_data", false,-1, 31,0);
    tracep->declBit(c+449,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gp_sw_led ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+147,"gpsw_sel_i", false,-1);
    tracep->declBit(c+148,"gpled_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+182,"addr", false,-1, 31,0);
    tracep->declBus(c+183,"w_data", false,-1, 31,0);
    tracep->declBus(c+184,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+185,"w_en", false,-1);
    tracep->declBit(c+186,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+448,"r_data", false,-1, 31,0);
    tracep->declBit(c+449,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+950,"gp_switch_i", false,-1, 15,0);
    tracep->declBus(c+951,"gp_led_o", false,-1, 15,0);
    tracep->declBit(c+187,"gpled_sel_data", false,-1);
    tracep->declBus(c+450,"reg_sw_data_ff", false,-1, 15,0);
    tracep->declBus(c+950,"reg_sw_data_next", false,-1, 15,0);
    tracep->declBus(c+451,"reg_led_data_ff", false,-1, 15,0);
    tracep->declBus(c+116,"reg_led_data_next", false,-1, 15,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+182,"addr", false,-1, 31,0);
    tracep->declBus(c+183,"w_data", false,-1, 31,0);
    tracep->declBus(c+184,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+185,"w_en", false,-1);
    tracep->declBit(c+186,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+448,"r_data", false,-1, 31,0);
    tracep->declBit(c+449,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+188,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+189,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+190,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+191,"reg_rd_req", false,-1);
    tracep->declBit(c+192,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio_A ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+144,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+167,"addr", false,-1, 31,0);
    tracep->declBus(c+168,"w_data", false,-1, 31,0);
    tracep->declBus(c+169,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+170,"w_en", false,-1);
    tracep->declBit(c+171,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+436,"gpio_irq_o", false,-1);
    tracep->declBus(c+437,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+994,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+193,"gpio_sel_data", false,-1);
    tracep->declBit(c+194,"gpio_sel_dir", false,-1);
    tracep->declBit(c+195,"gpio_sel_ie", false,-1);
    tracep->declBit(c+196,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+452,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+197,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+453,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+117,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+454,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+198,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+455,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+118,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+456,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+119,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+167,"addr", false,-1, 31,0);
    tracep->declBus(c+168,"w_data", false,-1, 31,0);
    tracep->declBus(c+169,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+170,"w_en", false,-1);
    tracep->declBit(c+171,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+199,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+200,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+201,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+202,"reg_rd_req", false,-1);
    tracep->declBit(c+203,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpio_B ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+145,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+172,"addr", false,-1, 31,0);
    tracep->declBus(c+173,"w_data", false,-1, 31,0);
    tracep->declBus(c+174,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+175,"w_en", false,-1);
    tracep->declBit(c+176,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+444,"r_data", false,-1, 31,0);
    tracep->declBit(c+445,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+438,"gpio_irq_o", false,-1);
    tracep->declBus(c+439,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+996,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+204,"gpio_sel_data", false,-1);
    tracep->declBit(c+205,"gpio_sel_dir", false,-1);
    tracep->declBit(c+206,"gpio_sel_ie", false,-1);
    tracep->declBit(c+207,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+457,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+208,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+458,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+120,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+459,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+209,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+460,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+121,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+461,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+122,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+172,"addr", false,-1, 31,0);
    tracep->declBus(c+173,"w_data", false,-1, 31,0);
    tracep->declBus(c+174,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+175,"w_en", false,-1);
    tracep->declBit(c+176,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+444,"r_data", false,-1, 31,0);
    tracep->declBit(c+445,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+210,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+211,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+212,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+213,"reg_rd_req", false,-1);
    tracep->declBit(c+214,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpio_C ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+146,"gpio_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2gpio_i\206 ");
    tracep->declBus(c+177,"addr", false,-1, 31,0);
    tracep->declBus(c+178,"w_data", false,-1, 31,0);
    tracep->declBus(c+179,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+180,"w_en", false,-1);
    tracep->declBit(c+181,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_o\206 ");
    tracep->declBus(c+446,"r_data", false,-1, 31,0);
    tracep->declBit(c+447,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+440,"gpio_irq_o", false,-1);
    tracep->declBus(c+441,"gpio_io", false,-1, 7,0);
    tracep->declBus(c+997,"gpio_pin_en", false,-1, 7,0);
    tracep->declBit(c+215,"gpio_sel_data", false,-1);
    tracep->declBit(c+216,"gpio_sel_dir", false,-1);
    tracep->declBit(c+217,"gpio_sel_ie", false,-1);
    tracep->declBit(c+218,"gpio_sel_int_lvl", false,-1);
    tracep->declBus(c+462,"reg_data_ff", false,-1, 7,0);
    tracep->declBus(c+219,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+463,"reg_dir_ff", false,-1, 7,0);
    tracep->declBus(c+123,"reg_dir_next", false,-1, 7,0);
    tracep->declBus(c+464,"reg_ip_ff", false,-1, 7,0);
    tracep->declBus(c+220,"reg_ip_next", false,-1, 7,0);
    tracep->declBus(c+465,"reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+124,"reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+466,"reg_int_lvl_ff", false,-1, 7,0);
    tracep->declBus(c+125,"reg_int_lvl_next", false,-1, 7,0);
    tracep->pushNamePrefix("dbus2gpio\206 ");
    tracep->declBus(c+177,"addr", false,-1, 31,0);
    tracep->declBus(c+178,"w_data", false,-1, 31,0);
    tracep->declBus(c+179,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+180,"w_en", false,-1);
    tracep->declBit(c+181,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpio2dbus_ff\206 ");
    tracep->declBus(c+446,"r_data", false,-1, 31,0);
    tracep->declBit(c+447,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+221,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+222,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+223,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+224,"reg_rd_req", false,-1);
    tracep->declBit(c+225,"reg_wr_req", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("m_7segcon1 ");
    tracep->declBit(c+918,"w_clk", false,-1);
    tracep->declBit(c+993,"w_rst_x", false,-1);
    tracep->declBit(c+998,"w_load", false,-1);
    tracep->declBus(c+226,"w_din", false,-1, 31,0);
    tracep->declBus(c+429,"r_sg", false,-1, 7,0);
    tracep->declBus(c+430,"r_an", false,-1, 7,0);
    tracep->declBus(c+467,"r_val", false,-1, 31,0);
    tracep->declBus(c+468,"r_cnt", false,-1, 31,0);
    tracep->declBus(c+469,"r_in", false,-1, 3,0);
    tracep->declBus(c+470,"r_digit", false,-1, 2,0);
    tracep->declBus(c+471,"r_init", false,-1, 7,0);
    tracep->declBus(c+472,"r_load", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+70+i*1,"r_load_mem", true,(i+0), 7,0);
    }
    tracep->declBus(c+999,"i", false,-1, 31,0);
    tracep->declBus(c+1000,"r_load_cnt", false,-1, 24,0);
    tracep->declBus(c+1001,"r_lcnt", false,-1, 3,0);
    tracep->declBus(c+473,"w_segments", false,-1, 7,0);
    tracep->pushNamePrefix("m_7segled ");
    tracep->declBus(c+469,"w_in", false,-1, 3,0);
    tracep->declBus(c+473,"r_led", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_top_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_i\206 ");
    tracep->declBus(c+417,"addr", false,-1, 31,0);
    tracep->declBit(c+984,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_o\206 ");
    tracep->declBus(c+418,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+139,"dmem_sel", false,-1);
    tracep->declBit(c+149,"store_busy", false,-1);
    tracep->pushNamePrefix("exe2mem_i\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2wrb_o\206 ");
    tracep->declBus(c+114,"r_data", false,-1, 31,0);
    tracep->declBit(c+115,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+642,"c_state", false,-1, 1,0);
    tracep->declBus(c+920,"n_state", false,-1, 1,0);
    tracep->declBit(c+227,"load_req", false,-1);
    tracep->declBit(c+228,"store_req", false,-1);
    tracep->declBit(c+229,"mem_read", false,-1);
    tracep->declBit(c+230,"mem_modify", false,-1);
    tracep->declBit(c+231,"mem_write", false,-1);
    tracep->declBus(c+126,"read_data", false,-1, 31,0);
    tracep->declBus(c+232,"write_data", false,-1, 31,0);
    tracep->declBus(c+127,"changed_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_top_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_o\206 ");
    tracep->declBus(c+417,"addr", false,-1, 31,0);
    tracep->declBit(c+984,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_i\206 ");
    tracep->declBus(c+418,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i\206 ");
    tracep->declBus(c+132,"r_data", false,-1, 31,0);
    tracep->declBit(c+133,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+149,"store_busy", false,-1);
    tracep->declBit(c+778,"lsu_flush_o", false,-1);
    tracep->pushNamePrefix("clint2csr_i\206 ");
    tracep->declBus(c+419,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+420,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe_i\206 ");
    tracep->declBus(c+744,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+745,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+746,"timer_irq", false,-1);
    tracep->declBit(c+747,"soft_irq", false,-1);
    tracep->declBit(c+748,"uart_irq", false,-1);
    tracep->declBit(c+749,"spi_irq", false,-1);
    tracep->declBit(c+750,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+370,"instr", false,-1, 31,0);
    tracep->declBus(c+371,"pc", false,-1, 31,0);
    tracep->declBus(c+372,"pc_next", false,-1, 31,0);
    tracep->declBus(c+373,"exc_code", false,-1, 3,0);
    tracep->declBit(c+374,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_next\206 ");
    tracep->declBus(c+375,"instr", false,-1, 31,0);
    tracep->declBus(c+376,"pc", false,-1, 31,0);
    tracep->declBus(c+377,"pc_next", false,-1, 31,0);
    tracep->declBus(c+378,"exc_code", false,-1, 3,0);
    tracep->declBit(c+379,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+283,"exc_req", false,-1);
    tracep->declBit(c+284,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_next\206 ");
    tracep->declBit(c+285,"exc_req", false,-1);
    tracep->declBit(c+286,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+567,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+568,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+569,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+570,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+572,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+573,"st_ops", false,-1, 1,0);
    tracep->declBus(c+574,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+575,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+576,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+577,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+578,"alu_opr1_sel", false,-1);
    tracep->declBit(c+579,"alu_opr2_sel", false,-1);
    tracep->declBit(c+580,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+581,"csr_opr_sel", false,-1);
    tracep->declBus(c+582,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+583,"exc_req", false,-1);
    tracep->declBit(c+584,"rd_wr_req", false,-1);
    tracep->declBit(c+585,"jump_req", false,-1);
    tracep->declBit(c+586,"branch_req", false,-1);
    tracep->declBit(c+587,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_next\206 ");
    tracep->declBus(c+1002,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+1003,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+1004,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+1005,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+1007,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1008,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1009,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1010,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1011,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1012,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1013,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1014,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1015,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1016,"csr_opr_sel", false,-1);
    tracep->declBus(c+1017,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1018,"exc_req", false,-1);
    tracep->declBit(c+1019,"rd_wr_req", false,-1);
    tracep->declBit(c+1020,"jump_req", false,-1);
    tracep->declBit(c+1021,"branch_req", false,-1);
    tracep->declBit(c+1022,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+887,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+888,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+889,"instr", false,-1, 31,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+891,"pc_next", false,-1, 31,0);
    tracep->declBus(c+892,"imm", false,-1, 31,0);
    tracep->declBus(c+893,"exc_code", false,-1, 3,0);
    tracep->declBit(c+894,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_next\206 ");
    tracep->declBus(c+1023,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1024,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1025,"instr", false,-1, 31,0);
    tracep->declBus(c+1026,"pc", false,-1, 31,0);
    tracep->declBus(c+1027,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1028,"imm", false,-1, 31,0);
    tracep->declBus(c+1029,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1030,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+895,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+588,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+589,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+590,"st_ops", false,-1, 1,0);
    tracep->declBus(c+591,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+592,"rd_wr_req", false,-1);
    tracep->declBit(c+593,"jump_req", false,-1);
    tracep->declBit(c+594,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_next\206 ");
    tracep->declBus(c+287,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+288,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+289,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+290,"st_ops", false,-1, 1,0);
    tracep->declBus(c+291,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+292,"rd_wr_req", false,-1);
    tracep->declBit(c+293,"jump_req", false,-1);
    tracep->declBit(c+294,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+896,"pc_next", false,-1, 31,0);
    tracep->declBus(c+295,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_next\206 ");
    tracep->declBus(c+296,"alu_result", false,-1, 31,0);
    tracep->declBus(c+297,"pc_next", false,-1, 31,0);
    tracep->declBus(c+298,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+299,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+300,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+595,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+897,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+898,"pc", false,-1, 31,0);
    tracep->declBus(c+899,"instr", false,-1, 31,0);
    tracep->declBus(c+104,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+900,"exc_code", false,-1, 3,0);
    tracep->declBit(c+901,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_next\206 ");
    tracep->declBus(c+301,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+302,"pc", false,-1, 31,0);
    tracep->declBus(c+303,"instr", false,-1, 31,0);
    tracep->declBus(c+304,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+305,"exc_code", false,-1, 3,0);
    tracep->declBit(c+306,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+902,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+903,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+904,"exc_req", false,-1);
    tracep->declBit(c+905,"irq_req", false,-1);
    tracep->declBit(c+906,"csr_rd_req", false,-1);
    tracep->declBit(c+907,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_next\206 ");
    tracep->declBus(c+307,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+308,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+309,"exc_req", false,-1);
    tracep->declBit(c+310,"irq_req", false,-1);
    tracep->declBit(c+311,"csr_rd_req", false,-1);
    tracep->declBit(c+312,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+474,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+475,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+752,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+233,"w_data", false,-1, 31,0);
    tracep->declBus(c+921,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+643,"amo_done", false,-1);
    tracep->declBit(c+779,"ld_req", false,-1);
    tracep->declBit(c+780,"st_req", false,-1);
    tracep->declBit(c+781,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+234,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+235,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+236,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+237,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+238,"is_amo", false,-1);
    tracep->declBit(c+239,"amo_flush", false,-1);
    tracep->declBit(c+240,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+132,"r_data", false,-1, 31,0);
    tracep->declBit(c+133,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mem\206 ");
    tracep->declBus(c+417,"addr", false,-1, 31,0);
    tracep->declBit(c+984,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+418,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+772,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+773,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+922,"alu_result", false,-1, 31,0);
    tracep->declBus(c+923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+924,"r_data", false,-1, 31,0);
    tracep->declBus(c+925,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+782,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+783,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_next\206 ");
    tracep->declBus(c+1031,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1032,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1033,"r_data", false,-1, 31,0);
    tracep->declBus(c+1034,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_next\206 ");
    tracep->declBus(c+1035,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1036,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_next\206 ");
    tracep->declBus(c+1037,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_next\206 ");
    tracep->declBus(c+1038,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+784,"pc_new", false,-1, 31,0);
    tracep->declBit(c+785,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+644,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+313,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb\206 ");
    tracep->declBus(c+241,"rd_data", false,-1, 31,0);
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+474,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+241,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+908,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+909,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+596,"use_rs1", false,-1);
    tracep->declBit(c+597,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd\206 ");
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+242,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+243,"rd_wr_req", false,-1);
    tracep->declBit(c+244,"lsu_req", false,-1);
    tracep->declBit(c+245,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+786,"new_pc_req", false,-1);
    tracep->declBit(c+787,"irq_flush_lsu", false,-1);
    tracep->declBit(c+788,"wfi_req", false,-1);
    tracep->declBit(c+476,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+645,"div_req", false,-1);
    tracep->declBit(c+646,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+314,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+315,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+316,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+317,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+318,"exe_new_pc_req", false,-1);
    tracep->declBit(c+319,"csr_new_pc_req", false,-1);
    tracep->declBit(c+320,"wfi_req", false,-1);
    tracep->declBit(c+321,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+477,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu\206 ");
    tracep->declBit(c+789,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop\206 ");
    tracep->declBit(c+322,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+323,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+324,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+325,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+326,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+327,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+328,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+329,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+330,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_pipe_ff\206 ");
    tracep->declBus(c+478,"instr", false,-1, 31,0);
    tracep->declBus(c+479,"pc", false,-1, 31,0);
    tracep->declBus(c+480,"pc_next", false,-1, 31,0);
    tracep->declBus(c+481,"exc_code", false,-1, 3,0);
    tracep->declBit(c+482,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_pipe_ff\206 ");
    tracep->declBit(c+483,"exc_req", false,-1);
    tracep->declBit(c+484,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_pipe_ff\206 ");
    tracep->declBus(c+485,"alu_result", false,-1, 31,0);
    tracep->declBus(c+486,"pc_next", false,-1, 31,0);
    tracep->declBus(c+487,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_pipe_ff\206 ");
    tracep->declBus(c+753,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+754,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+755,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+756,"st_ops", false,-1, 1,0);
    tracep->declBus(c+757,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+758,"rd_wr_req", false,-1);
    tracep->declBit(c+759,"jump_req", false,-1);
    tracep->declBit(c+760,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_pipe_ff\206 ");
    tracep->declBus(c+488,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+489,"pc", false,-1, 31,0);
    tracep->declBus(c+490,"instr", false,-1, 31,0);
    tracep->declBus(c+491,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+492,"exc_code", false,-1, 3,0);
    tracep->declBit(c+493,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_pipe_ff\206 ");
    tracep->declBus(c+494,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+495,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+496,"exc_req", false,-1);
    tracep->declBit(c+497,"irq_req", false,-1);
    tracep->declBit(c+498,"csr_rd_req", false,-1);
    tracep->declBit(c+499,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("lsu2amo_data_i\206 ");
    tracep->declBus(c+234,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+235,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+236,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_i\206 ");
    tracep->declBus(c+237,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+238,"is_amo", false,-1);
    tracep->declBit(c+239,"amo_flush", false,-1);
    tracep->declBit(c+240,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_o\206 ");
    tracep->declBus(c+233,"w_data", false,-1, 31,0);
    tracep->declBus(c+921,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_o\206 ");
    tracep->declBit(c+643,"amo_done", false,-1);
    tracep->declBit(c+779,"ld_req", false,-1);
    tracep->declBit(c+780,"st_req", false,-1);
    tracep->declBit(c+781,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+234,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+235,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+236,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+237,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+238,"is_amo", false,-1);
    tracep->declBit(c+239,"amo_flush", false,-1);
    tracep->declBit(c+240,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+233,"w_data", false,-1, 31,0);
    tracep->declBus(c+921,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+643,"amo_done", false,-1);
    tracep->declBit(c+779,"ld_req", false,-1);
    tracep->declBit(c+780,"st_req", false,-1);
    tracep->declBit(c+781,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+790,"ld_req", false,-1);
    tracep->declBit(c+791,"st_req", false,-1);
    tracep->declBit(c+792,"rd_wr_req", false,-1);
    tracep->declBus(c+233,"w_data", false,-1, 31,0);
    tracep->declBus(c+921,"amo_wrb_data", false,-1, 31,0);
    tracep->declBus(c+761,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+762,"is_amo", false,-1);
    tracep->declBit(c+763,"is_lr", false,-1);
    tracep->declBus(c+647,"amo_buffer_data_ff", false,-1, 31,0);
    tracep->declBus(c+648,"amo_buffer_addr_ff", false,-1, 31,0);
    tracep->declBus(c+246,"amo_operand_a", false,-1, 31,0);
    tracep->declBus(c+500,"amo_operand_a_ff", false,-1, 31,0);
    tracep->declBus(c+501,"amo_operand_b", false,-1, 31,0);
    tracep->declBus(c+247,"amo_result", false,-1, 31,0);
    tracep->declBit(c+649,"amo_done", false,-1);
    tracep->declBit(c+248,"a_slt_b", false,-1);
    tracep->declBit(c+249,"a_uslt_b", false,-1);
    tracep->declBit(c+764,"is_sc", false,-1);
    tracep->declBit(c+250,"sc_pass", false,-1);
    tracep->declBit(c+650,"amo_reserve_ff", false,-1);
    tracep->declBit(c+251,"amo_save", false,-1);
    tracep->declBus(c+651,"state", false,-1, 2,0);
    tracep->declBus(c+252,"state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("exe2csr_data_i\206 ");
    tracep->declBus(c+488,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+489,"pc", false,-1, 31,0);
    tracep->declBus(c+490,"instr", false,-1, 31,0);
    tracep->declBus(c+491,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+492,"exc_code", false,-1, 3,0);
    tracep->declBit(c+493,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_i\206 ");
    tracep->declBus(c+494,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+495,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+496,"exc_req", false,-1);
    tracep->declBit(c+497,"irq_req", false,-1);
    tracep->declBit(c+498,"csr_rd_req", false,-1);
    tracep->declBit(c+499,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_i\206 ");
    tracep->declBus(c+474,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+475,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_i\206 ");
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+752,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr_i\206 ");
    tracep->declBus(c+419,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+420,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipe2csr_i\206 ");
    tracep->declBus(c+744,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+745,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+746,"timer_irq", false,-1);
    tracep->declBit(c+747,"soft_irq", false,-1);
    tracep->declBit(c+748,"uart_irq", false,-1);
    tracep->declBit(c+749,"spi_irq", false,-1);
    tracep->declBit(c+750,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_o\206 ");
    tracep->declBus(c+782,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_i\206 ");
    tracep->declBit(c+477,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_o\206 ");
    tracep->declBit(c+786,"new_pc_req", false,-1);
    tracep->declBit(c+787,"irq_flush_lsu", false,-1);
    tracep->declBit(c+788,"wfi_req", false,-1);
    tracep->declBit(c+476,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_o\206 ");
    tracep->declBus(c+644,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_o\206 ");
    tracep->declBus(c+784,"pc_new", false,-1, 31,0);
    tracep->declBit(c+785,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+488,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+489,"pc", false,-1, 31,0);
    tracep->declBus(c+490,"instr", false,-1, 31,0);
    tracep->declBus(c+491,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+492,"exc_code", false,-1, 3,0);
    tracep->declBit(c+493,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+494,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+495,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+496,"exc_req", false,-1);
    tracep->declBit(c+497,"irq_req", false,-1);
    tracep->declBit(c+498,"csr_rd_req", false,-1);
    tracep->declBit(c+499,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+474,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+475,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+752,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+782,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+784,"pc_new", false,-1, 31,0);
    tracep->declBit(c+785,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+644,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+786,"new_pc_req", false,-1);
    tracep->declBit(c+787,"irq_flush_lsu", false,-1);
    tracep->declBit(c+788,"wfi_req", false,-1);
    tracep->declBit(c+476,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+477,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr\206 ");
    tracep->declBus(c+419,"timer_val_low", false,-1, 31,0);
    tracep->declBus(c+420,"timer_val_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+793,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+794,"csr_wdata", false,-1, 31,0);
    tracep->declBit(c+998,"csr_rd_exc_req", false,-1);
    tracep->declBit(c+998,"csr_wr_exc_req", false,-1);
    tracep->declBus(c+1039,"csr_rd_exc_code", false,-1, 3,0);
    tracep->declBus(c+1040,"csr_wr_exc_code", false,-1, 3,0);
    tracep->declBit(c+998,"csr_exc_req", false,-1);
    tracep->declBit(c+765,"exc_req", false,-1);
    tracep->declBus(c+766,"exc_code", false,-1, 3,0);
    tracep->declBit(c+795,"irq_req_sync", false,-1);
    tracep->declBus(c+652,"csr_pc_ff", false,-1, 31,0);
    tracep->declBus(c+796,"csr_pc_next", false,-1, 31,0);
    tracep->declBit(c+502,"pipe_stall_flush", false,-1);
    tracep->declBus(c+653,"csr_mcycle_ff", false,-1, 31,0);
    tracep->declBus(c+797,"csr_mcycle_next", false,-1, 31,0);
    tracep->declBus(c+654,"csr_mcycleh_ff", false,-1, 31,0);
    tracep->declBus(c+798,"csr_mcycleh_next", false,-1, 31,0);
    tracep->declBus(c+655,"csr_minstret_ff", false,-1, 31,0);
    tracep->declBus(c+799,"csr_minstret_next", false,-1, 31,0);
    tracep->declBus(c+656,"csr_minstreth_ff", false,-1, 31,0);
    tracep->declBus(c+800,"csr_minstreth_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mcountinhibit_ff\206 ");
    tracep->declBus(c+657,"warl1", false,-1, 27,0);
    tracep->declBit(c+658,"hpm3", false,-1);
    tracep->declBit(c+659,"ir", false,-1);
    tracep->declBit(c+660,"warl0", false,-1);
    tracep->declBit(c+661,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mcountinhibit_next\206 ");
    tracep->declBus(c+801,"warl1", false,-1, 27,0);
    tracep->declBit(c+802,"hpm3", false,-1);
    tracep->declBit(c+803,"ir", false,-1);
    tracep->declBit(c+804,"warl0", false,-1);
    tracep->declBit(c+805,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_ff\206 ");
    tracep->declBit(c+662,"sd", false,-1);
    tracep->declBus(c+663,"wpri3", false,-1, 7,0);
    tracep->declBit(c+664,"tsr", false,-1);
    tracep->declBit(c+665,"tw", false,-1);
    tracep->declBit(c+666,"tvm", false,-1);
    tracep->declBit(c+667,"mxr", false,-1);
    tracep->declBit(c+668,"sum", false,-1);
    tracep->declBit(c+669,"mprv", false,-1);
    tracep->declBus(c+670,"xs", false,-1, 1,0);
    tracep->declBus(c+671,"fs", false,-1, 1,0);
    tracep->declBus(c+672,"mpp", false,-1, 1,0);
    tracep->declBus(c+673,"vs", false,-1, 1,0);
    tracep->declBit(c+674,"spp", false,-1);
    tracep->declBit(c+675,"mpie", false,-1);
    tracep->declBit(c+676,"ube", false,-1);
    tracep->declBit(c+677,"spie", false,-1);
    tracep->declBit(c+678,"wpri2", false,-1);
    tracep->declBit(c+679,"mie", false,-1);
    tracep->declBit(c+680,"wpri1", false,-1);
    tracep->declBit(c+681,"sie", false,-1);
    tracep->declBit(c+682,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_next\206 ");
    tracep->declBit(c+806,"sd", false,-1);
    tracep->declBus(c+807,"wpri3", false,-1, 7,0);
    tracep->declBit(c+808,"tsr", false,-1);
    tracep->declBit(c+809,"tw", false,-1);
    tracep->declBit(c+810,"tvm", false,-1);
    tracep->declBit(c+811,"mxr", false,-1);
    tracep->declBit(c+812,"sum", false,-1);
    tracep->declBit(c+813,"mprv", false,-1);
    tracep->declBus(c+814,"xs", false,-1, 1,0);
    tracep->declBus(c+815,"fs", false,-1, 1,0);
    tracep->declBus(c+816,"mpp", false,-1, 1,0);
    tracep->declBus(c+817,"vs", false,-1, 1,0);
    tracep->declBit(c+818,"spp", false,-1);
    tracep->declBit(c+819,"mpie", false,-1);
    tracep->declBit(c+820,"ube", false,-1);
    tracep->declBit(c+821,"spie", false,-1);
    tracep->declBit(c+822,"wpri2", false,-1);
    tracep->declBit(c+823,"mie", false,-1);
    tracep->declBit(c+824,"wpri1", false,-1);
    tracep->declBit(c+825,"sie", false,-1);
    tracep->declBit(c+826,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_ff\206 ");
    tracep->declBus(c+683,"warl7", false,-1, 12,0);
    tracep->declBit(c+684,"gpio_ie", false,-1);
    tracep->declBit(c+685,"spi_ie", false,-1);
    tracep->declBit(c+686,"uart_ie", false,-1);
    tracep->declBus(c+687,"warl6", false,-1, 3,0);
    tracep->declBit(c+688,"meie", false,-1);
    tracep->declBit(c+689,"warl5", false,-1);
    tracep->declBit(c+690,"seie", false,-1);
    tracep->declBit(c+691,"warl4", false,-1);
    tracep->declBit(c+692,"mtie", false,-1);
    tracep->declBit(c+693,"warl3", false,-1);
    tracep->declBit(c+694,"stie", false,-1);
    tracep->declBit(c+695,"warl2", false,-1);
    tracep->declBit(c+696,"msie", false,-1);
    tracep->declBit(c+697,"warl1", false,-1);
    tracep->declBit(c+698,"ssie", false,-1);
    tracep->declBit(c+699,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_next\206 ");
    tracep->declBus(c+827,"warl7", false,-1, 12,0);
    tracep->declBit(c+828,"gpio_ie", false,-1);
    tracep->declBit(c+829,"spi_ie", false,-1);
    tracep->declBit(c+830,"uart_ie", false,-1);
    tracep->declBus(c+831,"warl6", false,-1, 3,0);
    tracep->declBit(c+832,"meie", false,-1);
    tracep->declBit(c+833,"warl5", false,-1);
    tracep->declBit(c+834,"seie", false,-1);
    tracep->declBit(c+835,"warl4", false,-1);
    tracep->declBit(c+836,"mtie", false,-1);
    tracep->declBit(c+837,"warl3", false,-1);
    tracep->declBit(c+838,"stie", false,-1);
    tracep->declBit(c+839,"warl2", false,-1);
    tracep->declBit(c+840,"msie", false,-1);
    tracep->declBit(c+841,"warl1", false,-1);
    tracep->declBit(c+842,"ssie", false,-1);
    tracep->declBit(c+843,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_ff\206 ");
    tracep->declBus(c+700,"base", false,-1, 29,0);
    tracep->declBus(c+701,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_next\206 ");
    tracep->declBus(c+844,"base", false,-1, 29,0);
    tracep->declBus(c+845,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+702,"csr_mscratch_ff", false,-1, 31,0);
    tracep->declBus(c+927,"csr_mscratch_next", false,-1, 31,0);
    tracep->declBus(c+703,"csr_mepc_ff", false,-1, 31,0);
    tracep->declBus(c+846,"csr_mepc_next", false,-1, 31,0);
    tracep->declBus(c+704,"csr_mcause_ff", false,-1, 31,0);
    tracep->declBus(c+847,"csr_mcause_next", false,-1, 31,0);
    tracep->declBus(c+705,"csr_mtval_ff", false,-1, 31,0);
    tracep->declBus(c+928,"csr_mtval_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mip_ff\206 ");
    tracep->declBus(c+706,"warl7", false,-1, 12,0);
    tracep->declBit(c+707,"gpio_ip", false,-1);
    tracep->declBit(c+708,"spi_ip", false,-1);
    tracep->declBit(c+709,"uart_ip", false,-1);
    tracep->declBus(c+710,"warl6", false,-1, 3,0);
    tracep->declBit(c+711,"meip", false,-1);
    tracep->declBit(c+712,"warl5", false,-1);
    tracep->declBit(c+713,"seip", false,-1);
    tracep->declBit(c+714,"warl4", false,-1);
    tracep->declBit(c+715,"mtip", false,-1);
    tracep->declBit(c+716,"warl3", false,-1);
    tracep->declBit(c+717,"stip", false,-1);
    tracep->declBit(c+718,"warl2", false,-1);
    tracep->declBit(c+719,"msip", false,-1);
    tracep->declBit(c+720,"warl1", false,-1);
    tracep->declBit(c+721,"ssip", false,-1);
    tracep->declBit(c+722,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mip_next\206 ");
    tracep->declBus(c+848,"warl7", false,-1, 12,0);
    tracep->declBit(c+849,"gpio_ip", false,-1);
    tracep->declBit(c+850,"spi_ip", false,-1);
    tracep->declBit(c+851,"uart_ip", false,-1);
    tracep->declBus(c+852,"warl6", false,-1, 3,0);
    tracep->declBit(c+853,"meip", false,-1);
    tracep->declBit(c+854,"warl5", false,-1);
    tracep->declBit(c+855,"seip", false,-1);
    tracep->declBit(c+856,"warl4", false,-1);
    tracep->declBit(c+857,"mtip", false,-1);
    tracep->declBit(c+858,"warl3", false,-1);
    tracep->declBit(c+859,"stip", false,-1);
    tracep->declBit(c+860,"warl2", false,-1);
    tracep->declBit(c+861,"msip", false,-1);
    tracep->declBit(c+862,"warl1", false,-1);
    tracep->declBit(c+863,"ssip", false,-1);
    tracep->declBit(c+864,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+503,"csr_mcycle_wr_flag", false,-1);
    tracep->declBit(c+504,"csr_mcycleh_wr_flag", false,-1);
    tracep->declBit(c+505,"csr_minstret_wr_flag", false,-1);
    tracep->declBit(c+506,"csr_minstreth_wr_flag", false,-1);
    tracep->declBit(c+507,"csr_mcountinhibit_wr_flag", false,-1);
    tracep->declBit(c+508,"csr_mstatus_wr_flag", false,-1);
    tracep->declBit(c+509,"csr_mie_wr_flag", false,-1);
    tracep->declBit(c+510,"csr_mtvec_wr_flag", false,-1);
    tracep->declBit(c+511,"csr_mscratch_wr_flag", false,-1);
    tracep->declBit(c+512,"csr_mepc_wr_flag", false,-1);
    tracep->declBit(c+513,"csr_mcause_wr_flag", false,-1);
    tracep->declBit(c+514,"csr_mtval_wr_flag", false,-1);
    tracep->declBit(c+515,"csr_mip_wr_flag", false,-1);
    tracep->declBus(c+723,"priv_mode_ff", false,-1, 1,0);
    tracep->declBus(c+865,"trap_priv_mode", false,-1, 1,0);
    tracep->pushNamePrefix("pipe2csr\206 ");
    tracep->declBus(c+744,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+745,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+746,"timer_irq", false,-1);
    tracep->declBit(c+747,"soft_irq", false,-1);
    tracep->declBit(c+748,"uart_irq", false,-1);
    tracep->declBit(c+749,"spi_irq", false,-1);
    tracep->declBit(c+750,"gpio_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+866,"irq_code", false,-1, 4,0);
    tracep->declBus(c+867,"m_mode_new_pc", false,-1, 31,0);
    tracep->declBit(c+929,"m_irq_req", false,-1);
    tracep->declBit(c+868,"irq_req", false,-1);
    tracep->declBit(c+869,"meip_irq_req", false,-1);
    tracep->declBit(c+870,"mtip_irq_req", false,-1);
    tracep->declBit(c+871,"msip_irq_req", false,-1);
    tracep->declBit(c+1041,"seip_irq_req", false,-1);
    tracep->declBit(c+1042,"stip_irq_req", false,-1);
    tracep->declBit(c+1043,"ssip_irq_req", false,-1);
    tracep->declBit(c+724,"uart_irq_req", false,-1);
    tracep->declBit(c+725,"spi_irq_req", false,-1);
    tracep->declBit(c+726,"gpio_irq_req", false,-1);
    tracep->declBit(c+727,"timer_irq_ff", false,-1);
    tracep->declBit(c+728,"ext_irq0_ff", false,-1);
    tracep->declBit(c+729,"ext_irq1_ff", false,-1);
    tracep->declBit(c+730,"uart_irq_ff", false,-1);
    tracep->declBit(c+731,"spi_irq_ff", false,-1);
    tracep->declBit(c+732,"gpio_irq_ff", false,-1);
    tracep->declBit(c+733,"m_mode_global_ie", false,-1);
    tracep->declBit(c+872,"m_mode_exc_req", false,-1);
    tracep->declBit(c+873,"m_mode_irq_req", false,-1);
    tracep->declBit(c+874,"m_mode_pc_req", false,-1);
    tracep->declBit(c+775,"m_mode_misalign_exc_req", false,-1);
    tracep->declBit(c+1044,"m_mode_lsu_pf_exc_req", false,-1);
    tracep->declBit(c+1045,"m_mode_ileg_inst_exc_req", false,-1);
    tracep->declBit(c+1046,"m_mode_i_pf_exc_req", false,-1);
    tracep->declBit(c+1047,"m_mode_break_exc_req", false,-1);
    tracep->declBit(c+875,"mret_pc_req", false,-1);
    tracep->declBit(c+767,"break_exc_req", false,-1);
    tracep->declBit(c+516,"mret_req", false,-1);
    tracep->declBit(c+517,"wfi_req", false,-1);
    tracep->declBit(c+734,"wfi_ff", false,-1);
    tracep->declBit(c+876,"wfi_next", false,-1);
    tracep->declBus(c+474,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+768,"st_ops", false,-1, 1,0);
    tracep->declBit(c+769,"is_ld_st_ops", false,-1);
    tracep->declBit(c+770,"ld_misalign_exc_req", false,-1);
    tracep->declBit(c+771,"st_misalign_exc_req", false,-1);
    tracep->declBit(c+877,"csr_mcycle_inc", false,-1);
    tracep->declBit(c+878,"csr_mcycleh_inc", false,-1);
    tracep->declBit(c+879,"csr_minstret_inc", false,-1);
    tracep->declBit(c+880,"csr_minstreth_inc", false,-1);
    tracep->declBit(c+881,"is_not_ebreak", false,-1);
    tracep->declBit(c+882,"is_not_ecall", false,-1);
    tracep->declBit(c+518,"i_pf_exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("if2id_data_i\206 ");
    tracep->declBus(c+478,"instr", false,-1, 31,0);
    tracep->declBus(c+479,"pc", false,-1, 31,0);
    tracep->declBus(c+480,"pc_next", false,-1, 31,0);
    tracep->declBus(c+481,"exc_code", false,-1, 3,0);
    tracep->declBit(c+482,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_i\206 ");
    tracep->declBit(c+483,"exc_req", false,-1);
    tracep->declBit(c+484,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_o\206 ");
    tracep->declBus(c+887,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+888,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+889,"instr", false,-1, 31,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+891,"pc_next", false,-1, 31,0);
    tracep->declBus(c+892,"imm", false,-1, 31,0);
    tracep->declBus(c+893,"exc_code", false,-1, 3,0);
    tracep->declBit(c+894,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_o\206 ");
    tracep->declBus(c+567,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+568,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+569,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+570,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+572,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+573,"st_ops", false,-1, 1,0);
    tracep->declBus(c+574,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+575,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+576,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+577,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+578,"alu_opr1_sel", false,-1);
    tracep->declBit(c+579,"alu_opr2_sel", false,-1);
    tracep->declBit(c+580,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+581,"csr_opr_sel", false,-1);
    tracep->declBus(c+582,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+583,"exc_req", false,-1);
    tracep->declBit(c+584,"rd_wr_req", false,-1);
    tracep->declBit(c+585,"jump_req", false,-1);
    tracep->declBit(c+586,"branch_req", false,-1);
    tracep->declBit(c+587,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_i\206 ");
    tracep->declBus(c+644,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_i\206 ");
    tracep->declBus(c+241,"rd_data", false,-1, 31,0);
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+519,"id2rf_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+520,"id2rf_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+521,"instr_codeword", false,-1, 31,0);
    tracep->declBus(c+930,"rf2id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+931,"rf2id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+910,"illegal_instr", false,-1);
    tracep->declBus(c+522,"funct3_opcode", false,-1, 2,0);
    tracep->declBus(c+523,"funct7_opcode", false,-1, 6,0);
    tracep->declBus(c+520,"funct5_opcode", false,-1, 4,0);
    tracep->declBus(c+520,"shift_amt", false,-1, 4,0);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+483,"exc_req", false,-1);
    tracep->declBit(c+484,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+478,"instr", false,-1, 31,0);
    tracep->declBus(c+479,"pc", false,-1, 31,0);
    tracep->declBus(c+480,"pc_next", false,-1, 31,0);
    tracep->declBus(c+481,"exc_code", false,-1, 3,0);
    tracep->declBit(c+482,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+567,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+568,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+569,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+570,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+572,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+573,"st_ops", false,-1, 1,0);
    tracep->declBus(c+574,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+575,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+576,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+577,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+578,"alu_opr1_sel", false,-1);
    tracep->declBit(c+579,"alu_opr2_sel", false,-1);
    tracep->declBit(c+580,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+581,"csr_opr_sel", false,-1);
    tracep->declBus(c+582,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+583,"exc_req", false,-1);
    tracep->declBit(c+584,"rd_wr_req", false,-1);
    tracep->declBit(c+585,"jump_req", false,-1);
    tracep->declBit(c+586,"branch_req", false,-1);
    tracep->declBit(c+587,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+887,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+888,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+889,"instr", false,-1, 31,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+891,"pc_next", false,-1, 31,0);
    tracep->declBus(c+892,"imm", false,-1, 31,0);
    tracep->declBus(c+893,"exc_code", false,-1, 3,0);
    tracep->declBit(c+894,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb\206 ");
    tracep->declBus(c+644,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+524,"instr_opcode", false,-1, 4,0);
    tracep->pushNamePrefix("rf_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBus(c+519,"id2rf_rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+520,"id2rf_rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+930,"rf2id_rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+931,"rf2id_rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+776,"id2rf_rd_wr_req_i", false,-1);
    tracep->declBus(c+932,"id2rf_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+241,"id2rf_rd_data_i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+610+i*1,"register_file", true,(i+0), 31,0);
    }
    tracep->declBit(c+525,"rs1_addr_valid", false,-1);
    tracep->declBit(c+526,"rs2_addr_valid", false,-1);
    tracep->declBit(c+933,"rf_wr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("divide_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("exe2div_i\206 ");
    tracep->declBus(c+299,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+300,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+595,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+253,"fwd2div_stall_i", false,-1);
    tracep->declBit(c+331,"fwd2div_flush_i", false,-1);
    tracep->pushNamePrefix("div2fwd_o\206 ");
    tracep->declBit(c+645,"div_req", false,-1);
    tracep->declBit(c+646,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_o\206 ");
    tracep->declBus(c+783,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+299,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+300,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+595,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+645,"div_req", false,-1);
    tracep->declBit(c+646,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+783,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+595,"alu_d_ops", false,-1, 2,0);
    tracep->declBus(c+934,"alu_d_ops_next", false,-1, 2,0);
    tracep->declBus(c+735,"alu_d_ops_ff", false,-1, 2,0);
    tracep->declBus(c+299,"alu_opr_1", false,-1, 31,0);
    tracep->declBus(c+935,"alu_d_opr_1", false,-1, 31,0);
    tracep->declBus(c+332,"alu_d_opr1_next", false,-1, 31,0);
    tracep->declBus(c+736,"alu_d_opr1_ff", false,-1, 31,0);
    tracep->declBus(c+300,"alu_opr_2", false,-1, 31,0);
    tracep->declBus(c+936,"alu_d_opr_2", false,-1, 31,0);
    tracep->declBus(c+333,"alu_d_opr2_next", false,-1, 31,0);
    tracep->declBus(c+737,"alu_d_opr2_ff", false,-1, 31,0);
    tracep->declBit(c+937,"alu_d_opr1_sign_next", false,-1);
    tracep->declBit(c+738,"alu_d_opr1_sign_ff", false,-1);
    tracep->declBit(c+938,"alu_d_opr2_sign_next", false,-1);
    tracep->declBit(c+739,"alu_d_opr2_sign_ff", false,-1);
    tracep->declBit(c+740,"alu_d_req", false,-1);
    tracep->declBit(c+883,"alu_d_ack_next", false,-1);
    tracep->declBit(c+741,"alu_d_ack_ff", false,-1);
    tracep->declBus(c+884,"alu_d_result_next", false,-1, 31,0);
    tracep->declBus(c+1048,"div", false,-1, 31,0);
    tracep->declBus(c+527,"div_u", false,-1, 31,0);
    tracep->declBus(c+1049,"rem", false,-1, 31,0);
    tracep->declBus(c+528,"rem_u", false,-1, 31,0);
    tracep->declBit(c+529,"div_done", false,-1);
    tracep->declBit(c+1050,"div_valid", false,-1);
    tracep->pushNamePrefix("divider_module ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst", false,-1);
    tracep->declBit(c+939,"start_i", false,-1);
    tracep->declBus(c+736,"opr1_i", false,-1, 31,0);
    tracep->declBus(c+737,"opr2_i", false,-1, 31,0);
    tracep->declBit(c+529,"done_o", false,-1);
    tracep->declBus(c+527,"quo_o", false,-1, 31,0);
    tracep->declBus(c+528,"rem_o", false,-1, 31,0);
    tracep->declBit(c+530,"busy_ff", false,-1);
    tracep->declBit(c+529,"done_ff", false,-1);
    tracep->declBus(c+531,"opr2_ff", false,-1, 31,0);
    tracep->declBus(c+527,"quo_ff", false,-1, 31,0);
    tracep->declBus(c+532,"quo_next", false,-1, 31,0);
    tracep->declQuad(c+533,"acc_ff", false,-1, 32,0);
    tracep->declQuad(c+535,"acc_next", false,-1, 32,0);
    tracep->declQuad(c+537,"rem_ff", false,-1, 32,0);
    tracep->declBus(c+539,"counter", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("id2exe_data_i\206 ");
    tracep->declBus(c+887,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+888,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+889,"instr", false,-1, 31,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+891,"pc_next", false,-1, 31,0);
    tracep->declBus(c+892,"imm", false,-1, 31,0);
    tracep->declBus(c+893,"exc_code", false,-1, 3,0);
    tracep->declBit(c+894,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_i\206 ");
    tracep->declBus(c+567,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+568,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+569,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+570,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+572,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+573,"st_ops", false,-1, 1,0);
    tracep->declBus(c+574,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+575,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+576,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+577,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+578,"alu_opr1_sel", false,-1);
    tracep->declBit(c+579,"alu_opr2_sel", false,-1);
    tracep->declBit(c+580,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+581,"csr_opr_sel", false,-1);
    tracep->declBus(c+582,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+583,"exc_req", false,-1);
    tracep->declBit(c+584,"rd_wr_req", false,-1);
    tracep->declBit(c+585,"jump_req", false,-1);
    tracep->declBit(c+586,"branch_req", false,-1);
    tracep->declBit(c+587,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div_o\206 ");
    tracep->declBus(c+299,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+300,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+595,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_o\206 ");
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+896,"pc_next", false,-1, 31,0);
    tracep->declBus(c+295,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_o\206 ");
    tracep->declBus(c+895,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+588,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+589,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+590,"st_ops", false,-1, 1,0);
    tracep->declBus(c+591,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+592,"rd_wr_req", false,-1);
    tracep->declBit(c+593,"jump_req", false,-1);
    tracep->declBit(c+594,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_o\206 ");
    tracep->declBus(c+897,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+898,"pc", false,-1, 31,0);
    tracep->declBus(c+899,"instr", false,-1, 31,0);
    tracep->declBus(c+104,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+900,"exc_code", false,-1, 3,0);
    tracep->declBit(c+901,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_o\206 ");
    tracep->declBus(c+902,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+903,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+904,"exc_req", false,-1);
    tracep->declBit(c+905,"irq_req", false,-1);
    tracep->declBit(c+906,"csr_rd_req", false,-1);
    tracep->declBit(c+907,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_i\206 ");
    tracep->declBit(c+314,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+315,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+316,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+317,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_o\206 ");
    tracep->declBus(c+908,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+909,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+596,"use_rs1", false,-1);
    tracep->declBit(c+597,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_o\206 ");
    tracep->declBus(c+313,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+474,"lsu2exe_fb_alu_result_i", false,-1, 31,0);
    tracep->declBus(c+241,"wrb2exe_fb_rd_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("id2exe_ctrl\206 ");
    tracep->declBus(c+567,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+568,"alu_m_ops", false,-1, 2,0);
    tracep->declBus(c+569,"alu_d_ops", false,-1, 2,0);
    tracep->declQuad(c+570,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+572,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+573,"st_ops", false,-1, 1,0);
    tracep->declBus(c+574,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+575,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+576,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+577,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+578,"alu_opr1_sel", false,-1);
    tracep->declBit(c+579,"alu_opr2_sel", false,-1);
    tracep->declBit(c+580,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+581,"csr_opr_sel", false,-1);
    tracep->declBus(c+582,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+583,"exc_req", false,-1);
    tracep->declBit(c+584,"rd_wr_req", false,-1);
    tracep->declBit(c+585,"jump_req", false,-1);
    tracep->declBit(c+586,"branch_req", false,-1);
    tracep->declBit(c+587,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data\206 ");
    tracep->declBus(c+887,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+888,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+889,"instr", false,-1, 31,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+891,"pc_next", false,-1, 31,0);
    tracep->declBus(c+892,"imm", false,-1, 31,0);
    tracep->declBus(c+893,"exc_code", false,-1, 3,0);
    tracep->declBit(c+894,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+895,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+588,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+589,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+590,"st_ops", false,-1, 1,0);
    tracep->declBus(c+591,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+592,"rd_wr_req", false,-1);
    tracep->declBit(c+593,"jump_req", false,-1);
    tracep->declBit(c+594,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+103,"alu_result", false,-1, 31,0);
    tracep->declBus(c+896,"pc_next", false,-1, 31,0);
    tracep->declBus(c+295,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl\206 ");
    tracep->declBus(c+902,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+903,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+904,"exc_req", false,-1);
    tracep->declBit(c+905,"irq_req", false,-1);
    tracep->declBit(c+906,"csr_rd_req", false,-1);
    tracep->declBit(c+907,"csr_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data\206 ");
    tracep->declBus(c+897,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+898,"pc", false,-1, 31,0);
    tracep->declBus(c+899,"instr", false,-1, 31,0);
    tracep->declBus(c+104,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+900,"exc_code", false,-1, 3,0);
    tracep->declBit(c+901,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2div\206 ");
    tracep->declBus(c+299,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+300,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+595,"alu_d_ops", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+313,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+598,"alu_i_operator", false,-1, 3,0);
    tracep->declBus(c+599,"branch_ops", false,-1, 2,0);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+908,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+909,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+596,"use_rs1", false,-1);
    tracep->declBit(c+597,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+314,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+315,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+316,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+317,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+474,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+241,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->declBus(c+334,"operand_rs1_data", false,-1, 31,0);
    tracep->declBus(c+295,"operand_rs2_data", false,-1, 31,0);
    tracep->declBus(c+335,"alu_adder_output", false,-1, 31,0);
    tracep->declBus(c+299,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+300,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+336,"alu_result", false,-1, 31,0);
    tracep->declBus(c+334,"cmp_operand_1", false,-1, 31,0);
    tracep->declBus(c+337,"cmp_operand_2", false,-1, 31,0);
    tracep->declQuad(c+338,"cmp_output", false,-1, 32,0);
    tracep->declBit(c+340,"cmp_not_zero", false,-1);
    tracep->declBit(c+341,"cmp_neg", false,-1);
    tracep->declBit(c+342,"cmp_overflow", false,-1);
    tracep->declBit(c+106,"branch_res", false,-1);
    tracep->declBus(c+343,"shift_amt", false,-1, 4,0);
    tracep->declBus(c+911,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+912,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+913,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+600,"alu_b_ops", false,-1, 32,0);
    tracep->declBus(c+344,"alu_b_result", false,-1, 31,0);
    tracep->declBit(c+602,"bitmanip_cmd", false,-1);
    tracep->declBit(c+603,"is_ctz", false,-1);
    tracep->declBus(c+345,"max_result", false,-1, 31,0);
    tracep->declBus(c+346,"maxu_result", false,-1, 31,0);
    tracep->declBus(c+347,"min_result", false,-1, 31,0);
    tracep->declBus(c+348,"minu_result", false,-1, 31,0);
    tracep->declBit(c+604,"is_cpop", false,-1);
    tracep->declBus(c+349,"cnt_data", false,-1, 31,0);
    tracep->declQuad(c+350,"cnt_en", false,-1, 32,0);
    tracep->declBus(c+352,"cnt_result", false,-1, 5,0);
    tracep->declBus(c+353,"alu_operand_1_rev", false,-1, 31,0);
    tracep->declBus(c+354,"alu_operand_2_rev", false,-1, 31,0);
    tracep->declBus(c+355,"zbs_index", false,-1, 31,0);
    tracep->declBus(c+356,"clmul_operand_1", false,-1, 31,0);
    tracep->declBus(c+357,"clmul_operand_2", false,-1, 31,0);
    tracep->declBus(c+358,"clmul_result", false,-1, 31,0);
    tracep->declBus(c+359,"clmulr_result", false,-1, 31,0);
    tracep->declBus(c+605,"alu_m_ops", false,-1, 2,0);
    tracep->declBit(c+606,"is_opr1_signed", false,-1);
    tracep->declBit(c+607,"is_opr2_signed", false,-1);
    tracep->declBit(c+107,"opr1_sgn", false,-1);
    tracep->declBit(c+108,"opr2_sgn", false,-1);
    tracep->declBit(c+608,"mul_cmd", false,-1);
    tracep->declBit(c+609,"mul_cmd_hi", false,-1);
    tracep->declQuad(c+109,"mul_opr1", false,-1, 32,0);
    tracep->declQuad(c+111,"mul_opr2", false,-1, 32,0);
    tracep->declQuad(c+360,"mul_output", false,-1, 63,0);
    tracep->declBus(c+113,"alu_m_result", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1051,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1052,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("if2mem_o\206 ");
    tracep->declBus(c+417,"addr", false,-1, 31,0);
    tracep->declBit(c+984,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if_i\206 ");
    tracep->declBus(c+418,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_o\206 ");
    tracep->declBus(c+370,"instr", false,-1, 31,0);
    tracep->declBus(c+371,"pc", false,-1, 31,0);
    tracep->declBus(c+372,"pc_next", false,-1, 31,0);
    tracep->declBus(c+373,"exc_code", false,-1, 3,0);
    tracep->declBit(c+374,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_o\206 ");
    tracep->declBit(c+283,"exc_req", false,-1);
    tracep->declBit(c+284,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_i\206 ");
    tracep->declBus(c+313,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_i\206 ");
    tracep->declBus(c+784,"pc_new", false,-1, 31,0);
    tracep->declBit(c+785,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_i\206 ");
    tracep->declBit(c+318,"exe_new_pc_req", false,-1);
    tracep->declBit(c+319,"csr_new_pc_req", false,-1);
    tracep->declBit(c+320,"wfi_req", false,-1);
    tracep->declBit(c+321,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2if\206 ");
    tracep->declBus(c+418,"r_data", false,-1, 31,0);
    tracep->declBit(c+984,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data\206 ");
    tracep->declBus(c+370,"instr", false,-1, 31,0);
    tracep->declBus(c+371,"pc", false,-1, 31,0);
    tracep->declBus(c+372,"pc_next", false,-1, 31,0);
    tracep->declBus(c+373,"exc_code", false,-1, 3,0);
    tracep->declBit(c+374,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl\206 ");
    tracep->declBit(c+283,"exc_req", false,-1);
    tracep->declBit(c+284,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb\206 ");
    tracep->declBus(c+313,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb\206 ");
    tracep->declBus(c+784,"pc_new", false,-1, 31,0);
    tracep->declBit(c+785,"irq_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+318,"exe_new_pc_req", false,-1);
    tracep->declBit(c+319,"csr_new_pc_req", false,-1);
    tracep->declBit(c+320,"wfi_req", false,-1);
    tracep->declBit(c+321,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+362,"exc_code_next", false,-1, 3,0);
    tracep->declBus(c+540,"exc_code_ff", false,-1, 3,0);
    tracep->declBit(c+363,"exc_req_next", false,-1);
    tracep->declBit(c+541,"exc_req_ff", false,-1);
    tracep->declBit(c+364,"irq_req_next", false,-1);
    tracep->declBit(c+542,"irq_req_ff", false,-1);
    tracep->declBit(c+940,"kill_req", false,-1);
    tracep->declBus(c+417,"pc_ff", false,-1, 31,0);
    tracep->declBus(c+543,"pc_plus_4", false,-1, 31,0);
    tracep->declBus(c+380,"pc_next", false,-1, 31,0);
    tracep->declBus(c+941,"instr_word", false,-1, 31,0);
    tracep->declBit(c+365,"if_stall", false,-1);
    tracep->declBit(c+544,"pc_misaligned", false,-1);
    tracep->declBus(c+942,"jal_imm", false,-1, 31,0);
    tracep->declBit(c+381,"is_jal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forward_stall_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("wrb2fwd_i\206 ");
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd_i\206 ");
    tracep->declBus(c+242,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+243,"rd_wr_req", false,-1);
    tracep->declBit(c+244,"lsu_req", false,-1);
    tracep->declBit(c+245,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+149,"store_busy", false,-1);
    tracep->pushNamePrefix("div2fwd_i\206 ");
    tracep->declBit(c+645,"div_req", false,-1);
    tracep->declBit(c+646,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_i\206 ");
    tracep->declBus(c+908,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+909,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+596,"use_rs1", false,-1);
    tracep->declBit(c+597,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_i\206 ");
    tracep->declBit(c+786,"new_pc_req", false,-1);
    tracep->declBit(c+787,"irq_flush_lsu", false,-1);
    tracep->declBit(c+788,"wfi_req", false,-1);
    tracep->declBit(c+476,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_o\206 ");
    tracep->declBit(c+318,"exe_new_pc_req", false,-1);
    tracep->declBit(c+319,"csr_new_pc_req", false,-1);
    tracep->declBit(c+320,"wfi_req", false,-1);
    tracep->declBit(c+321,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_o\206 ");
    tracep->declBit(c+314,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+315,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+316,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+317,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_o\206 ");
    tracep->declBit(c+477,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_o\206 ");
    tracep->declBit(c+789,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop_o\206 ");
    tracep->declBit(c+322,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+323,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+324,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+325,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+326,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+327,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+328,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+329,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+330,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+242,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+243,"rd_wr_req", false,-1);
    tracep->declBit(c+244,"lsu_req", false,-1);
    tracep->declBit(c+245,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd\206 ");
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd\206 ");
    tracep->declBus(c+908,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+909,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+105,"new_pc_req", false,-1);
    tracep->declBit(c+596,"use_rs1", false,-1);
    tracep->declBit(c+597,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd\206 ");
    tracep->declBit(c+786,"new_pc_req", false,-1);
    tracep->declBit(c+787,"irq_flush_lsu", false,-1);
    tracep->declBit(c+788,"wfi_req", false,-1);
    tracep->declBit(c+476,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2fwd\206 ");
    tracep->declBit(c+645,"div_req", false,-1);
    tracep->declBit(c+646,"div_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+914,"rs1_valid", false,-1);
    tracep->declBit(c+915,"rs2_valid", false,-1);
    tracep->declBit(c+916,"lsu2rs1_hazard", false,-1);
    tracep->declBit(c+917,"lsu2rs2_hazard", false,-1);
    tracep->declBit(c+943,"ld_use_rs1_hazard", false,-1);
    tracep->declBit(c+944,"ld_use_rs2_hazard", false,-1);
    tracep->declBit(c+366,"ld_use_hazard", false,-1);
    tracep->declBit(c+885,"lsu_div_csr_req", false,-1);
    tracep->declBit(c+367,"if_id_exe_stall", false,-1);
    tracep->declBit(c+253,"lsu_div_stall", false,-1);
    tracep->declBit(c+778,"lsu_flush", false,-1);
    tracep->declBit(c+545,"lsu_stall_ff", false,-1);
    tracep->declBit(c+254,"lsu_stall_next", false,-1);
    tracep->declBit(c+742,"div_stall_ff", false,-1);
    tracep->declBit(c+743,"div_stall_next", false,-1);
    tracep->declBit(c+546,"lsu_div_stall_ff", false,-1);
    tracep->declBit(c+368,"id_exe_flush", false,-1);
    tracep->declBit(c+369,"exe_new_pc_req", false,-1);
    tracep->pushNamePrefix("fwd2if\206 ");
    tracep->declBit(c+318,"exe_new_pc_req", false,-1);
    tracep->declBit(c+319,"csr_new_pc_req", false,-1);
    tracep->declBit(c+320,"wfi_req", false,-1);
    tracep->declBit(c+321,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe\206 ");
    tracep->declBit(c+314,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+315,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+316,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+317,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr\206 ");
    tracep->declBit(c+477,"pipe_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu\206 ");
    tracep->declBit(c+789,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop\206 ");
    tracep->declBit(c+322,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+323,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+324,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+325,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+326,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+327,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+328,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+329,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+330,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("exe2lsu_data_i\206 ");
    tracep->declBus(c+485,"alu_result", false,-1, 31,0);
    tracep->declBus(c+486,"pc_next", false,-1, 31,0);
    tracep->declBus(c+487,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_i\206 ");
    tracep->declBus(c+753,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+754,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+755,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+756,"st_ops", false,-1, 1,0);
    tracep->declBus(c+757,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+758,"rd_wr_req", false,-1);
    tracep->declBit(c+759,"jump_req", false,-1);
    tracep->declBit(c+760,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_o\206 ");
    tracep->declBus(c+474,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+475,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_o\206 ");
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+752,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_i\206 ");
    tracep->declBus(c+233,"w_data", false,-1, 31,0);
    tracep->declBus(c+921,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_i\206 ");
    tracep->declBit(c+643,"amo_done", false,-1);
    tracep->declBit(c+779,"ld_req", false,-1);
    tracep->declBit(c+780,"st_req", false,-1);
    tracep->declBit(c+781,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data_o\206 ");
    tracep->declBus(c+234,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+235,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+236,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_o\206 ");
    tracep->declBus(c+237,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+238,"is_amo", false,-1);
    tracep->declBit(c+239,"amo_flush", false,-1);
    tracep->declBit(c+240,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_o\206 ");
    tracep->declBus(c+922,"alu_result", false,-1, 31,0);
    tracep->declBus(c+923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+924,"r_data", false,-1, 31,0);
    tracep->declBus(c+925,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_o\206 ");
    tracep->declBus(c+772,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+773,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+474,"lsu2exe_fb_alu_result_o", false,-1, 31,0);
    tracep->pushNamePrefix("lsu2fwd_o\206 ");
    tracep->declBus(c+242,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+243,"rd_wr_req", false,-1);
    tracep->declBit(c+244,"lsu_req", false,-1);
    tracep->declBit(c+245,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_i\206 ");
    tracep->declBit(c+789,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i\206 ");
    tracep->declBus(c+132,"r_data", false,-1, 31,0);
    tracep->declBit(c+133,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+778,"lsu_flush_o", false,-1);
    tracep->pushNamePrefix("exe2lsu_data\206 ");
    tracep->declBus(c+485,"alu_result", false,-1, 31,0);
    tracep->declBus(c+486,"pc_next", false,-1, 31,0);
    tracep->declBus(c+487,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl\206 ");
    tracep->declBus(c+753,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+754,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+755,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+756,"st_ops", false,-1, 1,0);
    tracep->declBus(c+757,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+758,"rd_wr_req", false,-1);
    tracep->declBit(c+759,"jump_req", false,-1);
    tracep->declBit(c+760,"branch_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+922,"alu_result", false,-1, 31,0);
    tracep->declBus(c+923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+924,"r_data", false,-1, 31,0);
    tracep->declBus(c+925,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+772,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+773,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus\206 ");
    tracep->declBus(c+86,"addr", false,-1, 31,0);
    tracep->declBus(c+87,"w_data", false,-1, 31,0);
    tracep->declBus(c+88,"st_ops", false,-1, 1,0);
    tracep->declBit(c+89,"ld_req", false,-1);
    tracep->declBit(c+90,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu\206 ");
    tracep->declBus(c+132,"r_data", false,-1, 31,0);
    tracep->declBit(c+133,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data\206 ");
    tracep->declBus(c+474,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+475,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl\206 ");
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+752,"st_ops", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data\206 ");
    tracep->declBus(c+233,"w_data", false,-1, 31,0);
    tracep->declBus(c+921,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl\206 ");
    tracep->declBit(c+643,"amo_done", false,-1);
    tracep->declBit(c+779,"ld_req", false,-1);
    tracep->declBit(c+780,"st_req", false,-1);
    tracep->declBit(c+781,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data\206 ");
    tracep->declBus(c+234,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+235,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+236,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl\206 ");
    tracep->declBus(c+237,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+238,"is_amo", false,-1);
    tracep->declBit(c+239,"amo_flush", false,-1);
    tracep->declBit(c+240,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd\206 ");
    tracep->declBus(c+242,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+243,"rd_wr_req", false,-1);
    tracep->declBit(c+244,"lsu_req", false,-1);
    tracep->declBit(c+245,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+474,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+255,"rdata_word", false,-1, 31,0);
    tracep->declBus(c+256,"rdata_hword", false,-1, 15,0);
    tracep->declBus(c+257,"rdata_byte", false,-1, 7,0);
    tracep->declBit(c+886,"ld_req", false,-1);
    tracep->declBus(c+751,"ld_ops", false,-1, 2,0);
    tracep->declBit(c+777,"st_req", false,-1);
    tracep->declBit(c+762,"is_amo", false,-1);
    tracep->declBit(c+762,"lsu_amo_req", false,-1);
    tracep->declBit(c+945,"lsu_amo_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("lsu2wrb_data_i\206 ");
    tracep->declBus(c+922,"alu_result", false,-1, 31,0);
    tracep->declBus(c+923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+924,"r_data", false,-1, 31,0);
    tracep->declBus(c+925,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_i\206 ");
    tracep->declBus(c+772,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+773,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_i\206 ");
    tracep->declBus(c+782,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb_i\206 ");
    tracep->declBus(c+783,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_o\206 ");
    tracep->declBus(c+241,"rd_data", false,-1, 31,0);
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+241,"wrb2exe_fb_rd_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("wrb2fwd_o\206 ");
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data\206 ");
    tracep->declBus(c+922,"alu_result", false,-1, 31,0);
    tracep->declBus(c+923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+924,"r_data", false,-1, 31,0);
    tracep->declBus(c+925,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl\206 ");
    tracep->declBus(c+772,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+773,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data\206 ");
    tracep->declBus(c+782,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div2wrb\206 ");
    tracep->declBus(c+783,"alu_d_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb\206 ");
    tracep->declBus(c+241,"rd_data", false,-1, 31,0);
    tracep->declBus(c+926,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+774,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+241,"wrb_rd_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_top_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o\206 ");
    tracep->declBus(c+427,"r_data", false,-1, 31,0);
    tracep->declBit(c+428,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+142,"plic_sel_i", false,-1);
    tracep->declBus(c+1053,"edge_select_i", false,-1, 1,0);
    tracep->declBus(c+1054,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+547,"irq_targets_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+258,"claim_req", false,-1, 1,0);
    tracep->declBus(c+259,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+260,"[0]", false,-1, 1,0);
    tracep->declBus(c+261,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+548,"irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_th");
    tracep->declBus(c+549,"[0]", false,-1, 2,0);
    tracep->declBus(c+550,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ie");
    tracep->declBus(c+553,"[0]", false,-1, 1,0);
    tracep->declBus(c+554,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+555,"[0]", false,-1, 1,0);
    tracep->declBus(c+556,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBus(c+548,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+553,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+549,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+423,"irq_req_o", false,-1);
    tracep->declBus(c+557,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+548,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+553,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+558,"prio_th", false,-1, 2,0);
    tracep->declBit(c+423,"irq_req_ff", false,-1);
    tracep->declBit(c+559,"irq_req_next", false,-1);
    tracep->declBus(c+557,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+560,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1055,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBus(c+548,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+554,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+550,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+424,"irq_req_o", false,-1);
    tracep->declBus(c+561,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+548,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+554,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+562,"prio_th", false,-1, 2,0);
    tracep->declBit(c+424,"irq_req_ff", false,-1);
    tracep->declBit(c+563,"irq_req_next", false,-1);
    tracep->declBus(c+561,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+564,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1055,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("plic_gateway_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->declBus(c+1054,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+1053,"edge_select_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway_i\206 ");
    tracep->declBus(c+258,"claim_req", false,-1, 1,0);
    tracep->declBus(c+259,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+260,"[0]", false,-1, 1,0);
    tracep->declBus(c+261,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+555,"[0]", false,-1, 1,0);
    tracep->declBus(c+556,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+548,"irq_pending_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+258,"claim_req", false,-1, 1,0);
    tracep->declBus(c+259,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+260,"[0]", false,-1, 1,0);
    tracep->declBus(c+261,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+548,"irq_pending_ff", false,-1, 1,0);
    tracep->declBus(c+262,"irq_pending_next", false,-1, 1,0);
    tracep->declBus(c+565,"irq_active_ff", false,-1, 1,0);
    tracep->declBus(c+263,"irq_active_next", false,-1, 1,0);
    tracep->declBus(c+264,"irq_set_pending", false,-1, 1,0);
    tracep->declBus(c+265,"irq_set_active", false,-1, 1,0);
    tracep->declBus(c+1054,"irq_req", false,-1, 1,0);
    tracep->declBus(c+566,"irq_src_ff", false,-1, 1,0);
    tracep->declBus(c+1054,"irq_src_next", false,-1, 1,0);
    tracep->declBus(c+266,"claim", false,-1, 1,0);
    tracep->declBus(c+267,"complete", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+555,"[0]", false,-1, 1,0);
    tracep->declBus(c+556,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+268,"[0]", false,-1, 1,0);
    tracep->declBus(c+269,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1056,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1056,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_regs_module ");
    tracep->declBit(c+919,"rst_n", false,-1);
    tracep->declBit(c+918,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i\206 ");
    tracep->declBus(c+134,"addr", false,-1, 31,0);
    tracep->declBus(c+135,"w_data", false,-1, 31,0);
    tracep->declBus(c+136,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+137,"w_en", false,-1);
    tracep->declBit(c+138,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o\206 ");
    tracep->declBus(c+427,"r_data", false,-1, 31,0);
    tracep->declBit(c+428,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+142,"plic_sel_i", false,-1);
    tracep->pushNamePrefix("regs_ie_o");
    tracep->declBus(c+553,"[0]", false,-1, 1,0);
    tracep->declBus(c+554,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_o");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_th_o");
    tracep->declBus(c+549,"[0]", false,-1, 2,0);
    tracep->declBus(c+550,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+548,"irq_pending_i", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+555,"[0]", false,-1, 1,0);
    tracep->declBus(c+556,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway_o\206 ");
    tracep->declBus(c+258,"claim_req", false,-1, 1,0);
    tracep->declBus(c+259,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+260,"[0]", false,-1, 1,0);
    tracep->declBus(c+261,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway\206 ");
    tracep->declBus(c+258,"claim_req", false,-1, 1,0);
    tracep->declBus(c+259,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+260,"[0]", false,-1, 1,0);
    tracep->declBus(c+261,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+270,"claim_req", false,-1, 1,0);
    tracep->declBus(c+271,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+268,"[0]", false,-1, 1,0);
    tracep->declBus(c+269,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+272,"reg_addr", false,-1, 23,0);
    tracep->declBit(c+273,"reg_rd_req", false,-1);
    tracep->declBit(c+274,"reg_wr_req", false,-1);
    tracep->declBus(c+275,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+153,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+276,"prio_th_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+277,"prio_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+278,"ie_reg_wr_flag", false,-1, 1,0);
    tracep->pushNamePrefix("plic_reg_prio_th_ff");
    tracep->declBus(c+549,"[0]", false,-1, 2,0);
    tracep->declBus(c+550,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_th_next");
    tracep->declBus(c+279,"[0]", false,-1, 2,0);
    tracep->declBus(c+280,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_ff");
    tracep->declBus(c+551,"[0]", false,-1, 2,0);
    tracep->declBus(c+552,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_next");
    tracep->declBus(c+281,"[0]", false,-1, 2,0);
    tracep->declBus(c+282,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_ff");
    tracep->declBus(c+553,"[0]", false,-1, 1,0);
    tracep->declBus(c+554,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_next");
    tracep->declBus(c+128,"[0]", false,-1, 1,0);
    tracep->declBus(c+129,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+548,"plic_reg_irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+555,"[0]", false,-1, 1,0);
    tracep->declBus(c+556,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_ff\206 ");
    tracep->declBus(c+427,"r_data", false,-1, 31,0);
    tracep->declBit(c+428,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1056,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1056,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1056,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_init_sub__TOP____024unit__0(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1057,"CSR_MTVEC_BASE_ALIGN_VECTOR", false,-1, 31,0);
    tracep->declBus(c+1058,"CSR_MTVEC_BASE_ALIGN_DIRECT", false,-1, 31,0);
    tracep->declBus(c+1059,"MODE_BIT", false,-1, 31,0);
    tracep->declBus(c+1060,"EXC_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1061,"S_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1062,"M_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1063,"S_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1064,"M_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1065,"S_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1066,"M_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1067,"UART_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1068,"SPI_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1069,"GPIO_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+1056,"MIE_SSIP", false,-1, 31,0);
    tracep->declBus(c+995,"MIE_MSIP", false,-1, 31,0);
    tracep->declBus(c+1070,"MIE_STIP", false,-1, 31,0);
    tracep->declBus(c+1071,"MIE_MTIP", false,-1, 31,0);
    tracep->declBus(c+1072,"MIE_SEIP", false,-1, 31,0);
    tracep->declBus(c+1073,"MIE_MEIP", false,-1, 31,0);
    tracep->declBus(c+1074,"MIE_UART", false,-1, 31,0);
    tracep->declBus(c+1075,"MIE_SPI", false,-1, 31,0);
    tracep->declBus(c+1076,"MIE_GPIO", false,-1, 31,0);
    tracep->declBus(c+1077,"MIE_MASK", false,-1, 31,0);
    tracep->declBus(c+1077,"MIP_MASK", false,-1, 31,0);
    tracep->declBus(c+1078,"MSTATUS_MASK", false,-1, 31,0);
    tracep->declBus(c+1063,"IRQ_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1079,"TVEC_MODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1080,"TVEC_BASE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1081,"PLIC_SOURCE_COUNT", false,-1, 31,0);
    tracep->declBus(c+1081,"PLIC_TARGET_COUNT", false,-1, 31,0);
    tracep->declBus(c+1082,"PLIC_PRIO_LEVELS", false,-1, 31,0);
    tracep->declBus(c+1081,"PLIC_SOURCE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1083,"PLIC_PRIO_WIDTH", false,-1, 31,0);
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
    bufp->fullBit(oldp+95,(((0x301000U < (0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 4U))) 
                            & (0x31ffffU >= (0x3fffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                >> 4U))))));
    bufp->fullBit(oldp+96,(((0x300000U < (0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 4U))) 
                            & (0x300fffU >= (0x3fffffU 
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
    bufp->fullIData(oldp+114,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req)
                                         ? (1ULL | 
                                            ((QData)((IData)(
                                                             vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                                             [
                                                             (0x3fffffU 
                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                 >> 8U))])) 
                                             << 1U))
                                         : 0ULL) >> 1U))),32);
    bufp->fullBit(oldp+115,((1U & (IData)(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req)
                                            ? (1ULL 
                                               | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                                                  [
                                                                  (0x3fffffU 
                                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                                      >> 8U))])) 
                                                  << 1U))
                                            : 0ULL)))));
    bufp->fullSData(oldp+116,((0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data)
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
    bufp->fullCData(oldp+117,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+118,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+119,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff)))),8);
    bufp->fullCData(oldp+120,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+121,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+122,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff)))),8);
    bufp->fullCData(oldp+123,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff)))),8);
    bufp->fullCData(oldp+124,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff)))),8);
    bufp->fullCData(oldp+125,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl)
                                         ? ((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                               >> 6U))
                                         : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff)))),8);
    bufp->fullIData(oldp+126,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req)
                                ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read)
                                         ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                                        [(0x3fffffU 
                                          & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 8U))]
                                         : 0U))),32);
    bufp->fullIData(oldp+127,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dualport_memory
                              [(0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 8U))]),32);
    bufp->fullCData(oldp+128,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
    bufp->fullCData(oldp+129,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                         >> 2U)))),2);
    bufp->fullBit(oldp+130,(((0x1ffe68U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write))));
    bufp->fullBit(oldp+131,(((0x1ffe6cU == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U))) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write))));
    bufp->fullIData(oldp+132,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                       >> 1U))),32);
    bufp->fullBit(oldp+133,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
    bufp->fullIData(oldp+134,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+135,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+136,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+137,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+138,((1U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
    bufp->fullBit(oldp+139,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel));
    bufp->fullBit(oldp+140,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
    bufp->fullBit(oldp+141,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
    bufp->fullBit(oldp+142,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
    bufp->fullBit(oldp+143,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
    bufp->fullBit(oldp+144,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel));
    bufp->fullBit(oldp+145,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel));
    bufp->fullBit(oldp+146,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel));
    bufp->fullBit(oldp+147,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel));
    bufp->fullBit(oldp+148,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel));
    bufp->fullBit(oldp+149,(vlSelf->pcore_tb__DOT__dut__DOT__store_busy));
    bufp->fullIData(oldp+150,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+151,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus))));
    bufp->fullIData(oldp+152,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data),32);
    bufp->fullIData(oldp+153,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))),32);
    bufp->fullSData(oldp+154,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 6U))),16);
    bufp->fullBit(oldp+155,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req));
    bufp->fullBit(oldp+156,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req));
    bufp->fullQData(oldp+157,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next),64);
    bufp->fullQData(oldp+159,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next),64);
    bufp->fullBit(oldp+161,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag));
    bufp->fullBit(oldp+162,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag));
    bufp->fullBit(oldp+163,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
    bufp->fullBit(oldp+164,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
    bufp->fullBit(oldp+165,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    bufp->fullBit(oldp+166,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioA_sel) 
                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioB_sel) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpioC_sel) 
                                   | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpled_sel) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__gpsw_sel)))))));
    bufp->fullIData(oldp+167,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+168,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+169,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+170,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+171,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U])));
    bufp->fullIData(oldp+172,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+173,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+174,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+175,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+176,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U])));
    bufp->fullIData(oldp+177,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+178,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+179,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+180,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+181,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U])));
    bufp->fullIData(oldp+182,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[2U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+183,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+184,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+185,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+186,((1U & vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U])));
    bufp->fullBit(oldp+187,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpled_sel_data));
    bufp->fullCData(oldp+188,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+189,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_r_data),32);
    bufp->fullIData(oldp+190,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusSP2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_rd_req));
    bufp->fullBit(oldp+192,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_wr_req));
    bufp->fullBit(oldp+193,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_data));
    bufp->fullBit(oldp+194,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+195,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+196,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+197,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_next),8);
    bufp->fullCData(oldp+198,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+199,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+200,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_r_data),32);
    bufp->fullIData(oldp+201,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusA2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+202,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_rd_req));
    bufp->fullBit(oldp+203,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_wr_req));
    bufp->fullBit(oldp+204,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_data));
    bufp->fullBit(oldp+205,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+206,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+207,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+208,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_next),8);
    bufp->fullCData(oldp+209,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+210,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+211,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_r_data),32);
    bufp->fullIData(oldp+212,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusB2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+213,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_rd_req));
    bufp->fullBit(oldp+214,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_wr_req));
    bufp->fullBit(oldp+215,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_data));
    bufp->fullBit(oldp+216,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_dir));
    bufp->fullBit(oldp+217,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_ie));
    bufp->fullBit(oldp+218,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_sel_int_lvl));
    bufp->fullCData(oldp+219,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_next),8);
    bufp->fullCData(oldp+220,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_next),8);
    bufp->fullCData(oldp+221,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                        >> 6U))),8);
    bufp->fullIData(oldp+222,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_r_data),32);
    bufp->fullIData(oldp+223,(((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[1U] 
                                << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__dbusC2gpio[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_rd_req));
    bufp->fullBit(oldp+225,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_wr_req));
    bufp->fullIData(oldp+226,(((0x80U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio2dbus 
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
    bufp->fullBit(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__load_req));
    bufp->fullBit(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__store_req));
    bufp->fullBit(oldp+229,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_read));
    bufp->fullBit(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_modify));
    bufp->fullBit(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_write));
    bufp->fullIData(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__write_data),32);
    bufp->fullIData(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
    bufp->fullIData(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U]),32);
    bufp->fullIData(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U]),32);
    bufp->fullIData(oldp+236,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]),32);
    bufp->fullCData(oldp+237,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                       >> 3U))),4);
    bufp->fullBit(oldp+238,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+240,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))));
    bufp->fullIData(oldp+241,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
    bufp->fullCData(oldp+242,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                        >> 3U))),5);
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                   >> 2U))));
    bufp->fullBit(oldp+244,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd) 
                                   >> 1U))));
    bufp->fullBit(oldp+245,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2fwd))));
    bufp->fullIData(oldp+246,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a),32);
    bufp->fullIData(oldp+247,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
    bufp->fullBit(oldp+248,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
    bufp->fullBit(oldp+249,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
    bufp->fullBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
    bufp->fullBit(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
    bufp->fullCData(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
    bufp->fullBit(oldp+253,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall));
    bufp->fullBit(oldp+254,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    bufp->fullIData(oldp+255,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
    bufp->fullSData(oldp+256,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
    bufp->fullCData(oldp+257,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
    bufp->fullCData(oldp+258,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+259,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+260,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway))),2);
    bufp->fullCData(oldp+261,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+262,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
    bufp->fullCData(oldp+263,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
    bufp->fullCData(oldp+264,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
    bufp->fullCData(oldp+265,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
    bufp->fullCData(oldp+266,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
    bufp->fullCData(oldp+267,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
    bufp->fullCData(oldp+268,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
    bufp->fullCData(oldp+269,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+270,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
    bufp->fullCData(oldp+271,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
    bufp->fullIData(oldp+272,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U))),24);
    bufp->fullBit(oldp+273,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+274,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+275,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
    bufp->fullCData(oldp+276,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
    bufp->fullCData(oldp+277,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
    bufp->fullCData(oldp+278,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
    bufp->fullCData(oldp+279,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
    bufp->fullCData(oldp+280,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+281,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
    bufp->fullCData(oldp+282,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+283,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+284,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    bufp->fullBit(oldp+285,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next) 
                                   >> 1U))));
    bufp->fullBit(oldp+286,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_next))));
    bufp->fullCData(oldp+287,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+288,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+289,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 9U))),3);
    bufp->fullCData(oldp+290,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                     >> 7U))),2);
    bufp->fullCData(oldp+291,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                       >> 3U))),4);
    bufp->fullBit(oldp+292,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                   >> 2U))));
    bufp->fullBit(oldp+293,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                   >> 1U))));
    bufp->fullBit(oldp+294,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
    bufp->fullIData(oldp+295,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
    bufp->fullIData(oldp+296,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
    bufp->fullIData(oldp+297,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
    bufp->fullIData(oldp+298,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
    bufp->fullIData(oldp+299,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
    bufp->fullIData(oldp+300,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
    bufp->fullSData(oldp+301,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+302,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+303,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+304,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+305,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+306,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
    bufp->fullCData(oldp+307,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+308,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+309,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 3U))));
    bufp->fullBit(oldp+310,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 2U))));
    bufp->fullBit(oldp+311,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                   >> 1U))));
    bufp->fullBit(oldp+312,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
    bufp->fullIData(oldp+313,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
    bufp->fullBit(oldp+314,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                   >> 3U))));
    bufp->fullBit(oldp+315,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                   >> 2U))));
    bufp->fullBit(oldp+316,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                   >> 1U))));
    bufp->fullBit(oldp+317,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                   >> 3U))));
    bufp->fullBit(oldp+319,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                   >> 2U))));
    bufp->fullBit(oldp+320,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                   >> 1U))));
    bufp->fullBit(oldp+321,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))));
    bufp->fullBit(oldp+322,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 8U))));
    bufp->fullBit(oldp+323,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 7U))));
    bufp->fullBit(oldp+324,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 6U))));
    bufp->fullBit(oldp+325,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 5U))));
    bufp->fullBit(oldp+326,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 4U))));
    bufp->fullBit(oldp+327,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 3U))));
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 2U))));
    bufp->fullBit(oldp+329,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                   >> 1U))));
    bufp->fullBit(oldp+330,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
    bufp->fullBit(oldp+331,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT____Vcellinp__divide_module__fwd2div_flush_i));
    bufp->fullIData(oldp+332,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_next),32);
    bufp->fullIData(oldp+333,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_next),32);
    bufp->fullIData(oldp+334,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
    bufp->fullIData(oldp+335,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
    bufp->fullIData(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
    bufp->fullIData(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
    bufp->fullQData(oldp+338,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
    bufp->fullBit(oldp+340,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
    bufp->fullBit(oldp+341,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+342,((1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
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
    bufp->fullCData(oldp+343,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
    bufp->fullIData(oldp+344,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_b_result),32);
    bufp->fullIData(oldp+345,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+346,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+347,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h0362d37b__0)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullIData(oldp+348,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                              >> 0x20U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullIData(oldp+349,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_data),32);
    bufp->fullQData(oldp+350,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_en),33);
    bufp->fullCData(oldp+352,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__cnt_result),6);
    bufp->fullIData(oldp+353,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1_rev),32);
    bufp->fullIData(oldp+354,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2_rev),32);
    bufp->fullIData(oldp+355,(((0x1fU >= (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                ? ((IData)(1U) << (0x1fU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                : 0U)),32);
    bufp->fullIData(oldp+356,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_1),32);
    bufp->fullIData(oldp+357,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_operand_2),32);
    bufp->fullIData(oldp+358,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmul_result),32);
    bufp->fullIData(oldp+359,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__clmulr_result),32);
    bufp->fullQData(oldp+360,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__mul_output),64);
    bufp->fullCData(oldp+362,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
    bufp->fullBit(oldp+363,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+364,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next));
    bufp->fullBit(oldp+365,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next))));
    bufp->fullBit(oldp+366,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
    bufp->fullBit(oldp+367,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
    bufp->fullBit(oldp+368,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
    bufp->fullBit(oldp+369,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    bufp->fullIData(oldp+370,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+371,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+372,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+373,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+374,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[0U])));
    bufp->fullIData(oldp+375,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+376,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+377,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+378,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+379,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
    bufp->fullIData(oldp+380,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
    bufp->fullBit(oldp+381,((0x1bU == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__if2id_data[2U] 
                                                >> 7U)))));
    bufp->fullWData(oldp+382,(vlSelf->pcore_tb__DOT__main_time),1024);
    bufp->fullIData(oldp+414,((vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0 
                               & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io) 
                                    << 0x10U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io))) 
                                  & vlSelf->pcore_tb__DOT__dut__DOT__gpio_io__en0))),24);
    bufp->fullCData(oldp+415,(vlSelf->pcore_tb__DOT__r_sg),8);
    bufp->fullCData(oldp+416,(vlSelf->pcore_tb__DOT__r_an),8);
    bufp->fullIData(oldp+417,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
    bufp->fullIData(oldp+418,(vlSelf->__VdfgTmp_h409023d6__0),32);
    bufp->fullIData(oldp+419,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)),32);
    bufp->fullIData(oldp+420,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+421,((1U & (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
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
    bufp->fullBit(oldp+422,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff));
    bufp->fullBit(oldp+423,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullBit(oldp+424,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+425,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+426,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff))));
    bufp->fullIData(oldp+427,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+428,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
    bufp->fullCData(oldp+429,(vlSelf->pcore_tb__DOT__dut__DOT__w_sg),8);
    bufp->fullCData(oldp+430,(vlSelf->pcore_tb__DOT__dut__DOT__w_an),8);
    bufp->fullQData(oldp+431,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff),64);
    bufp->fullQData(oldp+433,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff),64);
    bufp->fullBit(oldp+435,((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                             >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)));
    bufp->fullBit(oldp+436,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff) 
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
    bufp->fullCData(oldp+437,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioA_io),8);
    bufp->fullBit(oldp+438,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff) 
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
    bufp->fullCData(oldp+439,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioB_io),8);
    bufp->fullBit(oldp+440,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff) 
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
    bufp->fullCData(oldp+441,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpioC_io),8);
    bufp->fullIData(oldp+442,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+443,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+444,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+445,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+446,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+447,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio2dbus_ff))));
    bufp->fullIData(oldp+448,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+449,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__gpio2dbus_ff))));
    bufp->fullSData(oldp+450,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_sw_data_ff),16);
    bufp->fullSData(oldp+451,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gp_sw_led__DOT__reg_led_data_ff),16);
    bufp->fullCData(oldp+452,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+453,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+454,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+455,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+456,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__reg_int_lvl_ff),8);
    bufp->fullCData(oldp+457,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+458,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+459,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+460,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+461,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__reg_int_lvl_ff),8);
    bufp->fullCData(oldp+462,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_data_ff),8);
    bufp->fullCData(oldp+463,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_dir_ff),8);
    bufp->fullCData(oldp+464,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ip_ff),8);
    bufp->fullCData(oldp+465,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_ie_ff),8);
    bufp->fullCData(oldp+466,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__reg_int_lvl_ff),8);
    bufp->fullIData(oldp+467,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_val),32);
    bufp->fullIData(oldp+468,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_cnt),32);
    bufp->fullCData(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_in),4);
    bufp->fullCData(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_digit),3);
    bufp->fullCData(oldp+471,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_init),8);
    bufp->fullCData(oldp+472,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__r_load),8);
    bufp->fullCData(oldp+473,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__w_segments),8);
    bufp->fullIData(oldp+474,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+475,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+477,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
    bufp->fullIData(oldp+478,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+479,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+480,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+481,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+482,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
    bufp->fullBit(oldp+483,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+484,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff))));
    bufp->fullIData(oldp+485,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+486,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullIData(oldp+487,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullSData(oldp+488,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+489,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+490,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+491,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+492,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+493,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
    bufp->fullCData(oldp+494,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+495,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+499,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
    bufp->fullIData(oldp+500,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
    bufp->fullIData(oldp+501,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullBit(oldp+502,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
    bufp->fullBit(oldp+503,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
    bufp->fullBit(oldp+504,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
    bufp->fullBit(oldp+505,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
    bufp->fullBit(oldp+506,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
    bufp->fullBit(oldp+507,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
    bufp->fullBit(oldp+508,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
    bufp->fullBit(oldp+509,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
    bufp->fullBit(oldp+510,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
    bufp->fullBit(oldp+511,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
    bufp->fullBit(oldp+512,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
    bufp->fullBit(oldp+513,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
    bufp->fullBit(oldp+514,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
    bufp->fullBit(oldp+515,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
    bufp->fullBit(oldp+516,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
    bufp->fullBit(oldp+517,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 3U))));
    bufp->fullCData(oldp+519,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+520,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x19U))),5);
    bufp->fullIData(oldp+521,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+522,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U))),3);
    bufp->fullCData(oldp+523,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x1eU)))),7);
    bufp->fullCData(oldp+524,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+525,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+526,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x19U)))));
    bufp->fullIData(oldp+527,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_ff),32);
    bufp->fullIData(oldp+528,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff)),32);
    bufp->fullBit(oldp+529,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__done_ff));
    bufp->fullBit(oldp+530,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__busy_ff));
    bufp->fullIData(oldp+531,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__opr2_ff),32);
    bufp->fullIData(oldp+532,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__quo_next),32);
    bufp->fullQData(oldp+533,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_ff),33);
    bufp->fullQData(oldp+535,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__acc_next),33);
    bufp->fullQData(oldp+537,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__rem_ff),33);
    bufp->fullCData(oldp+539,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__divider_module__DOT__counter),5);
    bufp->fullCData(oldp+540,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
    bufp->fullBit(oldp+541,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
    bufp->fullBit(oldp+542,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+543,(((IData)(4U) + vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)),32);
    bufp->fullBit(oldp+544,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
    bufp->fullBit(oldp+545,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
    bufp->fullBit(oldp+546,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall_ff));
    bufp->fullCData(oldp+547,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
    bufp->fullCData(oldp+548,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
    bufp->fullCData(oldp+549,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
    bufp->fullCData(oldp+550,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+551,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
    bufp->fullCData(oldp+552,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+553,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
    bufp->fullCData(oldp+554,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+555,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))),2);
    bufp->fullCData(oldp+556,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+557,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+558,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+559,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+560,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+561,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+562,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+563,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+564,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+565,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
    bufp->fullCData(oldp+566,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
    bufp->fullCData(oldp+567,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+568,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 1U))),3);
    bufp->fullCData(oldp+569,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                >> 0x1eU)))),3);
    bufp->fullQData(oldp+570,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))),33);
    bufp->fullCData(oldp+572,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+573,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+574,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x15U))),3);
    bufp->fullCData(oldp+575,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x13U))),2);
    bufp->fullCData(oldp+576,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 0xfU))),4);
    bufp->fullCData(oldp+577,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+578,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+579,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+580,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+581,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 8U))));
    bufp->fullCData(oldp+582,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+583,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+584,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+585,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+586,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+587,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])));
    bufp->fullCData(oldp+588,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 5U))),3);
    bufp->fullCData(oldp+589,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+590,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+591,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                       >> 0xfU))),4);
    bufp->fullBit(oldp+592,((1U & ((0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 0x13U)))
                                    ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 1U) : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                                 >> 3U)))));
    bufp->fullBit(oldp+593,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+594,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                   >> 1U))));
    bufp->fullCData(oldp+595,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                                >> 0x1eU)))),3);
    bufp->fullBit(oldp+596,((IData)((0U != (0x802U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
    bufp->fullBit(oldp+597,((IData)((0U != (0x3000402U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])))));
    bufp->fullCData(oldp+598,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+599,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U] 
                                     >> 0x15U))),3);
    bufp->fullQData(oldp+600,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                    >> 0x1dU)))),33);
    bufp->fullBit(oldp+602,((0U != (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+603,((8ULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU))))));
    bufp->fullBit(oldp+604,((9ULL == (0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U])) 
                                          << 3U) | 
                                         ((QData)((IData)(
                                                          vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U])) 
                                          >> 0x1dU))))));
    bufp->fullCData(oldp+605,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+606,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                   >> 2U))));
    bufp->fullBit(oldp+607,((IData)((6U == (6U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    bufp->fullBit(oldp+608,((0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          >> 1U)))));
    bufp->fullBit(oldp+609,((IData)((0U != (6U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U])))));
    bufp->fullIData(oldp+610,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
    bufp->fullIData(oldp+611,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
    bufp->fullIData(oldp+612,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
    bufp->fullIData(oldp+613,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
    bufp->fullIData(oldp+614,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
    bufp->fullIData(oldp+615,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
    bufp->fullIData(oldp+616,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
    bufp->fullIData(oldp+617,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
    bufp->fullIData(oldp+618,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
    bufp->fullIData(oldp+619,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
    bufp->fullIData(oldp+620,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
    bufp->fullIData(oldp+621,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
    bufp->fullIData(oldp+622,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
    bufp->fullIData(oldp+623,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
    bufp->fullIData(oldp+624,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
    bufp->fullIData(oldp+625,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
    bufp->fullIData(oldp+626,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
    bufp->fullIData(oldp+627,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
    bufp->fullIData(oldp+628,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
    bufp->fullIData(oldp+629,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
    bufp->fullIData(oldp+630,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
    bufp->fullIData(oldp+631,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
    bufp->fullIData(oldp+632,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
    bufp->fullIData(oldp+633,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
    bufp->fullIData(oldp+634,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
    bufp->fullIData(oldp+635,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
    bufp->fullIData(oldp+636,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
    bufp->fullIData(oldp+637,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
    bufp->fullIData(oldp+638,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
    bufp->fullIData(oldp+639,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
    bufp->fullIData(oldp+640,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
    bufp->fullIData(oldp+641,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    bufp->fullCData(oldp+642,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state),2);
    bufp->fullBit(oldp+643,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullCData(oldp+644,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+645,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
    bufp->fullBit(oldp+646,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
    bufp->fullIData(oldp+647,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
    bufp->fullIData(oldp+648,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
    bufp->fullBit(oldp+649,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullBit(oldp+650,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
    bufp->fullCData(oldp+651,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
    bufp->fullIData(oldp+652,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
    bufp->fullIData(oldp+653,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
    bufp->fullIData(oldp+654,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
    bufp->fullIData(oldp+655,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
    bufp->fullIData(oldp+656,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
    bufp->fullIData(oldp+657,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                               >> 4U)),28);
    bufp->fullBit(oldp+658,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+659,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+660,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+661,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
    bufp->fullBit(oldp+662,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                             >> 0x1fU)));
    bufp->fullCData(oldp+663,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0x17U))),8);
    bufp->fullBit(oldp+664,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x16U))));
    bufp->fullBit(oldp+665,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x15U))));
    bufp->fullBit(oldp+666,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x14U))));
    bufp->fullBit(oldp+667,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+668,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+669,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x11U))));
    bufp->fullCData(oldp+670,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+671,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+672,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+673,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 9U))),2);
    bufp->fullBit(oldp+674,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+675,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+676,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+677,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+678,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+679,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+680,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+681,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+682,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
    bufp->fullSData(oldp+683,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+684,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+685,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x11U))));
    bufp->fullBit(oldp+686,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+687,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+688,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+689,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+690,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+691,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+692,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+693,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+694,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+695,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+696,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+697,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+698,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+699,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
    bufp->fullIData(oldp+700,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                               >> 2U)),30);
    bufp->fullCData(oldp+701,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
    bufp->fullIData(oldp+702,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
    bufp->fullIData(oldp+703,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
    bufp->fullIData(oldp+704,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
    bufp->fullIData(oldp+705,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
    bufp->fullSData(oldp+706,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+707,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+708,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x11U))));
    bufp->fullBit(oldp+709,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+710,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+711,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+712,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+713,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+714,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+715,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+716,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+717,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+718,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+719,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+720,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+721,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+722,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
    bufp->fullCData(oldp+723,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+724,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
    bufp->fullBit(oldp+725,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_req));
    bufp->fullBit(oldp+726,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_req));
    bufp->fullBit(oldp+727,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
    bufp->fullBit(oldp+728,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
    bufp->fullBit(oldp+729,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
    bufp->fullBit(oldp+730,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_ff));
    bufp->fullBit(oldp+731,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__spi_irq_ff));
    bufp->fullBit(oldp+732,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__gpio_irq_ff));
    bufp->fullBit(oldp+733,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_global_ie));
    bufp->fullBit(oldp+734,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
    bufp->fullCData(oldp+735,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff),3);
    bufp->fullIData(oldp+736,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_ff),32);
    bufp->fullIData(oldp+737,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_ff),32);
    bufp->fullBit(oldp+738,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff));
    bufp->fullBit(oldp+739,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff));
    bufp->fullBit(oldp+740,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff))));
    bufp->fullBit(oldp+741,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff));
    bufp->fullBit(oldp+742,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_ff));
    bufp->fullBit(oldp+743,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__div_stall_next));
    bufp->fullIData(oldp+744,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                       >> 7U))),32);
    bufp->fullCData(oldp+745,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                             >> 5U)))),2);
    bufp->fullBit(oldp+746,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 4U)))));
    bufp->fullBit(oldp+747,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 3U)))));
    bufp->fullBit(oldp+748,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 2U)))));
    bufp->fullBit(oldp+749,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 1U)))));
    bufp->fullBit(oldp+750,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr))));
    bufp->fullCData(oldp+751,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 9U))),3);
    bufp->fullCData(oldp+752,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 7U))),2);
    bufp->fullCData(oldp+753,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+754,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+755,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 9U))),3);
    bufp->fullCData(oldp+756,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 7U))),2);
    bufp->fullCData(oldp+757,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))),4);
    bufp->fullBit(oldp+758,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+759,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+760,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
    bufp->fullCData(oldp+761,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))),4);
    bufp->fullBit(oldp+762,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 3U)))));
    bufp->fullBit(oldp+763,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 3U)))));
    bufp->fullBit(oldp+764,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 3U)))));
    bufp->fullBit(oldp+765,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
    bufp->fullCData(oldp+766,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
    bufp->fullBit(oldp+767,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
    bufp->fullCData(oldp+768,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                     >> 7U))),2);
    bufp->fullBit(oldp+769,((IData)((0U != (0xf80U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
    bufp->fullBit(oldp+770,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ld_misalign_exc_req));
    bufp->fullBit(oldp+771,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__st_misalign_exc_req));
    bufp->fullCData(oldp+772,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+773,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+774,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+775,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h6f1eb695__0))));
    bufp->fullBit(oldp+776,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullBit(oldp+777,(((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 3U)))
                              ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
                              : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 7U))))));
    bufp->fullBit(oldp+778,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+779,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+780,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+781,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+782,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+783,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
    bufp->fullIData(oldp+784,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h307746f8__0),32);
    bufp->fullBit(oldp+785,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
    bufp->fullBit(oldp+786,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
    bufp->fullBit(oldp+787,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+788,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
    bufp->fullBit(oldp+789,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+790,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+791,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+792,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+793,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+794,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
    bufp->fullBit(oldp+795,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req_sync));
    bufp->fullIData(oldp+796,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
    bufp->fullIData(oldp+797,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
    bufp->fullIData(oldp+798,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
    bufp->fullIData(oldp+799,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
    bufp->fullIData(oldp+800,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
    bufp->fullIData(oldp+801,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                               >> 4U)),28);
    bufp->fullBit(oldp+802,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 3U))));
    bufp->fullBit(oldp+803,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 2U))));
    bufp->fullBit(oldp+804,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 1U))));
    bufp->fullBit(oldp+805,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
    bufp->fullBit(oldp+806,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                             >> 0x1fU)));
    bufp->fullCData(oldp+807,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                        >> 0x17U))),8);
    bufp->fullBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x16U))));
    bufp->fullBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x15U))));
    bufp->fullBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x14U))));
    bufp->fullBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x13U))));
    bufp->fullBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x12U))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 0x11U))));
    bufp->fullCData(oldp+814,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+815,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+816,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+817,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                     >> 9U))),2);
    bufp->fullBit(oldp+818,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 8U))));
    bufp->fullBit(oldp+819,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 7U))));
    bufp->fullBit(oldp+820,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 6U))));
    bufp->fullBit(oldp+821,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 5U))));
    bufp->fullBit(oldp+822,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 4U))));
    bufp->fullBit(oldp+823,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 3U))));
    bufp->fullBit(oldp+824,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 2U))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                   >> 1U))));
    bufp->fullBit(oldp+826,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
    bufp->fullSData(oldp+827,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+828,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x12U))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x11U))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x10U))));
    bufp->fullCData(oldp+831,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+832,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0xbU))));
    bufp->fullBit(oldp+833,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0xaU))));
    bufp->fullBit(oldp+834,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 9U))));
    bufp->fullBit(oldp+835,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 8U))));
    bufp->fullBit(oldp+836,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 7U))));
    bufp->fullBit(oldp+837,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 6U))));
    bufp->fullBit(oldp+838,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 5U))));
    bufp->fullBit(oldp+839,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 4U))));
    bufp->fullBit(oldp+840,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 3U))));
    bufp->fullBit(oldp+841,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 2U))));
    bufp->fullBit(oldp+842,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 1U))));
    bufp->fullBit(oldp+843,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
    bufp->fullIData(oldp+844,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                               >> 2U)),30);
    bufp->fullCData(oldp+845,((3U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
    bufp->fullIData(oldp+846,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
    bufp->fullIData(oldp+847,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
    bufp->fullSData(oldp+848,((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                               >> 0x13U)),13);
    bufp->fullBit(oldp+849,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x12U))));
    bufp->fullBit(oldp+850,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x11U))));
    bufp->fullBit(oldp+851,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x10U))));
    bufp->fullCData(oldp+852,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+853,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0xbU))));
    bufp->fullBit(oldp+854,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0xaU))));
    bufp->fullBit(oldp+855,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 9U))));
    bufp->fullBit(oldp+856,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 8U))));
    bufp->fullBit(oldp+857,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 7U))));
    bufp->fullBit(oldp+858,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 6U))));
    bufp->fullBit(oldp+859,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 5U))));
    bufp->fullBit(oldp+860,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 4U))));
    bufp->fullBit(oldp+861,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 3U))));
    bufp->fullBit(oldp+862,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 2U))));
    bufp->fullBit(oldp+863,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 1U))));
    bufp->fullBit(oldp+864,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
    bufp->fullCData(oldp+865,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
    bufp->fullCData(oldp+866,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),5);
    bufp->fullIData(oldp+867,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
    bufp->fullBit(oldp+868,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
    bufp->fullBit(oldp+869,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
    bufp->fullBit(oldp+870,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
    bufp->fullBit(oldp+871,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
    bufp->fullBit(oldp+872,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
    bufp->fullBit(oldp+873,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+874,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
    bufp->fullBit(oldp+875,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
    bufp->fullBit(oldp+876,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
    bufp->fullBit(oldp+877,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
    bufp->fullBit(oldp+878,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
    bufp->fullBit(oldp+879,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
    bufp->fullBit(oldp+880,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
    bufp->fullBit(oldp+881,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
    bufp->fullBit(oldp+882,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
    bufp->fullBit(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next));
    bufp->fullIData(oldp+884,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_result_next),32);
    bufp->fullBit(oldp+885,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req));
    bufp->fullBit(oldp+886,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    bufp->fullIData(oldp+887,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+888,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+889,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+890,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+891,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+892,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+893,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+894,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullCData(oldp+895,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+896,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                             >> 5U))),32);
    bufp->fullSData(oldp+897,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                          << 7U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                          >> 0x19U)))),12);
    bufp->fullIData(oldp+898,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+899,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+900,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+901,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullCData(oldp+902,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+903,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+904,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+905,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+906,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+907,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
    bufp->fullCData(oldp+908,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+909,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x19U))),5);
    bufp->fullBit(oldp+910,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
    bufp->fullCData(oldp+911,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+912,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0x19U))),5);
    bufp->fullCData(oldp+913,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                        >> 0xcU))),5);
    bufp->fullBit(oldp+914,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+915,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+916,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard));
    bufp->fullBit(oldp+917,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard));
    bufp->fullBit(oldp+918,(vlSelf->clk));
    bufp->fullBit(oldp+919,(vlSelf->reset));
    bufp->fullCData(oldp+920,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__store_req)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__c_state))
                                                   ? 2U
                                                   : 0U))),2);
    bufp->fullIData(oldp+921,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 3U)))
                                ? (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)))
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a)),32);
    bufp->fullIData(oldp+922,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+923,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+924,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+925,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullCData(oldp+926,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullIData(oldp+927,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->fullIData(oldp+928,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
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
    bufp->fullBit(oldp+929,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h8a01cdb0__0))))));
    bufp->fullIData(oldp+930,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x14U))]
                                : 0U)),32);
    bufp->fullIData(oldp+931,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x19U))]
                                : 0U)),32);
    bufp->fullCData(oldp+932,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullBit(oldp+933,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullCData(oldp+934,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                      ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff)
                                      : ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[2U] 
                                          << 2U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[1U] 
                                          >> 0x1eU))))),3);
    bufp->fullIData(oldp+935,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+936,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT____VdfgExtracted_hc559d527__1)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                : vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullBit(oldp+937,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr1_sign_ff)
                                    : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+938,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_stall)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_opr2_sign_ff)
                                    : (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+939,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ops_ff) 
                                      >> 2U) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_ff) 
                                                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__alu_d_ack_next)))))));
    bufp->fullBit(oldp+940,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
                             | (IData)(vlSelf->__VdfgTmp_hb736675d__0))));
    bufp->fullIData(oldp+941,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)
                                ? 0x13U : vlSelf->__VdfgTmp_h409023d6__0)),32);
    bufp->fullIData(oldp+942,((((- (IData)(((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__fetch_module__DOT__irq_req_next)) 
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
    bufp->fullBit(oldp+943,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
                             & ((IData)((0U != (0x802U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                             & ((IData)((0U != (0x3000402U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl[0U]))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_div_csr_req)))));
    bufp->fullBit(oldp+945,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 3U)))
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    bufp->fullBit(oldp+946,(vlSelf->pcore_tb__DOT__uart_tx));
    bufp->fullBit(oldp+947,(vlSelf->pcore_tb__DOT__spi_clk));
    bufp->fullBit(oldp+948,(vlSelf->pcore_tb__DOT__spi_cs));
    bufp->fullBit(oldp+949,(vlSelf->pcore_tb__DOT__spi_mosi));
    bufp->fullSData(oldp+950,(vlSelf->pcore_tb__DOT__gp_switch_i),16);
    bufp->fullSData(oldp+951,(vlSelf->pcore_tb__DOT__gp_led_o),16);
    bufp->fullWData(oldp+952,(vlSelf->pcore_tb__DOT__signature_file),1024);
    bufp->fullBit(oldp+984,(1U));
    bufp->fullBit(oldp+985,(vlSelf->pcore_tb__DOT__dut__DOT__bmem_sel));
    bufp->fullBit(oldp+986,(vlSelf->pcore_tb__DOT__dut__DOT__lsu_flush));
    bufp->fullBit(oldp+987,(vlSelf->pcore_tb__DOT__dut__DOT__irq_uart));
    bufp->fullBit(oldp+988,(vlSelf->pcore_tb__DOT__dut__DOT__irq_spi));
    bufp->fullIData(oldp+989,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__uart2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+990,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart2dbus))));
    bufp->fullIData(oldp+991,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__spi2dbus 
                                       >> 1U))),32);
    bufp->fullBit(oldp+992,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi2dbus))));
    bufp->fullBit(oldp+993,(1U));
    bufp->fullCData(oldp+994,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_A__DOT__gpio_pin_en),8);
    bufp->fullIData(oldp+995,(8U),32);
    bufp->fullCData(oldp+996,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_B__DOT__gpio_pin_en),8);
    bufp->fullCData(oldp+997,(vlSelf->pcore_tb__DOT__dut__DOT__gpio_top_module__DOT__gpio_C__DOT__gpio_pin_en),8);
    bufp->fullBit(oldp+998,(0U));
    bufp->fullIData(oldp+999,(vlSelf->pcore_tb__DOT__dut__DOT__m_7segcon1__DOT__i),32);
    bufp->fullIData(oldp+1000,(0U),25);
    bufp->fullCData(oldp+1001,(0U),4);
    bufp->fullCData(oldp+1002,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1003,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                      >> 1U))),3);
    bufp->fullCData(oldp+1004,((7U & ((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[2U] 
                                       << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[1U] 
                                                 >> 0x1eU)))),3);
    bufp->fullQData(oldp+1005,((0x1ffffffffULL & (((QData)((IData)(
                                                                   vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[1U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U])) 
                                                     >> 0x1dU)))),33);
    bufp->fullCData(oldp+1007,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x1aU))),3);
    bufp->fullCData(oldp+1008,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x18U))),2);
    bufp->fullCData(oldp+1009,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x15U))),3);
    bufp->fullCData(oldp+1010,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0x13U))),2);
    bufp->fullCData(oldp+1011,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                        >> 0xfU))),4);
    bufp->fullCData(oldp+1012,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+1013,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1014,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1015,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1016,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 8U))));
    bufp->fullCData(oldp+1017,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                      >> 5U))),3);
    bufp->fullBit(oldp+1018,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1019,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1020,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1021,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1022,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_ctrl_next[0U])));
    bufp->fullIData(oldp+1023,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1024,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1025,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1026,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1027,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1028,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1029,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1030,((1U & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__id2exe_data_next[0U])));
    bufp->fullIData(oldp+1031,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1032,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1033,(((vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1034,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U])),5);
    bufp->fullCData(oldp+1035,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next) 
                                      >> 1U))),3);
    bufp->fullBit(oldp+1036,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next))));
    bufp->fullIData(oldp+1037,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr2wrb_data_next),32);
    bufp->fullIData(oldp+1038,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__div2wrb_next),32);
    bufp->fullCData(oldp+1039,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_code),4);
    bufp->fullCData(oldp+1040,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_code),4);
    bufp->fullBit(oldp+1041,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req));
    bufp->fullBit(oldp+1042,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req));
    bufp->fullBit(oldp+1043,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req));
    bufp->fullBit(oldp+1044,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_lsu_pf_exc_req));
    bufp->fullBit(oldp+1045,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_ileg_inst_exc_req));
    bufp->fullBit(oldp+1046,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_i_pf_exc_req));
    bufp->fullBit(oldp+1047,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_break_exc_req));
    bufp->fullIData(oldp+1048,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__div),32);
    bufp->fullIData(oldp+1049,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__rem),32);
    bufp->fullBit(oldp+1050,(vlSelf->pcore_tb__DOT__dut__DOT__pipeline_top_module__DOT__divide_module__DOT__div_valid));
    bufp->fullIData(oldp+1051,(0x21U),32);
    bufp->fullIData(oldp+1052,(0x20U),32);
    bufp->fullCData(oldp+1053,(0U),2);
    bufp->fullCData(oldp+1054,(vlSelf->pcore_tb__DOT__dut__DOT__irq_uart),2);
    bufp->fullIData(oldp+1055,(0xffffffffU),32);
    bufp->fullIData(oldp+1056,(2U),32);
    bufp->fullIData(oldp+1057,(6U),32);
    bufp->fullIData(oldp+1058,(2U),32);
    bufp->fullIData(oldp+1059,(0U),32);
    bufp->fullIData(oldp+1060,(4U),32);
    bufp->fullIData(oldp+1061,(1U),32);
    bufp->fullIData(oldp+1062,(3U),32);
    bufp->fullIData(oldp+1063,(5U),32);
    bufp->fullIData(oldp+1064,(7U),32);
    bufp->fullIData(oldp+1065,(9U),32);
    bufp->fullIData(oldp+1066,(0xbU),32);
    bufp->fullIData(oldp+1067,(0x10U),32);
    bufp->fullIData(oldp+1068,(0x11U),32);
    bufp->fullIData(oldp+1069,(0x12U),32);
    bufp->fullIData(oldp+1070,(0x20U),32);
    bufp->fullIData(oldp+1071,(0x80U),32);
    bufp->fullIData(oldp+1072,(0x200U),32);
    bufp->fullIData(oldp+1073,(0x800U),32);
    bufp->fullIData(oldp+1074,(0x10000U),32);
    bufp->fullIData(oldp+1075,(0x20000U),32);
    bufp->fullIData(oldp+1076,(0x40000U),32);
    bufp->fullIData(oldp+1077,(0x70888U),32);
    bufp->fullIData(oldp+1078,(0x1888U),32);
    bufp->fullIData(oldp+1079,(2U),32);
    bufp->fullIData(oldp+1080,(0x1eU),32);
    bufp->fullIData(oldp+1081,(2U),32);
    bufp->fullIData(oldp+1082,(7U),32);
    bufp->fullIData(oldp+1083,(3U),32);
}
