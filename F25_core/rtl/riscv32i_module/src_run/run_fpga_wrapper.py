import os
import re

def process_output_file(filepath, action='comment'):
    """
    Process a file by adding or removing comment markers for the lines between
    the start and end marker comments.
    
    Parameters:
        filepath (str): Path to the file to be processed.
        action (str): Either 'comment' to add extra comment markers or 'uncomment'
                      to remove them.
    """
    # Regex patterns to identify the marker lines
    start_marker = re.compile(r'//\s*MARKER AUTOMATED HERE START')
    end_marker = re.compile(r'//\s*MARKER AUTOMATED HERE END')

    with open(filepath, 'r') as file:
        lines = file.readlines()

    new_lines = []
    inside_marker = False

    for line in lines:
        if start_marker.search(line):
            inside_marker = True
            new_lines.append(line)
            continue

        if end_marker.search(line):
            inside_marker = False
            new_lines.append(line)
            continue

        if inside_marker:
            if action == 'comment':
                # Add an extra comment marker to the line
                line = '// ' + line
            elif action == 'uncomment':
                # Remove one level of comment (only if present)
                if line.lstrip().startswith('//'):
                    line = re.sub(r'^(\s*)//\s?', r'\1', line, count=1)
        new_lines.append(line)

    with open(filepath, 'w') as file:
        file.writelines(new_lines)

def combine_verilog_files(verilog_files, output_folder="FPGA_wrapper", 
                          output_filename="riscv32i.v", auto_comment=None):
    """
    Combines multiple Verilog files into a single output file, ensuring that
    the first file in the list appears at the top. Optionally processes the 
    output file to automatically comment or uncomment lines between markers.
    
    Parameters:
        verilog_files (list): List of paths to Verilog files to be combined.
        output_folder (str): Folder where the combined file will be stored.
        output_filename (str): Name of the combined output file.
        auto_comment (str, optional): If set to 'comment' or 'uncomment', processes
                                      the output file accordingly.
    
    Returns:
        str: Path to the combined output file.
    """
    # Create the output folder if it doesn't exist
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
    
    output_path = os.path.join(output_folder, output_filename)
    
    with open(output_path, 'w') as outfile:
        # Ensure there is at least one file provided
        if verilog_files:
            # Process the first file so its content is at the top
            first_file = verilog_files[0]
            try:
                with open(first_file, 'r') as infile:
                    contents = infile.read()
                    outfile.write(f"// Begin contents of {first_file}\n")
                    outfile.write(contents)
                    outfile.write(f"\n// End contents of {first_file}\n\n")
            except IOError as e:
                print(f"Error reading {first_file}: {e}")
            
            # Process the rest of the files in order
            for file_path in verilog_files[1:]:
                try:
                    with open(file_path, 'r') as infile:
                        contents = infile.read()
                        outfile.write(f"// Begin contents of {file_path}\n")
                        outfile.write(contents)
                        outfile.write(f"\n// End contents of {file_path}\n\n")
                except IOError as e:
                    print(f"Error reading {file_path}: {e}")
        else:
            print("No Verilog files provided.")
    
    print(f"Combined file created at: {output_path}")
    
    # If auto_comment is specified, process the output file accordingly.
    if auto_comment in ['comment', 'uncomment']:
        process_output_file(output_path, action=auto_comment)
        print(f"Output file processed with action: {auto_comment}")

    return output_path

# Example usage:
if __name__ == "__main__":
    # List of verilog file paths (first file will appear at the top)
    verilog_files = [
        "params.vh",
        "riscv32i.v",
        "ins_mem.v",
        "decode.v",
        "regfile.v",
        "excute.v",
        # "debug.v",
        "pc.v",
        "dataMem.v",
        "hazard.v"
    ]
    
    # To enable automated commenting, set auto_comment to 'comment' or 'uncomment'
    combine_verilog_files(verilog_files, auto_comment='comment')
    # combine_verilog_files(verilog_files, auto_comment='uncomment')
