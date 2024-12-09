# Variables
set bitstream_file "project/mcu_nexys.runs/impl_1/soc_top.bit"
# Automatically selects the first connected device
# Open the hardware manager
open_hw
connect_hw_server

# Program FPGA with the bitstream
puts "Programming FPGA with $bitstream_file"
open_hw_target
current_hw_device [get_hw_devices xc7a100t_0]
refresh_hw_device -update_hw_probes false [lindex [get_hw_devices xc7a100t_0] 0]

set_property PROBES.FILE {} [get_hw_devices xc7a100t_0]
set_property FULL_PROBES.FILE {} [get_hw_devices xc7a100t_0]
set_property PROGRAM.FILE {./project/mcu_nexys.runs/impl_1/soc_top.bit} [get_hw_devices xc7a100t_0]
program_hw_devices [get_hw_devices xc7a100t_0]
refresh_hw_device [lindex [get_hw_devices xc7a100t_0] 0]


puts "Bitfile Uploaded successfully!"
close_hw
exit

