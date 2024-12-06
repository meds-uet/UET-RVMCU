# Vivado TCL script to automate FPGA build process for multiple boards
# Variables
set project_name "mcu_nexys"
set rtl_dir "../rtl"
set constraints_dir "../constraints"
set top_module_name "soc_top"

# Get board selection from command-line arguments
if {[llength $argv] == 0} {
    puts "Error: No board specified. Run 'make fpga BOARD=Nexys4' or 'make fpga BOARD=NexysA7'."
    exit 1
}
set board_selection [lindex $argv 0]

# Board-specific configurations
if { $board_selection == "Nexys4" } {
    set board_name "Nexys4"
    set part_number "xc7a100tcsg324-1"
    set constraints_file "$constraints_dir/mcu_nexys4.xdc"
    set board_part "digilentinc.com:nexys4:part0:1.1"
} elseif { $board_selection == "NexysA7" } {
    set board_name "Nexys A7"
    set part_number "xc7a100tcsg324-1"
    set constraints_file "$constraints_dir/mcu_nexysA7.xdc"
    set board_part "digilentinc.com:nexys-a7-100t:part0:1.3"
} else {
    puts "Error: Invalid board specified. Use 'Nexys4' or 'NexysA7'."
    exit 1
}

puts "Using board: $board_name"
puts "Using part number: $part_number"
puts "Using constraints file: $constraints_file"

# Create a new project
create_project $project_name ./project -part $part_number
set_property board_part $board_part [current_project]

# Add RTL files
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

# Set constraints file
add_files -fileset constrs_1 -norecurse $constraints_file

# Set the top module
set_property top $top_module_name [current_fileset]

# Run synthesis
launch_runs synth_1 -jobs 8
wait_on_run synth_1

# Run implementation
launch_runs impl_1 -jobs 8
wait_on_run impl_1

# Generate bitstream
launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1

puts "Process complete. Bitstream generated for $board_name."
exit
