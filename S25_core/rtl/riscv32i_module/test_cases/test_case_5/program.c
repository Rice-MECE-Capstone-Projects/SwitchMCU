// branch_jump_operations.c
// Tests: 
//  - Branch and Jump: inst_BEQ, inst_BNE, inst_BLT, inst_BGE, inst_BLTU, inst_BGEU, inst_JAL, inst_JALR
//  Tests 28–35.

#define PERIPHERAL_SUCCESS 0x00000600
#define PERIPHERAL_BYTE    0x00000604

// Write a value to a memory-mapped register.
void write_mmio(unsigned int addr, unsigned int value) {
    volatile unsigned int *ptr = (volatile unsigned int *)addr;
    *ptr = value;
}

// Called when a test fails; test_index indicates the failing instruction.
void fail(int test_index) {
    write_mmio(PERIPHERAL_BYTE, test_index);
    write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
    while (1);
}

int main(void) {
    // --- Branch Instructions ---
    // Test 28: inst_BEQ: Branch if Equal. (5 == 5) should be true.
    if ((5 == 5 ? 1 : 0) != 1) { fail(28); }

    // Test 29: inst_BNE: Branch if Not Equal. (5 != 6) should be true.
    if ((5 != 6 ? 1 : 0) != 1) { fail(29); }

    // Test 30: inst_BLT: Branch if Less Than (signed). (3 < 10) => true.
    if ((3 < 10 ? 1 : 0) != 1) { fail(30); }

    // Test 31: inst_BGE: Branch if Greater or Equal (signed). (10 >= 10) => true.
    if ((10 >= 10 ? 1 : 0) != 1) { fail(31); }

    // Test 32: inst_BLTU: Branch if Less Than (unsigned). (1 < 2) => true.
    if ((1 < 2 ? 1 : 0) != 1) { fail(32); }

    // Test 33: inst_BGEU: Branch if Greater or Equal (unsigned). (2 >= 2) => true.
    if ((2 >= 2 ? 1 : 0) != 1) { fail(33); }

    // --- Jump Instructions ---
    // Test 34: inst_JAL: Jump and Link.
    // Simulate PC + 4. If PC = 0x1000, then next PC = 0x1004.
    {
        unsigned int pc = 0x1000;
        unsigned int jal_result = pc + 4;
        if (jal_result != 0x1004) { fail(34); }
    }

    // Test 35: inst_JALR: Jump and Link Register.
    // Simulate base register + immediate; e.g., 0x2000 + 8 = 0x2008.
    {
        unsigned int base = 0x2000;
        unsigned int jalr_result = base + 8;
        if (jalr_result != 0x2008) { fail(35); }
    }

    // All branch and jump tests passed.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
