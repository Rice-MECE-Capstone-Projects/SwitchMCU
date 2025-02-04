// #define PERIPHERAL_BASE 0x00000600  // Base address for memory-mapped I/O
// #define SUCCESS_FLAG    0xDEADBEEF  // Special value indicating successful execution

// Function to write a value to the memory-mapped I/O
// void write_to_peripheral(int value) {
//     volatile int* periph_addr = (int*)(PERIPHERAL_BASE);
//     *periph_addr = value;  // Write value to the peripheral address
// }

int main() {
    // int array[30];  
    int sum = 0;

    // // Initialize the array with values from 1 to 30
    // for (int i = 0; i < 30; i++) {
    //     array[i] = i + 1;
    // }

    // // Sum the elements of the array
    // for (int i = 0; i < 30; i++) {
    //     sum += array[i];
    // }

    // // Write the sum to memory-mapped I/O

    // int sum = 0;
    // for (int i = 0; i < 30; i++) {
    //     sum += i + 1;
    // }

   while (1) {
    sum += sum + 1;
        // Optionally toggle a value to indicate ongoing operation
    }


    // write_to_peripheral(sum);

    // // Check if the sum is correct (465) and write success flag if true
    // if (sum == 465) {
    //     write_to_peripheral(0xFA);  // Signal successful execution
    // } else {
    //     write_to_peripheral(0xFB);     // Signal error
    // }

    // Infinite loop to indicate the program has finished
    // while (1) {
    //     // Optionally toggle a value to indicate ongoing operation
    // }

    return 0;  // This won't be reached
}
