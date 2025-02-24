/* program.c
 * This file serve the purpose as the actual operation will be performed on core
 */

/* Pre Define all address for possible operation
 * PERIPHERAL_BASE: Base address for a status indicator.
 * PERIPHERAL_SUM: Final sum result register.
 * PERIPHERAL_SUM_immediate: Intermediate sum register (updated during each iteration).
*/
#define PERIPHERAL_BASE           0x00000600  
#define PERIPHERAL_SUM            0x00000604
#define PERIPHERAL_SUM_immediate  0x00000608

//Actual function to writes value to the memory-mapped address address
void write_to_peripheral(int address, int value) {
    volatile int* periph_addr = (int*)(address);
    *periph_addr = value;  }

//Main function to perform the whole addition operation
int main() {
	
	//Initialize Array and Sum
	int array[30];  
	int sum = 0;
	
	//Generate the number list from 1 to 30
	for (int i = 0; i < 30; i++) {
		array[i] = i + 1;
	}
    
	//Perform the actual addition and write to indicator in peripheral section
	for (int i = 0; i < 30; i++) {
                sum += array[i];
		write_to_peripheral(PERIPHERAL_SUM_immediate, sum);	// Update intermediate sum
	}
	
	write_to_peripheral(PERIPHERAL_SUM, sum);			// Write final sum
	
	/* Check the result, if the result is correct, then write 0xDEADBEEF to indicator in peripheral section
	 * Else write 0x0BADF00D
	 */
	if (sum == 465) {
		write_to_peripheral(PERIPHERAL_BASE, 0xDEADBEEF);	//True
	} else {    
		write_to_peripheral(PERIPHERAL_BASE, 0x0BADF00D);	//False
	}

	//Prevents the program from exiting
	while (1) {    
	}
    
	return 0;
}
