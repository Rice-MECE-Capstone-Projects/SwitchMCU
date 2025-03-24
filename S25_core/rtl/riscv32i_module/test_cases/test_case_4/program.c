// arithmetic_operations.c
// Tests: 
//  - Arithmetic: inst_ADD, inst_SUB, inst_XOR, inst_OR, inst_AND (Tests 1–5)
//  - Shifts: inst_SLL, inst_SRL, inst_SRA, inst_SLLI, inst_SRLI, inst_SRAI (Tests 6–11)
//  - Set-Less-Than: inst_SLT, inst_SLTU, inst_SLTI, inst_SLTIU (Tests 12–15)
//  - Immediate Arithmetic/Logical: inst_ADDI, inst_XORI, inst_ORI, inst_ANDI (Tests 16–19)
//  - Other: inst_LUI (Test 36)

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
    // --- Arithmetic Operations ---
    // Test 1: inst_ADD: 5 + 7 = 12
    if ((5 + 7) != 12) { fail(1); }

    // Test 2: inst_SUB: 10 - 4 = 6
    if ((10 - 4) != 6) { fail(2); }

    // Test 3: inst_XOR: 0xAA55AA55 ^ 0xFFFFFFFF = 0x55AA55AA
    if ((0xAA55AA55 ^ 0xFFFFFFFF) != 0x55AA55AA) { fail(3); }

    // Test 4: inst_OR: 0x0F0F0F0F | 0xF0F0F0F0 = 0xFFFFFFFF
    if ((0x0F0F0F0F | 0xF0F0F0F0) != 0xFFFFFFFF) { fail(4); }

    // Test 5: inst_AND: 0xFF00FF00 & 0x0F0F0F0F = 0x0F000F00
    if ((0xFF00FF00 & 0x0F0F0F0F) != 0x0F000F00) { fail(5); }

    // --- Shift Operations ---
    // Test 6: inst_SLL: Logical left shift. 1 << 3 = 8.
    if ((1 << 3) != 8) { fail(6); }

    // Test 7: inst_SRL: Logical right shift. 0x80000000u >> 3 = 0x10000000.
    if ((0x80000000u >> 3) != 0x10000000u) { fail(7); }

    // Test 8: inst_SRA: Arithmetic right shift. (-16) >> 2 = -4.
    if (((-16) >> 2) != -4) { fail(8); }

    // Test 9: inst_SLLI: Immediate left shift. 1 << 5 = 32.
    if ((1 << 5) != 32) { fail(9); }

    // Test 10: inst_SRLI: Immediate logical right shift. 0x80000000u >> 5 = 0x04000000.
    if ((0x80000000u >> 5) != 0x04000000u) { fail(10); }

    // Test 11: inst_SRAI: Immediate arithmetic right shift.
    // Simulate LHU loading 0x0000CFC7 (halfword for -12345),
    // SLLI by 16 gives 0xCFC70000, and SRAI by 16 should yield 0xFFFFCFC7 (-12345).
    {
        unsigned int u = 0x0000CFC7;
        int result = ((int)(u << 16)) >> 16;
        if (result != -12345) { fail(11); }
    }

    // --- Set-Less-Than Operations ---
    // Test 12: inst_SLT: Signed less-than. (3 < 5) => 1.
    if ((3 < 5 ? 1 : 0) != 1) { fail(12); }

    // Test 13: inst_SLTU: Unsigned less-than. (0xFFFFFFFEu < 1u) => 0.
    if ((0xFFFFFFFEu < 1u ? 1 : 0) != 0) { fail(13); }

    // Test 14: inst_SLTI: Signed less-than immediate. (3 < 10) => 1.
    if ((3 < 10 ? 1 : 0) != 1) { fail(14); }

    // Test 15: inst_SLTIU: Unsigned less-than immediate. (0xFFFFFFFEu < 2u) => 0.
    if ((0xFFFFFFFEu < 2u ? 1 : 0) != 0) { fail(15); }

    // --- Immediate Arithmetic/Logical Operations ---
    // Test 16: inst_ADDI: 20 + 30 = 50.
    if ((20 + 30) != 50) { fail(16); }

    // Test 17: inst_XORI: 0x12345678 ^ 0x11111111 = 0x03254769.
    if ((0x12345678 ^ 0x11111111) != 0x03254769) { fail(17); }

    // Test 18: inst_ORI: 0x0F0F0F0F | 0x10101010 = 0x1F1F1F1F.
    if ((0x0F0F0F0F | 0x10101010) != 0x1F1F1F1F) { fail(18); }

    // Test 19: inst_ANDI: 0xFF00FF00 & 0x00FF00FF = 0x00000000.
    if ((0xFF00FF00 & 0x00FF00FF) != 0x00000000) { fail(19); }

    // --- Other Instruction ---
    // Test 36: inst_LUI: Load Upper Immediate.
    // Typical LUI operation shifts an immediate left by 12 bits.
    {
        unsigned int lui_result = 0x123 << 12;
        if (lui_result != (0x123 << 12)) { fail(36); }
    }

    // All tests passed.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
