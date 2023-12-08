Code documentation for the peripheral

1. Overview of peripheral we have support

Our design objective is to support UART and SPI for our peripherals, which are used to connect devices like ADCs and other external peripherals. We've made some simplifications compared to the original port definitions. For instance, in the SPI module, we have eliminated the SS (Slave Select) signal, which is typically used for device selection. Our overall design draws inspiration from the STM32's STM32F102 and involves defining corresponding registers. For detailed functionalities, one can refer to the Switch_Microcontroller_Spec_Preview.md file in our repository, which includes supported features, and definitions for SPI control and status registers.

Similarly, our UART design also references the STM32F102 manual but is somewhat simplified. The STM32 uses USART, which includes clock synchronization - essentially an augmentation to UART. Our design is intended to support standard UART communication. Unlike the STM32F107, it omits clock synchronization and some aspects of verification. The specific manual definitions can also be found in the Switch_Microcontroller_Spec_Preview.md file.

For official references on UART and SPI, can be found in the reference selection.

SPI：https://www.analog.com/media/en/analog-dialogue/volume-52/number-3/introduction-to-spi-interface.pdf

UART: https://www.ti.com/lit/ug/sprugp1/sprugp1.pdf?ts=1701287063469&ref_url=https%253A%252F%252Fwww.google.com%252F

2. Design of the peripheral

 

Firstly, our design, whether it's for UART or SPI, is essentially a modification of the APB (Advanced Peripheral Bus) Slave component, which is utilized as the controller. The design of the SPI controller is illustrated in the diagram below. The design for 'Format Convert' is a FIFO (First In, First Out) buffer. We opted for a synchronous FIFO in our design, rather than an asynchronous FIFO, and incorporated a counter design to facilitate the alteration of the clock rate during transmission. RDR (Read Data Register) and WDR (Write Data Register) serve as our read and write registers. The shifting of data to MOSI (Master Out Slave In) and MISO (Master In Slave Out) is achieved using a state machine. The details and workings of the SPI state machine will be explained later.

![img](file:///C:/Users/gaoji/AppData/Local/Temp/msohtmlclip1/01/clip_image002.jpg)

For our design the spictrl swc module of the Verilog code manages the SPI (Serial Peripheral Interface) communication process and the FSM diagram for the SPI communication. In the SPI TRAN IDLE state, the FSM waits for the Write Data Register (WDR) to be non-empty and the SPI Control Register (SPI CR SPE) to enable SPI communication. If these conditions are met, it transitions to SPI TRANS READ, where it starts the read process from the WDR. Next, it moves to SPI TRANS DELAY, which seems to serve as a buffer or delay stage before proceeding. Following this, the SPI TRANS BUFFER state buffers the data for SPI transmission. The SPI TRANS COUNT state involves a counter to manage the timing of the SPI communication. If the counter reaches a maximum value (maxcnt), the state transitions to SPI TRANS WRITE, where the buffered data is written to the SPI bus. If the WDR is not empty after writing, it goes back to SPI TRANS READ to continue processing data; otherwise, it returns to SPI TRANS IDLE. This FSM effectively manages the data flow for SPI communication, ensuring data is read from the WDR, buffered, and then written to the SPI bus in a controlled, sequential manner. The data in the WDR (Write Data Register) comes from a FIFO (First In, First Out) buffer. The FIFO facilitates the transfer of data from the APB (Advanced Peripheral Bus) Slave module to the WDR. The design of the entire SPI (Serial Peripheral Interface) controller is based on the code of the APB Slave. The results will be elaborated in detail in the Test section.

   ![](C:\Users\gaoji\Desktop\SPI_FSM.png)

We conducted similar tests for the UART as well, such as verifying the accuracy of read and write operations, and testing the functionality of CPOL and CPHA. The tests for the divider section also differ from those for SPI. UART supports different input and output Baud rate, and the change in baud rate is not an even multiple, which cannot be resolved through shifting , and we have conducted separate tests for this aspect. Our testing methods and results are placed in the same way as for the SPI section. Through our testing, all functions of UART_CR are operable. We also performed a Loopback test by connecting RX to TX, with data widths of 9 and 8, odd and even parity, LSB, MSB. Tests for different baud rates were also conducted and proven to be functional. Data can be normally transmitted from AHB_Master through the AHB to APB bridge, to the UART, and then sent back along the same path to AHB_Master, with all results being normal.

![fsm_UART](C:\Users\gaoji\Downloads\fsm_UART.png)

 

3. Running Our Code: A Step-by-Step Guide

To execute this part, the environment needs to have iverilog and GTKWave installed. You can follow the environment setup documentation for configuration. Our peripherals are contained within two folders: perpherals_swc_SPI and perherals_swc_UART. After cloning the entire project from GitHub, if you want to run it, you need to go into the respective folder and find the run_sim.sh file. This is a shell script used for running iverilog, and it is necessary to check if all the requirements are fulfilled before proceeding.

The design of the run_sim.sh script is as follows:

This part requires the Bash shell to run.

\# Find all .v files in the current directory and subdirectories

V_FILES=$(find . -type f -name "*.v" | tr '\n' ' ')

The function of this command is to find all .v files in the current directory and its subdirectories. Usually, this part does not require modification.

\# Verilate the design

verilator --binary -j 16 $V_FILES --trace --top ahb2apb_swc_tb

This part specifies ahb2apb_swc_tb as the top-level module. If there is a need to change the testbench, this section should be modified accordingly.

\# Run the generated executable

./obj_dir/Vahb2apb_swc_tb

This code also requires specifying the top-level module, and switching the testbench necessitates modifications to this part. After completing the above changes, you can compile the Verilog code by running the following command:

./run_sim.sh

Afterwards, execute

gtkwave *.vcd

to view the waveform results.

For the UART and SPI peripherals (perherals_swc_SPI and perherals_swc_UART), they can be run directly without modifications. They contain test .vcd files, which can be viewed using GTKWave for waveform comparison.

5. Testing and Validation

For the SPI part, as it needs to be controlled by the Core, data is input from the Core to MOSI and then the data received from MISO is transmitted back to the Core. At the same time, the status of the SPI port, represented by SPI_SR, also needs to be transmitted to the Core. Moreover, the SPI_CR requires the data to control through the Core. Therefore, for testing SPI and UART, we connect the APB to AHB bridge with our peripheral module modified based on APB_Slave for testing. The testbench is modified based on the ahb2apb.tb file.

Regarding the testing of SPI, our idea is to test all functionalities of SPI_CR, including control of the prescaler, switching of CPOL and CPHA, switching of the Data Frame Format (16-bit or 8-bit), as well as enabling SPI and switching between LSB and MSB.

Through our testing, all functionalities of SPI_CR have been implemented. The reference waveforms for these functionality tests case can be found in the STM32F107 manual, and the related vcd files can be viewed in the SPI peripheral folder in the github.

The testing of SPI_SR has indicated the current state of SPI, such as the Busy flag, Overrun flag, TX enable, and RX enable. These parts represent the read and write FIFO status signals in SPI, and testing has confirmed that these have also been implemented.

For data testing, we have set MISO equal to MOSI in the testbench. This way, checking whether the incoming and outgoing data are the same can meet the requirements. Through our testing, the data sent out by the AHB master through the AHB to APB bridge, and then sent out by the SPI controller, is connected back from MOSI to MISO and sent back to the core through the same path. Our design in this part has been verified to be correct.

6. Future Scalability and Expansion Potential

Our SPI and UART support basic functionalities and are designed for single device support. To add support for multiple devices in SPI, it would be necessary to introduce a CS (chip select) signal. The UART protocol, without modifications, supports only point-to-point communication with a single device. Therefore, for multi-device selection, no changes are required in UART.

Further functional expansions can be referenced from our SPI and UART port definition manual. In this manual, we have defined some potential expansion features, such as parity checking, which can be customized in the future based on specific requirements.

 

 

 

 

 

 

 

 

 

 

 

 

 