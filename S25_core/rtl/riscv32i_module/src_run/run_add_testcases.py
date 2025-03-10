import os
import shutil
import subprocess
import sys
import argparse

def copy_directory(src, dst):
    """Copy contents from src directory to dst directory (overwrite if exists)."""
    if os.path.exists(dst):
        shutil.rmtree(dst)
    shutil.copytree(src, dst)
    print(f"Copied contents from {src} to {dst}")

def run_simulation(cwd):
    """Run the './run' command in the given directory and return True if successful."""
    print("Running simulation for verification...")
    result = subprocess.run("./run", cwd=cwd, shell=True, capture_output=True, text=True)
    if result.returncode != 0:
        print(f"Simulation failed with error:\n{result.stderr}")
        return False
    else:
        print(f"Simulation executed successfully:\n{result.stdout}")
        return True

def read_test_case_number(file_path):
    """Read the test case number from the specified file."""
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

def write_test_case_number(file_path, test_case_number):
    """Write the test case number to the specified file."""
    try:
        with open(file_path, 'w') as file:
            file.write(test_case_number)
            print(f"Wrote test case number {test_case_number} to {file_path}")
    except Exception as e:
        print(f"Error writing to {file_path}: {e}")
        sys.exit(1)

def main():
    parser = argparse.ArgumentParser(
        description="Add new test case from assembly_code into test_cases. Optionally run simulation for verification."
    )
    parser.add_argument("test_case", nargs="?", default=None, 
                        help="Test case number. If not provided, reads from assembly_code/test_case_number.txt")
    parser.add_argument("--sim", action="store_true", 
                        help="Run simulation to verify the test case before copying.")
    args = parser.parse_args()

    rtl_directory = os.getcwd()
    assembly_code_dir = os.path.join(rtl_directory, "assembly_code")
    test_case_number_file = os.path.join(assembly_code_dir, "test_case_number.txt")
    
    # Determine test case number from argument or file.
    if args.test_case is not None:
        test_case_number = args.test_case
        # Update the file with the new test case number.
        write_test_case_number(test_case_number_file, test_case_number)
    else:
        if os.path.exists(test_case_number_file):
            test_case_number = read_test_case_number(test_case_number_file)
        else:
            print("Error: No test case number provided and test_case_number.txt not found.")
            sys.exit(1)
    
    print(f"Using test case number: {test_case_number}")

    # Optional simulation verification.
    if args.sim:
        if not run_simulation(rtl_directory):
            print("Simulation failed. Aborting test case addition.")
            sys.exit(1)
        print("Simulation succeeded.")

    # Create target test case directory (overwrite if exists).
    target_test_case_dir = os.path.join(rtl_directory, "test_cases", f"test_case_{test_case_number}")
    copy_directory(assembly_code_dir, target_test_case_dir)

    print(f"Test case {test_case_number} has been added/updated successfully.")

if __name__ == "__main__":
    main()
