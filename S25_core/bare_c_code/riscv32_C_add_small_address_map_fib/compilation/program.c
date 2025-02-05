#define   PERIPHERAL_BASE 0x00000600  // Base address for success/failure codes
#define PERIPHERAL_RESULT 0x00000604  // Base address for factorial result

void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);}

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;  
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
//     }
// }


int main() {
    int result = factorial(5);
    write_to_peripheral(PERIPHERAL_BASE, result);  
    // if (result == 6765) {
    //     write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);
    // } else {
    //     write_to_peripheral(PERIPHERAL_BASE, 0xBADF00D);
    // }



    // int    result;
    // int    A = 52;
    // int    B = 475;
    // result = A * B;
    // write_to_peripheral(PERIPHERAL_RESULT, 0xBADF00D);
    
    // if (result == 24700) {
    //     write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);
    // } else {
    //     write_to_peripheral(PERIPHERAL_BASE, 0xBADF00D);
    // }


    while (1) {}  // Halt
    return 0;
}
