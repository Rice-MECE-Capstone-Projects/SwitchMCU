# AMBA (AHB/APB) Interface Design and Documentation

## AMBA Overview

 
The Advanced High-performance Bus (AHB) and Advanced Peripheral Bus (APB) are integral components of ARM's AMBA (Advanced Microcontroller Bus Architecture) protocol. The AHB is utilized for high-speed data transfers, connecting with the core of the Switch MCU in our design, and aims for a 72MHz clock rate. Performance is contingent upon the results of synthesis and static timing analysis (STA).

The APB, in contrast, is simpler and caters to lower-speed, lower-bandwidth communication with peripherals, targeting a 36MHz rate. Similar to the AHB, actual efficiency depends on the synthesis process. As parts of the AMBA suite, AHB and APB work in tandem to ensure efficient communication between system functional units/modules.

Our design employs the AHB and APB from the AMBA protocol, with some simplifications. The AMBA protocol is a product of ARM. You can find the complete reference manual on AHB here:

AHB: https://developer.arm.com/documentation/ihi0033/latest/
APB: https://developer.arm.com/documentation/ihi0024/latest/

  
## Peripheral Communication - Architecture and Overall Design

For efficient peripheral communication, our SwitchMCU consists of several components:

 1. **AHB Master -** Integrated within the Core, the AHB Master connects directly to the core and handles data transfers on the Advanced High-performance Bus (AHB). It initiates writes out by sending data, and reads data in from Slave devices. 
 2. **AHB to APB Bridge -** Comprised of AHB Slave and APB Master, this bridge facilitates communication between the AHB and Advanced Peripheral Bus (APB), featuring an AHB Slave that interfaces with the AHB and an APB Master for the APB.
 3. **APB Slave -** Used to connect peripherals like UART and SPI, the APB Slave acts as a communication medium between these devices and the bus system.

In our overall process design as illustrated in the accompanying diagram, we focus on the SPI as our reference peripheral. Within the `rtl_component/ahb2apb_swc` directory, the `apb_swc` file links the APB Master to the AHB Slave. The `spictrl_swc` file includes the APB Slave, which also serves as the SPI controller.

  
## SRAM Communication - Architecture and Overall Design

For efficient SRAM communication, our SwitchMCU consists of two components:

 1. **AHB Master -** This component is integrated within the Core and is responsible for initiating and managing the high-speed data transfers and communications on the Advanced High-performance Bus (AHB) from the core components. Its primary function is to act as the central communicator with other components in the system. 
 2. **AHB Slave -** This is housed within the back_up_plan version of the SRAM. The AHB Slave acts as a responder to the requests made by the AHB Master. It facilitates the reading from and writing to the SRAM, managing the data transfer processes to ensure accurate and efficient access to data stored within SRAM.
 
The overall process design is illustrated in the diagram below. The relevant files and configurations for this setup are located in the `SRAM_SWC` folder. This folder contains all the necessary code and documentation detailing how the SRAM is interfaced and managed via the AMBA bus system

 
![image-20231130213211708](C:\Users\gaoji\AppData\Roaming\Typora\typora-user-images\image-20231130213211708.png)

## AHB Signals Explained (Referenced from ARM's Official Manual)

- `HADDR[31:0]` This is the address bus, used to specify the address for a read or write operation. It's typically 32 bits wide, allowing for a large address space.

- `HMASTLOCK` This is the master lock signal. It's used to form a locked sequence of transfers, which is essential in read-modify-write operations where atomic access is required (i.e., no other master should access the data during the sequence).

- `HPROT[6:0]` This signal indicates the protection level of the transfer. It provides information about the transaction type, such as whether it is cacheable, bufferable, privileged, or with side-effects.

- `HSIZE[2:0]` This is the size of the transfer, indicating how many bytes are being transferred in each operation. It can typically represent sizes like byte, half-word, word, etc.
 
- `HTRANS[1:0]` This is the transfer type signal. It indicates the type of current transfer - whether it’s non-sequential, sequential, idle, or a burst.
 
- `HWDATA[31:0]` This is the write data bus. It carries the data that is to be written to the address specified by - HADDR during write transactions.
 
- `HWRITE` This signal indicates whether the current transaction is a read or a write operation.
 
- `DONE` Indicate the completion of a transaction or operation.
 
- `RESP` This signal generally represents the response or status of the transaction, indicating success, failure, or other status codes as per your design.

- `WBUFFREAD` Non-Standard AMBA signal used for debug

- `RBUFFREAD` Non-Standard AMBA signal used for debug

- `RBUFFWRITE` Non-Standard AMBA signal used for debug

- `RBUFFDATA[31:0]` Non-Standard AMBA signal used for debug

## APB Signals Explained (Referenced from ARM's Official Manual)

- `PCLK` This is the - Peripheral Clock. It's used to synchronize transactions on the APB. All transactions are synchronized to the rising edge of `PCLK`.

- `PRESETn` This is the - Peripheral Reset signal, active low. It is used to reset the peripherals connected to the APB. When `PRESETn` is low, the peripherals are in the reset state.

- `PADDR[31:0]` This is the Peripheral Address Bus. It's a 32-bit bus used to address the peripheral registers. Each peripheral connected to the APB can be accessed via a unique address on this bus.

- `PSELx` This is the Peripheral Select signal. It's used to select a specific peripheral on the APB. Each peripheral has an associated `PSELx` signal, and when it's asserted, the corresponding peripheral is selected for communication.

- `PENABLE` This is the Peripheral Enable signal. It's used to enable data transfers to and from the selected peripheral. When `PENABLE` is high, it indicates that a read or write operation is being performed.

- `PWRITE` This signal indicates the direction of the data transfer. If `PWRITE` is high, it's a write operation; if low, it's a read operation.

- `PWDATA[31:0]` This is the Peripheral Write Data Bus. It's a 32-bit bus used to send data to the peripheral during write operations.

- `PREADY` This signal is used by the peripheral to indicate that it has completed the current data transfer. When `PREADY` is high, it indicates that the data on `PRDATA` (for reads) or the acceptance of data on `PWDATA` (for writes) is valid.

- `PRDATA` This is the Peripheral Read Data Bus. When a peripheral is read, it places the read data onto this bus.

- `PSLVERR` This is the Peripheral Slave Error. It's used by the peripheral to indicate an error in the transaction. If `PSLVERR` is high, it indicates that some sort of error occurred during the data transfer.
  

## Design Direction

The design aspects of the AHB is divided into several sections, namely: AHB Master, AHB Slave, APB Master, and APB Slave.

### AHB Master

![AHB_Master](C:\Users\gaoji\Downloads\AHB_Master.png)

When at IDLE state the module is in a passive mode, waiting for a signal to initiate an action. It represents a standby phase, ready to transition based on incoming read or write requests. The STEUP state is where the module prepares for a data transfer, setting up necessary parameters for either a read or write operation. It acts as a brief preparatory phase before actual data handling begins. The WAIT state indicates active engagement in data transfer, either reading from or writing to a target. The module remains in this state until the transfer is complete or another request is received, ensuring continuous data handling.

### AHB Slave

![AHB Slave](C:\Users\gaoji\Downloads\AHB Slave.png)

For the core, all states beginning with 'R', such as RDONE, RWAIT, RSTART, are associated with read operations. Conversely, states like WDONE, WWAIT, WPAUSE, and WSTART are indicative of write operation states. Within this framework, the states START, PAUSE, WAIT, and DONE represent sequential stages in a data transfer operation. START is the initiation stage, where initial conditions are set up. PAUSE acts as an intermediate stage, potentially for buffering or preparing for the subsequent phase of the operation. WAIT involves the state machine in a holding pattern, awaiting certain conditions or responses before moving forward. DONE signifies the completion of the operation, marking the successful conclusion of either a read or write process. IDLE represents the initial or idle state of the system.

### APB Master

![APB_Master](C:\Users\gaoji\Downloads\APB_Master.png)

IDLE is the default state, where it waits for either a read (rreq) or write (wreq) request. Upon receiving a request, it transitions to the STEUP state. STEUP is a preparatory state for APB access, setting up necessary parameters like the address (paddr), operation type (pwrite), and buffer read signals (wbuffread for writes, rbuffread for reads). After these preparations, it advances to the ACCESS state. ACCESS is a state that manages data transfers with the APB. It either sends data (pwdata) for write operations or retrieves data (prdata) for read operations. The module stays in this state until the transfer is complete (pready). After completion, it either cycles back to STEUP or returns to IDLE if there are no more requests.

### APB Slave

![APB_slave](C:\Users\gaoji\Downloads\APB_slave.png)

APB_TRANS_IDLE is the default state. When in APB_TRANS_IDLE, the state machine waits for an APB bus select signal (psel). If a read request for the SPI Read Data Register (SPI_RDR_ADDR) is detected, it transitions to APB_TRANS_READ. For any other select signal, it moves to APB_TRANS_READY.APB_TRANS_READY is a transitional state indicating that the module is ready to proceed with the next operation. After the necessary conditions are met, the state machine returns to APB_TRANS_IDLE.APB_TRANS_READ is a stage that the module prepares to read data from the SPI. It then transitions to APB_TRANS_DELAY for further processing.APB_TRANS_DELAY is a state appears to add a delay or buffer phase before transitioning back to APB_TRANS_READY, is for synchronize the read operation.

## Running Our Code: A Step-by-Step Guide

To execute this part, the environment needs to have Icarus Verilog, Verilator, and GTKWave installed. You can follow the environment setup documentation for configuration. Our peripherals are contained within two folders: `ahb_swc` and `apb_swc`. After cloning the entire project from GitHub, you need to go into the respective folder and execute the run_sim.sh file. This is a shell script used for running Verilator, and it is necessary to check if all the requirements are fulfilled before proceeding.

The run_sim.sh script requires the Bash sell to run and is designed as follows:

**1. Find all .v files in the current directory and subdirectories.** Usually, this does not require modifications.
``` 
V_FILES=$(find . -type f -name "*.v" | tr '\n' ' ')
```
  **2. Verilate the design:** This command specifies `ahb2apb_swc_tb` as the top-level module. This section should be 		modified to the module tested and testbench used.
```
verilator --binary -j 16 $V_FILES --trace --top ahb2apb_swc_tb
```
**3. Run the generated executable:** This code also requires specifying the top-level module, and switching the testbench necessitates modifications to this part.
```
./obj_dir/Vahb2apb_swc_tb
```

**4. Run Verilog Simulation:**
```
./run_sim.sh
```
 **5. View Waveforms Results in GTKWave:**
```
gtkwave *.vcd
```

## Testing and Validation

  

For our testing of the AMBA part, we individually tested all modules for both write and read operations, as well as scenarios where write operations are immediately followed by read operations. Additionally, we tested a series of multi-device control signals such as PSEL, referring to the official AMBA manual for guidance and comparison. We compared our actual waveform charts with the expected waveform charts to determine if the results were correct.

  

Since our design has not undergone synthesis, our simulation is only a behavioral simulation and does not include Static Timing Analysis (STA). The analysis of timing will be a future task. We are aiming for the APB's PCLK to reach an operating frequency of 36MHz, and for the AHB's clock frequency to reach 72MHz.

  

![APB_war](C:\Users\gaoji\Desktop\APB_war.png)

  

Taking APB_master and APB_slave as examples it shows the tests we conducted. In the below diagram, which includes both reading and writing, our testing showed that the data in wbufferdata could be placed into pwdata, and rbuffer could be placed into prdata. Additionally, the corresponding address was entered into paddr. After testing, we found that this part worked correctly. The pselx signal also met the requirements, selecting the appropriate module. This part of the result is consistent with the APB module signals in the AMBA protocol.

  

This diagram shows separate read and write operations. The results of this part are the same as those in the previous diagram and have also been verified to be correct through testing.

  

![APB_wir](C:\Users\gaoji\Desktop\APB_wir.png)

  

Our AHB_Master, AHB_Slave, APB_Master, and APB_Slave have all undergone such testing. The behavioral tests meet the requirements. We also conducted tests with the SPI peripheral components, and they too showed no issues. Regarding SRAM, we tested our backup version of SRAM, and it was able to communicate normally with SRAM. The behavioral simulation of the AMBA part meets the requirements, and all functionalities are working correctly.

  

## Future Scalability and Expansion Potential

The AMBA part currently meets our present requirements, limited to behavioral simulation. For future expansions, we can add pipeline functionality to AHB. Additionally, after synthesis, obtaining STA (Static Timing Analysis) data will allow us to optimize the design for higher frequencies. A key performance metric for AMBA is the clock operating speed, which can be enhanced through design optimization. Furthermore, we can also introduce more signals like HPROT in accordance with the AMBA protocol, to satisfy various requirements.