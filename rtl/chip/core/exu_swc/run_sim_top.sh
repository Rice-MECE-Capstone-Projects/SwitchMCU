V_FILES=$(find . -type f -name "*.v" | tr '\n' ' ')

verilator --binary -j 16 $V_FILES --trace --top exu_top_tb

./obj_dir/Vexu_top_tb

gtkwave exu_top_tb.vcd
