# Variables
set bitstream_file "project/mcu_nexys.runs/impl_1/soc_top.bit"
set target_device [lindex [get_hw_devices] 0] 
# Automatically selects the first connected device

# Parse arguments from Makefile
if {[info exists argv]} {
    # Initialize `mem_files` as an array by using it directly in a loop or setting its elements
    foreach arg $argv {
        if {[regexp -- {--mem_bank_(\d+)=(.+)} $arg match bank file]} {
            set mem_files($bank) $file
        }
    }
}

# Debug: Print out the array contents
foreach key [array names mem_files] {
    puts "mem_files($key) = $mem_files($key)"
}


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

# Define a helper procedure to read a file line by line
proc readfile {filename} {
    set fileId [open $filename r]
    set data [split [read $fileId] \n]
    close $fileId
    return $data
}

# Update memory for each bank
foreach bank [array names mem_files] {
    puts "Loading memory for bank $bank from file: $mem_files($bank)"
    set mem_data [readfile $mem_files($bank)]
    foreach line $mem_data {
        # Parse each line of the memory file
        set address [lindex $line 0]  ; # Memory address
        set data [lindex $line 1]     ; # Memory data
        update_hw_mem $address $data      ; # Write data to memory
    }
}

puts "Memory banks updated successfully!"
close_hw
exit

