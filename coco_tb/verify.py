import os
import sys
import subprocess

file_name = []

for i in range(len(sys.argv)):
    file_name.append(sys.argv[i])
file_name.pop(0)
assert(len(file_name) > 0), "Please provide file name"


if(len(file_name) == 1):
    DUTWAP_NAME = file_name[0].split('.')[0]+"_wrapper." + file_name[0].split('.')[1]
    TESTPY_NAME = "test_" + file_name[0].split('.')[0].replace("_swc","") + ".py"
    # Step 1: Create wrapper file
    os.system("python wrapper_maker.py {}".format(file_name[0].split('.')[0]))
    # Step 2: Create Makefile file
    os.system("python makefile_maker.py") 
    # Step 3: Run makefile
    os.system("make DUT={} DUTWAP={} TEST_PY={}".format(file_name[0], DUTWAP_NAME, TESTPY_NAME))
else:
    DUTWAP_NAME = ""
    TESTPY_NAME = "test_"
    # Step 0: Create wrapper file for each parameter
    print(file_name)
    for file in file_name:
        os.system("python wrapper_maker.py {}".format(file.split('.')[0]))
    # Step 1: Create top_module wrapper file
    result = subprocess.run("python v_connector.py {}".format(" ".join(file_name)), shell=True, capture_output=True)
    for line in result.stdout.decode().split("\n"):
        if line.startswith("*    Top Module:"):
            DUTWAP_NAME = line.split(":")[1].replace(" ", "").replace("*", "")
    TESTPY_NAME = TESTPY_NAME + DUTWAP_NAME.split('.')[0].replace("_top","") + ".py"
    # Step 2: Create Makefile file, add all source files
    os.system("python makefile_maker.py {}".format(" ".join(file_name))) 
    # Step 3: Run makefile
    # subprocess.run("make DUTWAP={} TEST_PY={}".format(DUTWAP_NAME, TESTPY_NAME), shell=True, capture_output=True)