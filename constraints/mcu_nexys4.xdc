## This file is a general .xdc for the UET-RVMCU to run on Nexys4 FPGA Board
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project

## Clock signal
set_property -dict { PACKAGE_PIN E3    IOSTANDARD LVCMOS33 } [get_ports { clk_100 }]; #IO_L12P_T1_MRCC_35 Sch=clk100mhz
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports {clk_100}];

#Switches
set_property -dict { PACKAGE_PIN U9   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[0] }]; #IO_L24N_T3_RS0_15 Sch=sw[0]
set_property -dict { PACKAGE_PIN U8   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[1] }]; #IO_L3N_T0_DQS_EMCCLK_14 Sch=sw[1]
set_property -dict { PACKAGE_PIN R7   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[2] }]; #IO_L6N_T0_D08_VREF_14 Sch=sw[2]
set_property -dict { PACKAGE_PIN R6   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[3] }]; #IO_L13N_T2_MRCC_14 Sch=sw[3]
set_property -dict { PACKAGE_PIN R5   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[4] }]; #IO_L12N_T1_MRCC_14 Sch=sw[4]
set_property -dict { PACKAGE_PIN V7   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[5] }]; #IO_L7N_T1_D10_14 Sch=sw[5]
set_property -dict { PACKAGE_PIN V6   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[6] }]; #IO_L17N_T2_A13_D29_14 Sch=sw[6]
set_property -dict { PACKAGE_PIN V5   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[7] }]; #IO_L5N_T0_D07_14 Sch=sw[7]
set_property -dict { PACKAGE_PIN U4    IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[8] }]; #IO_L24N_T3_34 Sch=sw[8]
set_property -dict { PACKAGE_PIN V2    IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[9] }]; #IO_25_34 Sch=sw[9]
set_property -dict { PACKAGE_PIN U2   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[10] }]; #IO_L15P_T2_DQS_RDWR_B_14 Sch=sw[10]
set_property -dict { PACKAGE_PIN T3   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[11] }]; #IO_L23P_T3_A03_D19_14 Sch=sw[11]
set_property -dict { PACKAGE_PIN T1    IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[12] }]; #IO_L24P_T3_35 Sch=sw[12]
set_property -dict { PACKAGE_PIN R3   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[13] }]; #IO_L20P_T3_A08_D24_14 Sch=sw[13]
set_property -dict { PACKAGE_PIN P3   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[14] }]; #IO_L19N_T3_A09_D25_VREF_14 Sch=sw[14]
set_property -dict { PACKAGE_PIN P4   IOSTANDARD LVCMOS33 } [get_ports { gp_switch_i[15] }]; #IO_L21P_T3_DQS_14 Sch=sw[15]

# LEDs
set_property -dict { PACKAGE_PIN T8   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[0] }]; #IO_L18P_T2_A24_15 Sch=led[0]
set_property -dict { PACKAGE_PIN V9   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[1] }]; #IO_L24P_T3_RS1_15 Sch=led[1]
set_property -dict { PACKAGE_PIN R8   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[2] }]; #IO_L17N_T2_A25_15 Sch=led[2]
set_property -dict { PACKAGE_PIN T6   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[3] }]; #IO_L8P_T1_D11_14 Sch=led[3]
set_property -dict { PACKAGE_PIN T5   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[4] }]; #IO_L7P_T1_D09_14 Sch=led[4]
set_property -dict { PACKAGE_PIN T4   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[5] }]; #IO_L18N_T2_A11_D27_14 Sch=led[5]
set_property -dict { PACKAGE_PIN U7   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[6] }]; #IO_L17P_T2_A14_D30_14 Sch=led[6]
set_property -dict { PACKAGE_PIN U6   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[7] }]; #IO_L18P_T2_A12_D28_14 Sch=led[7]
set_property -dict { PACKAGE_PIN V4   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[8] }]; #IO_L16N_T2_A15_D31_14 Sch=led[8]
set_property -dict { PACKAGE_PIN U3   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[9] }]; #IO_L14N_T2_SRCC_14 Sch=led[9]
set_property -dict { PACKAGE_PIN V1   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[10] }]; #IO_L22P_T3_A05_D21_14 Sch=led[10]
set_property -dict { PACKAGE_PIN R1   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[11] }]; #IO_L15N_T2_DQS_DOUT_CSO_B_14 Sch=led[11]
set_property -dict { PACKAGE_PIN P5   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[12] }]; #IO_L16P_T2_CSI_B_14 Sch=led[12]
set_property -dict { PACKAGE_PIN U1   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[13] }]; #IO_L22N_T3_A04_D20_14 Sch=led[13]
set_property -dict { PACKAGE_PIN R2   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[14] }]; #IO_L20N_T3_A07_D23_14 Sch=led[14]
set_property -dict { PACKAGE_PIN P2   IOSTANDARD LVCMOS33 } [get_ports { gp_led_o[15] }]; #IO_L21N_T3_DQS_A06_D22_14 Sch=led[15]


#Buttons
set_property -dict { PACKAGE_PIN C12   IOSTANDARD LVCMOS33 } [get_ports { rst_n }]; #IO_L3P_T0_DQS_AD1P_15 Sch=cpu_resetn
set_property -dict { PACKAGE_PIN E16   IOSTANDARD LVCMOS33 } [get_ports { irq_soft_i }]; #IO_L9P_T1_DQS_14 Sch=btnc
#set_property -dict { PACKAGE_PIN M18   IOSTANDARD LVCMOS33 } [get_ports { BTNU }]; #IO_L4N_T0_D05_14 Sch=btnu
#set_property -dict { PACKAGE_PIN P17   IOSTANDARD LVCMOS33 } [get_ports { BTNL }]; #IO_L12P_T1_MRCC_14 Sch=btnl
#set_property -dict { PACKAGE_PIN M17   IOSTANDARD LVCMOS33 } [get_ports { BTNR }]; #IO_L10N_T1_D15_14 Sch=btnr
#set_property -dict { PACKAGE_PIN P18   IOSTANDARD LVCMOS33 } [get_ports { BTND }]; #IO_L9N_T1_DQS_D13_14 Sch=btnd


#Pmod Headers
#Pmod Header JA
set_property -dict { PACKAGE_PIN B13   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[0] }]; #IO_L20N_T3_A19_15 Sch=ja[1]
set_property -dict { PACKAGE_PIN F14   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[1] }]; #IO_L21N_T3_DQS_A18_15 Sch=ja[2]
set_property -dict { PACKAGE_PIN D17   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[2] }]; #IO_L21P_T3_DQS_15 Sch=ja[3]
set_property -dict { PACKAGE_PIN E17   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[3] }]; #IO_L18N_T2_A23_15 Sch=ja[4]
set_property -dict { PACKAGE_PIN G13   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[4] }]; #IO_L16N_T2_A27_15 Sch=ja[7]
set_property -dict { PACKAGE_PIN C17   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[5] }]; #IO_L16P_T2_A28_15 Sch=ja[8]
set_property -dict { PACKAGE_PIN D18   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[6] }]; #IO_L22N_T3_A16_15 Sch=ja[9]
set_property -dict { PACKAGE_PIN E18   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[7] }]; #IO_L22P_T3_A17_15 Sch=ja[10]

#Pmod Header JB
# #7 segment display
set_property -dict { PACKAGE_PIN L3   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[8] }]; #IO_L1P_T0_AD0P_15 Sch=jb[1]=ca
set_property -dict { PACKAGE_PIN N1   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[9] }]; #IO_L14N_T2_SRCC_15 Sch=jb[2]=cb
set_property -dict { PACKAGE_PIN L5   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[10] }]; #IO_L13N_T2_MRCC_15 Sch=jb[3]=cc
set_property -dict { PACKAGE_PIN L4   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[11] }]; #IO_L15P_T2_DQS_15 Sch=jb[4]=cd
set_property -dict { PACKAGE_PIN K3   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[12] }]; #IO_L11N_T1_SRCC_15 Sch=jb[7]=ce
set_property -dict { PACKAGE_PIN M2   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[13] }]; #IO_L5P_T0_AD9P_15 Sch=jb[8]=cf
set_property -dict { PACKAGE_PIN L6   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[14] }]; #IO_0_15 Sch=jb[9]=cg
set_property -dict { PACKAGE_PIN M4   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[15] }]; #IO_L13P_T2_MRCC_15 Sch=jb[10]=dot

# #7 segment display
# set_property -dict { PACKAGE_PIN L3   IOSTANDARD LVCMOS33 } [get_ports { r_sg[7] }]; #IO_L24N_T3_A00_D16_14 Sch=ca
# set_property -dict { PACKAGE_PIN N1   IOSTANDARD LVCMOS33 } [get_ports { r_sg[6] }]; #IO_25_14 Sch=cb
# set_property -dict { PACKAGE_PIN L5   IOSTANDARD LVCMOS33 } [get_ports { r_sg[5] }]; #IO_25_15 Sch=cc
# set_property -dict { PACKAGE_PIN L4   IOSTANDARD LVCMOS33 } [get_ports { r_sg[4] }]; #IO_L17P_T2_A26_15 Sch=cd
# set_property -dict { PACKAGE_PIN K3   IOSTANDARD LVCMOS33 } [get_ports { r_sg[3] }]; #IO_L13P_T2_MRCC_14 Sch=ce
# set_property -dict { PACKAGE_PIN M2   IOSTANDARD LVCMOS33 } [get_ports { r_sg[2] }]; #IO_L19P_T3_A10_D26_14 Sch=cf
# set_property -dict { PACKAGE_PIN L6   IOSTANDARD LVCMOS33 } [get_ports { r_sg[1] }]; #IO_L4P_T0_D04_14 Sch=cg
# set_property -dict { PACKAGE_PIN M4   IOSTANDARD LVCMOS33 } [get_ports { r_sg[0] }]; #IO_L19N_T3_A21_VREF_15 Sch=dp
# set_property -dict { PACKAGE_PIN N6   IOSTANDARD LVCMOS33 } [get_ports { r_an[0] }]; #IO_L23P_T3_FOE_B_15 Sch=an[0]
# set_property -dict { PACKAGE_PIN M6   IOSTANDARD LVCMOS33 } [get_ports { r_an[1] }]; #IO_L23N_T3_FWE_B_15 Sch=an[1]
# set_property -dict { PACKAGE_PIN M3    IOSTANDARD LVCMOS33 } [get_ports { r_an[2] }]; #IO_L24P_T3_A01_D17_14 Sch=an[2]
# set_property -dict { PACKAGE_PIN N5   IOSTANDARD LVCMOS33 } [get_ports { r_an[3] }]; #IO_L19P_T3_A22_15 Sch=an[3]
# set_property -dict { PACKAGE_PIN N2   IOSTANDARD LVCMOS33 } [get_ports { r_an[4] }]; #IO_L8N_T1_D12_14 Sch=an[4]
# set_property -dict { PACKAGE_PIN N4   IOSTANDARD LVCMOS33 } [get_ports { r_an[5] }]; #IO_L14P_T2_SRCC_14 Sch=an[5]
# set_property -dict { PACKAGE_PIN L1    IOSTANDARD LVCMOS33 } [get_ports { r_an[6] }]; #IO_L23P_T3_35 Sch=an[6]
# set_property -dict { PACKAGE_PIN M1   IOSTANDARD LVCMOS33 } [get_ports { r_an[7] }]; #IO_L23N_T3_A02_D18_14 Sch=an[7]


#Pmod Header JC
# #7 segment display
set_property -dict { PACKAGE_PIN N6    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[23] }]; #IO_L23N_T3_35 Sch=jc[1]=an[0]
set_property -dict { PACKAGE_PIN M6    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[22] }]; #IO_L19N_T3_VREF_35 Sch=jc[2]=an[1]
set_property -dict { PACKAGE_PIN M3    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[21] }]; #IO_L22N_T3_35 Sch=jc[3]=an[2]
set_property -dict { PACKAGE_PIN N5    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[20] }]; #IO_L19P_T3_35 Sch=jc[4]=an[3]
set_property -dict { PACKAGE_PIN N2    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[19] }]; #IO_L6P_T0_35 Sch=jc[7]=an[4]
set_property -dict { PACKAGE_PIN N4    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[18] }]; #IO_L22P_T3_35 Sch=jc[8]=an[5]
set_property -dict { PACKAGE_PIN L1    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[17] }]; #IO_L21P_T3_DQS_35 Sch=jc[9]=an[6]
set_property -dict { PACKAGE_PIN M1    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[16] }]; #IO_L5P_T0_AD13P_35 Sch=jc[10]=an[7]

#Pmod Header JD
set_property -dict { PACKAGE_PIN H4    IOSTANDARD LVCMOS33 } [get_ports { spi_clk_o[1] }]; #IO_L21N_T3_DQS_35 Sch=jd[1]
set_property -dict { PACKAGE_PIN H1    IOSTANDARD LVCMOS33 } [get_ports { spi_cs_o[1] }]; #IO_L17P_T2_35 Sch=jd[2]
set_property -dict { PACKAGE_PIN G1    IOSTANDARD LVCMOS33 } [get_ports { spi_miso_i[1] }]; #IO_L17N_T2_35 Sch=jd[3]
set_property -dict { PACKAGE_PIN G3    IOSTANDARD LVCMOS33 } [get_ports { spi_mosi_o[1] }]; #IO_L20N_T3_35 Sch=jd[4]
set_property -dict { PACKAGE_PIN H2    IOSTANDARD LVCMOS33 } [get_ports { uart_rxd_i[1] }]; #IO_L15P_T2_DQS_35 Sch=jd[7]
set_property -dict { PACKAGE_PIN G4    IOSTANDARD LVCMOS33 } [get_ports { uart_txd_o[1] }]; #IO_L20P_T3_35 Sch=jd[8]
#set_property -dict { PACKAGE_PIN G2    IOSTANDARD LVCMOS33 } [get_ports { JD[9] }]; #IO_L15N_T2_DQS_35 Sch=jd[9]
#set_property -dict { PACKAGE_PIN F3    IOSTANDARD LVCMOS33 } [get_ports { JD[10] }]; #IO_L13N_T2_MRCC_35 Sch=jd[10]

#Accelerometer
set_property -dict { PACKAGE_PIN D13   IOSTANDARD LVCMOS33 } [get_ports { spi_miso_i[0] }]; #IO_L11P_T1_SRCC_15 Sch=acl_miso
set_property -dict { PACKAGE_PIN B14   IOSTANDARD LVCMOS33 } [get_ports { spi_mosi_o[0] }]; #IO_L5N_T0_AD9N_15 Sch=acl_mosi
set_property -dict { PACKAGE_PIN D15   IOSTANDARD LVCMOS33 } [get_ports { spi_clk_o[0] }]; #IO_L14P_T2_SRCC_15 Sch=acl_sclk
set_property -dict { PACKAGE_PIN C15   IOSTANDARD LVCMOS33 } [get_ports { spi_cs_o[0] }]; #IO_L12P_T1_MRCC_15 Sch=acl_csn
#set_property -dict { PACKAGE_PIN B13   IOSTANDARD LVCMOS33 } [get_ports { ACL_INT[1] }]; #IO_L2P_T0_AD8P_15 Sch=acl_int[1]
#set_property -dict { PACKAGE_PIN C16   IOSTANDARD LVCMOS33 } [get_ports { ACL_INT[2] }]; #IO_L20P_T3_A20_15 Sch=acl_int[2]

##USB-RS232 Interface
set_property -dict { PACKAGE_PIN C4    IOSTANDARD LVCMOS33 } [get_ports { uart_rxd_i[0]}]; #IO_L7P_T1_AD6P_35 Sch=uart_txd_in
set_property -dict { PACKAGE_PIN D4    IOSTANDARD LVCMOS33 } [get_ports { uart_txd_o[0] }]; #IO_L11N_T1_SRCC_35 Sch=uart_rxd_out


