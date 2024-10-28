verilator --binary -j 16 exu_imm_swc.v exu_imm_tb.v --trace --top exu_imm_tb

./obj_dir/Vexu_imm_tb

gtkwave exu_imm_tb.vcd
