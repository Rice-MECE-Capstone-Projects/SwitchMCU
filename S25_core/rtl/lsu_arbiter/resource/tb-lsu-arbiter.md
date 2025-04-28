# LSU Arbiter Testbench
## Testbench Architecture
The testbench (`tb_lsu_arbiter.v`) is designed to thoroughly verify the LSU Arbiter module through rigorous testing of various scenarios. The testbench architecture includes:
- Clock Generation: A 100MHz clock (10ns period) driving the simulation
- Signal Monitoring: All critical signals are monitored and logged
- SDRAM Controller Model: A behavioral model that simulates realistic SDRAM controller responses
- Test Sequence Control: Organized test cases with clear pass/fail criteria
- VCD Tracing: Complete signal tracing for waveform analysis
- Automated Verification: Automated checking of expected vs. actual signal values

## Test Methodology
The testbench employs a structured approach to verification:
- Reset and Initialization: All signals are properly initialized and the DUT is reset
- Directed Test Cases: Specific scenarios are tested in sequence with clear expectations
- Signal Checking: Signals are verified at precise timing points to ensure correct behavior
- Error Logging: Any discrepancies between expected and actual behavior are logged
- Timing Verification: Correct handshaking timing between interfaces is verified
- Priority Verification: Arbitration priority rules are explicitly tested
- Final Report: Summary of test results with pass/fail status

## Helper Tasks
The testbench implements several helper tasks to facilitate testing:
- `reset`: Applies reset to the DUT with proper timing.
- `init_signals`: Initializes all test signals to known states before test execution.
- `wait_for_grant`: Monitors for grant signal with configurable timeout, determining if a cache request has been properly granted.
    ```v
    task wait_for_grant;
        input is_icache;
        output got_grant;
        // Waits for grant signal with timeout
    endtask
    ```
- `wait_for_read_valid`: Monitors for read data valid signal with configurable timeout, ensuring read data is properly returned.
    ```v
    task wait_for_read_valid;
        input is_icache;
        output got_valid;
        // Waits for read valid signal with timeout
    endtask
    ```

## SDRAM Controller Model
The testbench includes a behavioral model of the SDRAM controller that simulates realistic behavior.
Key characteristics:
- Responds to read/write requests within 1-2 clock cycles
- Returns predefined data pattern (0xDEADBEEF) for read requests
- Properly toggles busy and valid signals to simulate SDRAM timing
- Maintains proper handshaking with the arbiter

## Detailed Test Cases
#### Test Case 1: I-cache Read Request
Tests a basic read request from the I-cache interface.
Verification points:
- Grant signal correctly asserted in response to request
- Address properly passed to SDRAM controller
- Read valid signal correctly received
- Read data matches expected pattern
- Proper timing of handshake signals

#### Test Case 2: D-cache Read Request
Similar to Test Case 1, but using the D-cache interface to verify its operation.
Verification points:
- Same as Test Case 1, but for D-cache interface
- Ensures both cache interfaces operate identically when used independently

#### Test Case 3: Priority Arbitration
Tests the priority mechanism when both I-cache and D-cache request simultaneously.
Verification points:
- I-cache is granted access when both caches request simultaneously
- D-cache request is not granted while I-cache is being serviced
- I-cache address is forwarded to SDRAM controller, not D-cache address
- D-cache request is properly serviced after I-cache request completes
- Proper timing of all signals during priority arbitration

#### Test Case 4: Write Operation
Tests write operation functionality.
Verification points:
- Grant signal correctly asserted for write request
- Address correctly forwarded to SDRAM controller
- Data correctly forwarded to SDRAM controller
- Write enable signal properly asserted (active low)
- Byte enable signals correctly propagated as data mask
- FSM properly transitions back to IDLE after write operation

#### Debug Signals
The testbench includes specific debug signals to aid in troubleshooting:
```v
wire is_icache_selected;
assign is_icache_selected = dut.current_icache;
```
This allows monitoring of internal arbiter state to verify proper cache selection.

#### Interpreting Test Results
The testbench output provides detailed information about each test case execution:
- Test Case Execution: Each test case displays its description and parameters
    ```bash
    Test Case 1: I-cache read request at address 00001000
    ```
- Signal Transitions: Critical signal transitions are logged
    ```bash
    I-cache grant received
    I-cache read valid received, data = DEADBEEF
    ```
- Error Messages: Any detected errors are clearly reported
    ```bash
    Error: I-cache read data mismatch: got 12345678, expected DEADBEEF
    ```
- Final Summary: Overall test results are summarized
    ```bash
    All test cases PASSED
    or
    2 test cases FAILED
    ```

## Waveform Analysis
The generated VCD file (`arbiter.vcd`) can be viewed with any waveform viewer like GTKwave:
```bash
gtkwave arbiter.vcd
```
Key signals to observe:
- State transitions between IDLE and BUSY
- Request, grant, and valid signal timing
- Read/Write enable signals to SDRAM controller
- Address and data propagation
- Busy and valid signals from SDRAM controller

## Coverage
While the testbench doesn't include formal coverage metrics, it covers:
- All basic operations (read/write)
- Both cache interfaces
- Priority arbitration
- Signal timing verification
- Error conditions (timeout detection)

For enhanced coverage, adding:
- Byte-enable variations
- Back-to-back requests
- Error injection (SDRAM busy conditions)
- Randomized addresses and data

## License
Apache License
Version 2.0, January 2004
