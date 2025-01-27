#define IO_BASE 0x00040000  // Memory-mapped I/O base address

void write_to_io(int offset, int value) {
    volatile int* io_addr = (int*)(IO_BASE + offset);
    *io_addr = value;
}

int main() {
    int N = 10;  // Number of Fibonacci numbers to compute
    int fib[N];

    // Initialize first two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Compute Fibonacci numbers and store them in the array
    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Write the Fibonacci numbers to memory-mapped I/O
    for (int i = 0; i < N; i++) {
        write_to_io(i * 4, fib[i]);  // Each result is written to consecutive I/O addresses
    }

    return 0;
}
