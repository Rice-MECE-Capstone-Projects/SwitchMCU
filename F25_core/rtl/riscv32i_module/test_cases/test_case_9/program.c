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
    // ----- SLT Test: Signed Less-Than -----
    // 0xFFFFFFFF as a signed integer is -1.
    // Compare -1 and 1: Expect SLT to yield 1.
    signed int a_signed = -1;   // equivalent to 0xFFFFFFFF in 32-bit two's complement.
    signed int b_signed = 1;
    int slt_result = (a_signed < b_signed) ? 1 : 0;
    if (slt_result != 1) {  // If SLT result is not 1, test fails.
        fail(1);
    }
    
    // ----- SLTU Test: Unsigned Less-Than -----
    // 0xFFFFFFFF as an unsigned integer is 4294967295.
    // Compare 4294967295 and 1: Expect SLTU to yield 0.
    unsigned int a_unsigned = 0xFFFFFFFF; // 4294967295
    unsigned int b_unsigned = 1;
    int sltu_result = (a_unsigned < b_unsigned) ? 1 : 0;
    if (sltu_result != 0) {  // If SLTU result is not 0, test fails.
        fail(2);
    }
    
    // Both tests passed; signal overall success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
