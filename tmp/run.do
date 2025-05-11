vlib work
vlog amba_ahb2m2s.v
vlog ahb_slave_memory.sv
vlog m1s1_slave_tb.sv

vsim m1s1_slave_tb

# Add general system signals
add wave -divider "System"
add wave -hex sim:/m1s1_slave_tb/HCLK
add wave -hex sim:/m1s1_slave_tb/HRESETn

# Add Master 0 signals
add wave -divider "Master 0"
add wave -hex sim:/m1s1_slave_tb/M0_HBUSREQ
add wave -hex sim:/m1s1_slave_tb/M0_HGRANT
add wave -hex sim:/m1s1_slave_tb/M0_HADDR
add wave -hex sim:/m1s1_slave_tb/M0_HTRANS
add wave -hex sim:/m1s1_slave_tb/M0_HWRITE
add wave -hex sim:/m1s1_slave_tb/M0_HWDATA

# Add Slave 0 signals
add wave -divider "Slave 0"
add wave -hex sim:/m1s1_slave_tb/S0_HSEL
add wave -hex sim:/m1s1_slave_tb/S0_HREADY
add wave -hex sim:/m1s1_slave_tb/S0_HRESP
add wave -hex sim:/m1s1_slave_tb/S0_HRDATA

# Add interconnect output (read results)
add wave -divider "Read Data"
add wave -hex sim:/m1s1_slave_tb/M_HRDATA
add wave -hex sim:/m1s1_slave_tb/M_HREADY
add wave -hex sim:/m1s1_slave_tb/M_HRESP

# Memory
add wave /m1s1_slave_tb/mem/mem

run -all
