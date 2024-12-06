def convert_bin_to_hex(input_bin, output_hex, start_address):
    with open(input_bin, 'rb') as bin_file, open(output_hex, 'w') as hex_file:
        # Write the starting address line
        hex_file.write(f"@{start_address:08X}\n")
        
        # Read 4 bytes at a time (32-bit word)
        while True:
            word = bin_file.read(4)
            if len(word) < 4:
                break  # Exit if we reach the end of the file
            
            # Convert the 4-byte word to a hexadecimal string, reversing the byte order to match little-endian
            hex_word = ''.join([f'{b:02X}' for b in word[::-1]])  # Reverse the byte order to match disassembly
            hex_file.write(hex_word + '\n')


# Call the function with the binary input, hex output, and starting address
convert_bin_to_hex('program.bin', 'program.hex', 0x00000100)
