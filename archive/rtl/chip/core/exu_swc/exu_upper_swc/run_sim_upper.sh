verilator --binary -j 16 exu_upper_swc.v exu_upper_tb.v --trace --top exu_upper_tb

./obj_dir/Vexu_upper_tb

gtkwave exu_upper_tb.vcd
