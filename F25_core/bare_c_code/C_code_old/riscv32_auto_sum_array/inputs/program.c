#define PERIPHERAL_BASE 0x00040000  // Base address for memory-mapped I/O

void write_to_peripheral(int value) {
    volatile int* periph_addr = (int*)(PERIPHERAL_BASE);
    *periph_addr = value;  // Write the sum to the peripheral address
}

int main() {
    // Define a large static array of integers (e.g., 1000 elements)
    int array[1000];  
    int sum = 0;

    // Initialize the array with values (e.g., array[i] = i)
    for (int i = 0; i < 1000; i++) {
        array[i] = i + 1;  // Filling array with values 1 to 1000
    }

    // Sum the elements of the array
    for (int i = 0; i < 1000; i++) {
        sum += array[i];
    }

    // Write the sum to memory-mapped I/O
    write_to_peripheral(sum);

    return 0;  // End of program
}
