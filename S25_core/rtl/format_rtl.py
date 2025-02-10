import os
import re
import sys 
def process_verilog_code(directory, action='comment'):
    # Regex patterns to identify the markers
    start_marker = re.compile(r'//\s*MARKER AUTOMATED HERE START')
    end_marker = re.compile(r'//\s*MARKER AUTOMATED HERE END')

    # Iterate over all Verilog files in the given directory
    for filename in os.listdir(directory):
        if filename.endswith('.v'):
            filepath = os.path.join(directory, filename)
            with open(filepath, 'r') as file:
                lines = file.readlines()

            # Process the file content
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
                        # Add an extra comment marker to each line
                        line = '// ' + line
                    elif action == 'uncomment':
                        # Uncomment only the additional comment markers
                        if line.lstrip().startswith('//'):
                            line = re.sub(r'^(\s*)//\s?', r'\1', line, count=1)

                new_lines.append(line)

            # Write the modified content back to the file
            with open(filepath, 'w') as file:
                file.writelines(new_lines)

# Set these variables directly
DIRECTORY_PATH = '/mnt/c/Users/Turog/vivado_projs/riscV_proj/SwitchMCU/S25_core/rtl/riscv32i_module'
# ACTION = 'comment'  # Change to 'uncomment' if needed
# ACTION = 'uncomment'  # Change to 'uncomment' if needed

# if ACTION not in ['comment', 'uncomment']:
#     print("Invalid action. Please set ACTION to 'comment' or 'uncomment'.")
# else:
#     process_verilog_code(DIRECTORY_PATH, ACTION)
#     print(f"Verilog files have been processed with action: {ACTION}.")


if __name__ == '__main__':
    if len(sys.argv) != 3 or sys.argv[1] not in ['C', 'U']:
        print("Usage: python script.py [C|U] <directory_path>")
        print("C - Comment, U - Uncomment")
        sys.exit(1)

    ACTION = 'comment' if sys.argv[1] == 'C' else 'uncomment'
    DIRECTORY_PATH = sys.argv[2]

    process_verilog_code(DIRECTORY_PATH, ACTION)
    print(f"Verilog files have been processed with action: {ACTION}.")