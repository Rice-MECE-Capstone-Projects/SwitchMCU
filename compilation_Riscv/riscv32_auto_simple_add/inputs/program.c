#define IO_BASE 0x00040000  // Base address for memory-mapped I/O
#define SUCCESS_CODE 0x1    // Code for test pass
#define FAILURE_CODE 0x0    // Code for test fail

// Define types
typedef unsigned int uint32_t;

// Function to write a result to a memory-mapped I/O address for test status
void write_to_io(int result) {
    volatile uint32_t *io_addr = (uint32_t *)(IO_BASE);
    *io_addr = result;  // Write the test result to the I/O address
}

int main() {
    // Test variables
    int a = 5;
    int b = 10;
    int sum = 0;

    // Perform an addition test
    sum = a + b;
    if (sum != 15) {
        write_to_io(FAILURE_CODE);  // Test failed, write failure code
        return 1;                    // Exit early on failure
    }

    // Test conditional branching
    if (sum == 15) {
        write_to_io(SUCCESS_CODE);  // Test passed, write success code
    } else {
        write_to_io(FAILURE_CODE);  // Test failed, write failure code
        return 1;                    // Exit early on failure
    }

    // Loop test with addition
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += i;
    }

    // Verify the loop addition result
    if (total != 10) {  // 0+1+2+3+4 = 10
        write_to_io(FAILURE_CODE);
        return 1;
    }

    // Final success
    write_to_io(SUCCESS_CODE);  // All tests passed

    return 0;
}
