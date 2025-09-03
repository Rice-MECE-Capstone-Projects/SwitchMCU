#define PERIPHERAL_SUCCESS 0x00000600

// Write a value to a memory-mapped register.
void write_mmio(unsigned int addr, unsigned int value) {
    volatile unsigned int *ptr = (volatile unsigned int *)addr;
    *ptr = value;
}

int main(void) {
    // This is the value loaded by LHU: zero-extended from a 16-bit halfword.
    // The halfword (0xCFC7) represents -12345 in two's complement 16-bit.
    unsigned int u = 0x0000CFC7;
    
    // Simulate:
    // slli a5, a5, 16  --> Shift left by 16 bits
    // srai a5, a5, 16  --> Arithmetic shift right by 16 bits (sign-extend)
    int result = ((int)(u << 16)) >> 16;
    
    // Expected result is sign-extended: 0xFFFFCFC7, which is -12345.
    if (result == -12345) {
        write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    } else {
        write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
    }
    
    while (1);
    return 0;
}
