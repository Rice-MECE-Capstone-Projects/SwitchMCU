import subprocess
import sys
import re
import csv

def extract_test_status(log_text):
    test_results = {}
    pattern = r"\*\* (\S+)\s+(PASS|FAIL|SKIP)\s+"

    for match in re.finditer(pattern, log_text):
        test_name, status = match.groups()
        test_results[test_name] = status

    return test_results

def collect_test_results(log):
    test_names = list(log.keys())
    test_statuses = [1 if status == "PASS" else 0 for status in log.values()]
    return [test_names, test_statuses]

def extract_failure_debug(log_text, test_name):
    lines = log_text.splitlines()
    collected = []
    recording = False

    for i, line in enumerate(lines):
        print(line)
        # Start collecting after this exact match
        if f"** {test_name}   FAIL" in line:
            recording = True

        if recording:
            # Stop when another test summary or the next test starts
            if "** test_" in line and f"** {test_name}" not in line:
                break

            # Collect all lines from the test's DUT logger
            if "cocotb.decode_execute_regfile" in line:
                collected.append(line)

    return collected

def get_run_number():
    return int(sys.argv[-1])

def run_tests(filename: str, test_py: str, runs: int):
    test_name = []
    test_result = []
    build_table = False

    for run in range(runs):
        print(f"\n--- Run {run+1} / {runs} ---")
        result = subprocess.run(
            ["make", f"DUT={filename}", f"DUTWAP={filename}", f"TEST_PY={test_py}"],
            capture_output=True,
            text=True
        )

        # Merge stdout and stderr so we get cocotb logs too
        full_log = result.stdout + result.stderr

        log_out = extract_test_status(full_log)
        [test_name_tmp, test_result_tmp] = collect_test_results(log_out)

        if not build_table:
            test_name = test_name_tmp
            test_result = test_result_tmp
            build_table = True
        else:
            for i in range(len(test_result)):
                test_result[i] += test_result_tmp[i]

        # Print debug logs for failed tests
        for test, status in log_out.items():
            if status != "PASS":
                print(f"[FAIL] {test}")
                debug_lines = extract_failure_debug(full_log, test)
                if debug_lines:
                    print("---- Failure Debug Info ----")
                    for line in debug_lines:
                        print(line)
                    print("-----------------------------")
                else:
                    print("(No debug info found)")
    
    return test_name, test_result

def print_results(test_name, test_result, run_number):
    print("\n=== Final Test Results ===")
    for i in range(len(test_name)):
        print(f"Test {test_name[i]}: {test_result[i]} / {run_number}")

def save_csv(test_name, test_result, run_number, filename="results.csv"):
    with open(filename, "w", newline="") as f:
        writer = csv.writer(f)
        writer.writerow(["Test Name", "Pass Count", "Total Runs"])
        for name, result in zip(test_name, test_result):
            writer.writerow([name, result, run_number])
    print(f"\nResults saved to {filename}")

# === Main ===
if __name__ == "__main__":
    # Customize these:
    verilog_file = "decode_execute.v"
    testbench_file = "test_decode_execute.py"
    run_number = get_run_number()

    test_name, test_result = run_tests(verilog_file, testbench_file, run_number)
    print_results(test_name, test_result, run_number)
    # Uncomment to save
    # save_csv(test_name, test_result, run_number)