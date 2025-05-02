import random

class ins_txn:
    def __init__(self, instr_bin: int = 0, itype=None, ins_name: str = "",
                 rs1: int = 0, rs2: int = 0, rd: int = 0,
                 imm: int = 0, result: int = 0):
        self.r_situation = ''
        self.r_situation = ''
        self.r_situation = ''
        self.trans_gen('R')

    def __str__(self):
        try:
            str_rs1 = f"rs1\t=\t{bin(int(self.rs1))}\n"
        except Exception:
            str_rs1 = f"rs1\t=\t{self.rs1}\n"
        try:
            str_rs2 = f"rs2\t=\t{bin(int(self.rs2))}\n"
        except Exception:
            str_rs2 = f"rs2\t=\t{self.rs2}\n"
        try:
            str_rd  = f"rd\t=\t{bin(int(self.rd))}\n"
        except Exception:
            str_rd = f"rd\t=\t{self.rd}\n"
        try:
            str_imm = f"imm\t=\t{bin(int(self.imm))}\n"
        except Exception:
            str_imm = f"imm\t=\t{self.imm}\n"
        try:
            str_result = f"result\t=\t{bin(int(self.result))}\n"
        except Exception:
            str_result = f"result\t=\t{self.result}\n"
        return (f"ins\t=\t{self.itype}_type [{self.ins_name}] \n"
                f"bin\t=\t{bin(self.instr_bin)}\n"
                f"{str_rs1}"
                f"{str_rs2}"
                f"{str_rd}"
                f"{str_imm}"
                f"{str_result}")
    
    def trans_gen(self, ins_type, constraint = False):
        self.itype = ins_type
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
        if ins_type == 'R':
            # add,sll,slt,sltu,xor,srl,or,and,sub,sra
            opcode = 0b0110011
            funct7_all = [0b0000000, 0b0100000]
            funct3_all = [0b000,0b001,0b010,0b011,0b100,0b101,0b110,0b111]
            ins_name_list = ["ADD", "SLL", "SLT", "SLTU", "XOR", "SRL", "OR", "AND", "SUB", "SRA"]
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='R', data=1)
            else:
                rs2 = random.randint(0, 2**5-1)
                rs1 = random.randint(0, 2**5-1)
                rd  = random.randint(1, 2**5-1)
            # generating instruction list
            for funct3 in funct3_all:
                ins_temp = funct7_all[0] << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | rd << 7 | opcode
                ins_list.append(ins_temp)
            # generating sub ins
            ins_temp = funct7_all[1] << 25 | rs2 << 20 | rs1 << 15 | 0b000 << 12 | rd << 7 | opcode
            ins_list.append(ins_temp)
            # generating sra ins
            ins_temp = funct7_all[1] << 25 | rs2 << 20 | rs1 << 15 | 0b101 << 12 | rd << 7 | opcode
            ins_list.append(ins_temp)
            assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
        elif ins_type == 'I':
            opcode = [0b0010011, 0b0000011, 0b1100111]
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='I', data=1)
            else:
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
        elif ins_type == 'S':
            # sb,sh,sw
            opcode = 0b0100011
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='I', data=1)
            else:    
                rs2 = random.randint(0, 2**5-1)
                rs1 = random.randint(0, 2**5-1)
                imm = random.randint(0, 2**12-1)
            imm11_5 = imm & ((2**12-1 - (2**5-1))) >> 5
            imm4_0 = imm & (2**5-1)
            funct3_all = [0b000, 0b001, 0b010]
            for funct3 in funct3_all:
                ins_temp = imm11_5 << 25 | rs2 << 20 | rs1 << 15 | funct3 << 12 | imm4_0<<7 | opcode
                ins_list.append(ins_temp)
            ins_name_list = ["SB", "SH", "SW"]
            assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
        elif ins_type == 'B':
            # BEQ, BNE, BLT, BGE, BLTU, BGEU
            opcode = 0b1100011
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='I', data=1)
            else:
                imm = random.randint(0, 2**13 - 1)
                rs2 = random.randint(0, 2**5 - 1)
                rs1 = random.randint(0, 2**5 - 1)
            imm12   = (imm >> 12) & 0x1   # bit12
            imm11   = (imm >> 11) & 0x1   # bit11
            imm10_5 = (imm >> 5)  & 0x3F  # bits 10~5，6 digits
            imm4_1  = (imm >> 1)  & 0xF   # bits 4~1，4 digits
            funct3_all = [0b000, 0b001, 0b100, 0b101, 0b110, 0b111]
            for funct3 in funct3_all:
                ins_temp = ((imm12   & 0x1) << 31) | \
                        ((imm10_5 & 0x3F) << 25) | \
                        (rs2 << 20) | \
                        (rs1 << 15) | \
                        (funct3 << 12) | \
                        ((imm4_1  & 0xF) << 8)  | \
                        ((imm11   & 0x1) << 7)  | \
                        opcode
                ins_list.append(ins_temp)    
            ins_name_list = ["BEQ", "BNE", "BLT", "BGE", "BLTU", "BGEU"]
            assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"

        elif ins_type == 'U':
            # auipc, lui
            opcode = [0b0010111, 0b0110111]
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='I', data=1)
            else:    
                rd = random.randint(0, 2**5-1)
                imm = random.randint(0, 2**20-1)
            for unit in opcode:
                ins_temp = imm << 12 | rd << 7 | unit
                ins_list.append(ins_temp)
            ins_name_list = ["AUIPC", "LUI"]
            assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
        elif ins_type == 'J':
            # jal
            opcode = 0b1101111
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='I', data=1)
            else:    
                rd = random.randint(0, 2**5-1)
                imm = random.randint(0, 2**20-1)
            imm20 = imm & (2**20)
            imm10_1 = imm & (2 ** 10 - 1 - (2 ** 1 - 1))  >> 1
            imm11 = imm & (2 ** 12 - 1)
            imm19_12 = imm & (2 ** 20 - 1 - (2 ** 12 - 1))  >> 12
            ins_temp = (imm20|imm10_1|imm11|imm19_12) << 12 | rd << 7 | opcode
            ins_list.append(ins_temp)
            ins_name_list = ["JAL"]
            assert(len(ins_list) == len(ins_name_list)), "[Error] Instruction list length not match"
        elif ins_type == 'M':
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
        elif ins_type == 'P':
            # ecall,ebreak,csrrw,csrrs,csrrc,csrrwi,csrrsi,csrrci
            opcode = 0b1110011
            csr = random.randint(0, 2**12-1)
            if(constraint):
                rs1, rs2, rd, imm = self.constraint_random_instruction(type='I', data=1)
            else:    
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
        
        # # # # # # # # # #
        # constraint pick #
        # # # # # # # # # #
        
        # # # # # # # #
        # return part #
        # # # # # # # #
        return_list.append(ins_pick) # idx 0
        return_list.append('ins_result') # idx 1
        if ins_type == 'R':
            return_list.append(imm)
            return_list.append(rs2)
            return_list.append(rs1)
            return_list.append(rd)
        elif ins_type == 'I':
            return_list.append(imm)
            return_list.append(rs2)
            return_list.append(rs1)
            return_list.append(rd)
        elif ins_type == 'S':
            return_list.append(imm)
            return_list.append(rs2)
            return_list.append(rs1)
            return_list.append(rd)
            return_list.append(imm4_0)
            return_list.append(imm11_5)
        elif ins_type == 'B':
            return_list.append(imm)
            return_list.append(rs2)
            return_list.append(rs1)
            return_list.append(rd)
            return_list.append(imm12|imm10_5)
            return_list.append(imm4_1|imm11)
        elif ins_type == 'U':
            return_list.append(imm)
            return_list.append(rs2)
            return_list.append(rs1)
            return_list.append(rd)
        elif ins_type == 'J':
            return_list.append(imm)
            return_list.append(rs2)
            return_list.append(rs1)
            return_list.append(rd)
            return_list.append(imm20|imm10_1|imm11|imm19_12)
        elif ins_type == 'M':
            pass
        elif ins_type == 'P':
            pass
        return_list.insert(1, ins_type)

        self.instr_bin = return_list[0] 
        # self.itype = return_list[1] 
        self.ins_name = ins_name
        self.rs1 = return_list[5] 
        self.rs2 = return_list[4] 
        self.rd = return_list[6] 
        self.imm = return_list[3]
        self.ins_result = self.trans_result_gen()
        self.result = ins_result[1] if ins_result[0] else "None"
        ins_result.insert(0, ins_name)
    
    def trans_result_gen(self):
        # TODO: figure out when to use dec_sign_extend, like for imm
        if self.itype == 'R':
            # add,sll,slt,sltu,xor,srl,or,and,sub,sra
            if self.ins_name == "ADD":
                return [1, self.rs1 + self.rs2]
            if self.ins_name == "SLL":
                return [1, self.rs1 << self.rs2]
            if self.ins_name == "SLT":
                tmp_rs1 = dec_sign_extend(self.rs1, 5)
                tmp_rs2 = dec_sign_extend(self.rs2, 5)
                return [1, 1] if tmp_rs1 < tmp_rs2 else [1, 0]
            if self.ins_name == "SLTU":
                return [1, 1] if self.rs1 < self.rs2 else [1, 0]
            if self.ins_name == "XOR":
                return [1, self.rs1 ^ self.rs2]
            if self.ins_name == "SRL":
                return [1, self.rs1 >> self.rs2]
            if self.ins_name == "OR":
                return [1, self.rs1 | self.rs2]
            if self.ins_name == "AND":
                return [1, self.rs1 & self.rs2]
            if self.ins_name == "SUB":
                return [1, self.rs1 + ~self.rs2 + 1]
            if self.ins_name == "SRA":
                self.rs1 = dec_sign_extend(self.rs1, 5)
                return [1, self.rs1 >> self.rs2]
        if self.itype == 'I':
            # addi, slti, sltiu, xori, ori, andi
            if self.ins_name == "ADDI":
                return [1, self.rs1 + self.imm]
            if self.ins_name == "SLTI":
                self.rs1 = dec_sign_extend(self.rs1, 5)
                # imm = dec_sign_extend(imm, 12)
                return [1, 1] if self.rs1 < self.imm else [1, 0]
            if self.ins_name == "SLTIU":
                # imm = dec_sign_extend(imm, 12)
                return [1, 1] if self.rs1 < self.imm else [1, 0]
            if self.ins_name == "XORI":
                return [1, self.rs1 ^ self.imm]
            if self.ins_name == "ORI":
                return [1, self.rs1 | self.imm]
            if self.ins_name == "ANDI":
                return [1, self.rs1 & self.imm]
            if self.ins_name == "SLLI":
                return [1, self.rs1 << self.imm]
            if self.ins_name == "SRLI":
                return [1, self.rs1 >> self.imm]
            if self.ins_name == "SRAI":
                self.rs1 = dec_sign_extend(self.rs1, 5)
                return [1, self.rs1 >> self.imm]
            if self.ins_name == "LB":
                return [0, 0]
            if self.ins_name == "LH":
                return [0, 0]
            if self.ins_name == "LW":
                return [0, 0]
            if self.ins_name == "LBU":
                return [0, 0]
            if self.ins_name == "LHU":
                return [0, 0]
            if self.ins_name == "JALR":
                return [0, 0]
        if self.itype == 'S':
            # sb,sh,sw
            if self.ins_name == "SB":
                return [0, 0]
            if self.ins_name == "SH":
                return [0, 0]
            if self.ins_name == "SW":
                return [0, 0]
        if self.itype == 'B':
            # beq,bne,blt,bge,bltu,bgeu
            if self.ins_name == "BEQ":
                return [0, 0]
            if self.ins_name == "BNE":
                return [0, 0]
            if self.ins_name == "BLT":
                return [0, 0]
            if self.ins_name == "BGE":
                return [0, 0]
            if self.ins_name == "BLTU":
                return [0, 0]
            if self.ins_name == "BGEU":
                return [0, 0]
        if self.itype == 'U':
            # auipc, lui
            if self.ins_name == "AUIPC":
                return [1, self.imm << 12]
            if self.ins_name == "LUI":
                return [1, self.imm << 12]
        if self.itype == 'J':
            # jal
            if self.ins_name == "JAL":
                return [1, 0]
        if self.itype == 'M':
            return [0, 0]
        if self.itype == 'P':
            return [0, 0]
    
    def constraint_random_instruction(self, type = 'R', data = 0):
        special_case_prob = random.random()
        rs1 = random.randint(0, 2**5-1)
        rs2 = random.randint(0, 2**5-1)
        rd  = random.randint(0, 2**5-1)
        imm = 'None'

        if special_case_prob < 0.1:
            # 10% case: rs1 == rs2 == rd
            if type == 'R':
                self.r_situation = 1
                rs1 = rs2 = rd
            elif type == 'I':
                rs1 = rd
            elif type == 'S':
                rs1 = rs2
            elif type == 'B':
                rs1 = rs2
            elif type == 'U':
                pass
            elif type == 'J':
                pass
        elif special_case_prob < 0.2:
            # 10% case: rs1 == rs2, rd random
            if type == 'R':
                rs1 = rs2
            elif type == 'I':
                pass
            elif type == 'S':
                rs1 = rs2
            elif type == 'B':
                rs1 = rs2
            elif type == 'U':
                pass
            elif type == 'J':
                pass
        elif special_case_prob < 0.3:
            # 10% case: rs1, rs2, rd random, but not equal
            while(rs1 == rs2 or rs1 == rd or rs2 == rd):
                rs1 = random.randint(0, 2**5-1)
                rs2 = random.randint(0, 2**5-1)
                rd  = random.randint(0, 2**5-1)
        elif special_case_prob < 0.4:
            # 10% case: edge case: rs1, rs2, rd = 0, 31, 15
            # choose randonly from 0, 31, 15
            rs1 = random.choice([0, 31, 15])
            rs2 = random.choice([0, 31, 15])
            rd = random.choice([0, 31, 15])
        else:
            # 60% case: normal random
            rs1 = random.randint(0, 31)
            rs2 = random.randint(0, 31)
            rd = random.randint(0, 31)

        if(data != 0):
            imm_bits = 20
            if type == 'R':
                pass
            elif type == 'I':
                imm_bits = 12
                imm = random.randint(0, 2**imm_bits-1)
                if special_case_prob < 0.1:
                    # 10% case: imm = 0 
                    imm = 0
                elif special_case_prob < 0.2:
                    # 10% case: imm = -1
                    imm = (1 << imm_bits) - 1  # 0xFFFFF
                elif special_case_prob < 0.3:
                    # 10% case: imm = maximum positive number
                    imm = (1 << (imm_bits-1)) - 1  # 0x7FFFF
                elif special_case_prob < 0.4:
                    # 10% case: imm = maximum negative number
                    imm = 1 << (imm_bits-1)  # 0x80000
                elif special_case_prob < 0.5:
                    # 10% case: imm is a power of 2
                    imm = 1 << random.randint(0, (imm_bits-1))
                else:
                    # 50% case: normal random
                    imm = random.randint(0, (1 << imm_bits) - 1)
            elif type == 'S':
                imm_bits = 12
                imm = random.randint(0, 2**imm_bits-1)
                if special_case_prob < 0.1:
                    # 10% case: imm = 0 
                    imm = 0
                elif special_case_prob < 0.2:
                    # 10% case: imm = -1
                    imm = (1 << imm_bits) - 1  # 0xFFFFF
                elif special_case_prob < 0.3:
                    # 10% case: imm = maximum positive number
                    imm = (1 << (imm_bits-1)) - 1  # 0x7FFFF
                elif special_case_prob < 0.4:
                    # 10% case: imm = maximum negative number
                    imm = 1 << (imm_bits-1)  # 0x80000
                elif special_case_prob < 0.5:
                    # 10% case: imm is a power of 2
                    imm = 1 << random.randint(0, (imm_bits-1))
                else:
                    # 50% case: normal random
                    imm = random.randint(0, (1 << imm_bits) - 1)
            elif type == 'B':
                imm_bits = 12
                imm = random.randint(0, 2**imm_bits-1)
                if special_case_prob < 0.1:
                    # 10% case: imm = 0 
                    imm = 0
                elif special_case_prob < 0.2:
                    # 10% case: imm = -1
                    imm = (1 << imm_bits) - 1  # 0xFFFFF
                elif special_case_prob < 0.3:
                    # 10% case: imm = maximum positive number
                    imm = (1 << (imm_bits-1)) - 1  # 0x7FFFF
                elif special_case_prob < 0.4:
                    # 10% case: imm = maximum negative number
                    imm = 1 << (imm_bits-1)  # 0x80000
                elif special_case_prob < 0.5:
                    # 10% case: imm is a power of 2
                    imm = 1 << random.randint(0, (imm_bits-1))
                else:
                    # 50% case: normal random
                    imm = random.randint(0, (1 << imm_bits) - 1)
            elif type == 'U':
                imm_bits = 20
                imm = random.randint(0, 2**imm_bits-1)
                if special_case_prob < 0.1:
                    # 10% case: imm = 0 
                    imm = 0
                elif special_case_prob < 0.2:
                    # 10% case: imm = -1
                    imm = (1 << imm_bits) - 1  # 0xFFFFF
                elif special_case_prob < 0.3:
                    # 10% case: imm = maximum positive number
                    imm = (1 << (imm_bits-1)) - 1  # 0x7FFFF
                elif special_case_prob < 0.4:
                    # 10% case: imm = maximum negative number
                    imm = 1 << (imm_bits-1)  # 0x80000
                elif special_case_prob < 0.5:
                    # 10% case: imm is a power of 2
                    imm = 1 << random.randint(0, (imm_bits-1))
                else:
                    # 50% case: normal random
                    imm = random.randint(0, (1 << imm_bits) - 1)
            elif type == 'J':
                imm_bits = 20
                imm = random.randint(0, 2**imm_bits-1)
                if special_case_prob < 0.1:
                    # 10% case: imm = 0 
                    imm = 0
                elif special_case_prob < 0.2:
                    # 10% case: imm = -1
                    imm = (1 << imm_bits) - 1  # 0xFFFFF
                elif special_case_prob < 0.3:
                    # 10% case: imm = maximum positive number
                    imm = (1 << (imm_bits-1)) - 1  # 0x7FFFF
                elif special_case_prob < 0.4:
                    # 10% case: imm = maximum negative number
                    imm = 1 << (imm_bits-1)  # 0x80000
                elif special_case_prob < 0.5:
                    # 10% case: imm is a power of 2
                    imm = 1 << random.randint(0, (imm_bits-1))
                else:
                    # 50% case: normal random
                    imm = random.randint(0, (1 << imm_bits) - 1)
        return rs1, rs2, rd, imm

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

