verilator --binary -j 16 exu_reg_swc.v exu_reg_tb.v --trace --top exu_reg_tb

./obj_dir/Vexu_reg_tb

gtkwave exu_reg_tb.vcd
