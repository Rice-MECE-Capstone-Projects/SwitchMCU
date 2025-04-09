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

// Test CSR operations using the mscratch register.
unsigned int test_csr(void) {
    unsigned int expected = 0xDEADBEEF;
    unsigned int read_val = 0;
    // Use inline assembly to write to and read from mscratch.
    asm volatile (
        "csrw mscratch, %1\n\t"  // Write expected value to mscratch.
        "csrr %0, mscratch\n\t"  // Read mscratch into read_val.
        : "=r"(read_val)         // Output operand.
        : "r"(expected)          // Input operand.
        :                         // No clobbered registers.
    );
    return read_val;
}

int main(void) {
    unsigned int csr_val = test_csr();
    // Check that the read value matches the expected value.
    if (csr_val != 0xDEADBEEF) {
        fail(1);
    }
    // If the CSR test passes, signal success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
