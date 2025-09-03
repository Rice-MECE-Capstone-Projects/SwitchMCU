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
    // --------- SRA Test (Arithmetic Right Shift) ---------
    // Use a volatile signed integer to force a runtime load.
    volatile int v = -1000;         // -1000 in 32-bit two's complement.
    int sra_result = v >> 2;         // Arithmetic right shift by 2.
    // Expected: -1000 / 4 = -250.
    if (sra_result != -250) { 
        fail(1); 
    }
    
    // --------- SRL Test (Logical Right Shift) ---------
    // Use a volatile unsigned integer to force a runtime load.
    volatile unsigned int u = 0xF0000000;  // 0xF0000000 (unsigned).
    int srl_result = u >> 2;               // Logical right shift by 2.
    // Expected: 0xF0000000 >> 2 = 0x3C000000.
    if (srl_result != 0x3C000000u) { 
        fail(2); 
    }
    
    // Both tests passed; signal success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
