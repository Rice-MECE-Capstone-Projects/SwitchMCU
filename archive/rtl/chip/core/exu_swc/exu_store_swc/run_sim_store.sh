verilator --binary -j 16 exu_store_swc.v exu_store_tb.v --trace --top exu_store_tb

./obj_dir/Vexu_store_tb

gtkwave exu_store_tb.vcd
