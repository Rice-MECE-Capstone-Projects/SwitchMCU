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

// Branch test functions

// // Test BEQ: if (rs1 == rs2) should branch.
// int test_beq(void) {
//     volatile int a = 50, b = 50;  // Equal values
//     if (a == b)
//         return 1;
//     else
//         return 0;
// }

int test_beq(void) {
    volatile int a = 50, b = 50;
    int ret;
    asm volatile (
        "sub t0, %1, %2\n\t"    // t0 = a - b
        "beq t0, x0, 1f\n\t"     // if (t0 == 0) branch to label 1 (i.e. a == b)
        "li %0, 0\n\t"          // ret = 0 (branch not taken)
        "j 2f\n\t"              
        "1: li %0, 1\n\t"       // ret = 1 (branch taken)
        "2:\n\t"
        : "=r"(ret)
        : "r"(a), "r"(b)
        : "t0"
    );
    return ret;
}


// Test BNE: if (rs1 != rs2) should branch.
// int test_bne(void) {
//     volatile int a = 50, b = 60;  // Different values
//     if (a != b)
//         return 1;
//     else
//         return 0;
// }

int test_bne(void) {
    volatile int a = 50, b = 60;
    int ret;
    asm volatile (
        "sub t0, %1, %2\n\t"   // t0 = a - b (will be nonzero if a != b)
        "bne t0, x0, 1f\n\t"    // if t0 != 0, branch to label 1
        "li %0, 0\n\t"         // else: ret = 0 (values equal, not expected)
        "j 2f\n\t"             // jump to label 2
        "1: li %0, 1\n\t"      // label 1: ret = 1 (branch taken: a != b)
        "2:\n\t"
        : "=r"(ret)
        : "r"(a), "r"(b)
        : "t0"
    );
    return ret;
}


// Test BLT: if (rs1 < rs2) for signed values.
int test_bge(void) {
    volatile int a = -10, b = 5;  // -10 is less than 5 (signed comparison)
    if (a < b)
        return 1;
    else
        return 0;
}

// Test BGE: if (rs1 >= rs2) for signed values.
int test_blt(void) {
    volatile int a = 5, b = 5;    // Equal values: 5 >= 5 is true
    if (a >= b)
        return 1;
    else
        return 0;
}

// Test BLTU: if (rs1 < rs2) for unsigned values.
int test_bgeu(void) {
    // Using numbers with MSB = 1: 
    // a = 0xFFFFFFF0 (unsigned: 4294967280, signed: -16)
    // b = 0x00000010 (16)
    volatile unsigned int a = 0xFFFFFFF0;
    volatile unsigned int b = 0x00000010;
    int ret;
    asm volatile (
        "bgeu %1, %2, 1f\n\t"  // Branch if a >= b (unsigned comparison)
        "li %0, 0\n\t"         // If branch not taken, ret = 0
        "j 2f\n\t"             // Jump to label 2
        "1: li %0, 1\n\t"      // Label 1: branch taken, ret = 1
        "2:\n\t"
        : "=r"(ret)
        : "r"(a), "r"(b)
        : 
    );
    return ret;
}



int test_bltu(void) {
    // Set up values: 
    // a = 0x00000010 (16) and b = 0xFFFFFFF0 (unsigned 4294967280, signed -16)
    volatile unsigned int a = 0x00000010;
    volatile unsigned int b = 0xFFFFFFF0;
    int ret;
    asm volatile (
        "bltu %1, %2, 1f\n\t"  // Branch if a < b (unsigned comparison)
        "li %0, 0\n\t"         // If branch not taken, ret = 0
        "j 2f\n\t"             // Jump to label 2
        "1: li %0, 1\n\t"      // Label 1: branch taken, ret = 1
        "2:\n\t"
        : "=r"(ret)
        : "r"(a), "r"(b)
        :
    );
    return ret;
}


// // Test BGEU: if (rs1 >= rs2) for unsigned values.
// int test_bltu_0(void) {
//     volatile unsigned int a = 2, b = 2; // 2 >= 2 as unsigned is true
//     if (a >= b)
//         return 1;
//     else
//         return 0;
// }

// Test BGEU: if (rs1 >= rs2) for unsigned values.
int test_bltu_1(void) {
    volatile unsigned int a = 4244701459, b = 2; // 2 >= 2 as unsigned is true
    if (a >= b)
        return 1;
    else
        return 0;
}


int main(void) {
    int res;

    // Call each branch test and check the result.
    res = test_beq();
    if (res != 1) { fail(1); }    // Expected BEQ to succeed

    res = test_bne();
    if (res != 1) { fail(2); }    // Expected BNE to succeed

    res = test_blt();
    if (res != 1) { fail(3); }    // Expected BLT to succeed

    res = test_bge();
    if (res != 1) { fail(4); }    // Expected BGE to succeed

    // res = test_bltu_0();
    // if (res != 1) { fail(5); }    // Expected BLTU to succeed

    res = test_bgeu();
    if (res != 1) { fail(6); }    // Expected BGEU to succeed

    // res = test_bltu_1();
    // if (res != 1) { fail(7); }    // Expected BLTU to succeed

    res = test_bltu();
    if (res != 1) { fail(8); }    // Expected BLTU to succeed



    // If all branch tests pass, signal overall success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}
