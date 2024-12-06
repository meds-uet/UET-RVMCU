# Python script to split an instruction memory hex file into 4 memory bank files

# Input file name
input_file = "imem.txt"

# Output files for the 4 memory banks
output_files = [
    "MEM_BANK_3.txt",
    "MEM_BANK_2.txt",
    "MEM_BANK_1.txt",
    "MEM_BANK_0.txt"
]

# Function to write memory bank files
def create_memory_bank_files(input_file, output_files):
    try:
        # Read the input hex file
        with open(input_file, "r") as infile:
            hex_lines = infile.readlines()

        # Memory bank data
        memory_banks = [[] for _ in range(4)]

        # Process each instruction
        address = 0
        for line in hex_lines:
            line = line.strip()
            if not line:  # Skip empty lines
                continue
            
            # Ensure line length matches 4 bytes (8 characters)
            if len(line) != 8:
                raise ValueError(f"Invalid instruction length in line: {line}")

            # Split the 32-bit instruction into 4 bytes
            bytes_list = [line[i:i+2] for i in range(0, 8, 2)]

            # Assign bytes to their respective memory banks
            for i, byte in enumerate(bytes_list):
                memory_banks[i].append(f"0x{address:08X} 0x{byte.upper()}")

            # Increment the address by 4 (size of each instruction)
            address += 4

        # Write memory banks to their respective files
        for i, mem_bank in enumerate(memory_banks):
            with open(output_files[i], "w") as outfile:
                outfile.write("\n".join(mem_bank))
        print("Memory bank files created successfully.")

    except Exception as e:
        print(f"Error: {e}")

# Call the function
create_memory_bank_files(input_file, output_files)

