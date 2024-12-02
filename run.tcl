# Vivado TCL script to automate FPGA build process
# Variables
set project_name "mcu_nexys"
set rtl_dir "../rtl"
set constraints_dir "../constraints"
set top_module_name "soc_top"

# Extract the board name
set board_name [lindex $argv 0]

# Board-specific part numbers
set part_number "xc7a100tcsg324-1"

puts "Board name: $board_name"
puts "Using part number: $part_number"

# Create a new project
create_project $project_name ./project -part $part_number
set_property board_part digilentinc.com:nexys-a7-100t:part0:1.3 [current_project]

add_files -scan_for_includes {../rtl/core/pipeline_top.sv ../rtl/peripherals/spi/spi_top.sv ../rtl/core/reg_file.sv 
                ../rtl/core/forward_stall.sv ../rtl/peripherals/spi/spi_controller.sv ../rtl/defines/gpio_defs.svh 
                ../rtl/defines/m_ext_defs.svh ../rtl/peripherals/spi/spi_datapath.sv ../rtl/soc_top.sv 
                ../rtl/peripherals/gpio/gpio_special.sv ../rtl/peripherals/gpio/gpio_top.sv ../rtl/core/lsu.sv 
                ../rtl/peripherals/clint/clint.sv ../rtl/peripherals/spi/spi.sv ../rtl/defines/csr_defs.svh 
                ../rtl/peripherals/plic/plic_top.sv ../rtl/peripherals/gpio/gpio.sv 
                ../rtl/defines/pcore_interface_defs.svh ../rtl/defines/pcore_config_defs.svh 
                ../rtl/peripherals/plic/plic_gateway.sv ../rtl/peripherals/uart/uart_rx.sv 
                ../rtl/peripherals/plic/plic_target.sv ../rtl/defines/spi_defs.svh 
                ../rtl/interconnect/dbus_interconnect.sv ../rtl/core/writeback.sv ../rtl/core/csr.sv 
                ../rtl/peripherals/spi/spi_regs.sv ../rtl/defines/uart_defs.svh ../rtl/core/execute.sv 
                ../rtl/m_7segcon.sv ../rtl/peripherals/uart/uart_top.sv ../rtl/core/decode.sv 
                ../rtl/peripherals/spi/spi_fifo.sv ../rtl/peripherals/uart/uart_regs.sv 
                ../rtl/defines/a_ext_defs.svh ../rtl/peripherals/uart/uart_tx.sv ../rtl/peripherals/plic/plic_regs.sv 
                ../rtl/core/fetch.sv ../rtl/peripherals/uart/uart_fifo.sv ../rtl/core/divide.sv 
                ../rtl/memory/memory.sv ../rtl/peripherals/uart/uart.sv ../rtl/mcu_top.sv ../rtl/core/divider.sv 
                ../rtl/core/amo.sv ../rtl/defines/plic_defs.svh}


update_compile_order -fileset sources_1
file mkdir ../fpga/project/mcu_nexys.srcs/constrs_1

update_compile_order -fileset sources_1
add_files -fileset constrs_1 -norecurse ../constraints/uetmcu.xdc


# Set the top module
set_property top $top_module_name [current_fileset]

# Run synthesis
synth_design -top $top_module_name

# Run implementation
opt_design
place_design
route_design

# Generate bitstream
write_bitstream

puts "Process complete. Bitstream generated for $board_name."
exit
