from unicorn import *
from unicorn.riscv_const import *
from capstone import *
import random

# RV32_MACHINE_CODE = b"\x37\x34\x00\x00\x97\x82\x00\x00\x93\x82\x20\x00\x13\x73\x00\x00"
with open("machine_code.bin", "rb") as file:
    RV32_MACHINE_CODE = file.read()
ADDRESS = 0x10000000  # Address in memory

# Initialize Unicorn instance
mu = Uc(UC_ARCH_RISCV, UC_MODE_RISCV32)

# Map memory
mu.mem_map(ADDRESS, 0x20000000)

# Write machine code into simulated memory
mu.mem_write(ADDRESS, RV32_MACHINE_CODE)

# Set PC (Program Counter)
mu.reg_write(UC_RISCV_REG_PC, ADDRESS)
for reg_id in range(UC_RISCV_REG_X0, UC_RISCV_REG_X31 + 1):
    random_value = random.randint(0, 1048575)
    mu.reg_write(reg_id, random_value)

# Start simulation
mu.emu_start(ADDRESS, ADDRESS + len(RV32_MACHINE_CODE))

total_length = 400  # Total length of machine code

# Read and print register status

for reg_id in range(UC_RISCV_REG_X0, UC_RISCV_REG_X31 + 1):
    reg_value = mu.reg_read(reg_id)
    print(f"x{reg_id - UC_RISCV_REG_X0} = {reg_value:#x}")

# Read and print memory status
memory_content = mu.mem_read(0x10000000, total_length)
print("Memory content at 0x10000000:", memory_content)

md = Cs(CS_ARCH_RISCV, CS_MODE_RISCV32)
for i in md.disasm(memory_content, 0x1000):
    print(f"0x{i.address:x}:\t{i.mnemonic}\t{i.op_str}")
