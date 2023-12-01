import random

def create_r_type(opcode, funct3, funct7):
    rd = random.randint(0, 31)
    rs1 = random.randint(0, 31)
    rs2 = random.randint(0, 31)
    return funct7 << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode

def create_b_type(opcode, funct3):
    imm = random.randint(0, 2047)
    rs1 = random.randint(0, 31)
    rs2 = random.randint(0, 31)
    imm_hi = imm >> 5
    imm_lo = imm & 0x1F
    return imm_hi << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | imm_lo << 7 | opcode

def create_i_type(opcode, funct3):
    rd = random.randint(0, 31)
    rs1 = random.randint(0, 31)
    imm = random.randint(0, 2047)
    return imm << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode

def create_s_type(opcode, funct3):
    imm = random.randint(0, 2047)
    rs1 = random.randint(0, 31)
    rs2 = random.randint(0, 31)
    imm_hi = imm >> 5
    imm_lo = imm & 0x1F
    return imm_hi << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | imm_lo << 7 | opcode

def create_u_type(opcode):
    rd = random.randint(0, 31)
    imm = random.randint(0, 1048575)
    return imm << 12 | rd << 7 | opcode

def create_j_type(opcode):
    rd = random.randint(0, 31)
    imm = random.randint(0, 1048575)
    return imm << 12 | rd << 7 | opcode

# RV32I Base Integer Instruction Set
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


def generate_machine_code():
    instructions = []
    for _ in range(100):
        instr_type = random.choice(list(opcodes.values()))
        opcode, creator, funct_args = instr_type
        if len(funct_args) == 2:
            instructions.append(creator(opcode, *funct_args))
        elif len(funct_args) == 1:
            instructions.append(creator(opcode, funct_args[0]))
        else:
            instructions.append(creator(opcode))

    return instructions


def convert_to_byte_string(instructions):
    machine_code = b""
    for instr in instructions:
        machine_code += instr.to_bytes(4, byteorder='little')
    return machine_code

def main():
    instructions = generate_machine_code()
    machine_code = convert_to_byte_string(instructions)


    # print(machine_code)

    with open("machine_code.bin", "wb") as file:
        file.write(machine_code)

if __name__ == "__main__":
    main()


