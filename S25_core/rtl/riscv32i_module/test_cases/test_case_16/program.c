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
    // In ILP32, long is 32 bits.
    // Use a fixed memory address (adjust as appropriate for your system).
    volatile long *mem_ptr = (volatile long *)0x00000700;
    
    // Test value: 0xDEADBEEF
    long test_val = 0xDEADBEEF;
    
    // Store the long value to memory.
    *mem_ptr = test_val;
    
    // Load the long value from memory.
    long loaded_val = *mem_ptr;
    
    // Check if the loaded value matches the expected test value.
    if (loaded_val != test_val) {
        fail(1);
    }
    
    // If the test passes, signal success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
