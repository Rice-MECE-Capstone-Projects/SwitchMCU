import os

def hex_to_coe(hex_filename, coe_filename):
    """
    Converts a .hex file to a .coe file for Vivado BRAM initialization.
    
    Parameters:
        hex_filename (str): Path to the input .hex file.
        coe_filename (str): Path for the output .coe file.
    
    The .hex file format:
        - Lines starting with '@' are address markers and are skipped.
        - Other lines contain hexadecimal values.
    
    The .coe file format:
        memory_initialization_radix=16;
        memory_initialization_vector=
        <hex_value_1>,
        <hex_value_2>,
        ...
        <hex_value_n>;
    """
    hex_values = []

    # Read the .hex file and collect hex words (skipping address markers)
    with open(hex_filename, 'r') as infile:
        for line in infile:
            line = line.strip()
            if not line:
                continue  # skip empty lines
            if line.startswith('@'):
                # Optionally, you can use the address to add padding, but here we simply skip it.
                continue
            hex_values.append(line)

    # Write the .coe file
    with open(coe_filename, 'w') as outfile:
        outfile.write("memory_initialization_radix=16;\n")
        outfile.write("memory_initialization_vector=\n")
        # Write hex values separated by commas and newlines for clarity
        outfile.write(",\n".join(hex_values))
        outfile.write(";")
    
    print(f"Conversion complete: '{hex_filename}' -> '{coe_filename}'")

# Example usage:
if __name__ == "__main__":
        # Replace these with your file paths as needed
    input_hex_file = "program.hex"
    output_coe_file = "program.coe"
    hex_to_coe(input_hex_file, output_coe_file)
