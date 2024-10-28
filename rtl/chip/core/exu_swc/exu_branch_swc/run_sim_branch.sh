verilator --binary -j 16 exu_branch_swc.v exu_branch_tb.v --trace --top exu_branch_tb

./obj_dir/Vexu_branch_tb

gtkwave exu_branch_tb.vcd
