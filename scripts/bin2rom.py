#!/usr/bin/env python3
import sys
import os

def binary_file_to_hex_txt(input_file, output_file):
    with open(input_file, 'rb') as f:
        binary_data = f.read()

    hex_data = '\n'.join(format(byte, '02X') for byte in binary_data)

    with open(output_file, 'w') as f:
        f.write(hex_data)
        print("output " + output_file)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: bin_to_hex <input_file>")
        sys.exit(1)
    
    input_path = sys.argv[1]
    directory = os.path.dirname(input_path)
    output_path = os.path.join(directory, "rom.txt")
    
    binary_file_to_hex_txt(input_path, output_path)
