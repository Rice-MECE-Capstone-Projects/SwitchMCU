// load_store_operations.c
// Tests: 
//  - Load/Store: inst_LB, inst_LH, inst_LW, inst_LBU, inst_LHU, inst_SB, inst_SH, inst_SW
//  Tests 20–27.

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
    // --- Load Instructions ---
    // Test 20: inst_LB: Load Byte (signed).
    // // Simulate a memory byte with value 0x80, which sign-extends to -128.
    // {
    //     unsigned char mem = 0x80;
    //     int lb_val = ((char)mem);  // Sign-extend via cast to char.
    //     if (lb_val != -128) { fail(20); }
    // }
//
{
    signed char mem = 0x80;    // Explicitly signed
    int lb_val = mem;          // This should sign-extend 0x80 to -128 (0xFFFFFF80)
    if (lb_val != -128) { fail(20); }
}


    // Test 21: inst_LH: Load Halfword (signed).
    // 0x8000 as a halfword is -32768.
    {
        unsigned short half = 0x8000;
        int lh_val = ((short)half); // Sign-extend.
        if (lh_val != -32768) { fail(21); }
    }

    // Test 22: inst_LW: Load Word.
    // Simply check a 32-bit value.
    {
        unsigned int lw_val = 0xDEADBEEF;
        if (lw_val != 0xDEADBEEF) { fail(22); }
    }

    // Test 23: inst_LBU: Load Byte Unsigned.
    // 0x80 should zero-extend to 0x80.
    {
        unsigned char mem = 0x80;
        unsigned int lbu_val = (unsigned int)mem;
        if (lbu_val != 0x80) { fail(23); }
    }

    // Test 24: inst_LHU: Load Halfword Unsigned.
    // 0x8000 should zero-extend to 0x8000.
    {
        unsigned short half = 0x8000;
        unsigned int lhu_val = (unsigned int)half;
        if (lhu_val != 0x8000) { fail(24); }
    }

    // --- Store Instructions ---
    // Test 25: inst_SB: Store Byte.
    // Simulate storing a byte; value should equal the stored byte.
    {
        unsigned char store_byte = 0x55;
        unsigned char sb_val = store_byte;  // Simulation of store.
        if (sb_val != 0x55) { fail(25); }
    }

    // Test 26: inst_SH: Store Halfword.
    {
        unsigned short store_half = 0xAA55;
        unsigned short sh_val = store_half;
        if (sh_val != 0xAA55) { fail(26); }
    }

    // Test 27: inst_SW: Store Word.
    {
        unsigned int store_word = 0xDEADBEEF;
        unsigned int sw_val = store_word;
        if (sw_val != 0xDEADBEEF) { fail(27); }
    }

    // All load/store tests passed.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
