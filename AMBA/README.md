# AMBA data bus
## Introduction
The Advanced Microcontroller Bus Architecture, or AMBA, is an open-standard, on-chip interconnect specification for the connection and management of functional blocks in system-on-a-chip (SoC) designs.
Essentially, AMBA protocols define how functional blocks communicate with each other.

This project involves the AHB protocol & APB protocol in the AMBA architecture.
The system mainly includes three parts: AHB bus, APB bus and AHB2APB bridge.

This project aims to control LED lights by pressing GPIO buttons. The Switch MCU core will receive the press signal and response correspondingly through the AMBA data bus. 

There will be two modes for the LED flashing. While pressing KEY[0], the 4 LEDs will flash with period of 1 second, while pressing KEY[1], 4 LEDs will flash with period of 0.5 second which double the frequency.

![LED flashing](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/LED_flash.png)


## Architecture

The AMBA bus system includes the following two buses:

AHB: Advanced High-performance Bus, used for high-performance, high-clock operating frequency modules. APB: Advanced Peripheral Bus, used for slow peripheral modules.

Between AHB and APB, there is the AHB-APB bridge, which is to solve the matching problem between high-performance devices and on-chip low-bandwidth peripherals;


![AMBA](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/AMBA.png)


Generally speaking, the control unit (Control Unit) of the LEDs, which is the host on the AHB bus, sends out control signals, then configure the slave GPIO module on the APB bus to control the flow mode of the LEDs. 

![AHBtoCU](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/AHBtoCU.png)

## Core Unit Design

The core of our AMBA flow light control system: Control Unit,

The Bridge module is the Master of all peripherals on the APB, and the CU module is the Master of the Bridge on the AHB.
The Control Unit is the initiator of signal transmission and determines whether the bus is reading or writing

The control signals sent by CU include HTRANS, HBURST, HSIZE, and HADDR, and the data signals include HWDATA.



The control unit is responsible for how these AHB signals are generated. At the same time, CU also needs to receive HRDATA and interpret it.

In fact, control unit is achieved by a Finite State Machine.

![AHB_FSM](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/CU_FSM.png)


1.CONFIG_0~2: After pressing the reset button/powering on, initialize the configuration of the GPIO peripherals.

Among them, CONFIG_0:
Configure GPIO pins 0~3 in input mode and connect the Key button of the FPGA development board for observation
Configure the 4~7 pins of the GPIO to output mode and connect the LED lights of the FPGA development board for driver control.

CONFIG_1:
Set the output levels of GPIO pins 4 to 7 to high level 1 (the LEDs on this development board are common anodes, high level pin = LED light goes out)

CONFIG_2:
Enable output on GPIO pins 4~7

2.READ_DATA_RO:
Read the DATA_RO register of GPIO and learn the Key status according to the value of register [3:0].
This state is the core state of FSM,
After configuring the DIRM, OEN, and DATA registers of GPIO,
We will start to read DATA_RO repeatedly, that is, observe the status of KEY,
Then get the corresponding LED_mode according to the value of KEY,
Then it will jump from this state to WRITE_DATA_0~3, configure the DATA register, and control the LED light to light up or turn off.

3.WRITE_DATA_0~1:
Configure different running water lamp working modes. The mode is determined by the KEY status.
Press KEY1 to enter working mode 0, press KEY2 to enter working mode 1
In the initial static state, working mode 0 can only be entered by pressing KEY0~1 at the same time.
At this time, pressing a single KEY will not cause any reaction.

As the FSM status changes, the CU module will issue different read and write commands to the AHB bus to realize the register configuration of the GPIO module.