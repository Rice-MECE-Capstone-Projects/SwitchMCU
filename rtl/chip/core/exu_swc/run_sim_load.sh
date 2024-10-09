verilator --binary -j 16 exu_load_swc.v exu_load_tb.v --trace --top exu_load_tb

./obj_dir/Vexu_load_tb

gtkwave exu_load_tb.vcd
