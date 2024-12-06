# UVM setup steps
## On Window platform 
The Advanced Microcontroller Bus Architecture, or AMBA, is an open-standard, on-chip interconnect specification for the connection and management of functional blocks in system-on-a-chip (SoC) designs.
Essentially, AMBA protocols define how functional blocks communicate with each other.

This project involves the AHB protocol & APB protocol in the AMBA architecture.
The system mainly includes three parts: AHB bus, APB bus and AHB2APB bridge.

This project aims to control LED lights by pressing GPIO buttons. The Switch MCU core will receive the press signal and response correspondingly through the AMBA data bus. 

There will be two modes for the LED flashing. While pressing KEY[0], the 4 LEDs will flash with period of 1 second, while pressing KEY[1], 4 LEDs will flash with period of 0.5 second which double the frequency.

![LED flashing](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/LED_flash.png)


## On Linux platform

The AMBA bus system includes the following two buses:

AHB: Advanced High-performance Bus, used for high-performance, high-clock operating frequency modules. APB: Advanced Peripheral Bus, used for slow peripheral modules.

Between AHB and APB, there is the AHB-APB bridge, which is to solve the matching problem between high-performance devices and on-chip low-bandwidth peripherals;


![AMBA](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/AMBA.png)


Generally speaking, the control unit (Control Unit) of the LEDs, which is the host on the AHB bus, sends out control signals, then configure the slave GPIO module on the APB bus to control the flow mode of the LEDs. 

![AHBtoCU](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/AHBtoCU.png)

