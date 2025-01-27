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

int main() {
    // Set a new trap vector base address (example: 0x100000)
    write_mtvec(0x100000);

    // Read the current cycle count from the mcycle CSR
    uint32_t start_cycles = read_mcycle();

    // Simple loop for delay or test purpose
    for (volatile int i = 0; i < 1000; i++);

    // Read cycle count after delay
    uint32_t end_cycles = read_mcycle();
    
    // The difference is the elapsed cycles
    uint32_t elapsed_cycles = end_cycles - start_cycles;

    // End of program (in a real setup, store `elapsed_cycles` to memory-mapped I/O for inspection)
    return 0;
}
