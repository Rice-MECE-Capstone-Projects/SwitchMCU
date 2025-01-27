verilator --binary -j 16 exu_flush_swc.v exu_flush_tb.v --trace --top exu_flush_tb

./obj_dir/Vexu_flush_tb

gtkwave exu_flush_tb.vcd
