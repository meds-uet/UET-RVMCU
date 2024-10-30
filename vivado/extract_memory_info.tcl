#open_run synth_1 -name synth_1
#open_run impl_1

# Get the list of all the memory instances in the design
set mems [get_cells -hierarchical -filter {is_memory == 1}]

# Open a file for writing
set output_file [open "memory_info.txt" "w"]

# Iterate through each memory instance and print details
foreach mem $mems {
    puts "Memory Instance: $mem"

    # Get the properties of the memory
    set mem_info [get_property * $mem]

    # Iterate through each memory instance and print details
foreach mem $mems {
    puts $output_file "Memory Instance: $mem"
    puts $output_file "  - Type: [get_property RAM_STYLE $mem]"
    puts $output_file "  - Size: [get_property SIZE $mem]"
    puts $output_file "  - Depth: [get_property DEPTH $mem]"
    puts $output_file "  - Width: [get_property WIDTH $mem]"
}

    # Additional properties can be added as needed
}

# Close the file
close $output_file