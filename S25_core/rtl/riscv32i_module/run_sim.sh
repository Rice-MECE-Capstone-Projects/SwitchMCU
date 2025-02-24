verilator --binary -j 16 branch_prediction.v ins_mem.v branch_prediction_tb.v --trace --top branch_prediction_tb

./obj_dir/Vbranch_prediction_tb

gtkwave branch_prediction_tb.vcd
