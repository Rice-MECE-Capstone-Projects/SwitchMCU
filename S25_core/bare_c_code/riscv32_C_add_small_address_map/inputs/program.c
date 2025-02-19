#define PERIPHERAL_BASE           0x00000600  
#define PERIPHERAL_SUM            0x00000604
#define PERIPHERAL_SUM_immediate  0x00000608
#define PERIPHERAL_SUM_i           0x0000060C


void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;  }

int main() {
    int array[10];  
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;}
    for (int i = 0; i < 10; i++) {
                sum += array[i];
    write_to_peripheral(PERIPHERAL_SUM_immediate, sum);}
    write_to_peripheral(PERIPHERAL_SUM, sum);

    if (sum == 55) {
                write_to_peripheral(PERIPHERAL_SUM_i,0xDEADF00F);
    } else {    write_to_peripheral(PERIPHERAL_BASE, 0x0BADF00D);}
    
    int sum_while;
    sum_while = 0;
    while (1) {   

        sum_while += 1;
        if (sum_while == 10) {
            break;
        }
     }
     write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);
     while (1) {

     }
    return 0; 
}



