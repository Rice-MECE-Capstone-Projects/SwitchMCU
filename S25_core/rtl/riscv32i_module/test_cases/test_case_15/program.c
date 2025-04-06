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

// Define basic integer types to avoid stdint.h
typedef unsigned int uint32_t;

// Function to read the mcycle CSR (cycle counter)
static inline uint32_t read_mcycle() {
    uint32_t value;
    asm volatile ("csrr %0, mcycle" : "=r" (value));
    return value;
}

// Function to write to the mtvec CSR (trap vector base address)
static inline void write_mtvec(uint32_t value) {
    asm volatile ("csrw mtvec, %0" :: "r" (value));
}

    void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;  
    }
    // Set a new trap vector base address (example: 0x100000)


int main(void) {
    int res;

    write_mtvec(0x100000);


    // If all branch tests pass, signal overall success.
    write_mmio(PERIPHERAL_SUCCESS, 0xDEADBEEF);
    while (1);
    return 0;
}