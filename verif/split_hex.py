import os
import sys

# Function to split hex values by bytes into separate files
def split_hex_values_by_bytes(input_file):
    # Open the input file and read the content
    with open(input_file, 'r') as f:
        lines = f.readlines()

    # Extract the '@0' header and the hex values
    header = '@0' # This is '@0'
    hex_values = [line.strip() for line in lines[0:] if line.strip()]  # List of hex values

    # Get the directory of the input file to output in the same folder
    output_dir = os.path.dirname(input_file)

    # Open four output files in the same directory as the input file
    output_files = [open(os.path.join(output_dir, f'imem_{i+1}.txt'), 'w') for i in range(4)]

    # Write the header '@0' to each output file
    for f in output_files:
        f.write(f'{header}\n')

    # Traverse each hex value and split into bytes
    for hex_value in hex_values:
        if len(hex_value) != 8:
            raise ValueError(f"Invalid hex value length in: {hex_value}. Must be 8 characters long.")
        
        # Split into two-character chunks (bytes) and write to respective files
        for i in range(4):
            output_files[i].write(f'{hex_value[i*2:i*2+2]}\n')

    # Close all output files
    for f in output_files:
        f.close()

# Main function to handle command-line input
if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python split_hex.py <input_file>")
        sys.exit(1)

    # Get the input file from the command-line arguments
    input_file = sys.argv[1]

    # Ensure that the input file exists
    if not os.path.isfile(input_file):
        print(f"Error: File '{input_file}' not found.")
        sys.exit(1)

    # Run the hex splitting function
    split_hex_values_by_bytes(input_file)
    print(f"Hex values successfully split into files in the '{os.path.dirname(input_file)}' directory.")
