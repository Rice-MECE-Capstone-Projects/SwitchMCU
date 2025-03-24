#define PERIPHERAL_SUCCESS 0x00000600
#define PERIPHERAL_BYTE    0x00000604

// Write a value to a memory-mapped register.
void write_mmio(unsigned int addr, unsigned int value) {
    volatile unsigned int *ptr = (volatile unsigned int *)addr;
    *ptr = value;
}

// Called when a test fails; test_index indicates which test failed.
void fail(int test_index) {
    write_mmio(PERIPHERAL_BYTE, test_index);
    write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
    while (1);
}

int main(void) {
    // ----- SRA Test (Variable Shift Count, Signed) -----
    // Here, a is a volatile signed int set to -1000.
    // The shift count is stored in a variable (2) so that the hardware uses the
    // register-based SRA instruction (not SRAI).
    volatile int a = -1000;
    volatile int shift_count = 2;
    int sra_result = a >> shift_count; // Should perform arithmetic shift.
    // Expected result: -1000 / 4 = -250.
    if (sra_result != -250) { 
        fail(1);
    }
    
    // ----- SRL Test (Variable Shift Count, Unsigned) -----
    // Here, b is a volatile unsigned int set to 0xF0000000.
    // The shift count is stored in a variable (2), ensuring the hardware uses the
    // register-based SRL instruction.
    volatile unsigned int b = 0xF0000000;
    volatile unsigned int shift_count2 = 2;
    unsigned int srl_result = b >> shift_count2; // Logical right shift.
    // Expected result: 0xF0000000 >> 2 = 0x3C000000.
    if (srl_result != 0x3C000000u) { 
        fail(2);
    }
    
    // If both tests pass, signal success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
