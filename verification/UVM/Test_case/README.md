# UVM Testbench for AHB to APB Bridge Verification

This repository contains a UVM-based testbench for verifying the functionality of an AHB (Advanced High-performance Bus) to APB (Advanced Peripheral Bus) bridge. The testbench includes multiple test cases that cover various traffic patterns between the AHB and APB interfaces.

## Overview

The primary goal of this testbench is to verify that the AHB to APB bridge behaves correctly in different scenarios by generating traffic on both the AHB and APB buses. The testbench includes several test cases that focus on specific use cases, including single read/write operations, burst transactions, and random traffic generation.

## Test Cases

Below are the test cases implemented in the testbench:

### 1. **Single Write Test (`ahb_apb_single_write_test`)**
   - **Description**: This test case generates a single write transaction on the AHB bus and verifies the correct transfer of data to the APB bus.
   - **Details**:
     - A single write operation is initiated on the AHB bus with a specified address and data.
     - The corresponding write operation is performed on the APB bus through the bridge.
     - The test checks whether the APB bus responds with the correct data.
   - **Components**:
     - AHB Single Write Sequence (`ahb_single_write_sequence`)
     - APB Single Write Sequence (`apb_single_write_sequence`)

### 2. **Single Read Test (`ahb_apb_single_read_test`)**
   - **Description**: This test case generates a single read transaction on the AHB bus and verifies that the correct data is read from the APB bus.
   - **Details**:
     - A single read operation is initiated on the AHB bus with a specified address.
     - The bridge transfers the read request to the APB bus, and the data is returned from the APB bus to the AHB bus.
     - The test checks whether the data read from the APB bus matches the expected value.
   - **Components**:
     - AHB Single Read Sequence (`ahb_single_read_sequence`)
     - APB Single Read Sequence (`apb_single_read_sequence`)

### 3. **Burst Write Test (`ahb_apb_burst_write_test`)**
   - **Description**: This test case generates a burst write transaction on the AHB bus and verifies the correct transfer of multiple data words to the APB bus.
   - **Details**:
     - A burst write operation is initiated on the AHB bus with multiple data words.
     - The bridge processes the burst transaction and transfers the data to the APB bus.
     - The test verifies that the data written on the APB bus is correct and matches the AHB write sequence.
   - **Components**:
     - AHB Burst Write Sequence (`ahb_burst_write_sequence`)
     - APB Burst Write Sequence (`apb_burst_write_sequence`)

### 4. **Burst Read Test (`ahb_apb_burst_read_test`)**
   - **Description**: This test case generates a burst read transaction on the AHB bus and verifies that the correct data is read from the APB bus.
   - **Details**:
     - A burst read operation is initiated on the AHB bus with a specified address range.
     - The bridge transfers the burst read request to the APB bus and returns the data from the APB bus to the AHB bus.
     - The test verifies that the data read from the APB bus matches the expected values.
   - **Components**:
     - AHB Burst Read Sequence (`ahb_burst_read_sequence`)
     - APB Burst Read Sequence (`apb_burst_read_sequence`)

### 5. **Random Test (`ahb_apb_random_test`)**
   - **Description**: This test case generates random traffic on both the AHB and APB buses to test the bridge’s behavior under arbitrary conditions.
   - **Details**:
     - Random read and write operations are generated on the AHB bus.
     - The bridge handles the random transactions and forwards them to the APB bus.
     - The test verifies that the data transferred between the AHB and APB buses is correct and consistent with the expected behavior.
   - **Components**:
     - AHB Random Sequence (`ahb_random_sequence`)
     - APB Random Sequence (`apb_random_sequence`)


## Customizing the Testbench

You can easily extend this testbench to include additional scenarios or customize the behavior of the agents and sequences. For example:
- Add more complex traffic generation patterns.
- Extend the scoreboard to handle additional verification checks.

Feel free to modify the `env_config_h` configuration object or the test cases to suit your needs.

## Conclusion

This testbench provides a solid foundation for verifying the AHB to APB bridge. By running these tests, you can ensure that the bridge handles the expected transactions correctly across both buses. The modular design allows for easy extension and customization to meet specific verification requirements.

