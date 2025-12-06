# TODO: save the result table as a csv file
# TODO: make everything a function
import subprocess
import sys
import re

# build result table
test_name = []
test_result = []
build_table = 0
table_index = 0

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

def get_file_name():
    fname = ""
    for arg in sys.argv:
        if arg.endswith(".v"):
            fname = fname + arg + " "
    return fname[:-1]

def get_run_number():
    return int(sys.argv[-1])

# get file_name and run_number from the user
file_name = get_file_name()
print(file_name)
run_numebr = get_run_number()

# run the testbench and collect the results from teminal output run_number times
for i in range(run_numebr):
    print(f"Run {i+1} / {run_numebr}")
    result = subprocess.run("python verify.py {}".format(file_name), shell=True, capture_output=True)
    log_out = extract_test_status(result.stdout.decode())
    [test_name_tmp, test_result_tmp] = collect_test_results(log_out)
    if not build_table:
        test_name = test_name_tmp
        test_result = test_result_tmp
        build_table = 1
    else:
        for i in range(len(test_result)):
            test_result[i] = test_result[i] + test_result_tmp[i]

# print the result table
for i in range(len(test_name)):
    print(f"Test {test_name[i]}: {test_result[i]} / {run_numebr}")



