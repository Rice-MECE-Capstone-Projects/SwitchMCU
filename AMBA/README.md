# AMBA data bus
![image-20231128151134599](README.assets/image-20231128151134599.png)
## Introduction
The Advanced Microcontroller Bus Architecture, or AMBA, is an open-standard, on-chip interconnect specification for the connection and management of functional blocks in system-on-a-chip (SoC) designs.
Essentially, AMBA protocols define how functional blocks communicate with each other.

This project involves the AHB protocol & APB protocol in the AMBA architecture.
The system mainly includes three parts: AHB bus, APB bus and AHB2APB bridge.

## Architecture
Generally speaking, the control unit (Control Unit) of the LEDs, which is the host on the AHB bus, sends out control signals, then configure the slave GPIO module on the APB bus to control the flow mode of the LEDs. 

![AHBtoCU](README.assets/AHBtoCU.png)
