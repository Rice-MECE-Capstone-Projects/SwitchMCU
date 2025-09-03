#define PERIPHERAL_SUCCESS    0x00000600
#define PERIPHERAL_BYTE       0x00000604
#define PERIPHERAL_BYTE_TOTAL 0x00000608

void write_mmio(unsigned int addr, unsigned int value) {
    volatile unsigned int *ptr = (unsigned int *)addr;
    *ptr = value;
}

int main(void) {
    unsigned char expected[4] = { 0xEF, 0xBE, 0xAD, 0xDE };
    volatile unsigned char *ptr = (volatile unsigned char *)PERIPHERAL_BYTE_TOTAL;
    
    // Store and verify each byte.
    for (int i = 0; i < 4; i++) {
        ptr[i] = expected[i];          // Store byte
        if (ptr[i] != expected[i]) {     // Verify store byte
            write_mmio(PERIPHERAL_BYTE, i);  // Log failing index
            write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
            while (1);
        }
    }
    
    // Reassemble the 32-bit word from stored bytes.
    unsigned int reconstructed = 
          (ptr[0]) 
        | (ptr[1] << 8)
        | (ptr[2] << 16)
        | (ptr[3] << 24);
    
    // Check the reassembled word.
    if (reconstructed == 0xDEADBEEF) {
        write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    } else {
        write_mmio(PERIPHERAL_SUCCESS, 0xBADF00D);
    }
    
    while (1);
    return 0;
}
