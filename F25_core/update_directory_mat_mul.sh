cd bare_c_code/riscv32_C_add_small_address_map_matrix_mult/
./compile.sh
cd -

rm rtl/riscv32i_module/assembly_code/instrictions.log 
rm rtl/riscv32i_module/assembly_code/program.hex 
rm rtl/riscv32i_module/assembly_code/program.c 
rm rtl/riscv32i_module/assembly_code/program_disassembly.txt
rm rtl/riscv32i_module/program.hex 

            
cp bare_c_code/riscv32_C_add_small_address_map_matrix_mult/compilation/instrictions.log         rtl/riscv32i_module/assembly_code/instrictions.log 
cp bare_c_code/riscv32_C_add_small_address_map_matrix_mult/compilation/program.hex              rtl/riscv32i_module/assembly_code/program.hex 
cp bare_c_code/riscv32_C_add_small_address_map_matrix_mult/compilation/program.c                rtl/riscv32i_module/assembly_code/program.c 
cp bare_c_code/riscv32_C_add_small_address_map_matrix_mult/compilation/program_disassembly.txt  rtl/riscv32i_module/assembly_code/program_disassembly.txt
cp bare_c_code/riscv32_C_add_small_address_map_matrix_mult/compilation/program.hex              rtl/riscv32i_module/program.hex 

