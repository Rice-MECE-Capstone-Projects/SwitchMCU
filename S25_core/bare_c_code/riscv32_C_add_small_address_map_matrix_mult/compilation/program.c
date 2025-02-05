#define PERIPHERAL_BASE           0x00000600  
#define PERIPHERAL_SUM            0x00000604
#define PERIPHERAL_SUM_immediate  0x00000608


void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;  }

int main() {
    int array[30];  
    int sum = 0;
    for (int i = 0; i < 30; i++) {
        array[i] = i + 1;}
    for (int i = 0; i < 30; i++) {
                sum += array[i];
    write_to_peripheral(PERIPHERAL_SUM_immediate, sum);
                    }
    write_to_peripheral(PERIPHERAL_SUM, sum);

    if (sum == 465) {
                write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);
    } else {    write_to_peripheral(PERIPHERAL_BASE, 0x0BADF00D);}
    while (1) {    }
    return 0; 
}



