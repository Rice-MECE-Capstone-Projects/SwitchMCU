import os
import subprocess
import sys

def run_test_case(test_case):
    """
    Check if the test case directory exists; if it does, run run_single_test_case.py for that test case.
    """
    cwd = os.getcwd()
    test_case_dir = os.path.join(cwd, "test_cases", f"test_case_{test_case}")
    
    if not os.path.exists(test_case_dir):
        print(f"Test case directory {test_case_dir} does not exist. Skipping test case {test_case}.")
        return

    command = f"python run_single_test_case.py {test_case}"
    print(f"Running: {command}")
    result = subprocess.run(command, shell=True)
    if result.returncode != 0:
        print(f"Test case {test_case} FAILED with return code {result.returncode}.")
    else:
        print(f"Test case {test_case} succeeded.")

def check_simulation_result(test_case):
    """
    Check the sim.log file for the pass string.
    Expected sim.log path: test_cases/test_case_{test_case}/outputs/sim.log
    Returns a string summarizing the result.
    """
    cwd = os.getcwd()
    sim_log_path = os.path.join(cwd, "test_cases", f"test_case_{test_case}", "outputs", "sim.log")
    
    if not os.path.exists(sim_log_path):
        return f"Test case {test_case}: sim.log not found. (FAIL)"
    
    with open(sim_log_path, 'r') as f:
        content = f.read()
        if "----TB FINISH:Test Passed----" in content:
            return f"Test case {test_case}: PASSED"
        else:
            return f"Test case {test_case}: FAILED (Pass string not found)"

def main():
    num_test_cases = 12
    # Determine test cases: if provided via command-line, use them; otherwise, use default list.
    if len(sys.argv) > 1:
        test_cases = sys.argv[1:]
    else:
        # Default test case numbers (adjust as needed)
        test_cases = [str(i) for i in range(num_test_cases+1)]
    
    # Run each test case.
    for tc in test_cases:
        run_test_case(tc)
    
    print("\n--- Test Results Summary ---")
    # After running all test cases, check sim.log for each.
    for tc in test_cases:
        result = check_simulation_result(tc)
        print(result)

if __name__ == "__main__":
    main()
