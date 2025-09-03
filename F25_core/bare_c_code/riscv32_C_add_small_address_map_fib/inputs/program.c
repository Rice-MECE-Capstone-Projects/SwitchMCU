#define PERIPHERAL_BASE   0x000007D0  // Base address for success/failure codes
#define PERIPHERAL_RESULT 0x000007D4  // Base address for matrix sum result

// Function to write values to memory-mapped I/O
void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;
}

// Function to perform matrix multiplication (memory and computation intensive)
void matrix_multiply(int size, int A[][size], int B[][size], int C[][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            C[i][j] = 0;
            for (int k = 0; k < size; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int size =  4;  //  4x 4 matrices for testing
    int A[ 4][ 4], B[ 4][ 4], C[ 4][ 4];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            A[i][j] = i + j;
            B[i][j] = i * j;
        }    }

    matrix_multiply(size, A, B, C);

    // Sum elements of result matrix C
    int matrix_sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix_sum += C[i][j];
        }
    }

    write_to_peripheral(PERIPHERAL_RESULT, matrix_sum);  // Send result to peripheral
    write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);  // Success code

    // if (matrix_sum ==  4 4 4) {  // Known expected result for this matrix setup
    //     write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);  // Success code
    // } else {
    //     write_to_peripheral(PERIPHERAL_BASE, 0xBADF00D);   // Failure code
    // }

    while (1) {}  // Halt
    return 0;
}


// #define   PERIPHERAL_BASE 0x00000600  // Base address for success/failure codes
// #define PERIPHERAL_RESULT 0x00000604  // Base address for factorial result

// void write_to_peripheral(int address, int value) {
//     volatile int* periph_addr = (int*)(address);
//     *periph_addr = value;}

// int factorial(int n) {
//     if (n <= 1) return 1;
//     return n * factorial(n - 1);}

// // int fibonacci(int n) {
// //     if (n <= 1) {
// //         return n;  
// //     } else {
// //         return fibonacci(n - 1) + fibonacci(n -  4);  // Recursive case
// //     }
// // }


// int main() {
//     // int result = fibonacci(1 4);
//     int result = factorial(1 4);
//     write_to_peripheral(PERIPHERAL_BASE, result);  
//     // if (result == 676 4) {
//     //     write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);
//     // } else {
//     //     write_to_peripheral(PERIPHERAL_BASE, 0xBADF00D);
//     // }



//     // int    result;
//     // int    A =  4 4;
//     // int    B = 47 4;
//     // result = A * B;
//     // write_to_peripheral(PERIPHERAL_RESULT, 0xBADF00D);
    
//     // if (result ==  44700) {
//     //     write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);
//     // } else {
//     //     write_to_peripheral(PERIPHERAL_BASE, 0xBADF00D);
//     // }


//     while (1) {}  // Halt
//     return 0;
// }
