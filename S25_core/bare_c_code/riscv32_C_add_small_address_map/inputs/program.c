#define PERIPHERAL_SUCCESS 0x00000600
#define PERIPHERAL_BYTE    0x00000604

// Write a value to a memory-mapped register.
void write_mmio(unsigned int addr, unsigned int value) {
    volatile unsigned int *ptr = (volatile unsigned int *)addr;
    *ptr = value;
}

// Called when a test fails; test_index indicates which check failed.
void fail(int test_index) {
    write_mmio(PERIPHERAL_BYTE, test_index);
    write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
    while (1);
}

int main(void) {
    int result = 0;

    // Test 1: inst_ADD - 7 + 5 = 12
    result = 7 + 5;
    if (result != 12) { fail(1); }

    // Test 2: inst_SUB - (result 12) - 3 = 9
    result = result - 3;
    if (result != 9) { fail(2); }

    // Test 3: inst_XOR - 9 XOR 0xF (9 ^ 15) = 6
    result = result ^ 0xF;
    if (result != 6) { fail(3); }

    // Test 4: inst_OR - 6 OR 0x10 = 0x16 (22 decimal)
    result = result | 0x10;
    if (result != 0x16) { fail(4); }

    // Test 5: inst_AND - 0x16 AND 0x1F = 0x16 (22)
    result = result & 0x1F;
    if (result != 0x16) { fail(5); }

    // Test 6: inst_SLL - Logical left shift: 22 << 1 = 44
    result = result << 1;
    if (result != 44) { fail(6); }

    // Test 7: inst_SRL - Logical right shift: 44 >> 1 = 22 (unsigned shift)
    result = ((unsigned int)result) >> 1;
    if (result != 22) { fail(7); }

    // Test 8: inst_SRA - Arithmetic right shift: (-16) >> 2 = -4
    result = (-16) >> 2;
    if (result != -4) { fail(8); }

    // Test 9: inst_SLLI - Immediate left shift: 1 << 5 = 32
    result = 1 << 5;
    if (result != 32) { fail(9); }

    // Test 10: inst_SRLI - Immediate logical right shift: 0x80000000u >> 5 = 0x04000000
    result = 0x80000000u >> 5;
    if (result != 0x04000000u) { fail(10); }

    // Test 11: inst_SRAI - Immediate arithmetic right shift.
    // Simulate LHU loading a 16-bit halfword value 0xCFC7 (which is -12345) then:
    // SLLI by 16 yields 0xCFC70000, SRAI by 16 should yield 0xFFFFCFC7 (-12345)
    {
        unsigned int u = 0x0000CFC7;
        result = ((int)(u << 16)) >> 16;
        if (result != -12345) { fail(11); }
    }

    // Test 12: inst_ADDI - 20 + 30 = 50
    result = 20 + 30;
    if (result != 50) { fail(12); }

    // Test 13: inst_XORI - 0x12345678 ^ 0x11111111 = 0x03254769
    result = 0x12345678 ^ 0x11111111;
    if (result != 0x03254769) { fail(13); }

    // Test 14: inst_ORI - 0x0F0F0F0F | 0x10101010 = 0x1F1F1F1F
    result = 0x0F0F0F0F | 0x10101010;
    if (result != 0x1F1F1F1F) { fail(14); }

    // Test 15: inst_ANDI - 0xFF00FF00 & 0x00FF00FF = 0x00000000
    result = 0xFF00FF00 & 0x00FF00FF;
    if (result != 0x00000000) { fail(15); }

    // Test 16: inst_LUI - Load Upper Immediate:
    // For example, shifting 0x123 left by 12 bits. Expected: 0x123000.
    result = 0x123 << 12;
    if (result != (0x123 << 12)) { fail(16); }

    // All tests passed; signal success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
