import os
import shutil
import subprocess
import sys

def copy_file(src, dst):
    shutil.copy2(src, dst)
    print(f"Copied {src} to {dst}")

def copy_directory(src, dst):
    if os.path.exists(dst):
        shutil.rmtree(dst)
    shutil.copytree(src, dst)
    print(f"Copied contents from {src} to {dst}")

def run_command(command, cwd):
    result = subprocess.run(command, cwd=cwd, shell=True, capture_output=True, text=True)
    if result.returncode != 0:
        print(f"Command '{command}' failed with error:\n{result.stderr}")
        sys.exit(1)
    else:
        print(f"Command '{command}' executed successfully:\n{result.stdout}")

def read_test_case_number(file_path):
    try:
        with open(file_path, 'r') as file:
            test_case_number = file.read().strip()
            return test_case_number
    except FileNotFoundError:
        print(f"Error: The file {file_path} does not exist.")
        sys.exit(1)
    except Exception as e:
        print(f"Error reading {file_path}: {e}")
        sys.exit(1)

def main():
    rtl_directory = os.getcwd()
    current_test_case_dir = os.path.join(rtl_directory, "current_test_case")
    test_case_number_file = os.path.join(current_test_case_dir, "test_case_number.txt")
    print(f"Current directory: {rtl_directory}")
    print(f"Current directory: {test_case_number_file}")


    if not os.path.exists(current_test_case_dir):
        print(f"Warning: The directory {current_test_case_dir} does not exist.")
        test_case_number = read_test_case_number(test_case_number_file)
        test_case_dir = os.path.join(rtl_directory, f"test_cases/test_case_{test_case_number}")

    # Step 2: Copy program.hex to RTL directory
    src_program_hex = os.path.join(test_case_dir, "program.hex")
    dst_program_hex = os.path.join(rtl_directory, "program.hex")
    copy_file(src_program_hex, dst_program_hex)

    # Step 3: Copy test case contents to current_test_case directory
    copy_directory(test_case_dir, current_test_case_dir)

    # Step 4: Run the ./run command
    run_command("./run", rtl_directory)

    # Step 5: Copy output files to the outputs directories
    output_files = ["sim.log", "sim.vcd"]  # Add other files as needed
    for output_file in output_files:
        src_output_file = os.path.join(rtl_directory, output_file)
        if os.path.exists(src_output_file):
            dst_output_dir1 = os.path.join(current_test_case_dir, "outputs")
            dst_output_dir2 = os.path.join(test_case_dir, "outputs")
            os.makedirs(dst_output_dir1, exist_ok=True)
            os.makedirs(dst_output_dir2, exist_ok=True)
            copy_file(src_output_file, os.path.join(dst_output_dir1, output_file))
            copy_file(src_output_file, os.path.join(dst_output_dir2, output_file))
        else:
            print(f"Warning: {src_output_file} does not exist.")

if __name__ == "__main__":
    main()

# import subprocess

# def run_make(target=None):
#     """
#     Executes a make command optionally with a specified target.

#     :param target: The make target to build (e.g., 'all', 'clean'). If None, the default target is built.
#     :type target: str, optional
#     :return: The output from the make command.
#     :rtype: str
#     :raises subprocess.CalledProcessError: If the make command fails.
#     """
#     try:
#         # Construct the make command
#         command = ['make']
#         if target:
#             command.append(target)

#         # Execute the make command
#         result = subprocess.run(command, check=True, text=True, capture_output=True)

#         # Return the standard output from the command
#         return result.stdout

#     except subprocess.CalledProcessError as e:
#         # Handle errors in the make command
#         print(f"Make command failed with return code {e.returncode}")
#         print(f"Error output:\n{e.stderr}")
#         raise

# # Example usage:
# if __name__ == "__main__":
#     try:
#         output = run_make('clean')
#         output = run_make('sim')
#         print(f"Make command output:\n{output}")
#     except subprocess.CalledProcessError:
#         print("An error occurred while running the make command.")
