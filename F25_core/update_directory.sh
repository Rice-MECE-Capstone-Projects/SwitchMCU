cd bare_c_code/riscv32_C_add_small_address_map/
# ./compile.sh &> compilation.log
./compile.sh 2>&1 | tee compilation.log
cd -

# rm rtl/riscv32i_module/assembly_code/instrictions.log 
# rm rtl/riscv32i_module/assembly_code/program.hex 
# rm rtl/riscv32i_module/assembly_code/program.c 
# rm rtl/riscv32i_module/assembly_code/program_disassembly.txt
# rm rtl/riscv32i_module/program.hex 

[ -f rtl/riscv32i_module/assembly_code/compilation.lo ] && rm rtl/riscv32i_module/assembly_code/compilation.log            
[ -f rtl/riscv32i_module/assembly_code/instrictions.log ] && rm rtl/riscv32i_module/assembly_code/instrictions.log
[ -f rtl/riscv32i_module/assembly_code/program.hex ] && rm rtl/riscv32i_module/assembly_code/program.hex
[ -f rtl/riscv32i_module/assembly_code/program.c ] && rm rtl/riscv32i_module/assembly_code/program.c
[ -f rtl/riscv32i_module/assembly_code/program_disassembly.txt ] && rm rtl/riscv32i_module/assembly_code/program_disassembly.txt
[ -f rtl/riscv32i_module/program.hex ] && rm rtl/riscv32i_module/program.hex

cp bare_c_code/riscv32_C_add_small_address_map/compilation.log                      rtl/riscv32i_module/assembly_code/compilation.log            
cp bare_c_code/riscv32_C_add_small_address_map/compilation/instrictions.log         rtl/riscv32i_module/assembly_code/instrictions.log 
cp bare_c_code/riscv32_C_add_small_address_map/compilation/program.hex              rtl/riscv32i_module/assembly_code/program.hex 
cp bare_c_code/riscv32_C_add_small_address_map/compilation/program.c                rtl/riscv32i_module/assembly_code/program.c 
cp bare_c_code/riscv32_C_add_small_address_map/compilation/program_disassembly.txt  rtl/riscv32i_module/assembly_code/program_disassembly.txt
cp bare_c_code/riscv32_C_add_small_address_map/compilation/program.hex              rtl/riscv32i_module/program.hex 

