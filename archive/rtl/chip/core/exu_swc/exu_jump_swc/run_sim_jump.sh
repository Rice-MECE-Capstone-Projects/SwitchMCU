verilator --binary -j 16 exu_jump_swc.v exu_jump_tb.v --trace --top exu_jump_tb

./obj_dir/Vexu_jump_tb

gtkwave exu_jump_tb.vcd
