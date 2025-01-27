import os
import sys

if len(sys.argv) > 1:
    file_name = sys.argv[1]
else:
    file_name = ""
    assert "Please enter file name"

DUTWAP_NAME = file_name.split('.')[0]+"_wrapper." + file_name.split('.')[1]
TESTPY_NAME = "test_" + file_name.split('.')[0].replace("_swc","") + ".py"

# Step 1: Create wrapper file
os.system("python top_wrapper_maker.py {}".format(file_name.split('.')[0]))
# Step 2: Run makefile
os.system("make DUT={} DUTWAP={} TEST_PY={}".format(file_name, DUTWAP_NAME, TESTPY_NAME))