import random

def dec_sign_extend(num, bits):
    if num >= 2**(bits-1):
        return num - 2**bits
    return num

def dec_zero_extend(num, bits):
    if num < 0:
        return num + 2**bits
    return num

def logical_right(val, n):
    return val >>n if val >=0 else (val +0x100000000)>>n

def arithmetic_right(val, n):
    shifted = val
    bits = 32
    sign_bit = (val & (1<< (bits-1)) != 0)
    for i in range(n):
         shifted = shifted >> 1 | sign_bit << (bits-1)
    return shifted

def sign_extend(dut, val, curr_bits, out_bits):
    sign_bit = (val & (1<< (curr_bits-1)) != 0)
    if (sign_bit == 0):
        return val
    else:
        return ((1<<out_bits) - 1) ^ ((1 << curr_bits) - 1) | val
    
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if bits == 0:
        return 0
    if (val & (1 << (bits - 1))) != 0: # if sign bit is 1
        val = val - (1 << bits)        # compute negative value
    return val

def result_gen(itype, ins_name, imm, rs2, rs1):
    # TODO: figure out when to use dec_sign_extend, like for imm
    if itype == 'R':
        # add,sll,slt,sltu,xor,srl,or,and,sub,sra
        if ins_name == "ADD":
            return [1, rs1 + rs2]
        if ins_name == "SLL":
            return [1, rs1 << rs2]
        if ins_name == "SLT":
            rs1 = dec_sign_extend(rs1, 5)
            rs2 = dec_sign_extend(rs2, 5)
            return [1, 1] if rs1 < rs2 else [1, 0]
        if ins_name == "SLTU":
            return [1, 1] if rs1 < rs2 else [1, 0]
        if ins_name == "XOR":
            return [1, rs1 ^ rs2]
        if ins_name == "SRL":
            return [1, rs1 >> rs2]
        if ins_name == "OR":
            return [1, rs1 | rs2]
        if ins_name == "AND":
            return [1, rs1 & rs2]
        if ins_name == "SUB":
            return [1, rs1 + ~rs2 + 1]
        if ins_name == "SRA":
            rs1 = dec_sign_extend(rs1, 5)
            return [1, rs1 >> rs2]
    if itype == 'I':
        # addi, slti, sltiu, xori, ori, andi
        if ins_name == "ADDI":
            return [1, rs1 + imm]
        if ins_name == "SLTI":
            rs1 = dec_sign_extend(rs1, 5)
            # imm = dec_sign_extend(imm, 12)
            return [1, 1] if rs1 < imm else [1, 0]
        if ins_name == "SLTIU":
            # imm = dec_sign_extend(imm, 12)
            return [1, 1] if rs1 < imm else [1, 0]
        if ins_name == "XORI":
            return [1, rs1 ^ imm]
        if ins_name == "ORI":
            return [1, rs1 | imm]
        if ins_name == "ANDI":
            return [1, rs1 & imm]
        if ins_name == "SLLI":
            return [1, rs1 << imm]
        if ins_name == "SRLI":
            return [1, rs1 >> imm]
        if ins_name == "SRAI":
            rs1 = dec_sign_extend(rs1, 5)
            return [1, rs1 >> imm]
        if ins_name == "LB":
            return [0, 0]
        if ins_name == "LH":
            return [0, 0]
        if ins_name == "LW":
            return [0, 0]
        if ins_name == "LBU":
            return [0, 0]
        if ins_name == "LHU":
            return [0, 0]
        if ins_name == "JALR":
            return [0, 0]
    if itype == 'S':
        # sb,sh,sw
        if ins_name == "SB":
            return [0, 0]
        if ins_name == "SH":
            return [0, 0]
        if ins_name == "SW":
            return [0, 0]
    if itype == 'B':
        # beq,bne,blt,bge,bltu,bgeu
        if ins_name == "BEQ":
            return [0, 0]
        if ins_name == "BNE":
            return [0, 0]
        if ins_name == "BLT":
            return [0, 0]
        if ins_name == "BGE":
            return [0, 0]
        if ins_name == "BLTU":
            return [0, 0]
        if ins_name == "BGEU":
            return [0, 0]
    if itype == 'U':
        # auipc, lui
        if ins_name == "AUIPC":
            return [1, imm << 12]
        if ins_name == "LUI":
            return [1, imm << 12]
    if itype == 'J':
        # jal
        if ins_name == "JAL":
            return [1, 0]
    if itype == 'M':
        return [0, 0]
    if itype == 'P':
        return [0, 0]

def ins_gen(itype, boundary=0):
    ins_name_list = []
    ins_list = []
    ins_pick = ''
    rs2 = ''
    rs1 = ''
    rd = ''
    imm = ''
    return_list = []
    # # # # # # # # # #
    # generation part #
    # # # # # # # # # #
    if itype == 'R':
        # add,sll,slt,sltu,xor,srl,or,and,sub,sra
        opcode = 0b0110011
        funct7_all = [0b0000000, 0b0100000]
        funct3_all = [0b000,0b001,0b010,0b011,0b100,0b101,0b110,0b111]
        ins_name_list = ["ADD", "SLL", "SLT", "SLTU", "XOR", "SRL", "OR", "AND", "SUB", "SRA"]
        # boundary condition
        rs2 = random.randint(0, 2**5-1)
        rs1 = random.randint(0, 2**5-1)
        rd  = random.randint(1, 2**5-1)
        # generating instruction list
        for funct3 in funct3_all:
            ins_temp = funct7_all[0] << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode
            ins_list.append(ins_temp)
        # generating sub ins
        ins_temp = funct7_all[1] << 25 | rs2 << 20 | rs1 << 15 | 000 << 12 | rd << 7 | opcode
        ins_list.append(ins_temp)
        # generating sra ins
        ins_temp = funct7_all[1] << 25 | rs2 << 20 | rs1 << 15 | 101 << 12 | rd << 7 | opcode
        ins_list.append(ins_temp)
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'I':
        opcode = [0b0010011, 0b0000011, 0b1100111]
        imm = random.randint(0, 2**12-1)
        rs1 = random.randint(0, 2**5-1)
        # addi, slti, sltiu, xori, ori, andi
        funct3_list1 = [0b000,0b010,0b011,0b100,0b110,0b111]
        # slli, srli, srai
        funct3_list2 = [0b001,0b101,0b101]
        # lb, lh, lw, lbu, lhu
        funct3_list3 = [0b000, 0b001, 0b010, 0b100, 0b101]
        # jalr
        funct3_list4 = [0b000]
        funct3_all = [funct3_list1, funct3_list2, funct3_list3, funct3_list4]
        rd = random.randint(0, 2**5-1)

        for i in range(0, len(funct3_all)):
            for funct3 in funct3_all[i]:
                if i==0 or i ==1:
                    ins_temp = imm << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode[0]
                elif i==2:
                    ins_temp = imm << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode[1]
                elif i==3:
                    ins_temp = imm << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode[2]
                else:
                    assert("Error")
                ins_list.append(ins_temp)
        # for slli, srli, srai
        # ins_list[6] = (ins_list[8] & (2 ** 25 - 1))
        ins_list[7] = (ins_list[8] & (2 ** 25 - 1))
        ins_list[8] = ((ins_list[8] & (2 ** 25 - 1)) | 0b0100000 << 25)
        ins_name_list = ["ADDI", "SLTI", "SLTIU", "XORI", "ORI", "ANDI", "SLLI", "SRLI", "SRAI", "LB", "LH", "LW", "LBU", "LHU", "JALR"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'S':
        # sb,sh,sw
        opcode = 0b0100011
        imm = random.randint(0, 2**12-1)
        imm11_5 = imm & ((2**12-1 - (2**5-1))) >> 5
        imm4_0 = imm & (2**5-1)
        rs2 = random.randint(0, 2**5-1)
        rs1 = random.randint(0, 2**5-1)
        funct3_all = [0b000, 0b001, 0b010]
        for funct3 in funct3_all:
            print(imm11_5," ", rs2," ", rs1," ", funct3," ", imm4_0, " ",opcode)
            ins_temp = imm11_5 << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | imm4_0<<7 | opcode
            print(ins_temp)
            print("\n\n")
            ins_list.append(ins_temp)
        ins_name_list = ["SB", "SH", "SW"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'B':
        # beq,bne,blt,bge,bltu,bgeu
        opcode = 0b1100011
        imm = random.randint(0, 2**13-1)
        imm12 = imm & (2 ** 13)
        imm11 = imm & (2 ** 12)
        imm10_5 = imm & (2 ** 11 - 1 - (2 ** 5 - 1)) >> 5
        imm4_1 = imm & (2 ** 5 - 1 - (2 ** 1 - 1))  >> 1
        rs2 = random.randint(0, 2**5-1)
        rs1 = random.randint(0, 2**5-1)
        funct3_all = [0b000, 0b001, 0b100, 0b101, 0b110, 0b111]
        for funct3 in funct3_all:
            ins_temp = (imm12|imm10_5) << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | (imm4_1|imm11)<<7 | opcode
            ins_list.append(ins_temp)
        ins_name_list = ["BEQ", "BNE", "BLT", "BGE", "BLTU", "BGEU"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'U':
        # auipc, lui
        opcode = [0b0010111, 0b0110111]
        rd = random.randint(0, 2**5-1)
        imm = random.randint(0, 2**20-1)
        for unit in opcode:
            ins_temp = imm << 12 | rd << 7 | unit
            ins_list.append(ins_temp)
        ins_name_list = ["AUIPC", "LUI"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'J':
        # jal
        opcode = 0b1101111
        imm = random.randint(0, 2**20-1)
        imm20 = imm & (2**20)
        imm10_1 = imm & (2 ** 10 - 1 - (2 ** 1 - 1))  >> 1
        imm11 = imm & (2 ** 12 - 1)
        imm19_12 = imm & (2 ** 20 - 1 - (2 ** 12 - 1))  >> 12
        rd = random.randint(0, 2**5-1)
        ins_temp = (imm20|imm10_1|imm11|imm19_12) << 12 | rd << 7 | opcode
        ins_list.append(ins_temp)
        ins_name_list = ["JAL"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'M':
        # fence,fence.i
        opcode = 0b0001111
        pred = random.randint(0, 2**4-1)
        succ = random.randint(0, 2**4-1)
        #fence
        ins_temp = 0b0000<<28 | pred<<24 | succ<<20 | opcode
        ins_list.append(ins_temp)
        #fence.i
        ins_list.append(0b00000000000000000001000000001111)
        ins_name_list = ["FENCE", "FENCE.I"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    elif itype == 'P':
        # ecall,ebreak,csrrw,csrrs,csrrc,csrrwi,csrrsi,csrrci
        opcode = 0b1110011
        csr = random.randint(0, 2**12-1)
        rs1 = random.randint(0, 2**5-1)
        rd  = random.randint(0, 2**5-1)
        funct3_all = [0b000, 0b001, 0b010, 0b011, 0b101, 0b110, 0b111]
        for funct3 in funct3_all:
            if funct3 == 0b000:
                # ecall
                ins_list.append(0b00000000000000000000000001110011)
                # ebreak
                ins_list.append(0b00000000000100000000000001110011)
            else:
                ins_temp = csr << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode
                ins_list.append(ins_temp)
        ins_name_list = ["ECALL", "EBREAK", "CSRRW", "CSRRS", "CSRRC", "CSRRWI", "CSRRSI", "CSRRCI"]
        assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
    # # # # # # # #
    # random pick #
    # # # # # # # #
    lucky_number = random.randint(0, len(ins_list)-1)
    # lucky_number = 9
    ins_name = ins_name_list[lucky_number]
    ins_pick =  ins_list[lucky_number]
    ins_result = result_gen(itype, ins_name, imm, rs2, rs1)
    # add ins_name to the beginning of ins_result
    ins_result.insert(0, ins_name)

    # # # # # # # #
    # return part #
    # # # # # # # #
    return_list.append(ins_pick) # idx 0
    return_list.append(ins_result) # idx 1
    if itype == 'R':
        return_list.append(imm)
        return_list.append(rs2)
        return_list.append(rs1)
        return_list.append(rd)
    elif itype == 'I':
        return_list.append(imm)
        return_list.append(rs1)
        return_list.append(rd)
    elif itype == 'S':
        return_list.append(imm11_5)
        return_list.append(rs2)
        return_list.append(rs1)
        return_list.append(imm4_0)
    elif itype == 'B':
        return_list.append(imm12|imm10_5)
        return_list.append(rs2)
        return_list.append(rs1)
        return_list.append(imm4_1|imm11)
    elif itype == 'U':
        return_list.append(imm)
        return_list.append(rd)
    elif itype == 'J':
        return_list.append(imm20|imm10_1|imm11|imm19_12)
        return_list.append(rd)
    elif itype == 'M':
        pass
    elif itype == 'P':
        pass
    return return_list

# # # # # # #
# test part #
# # # # # # #
if __name__ == '__main__':
    INS = ins_gen('R')
    print(bin(INS[0])[2:].zfill(32))
    print(INS[1])

