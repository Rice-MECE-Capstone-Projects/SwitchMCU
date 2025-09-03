#define PERIPHERAL_SUCCESS   0x00000600
#define PERIPHERAL_HALF_ADDR 0x00000608

void write_mmio(unsigned int addr, unsigned int value) {
    volatile unsigned int *ptr = (volatile unsigned int *)addr;
    *ptr = value;
}

int main(void) {
    // Use a signed short pointer to force LH (signed half-word load)
    volatile short *half_ptr = (volatile short *)PERIPHERAL_HALF_ADDR;
    
    // Store 0xDEAD into memory using a half-word store.
    *half_ptr = (short)0xDEAD;
    
    // Load the value using LH
    short loaded = *half_ptr;
    
    // Check if the loaded half-word is as expected.
    if (loaded == (short)0xDEAD) {
        write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    } else {
        write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
    }
    
    while (1);
    return 0;
}
