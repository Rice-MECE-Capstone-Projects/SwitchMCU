# Testing Behavior of Processor Using Unicorn Engine

We use the Unicorn Engine to randomly generate assembly language, input it into SRAM, and then use the existing Capstone library to generate the expected results. Afterward, we will export the results from SRAM and compare them with the expected results to determine if there are any issues with the core.
For this part, data needs to be stored in SRAM. Currently, we only have a backup version of SRAM for testing the AMBA part that is usable when we do the core design. Further modifications are required. Therefore, at this stage, we can use the Unicorn Engine to generate random RV32I instructions.

## 1. Random RV32I instructions binary code generator

### **1.1 Instruction Generation Functions**

```python
def create_r_type(opcode, funct3, funct7):
    rd = random.randint(0, 31)
    rs1 = random.randint(0, 31)
    rs2 = random.randint(0, 31)
    return funct7 << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode
```

Functions like **`create_r_type`**, **`create_b_type`**, **`create_i_type`**, **`create_s_type`**, **`create_u_type`**, and **`create_j_type`** are used to generate different types of RISC-V instructions. Each function combines various fields according to the format of its instruction type, such as **`opcode`**, **`funct3`**, **`funct7`**, register addresses (**`rd`**, **`rs1`**, **`rs2`**), and immediate values (**`imm`**).

### **1.2 Instruction Set Opcodes**

```python
opcodes = {
    # U-type
    'LUI': (0x37, create_u_type, []),
    'AUIPC': (0x17, create_u_type, []),
    
    # J-type
    'JAL': (0x6F, create_j_type, []),
    
    # I-type
    'JALR': (0x67, create_i_type, [0x0]),
    'LB': (0x03, create_i_type, [0x0]),
    'LH': (0x03, create_i_type, [0x1]),
    'LW': (0x03, create_i_type, [0x2]),
    'LBU': (0x03, create_i_type, [0x4]),
    'LHU': (0x03, create_i_type, [0x5]),
    'ADDI': (0x13, create_i_type, [0x0]),
    'SLTI': (0x13, create_i_type, [0x2]),
    'SLTIU': (0x13, create_i_type, [0x3]),
    'XORI': (0x13, create_i_type, [0x4]),
    'ORI': (0x13, create_i_type, [0x6]),
    'ANDI': (0x13, create_i_type, [0x7]),
    'SLLI': (0x13, create_i_type, [0x1]),
    'SRLI': (0x13, create_i_type, [0x5]),
    'SRAI': (0x13, create_i_type, [0x5]),

    # # S-type
    'SB': (0x23, create_s_type, [0x0]),
    'SH': (0x23, create_s_type, [0x1]),
    'SW': (0x23, create_s_type, [0x2]),

    # # B-type
    'BEQ': (0x63, create_b_type, [0x0]),
    'BNE': (0x63, create_b_type, [0x1]),
    'BLT': (0x63, create_b_type, [0x4]),
    'BGE': (0x63, create_b_type, [0x5]),
    'BLTU': (0x63, create_b_type, [0x6]),
    'BGEU': (0x63, create_b_type, [0x7]),

    # R-type
    'ADD': (0x33, create_r_type, [0x0, 0x00]),
    'SUB': (0x33, create_r_type, [0x0, 0x20]),
    'SLL': (0x33, create_r_type, [0x1, 0x00]),
    'SLT': (0x33, create_r_type, [0x2, 0x00]),
    'SLTU': (0x33, create_r_type, [0x3, 0x00]),
    'XOR': (0x33, create_r_type, [0x4, 0x00]),
    'SRL': (0x33, create_r_type, [0x5, 0x00]),
    'SRA': (0x33, create_r_type, [0x5, 0x20]),
    'OR': (0x33, create_r_type, [0x6, 0x00]),
    'AND': (0x33, create_r_type, [0x7, 0x00]),
}
```

This opcodes file defines a part of the RISC-V instruction set, including different types of instructions like U-type, J-type, I-type, S-type, B-type, and R-type. Each entry consists of the instruction name, opcode, corresponding creation function, and additional arguments (such as the values for **`funct3`** and **`funct7`**).

### **1.3 Machine Code Generation Function**

```python
def generate_machine_code():
    instructions = []
    for _ in range(1000):
        instr_type = random.choice(list(opcodes.values()))
        opcode, creator, funct_args = instr_type
        if len(funct_args) == 2:
            instructions.append(creator(opcode, *funct_args))
        elif len(funct_args) == 1:
            instructions.append(creator(opcode, funct_args[0]))
        else:
            instructions.append(creator(opcode))

    return instructions
```

This function randomly selects an instruction type from the opcodes and invokes the corresponding creation function to generate the instruction. It generates 1000 random instructions.

### **1.4 Byte String Conversion Function**

```python
def convert_to_byte_string(instructions):
    machine_code = b""
    for instr in instructions:
        machine_code += instr.to_bytes(4, byteorder='little')
    return machine_code
```

This function converts the generated instructions (in integer form) into byte strings, which is a common format used in unicorn engine.

Overall, this script is for creating a binary file containing 1000 random RISC-V instructions, which is used to test core of our RISC-V processor. Since these instructions are randomly generated, they might not form a meaningful program but can be useful for basic functionality testing.

## 2. RSIC-V Processor Emulator Based on Unicorn Engine

This script is designed to simulate RISC-V architecture code using the Unicorn engine, a CPU emulator, and Capstone, a disassembly framework. 

### **2.1 Loading Machine Code**

```python
from unicorn import *
from unicorn.riscv_const import *
from capstone import *
import random

with open("machine_code.bin", "rb") as file:
    RV32_MACHINE_CODE = file.read()
```

Reads a binary file **`machine_code.bin`**, which presumably contains RISC-V machine code, into **`RV32_MACHINE_CODE`**.

### **2.2 Set Up Memory and Emulator**:

```python
ADDRESS = 0x10000000  # Address in memory

# Initialize Unicorn instance
mu = Uc(UC_ARCH_RISCV, UC_MODE_RISCV32)

# Map memory
mu.mem_map(ADDRESS, 0x20000000)

# Write machine code into simulated memory
mu.mem_write(ADDRESS, RV32_MACHINE_CODE)
```

- **`ADDRESS = 0x10000000`**: Sets the starting address for the memory simulation.
- Initializes an instance of Unicorn for the RISC-V 32-bit architecture (**`UC_ARCH_RISCV`**, **`UC_MODE_RISCV32`**).
- Maps a memory region for the emulator, starting at **`ADDRESS`** and with a size of **`0x20000000`** bytes. Size here can be modified by users for specific requirement.
- Writes the previously read machine code (**`RV32_MACHINE_CODE`**) into the simulated memory at **`ADDRESS`**.

### **2.3 Initialize Program Counter and Registers**

```python
# Set PC (Program Counter)
mu.reg_write(UC_RISCV_REG_PC, ADDRESS)
for reg_id in range(UC_RISCV_REG_X0, UC_RISCV_REG_X31 + 1):
    random_value = random.randint(0, 1048575)
    mu.reg_write(reg_id, random_value)
```

- Sets the program counter (PC) to the start of the memory region (**`ADDRESS`**).
- Initializes all RISC-V general-purpose registers (**`X0`** to **`X31`**) with random values.

### **2.4 Read and Print Register Status and Memory Status**

```python
# Read and print register status

for reg_id in range(UC_RISCV_REG_X0, UC_RISCV_REG_X31 + 1):
    reg_value = mu.reg_read(reg_id)
    print(f"x{reg_id - UC_RISCV_REG_X0} = {reg_value:#x}")

# Read and print memory status
memory_content = mu.mem_read(0x10000000, total_length)
print("Memory content at 0x10000000:", memory_content)
```

• After emulation, iterates through all the general-purpose registers and prints their values in hexadecimal format.

• Reads a block of memory (of size **`total_length`**, which is set to 400 bytes and you can set other value to meet your reqirement) starting from **`ADDRESS`** and prints the content, showing what's in the memory after emulation.

### **2.5 Disassemble and Print Executed Instructions**

```python
md = Cs(CS_ARCH_RISCV, CS_MODE_RISCV32)
for i in md.disasm(memory_content, 0x1000):
    print(f"0x{i.address:x}:\t{i.mnemonic}\t{i.op_str}")
```

Uses Capstone to disassemble the memory content (starting from an offset of **`0x1000`**) and prints out the disassembled instructions. This shows the human read representation of the executed machine code.

## 3. To Start with Unicorn Engine You May Try:

```python
from __future__ import print_function
from unicorn import *
from unicorn.riscv_const import *

RISCV_CODE = b"\x13\x05\x10\x00\x93\x85\x05\x02"

# memory address where emulation starts
ADDRESS    = 0x10000

# callback for tracing basic blocks
def hook_block(uc, address, size, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" %(address, size))

# callback for tracing instructions
def hook_code(uc, address, size, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" %(address, size))

# Test RISCV
def test_riscv():
    print("Emulate RISCV code")
    try:
        # Initialize emulator in RISCV32 mode
        mu = Uc(UC_ARCH_RISCV, UC_MODE_RISCV32)

        # map 2MB memory for this emulation
        mu.mem_map(ADDRESS, 2 * 1024 * 1024)

        # write machine code to be emulated to memory
        mu.mem_write(ADDRESS, RISCV_CODE)

        # initialize machine registers
        mu.reg_write(UC_RISCV_REG_A0, 0x1234)
        mu.reg_write(UC_RISCV_REG_A1, 0x7890)

        # tracing all basic blocks with customized callback
        mu.hook_add(UC_HOOK_BLOCK, hook_block)

        # tracing all instructions with customized callback
        mu.hook_add(UC_HOOK_CODE, hook_code)

        # emulate machine code in infinite time
        mu.emu_start(ADDRESS, ADDRESS + len(RISCV_CODE))

        # now print out some registers
        print(">>> Emulation done. Below is the CPU context")

        a0 = mu.reg_read(UC_RISCV_REG_A0)
        a1 = mu.reg_read(UC_RISCV_REG_A1)
        print(">>> A0 = 0x%x" %a0)
        print(">>> A1 = 0x%x" %a1)

    except UcError as e:
        print("ERROR: %s" % e)

if __name__ == '__main__':
    test_riscv()
```

This script defines a piece of RISC-V machine code, sets up an emulation environment, writes the code into emulated memory, and then runs the emulation. The script also includes callback functions to trace basic blocks and individual instructions during emulation. It initializes two registers (**`A0`** and **`A1`**) before starting the emulation and prints their values after emulation completes.

This script is useful for understanding basic emulation and tracing with the Unicorn Engine.
