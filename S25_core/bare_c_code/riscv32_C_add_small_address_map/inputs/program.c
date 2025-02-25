
#define PERIPHERAL_BASE           0x00000600  
#define PERIPHERAL_SUM            0x00000604
#define PERIPHERAL_SUM_immediate  0x00000608
#define PERIPHERAL_SUM_i           0x0000060C

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
    *periph_addr = value;  }

int main() {


    void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;  }
    // Set a new trap vector base address (example: 0x100000)
    write_mtvec(0x100000);

    // Read the current cycle count from the mcycle CSR
    uint32_t start_cycles = read_mcycle();

    // Simple loop for delay or test purpose
    for (volatile int i = 0; i < 100; i++);

    // Read cycle count after delay
    uint32_t end_cycles = read_mcycle();
    
    // The difference is the elapsed cycles
    uint32_t elapsed_cycles = end_cycles - start_cycles;


    write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);

    

    // End of program (in a real setup, store `elapsed_cycles` to memory-mapped I/O for inspection)
    return 0;
}





