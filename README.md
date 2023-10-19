# SwitchMCU


## Prerequisites

Tools for team members

- for RTL designers
  - Verilator
  - GTKWave
- for verification engineers
  - Verilator
  - GTKWave
  - Qt
  - Unicorn Engine
  - Capstone
  - GNU Multiple Precision Arithmetic Library (GMP) 
- for system engineers
  - Qt
  - Unicorn Engine
  - RISC-V GNU Compiler Toolchain
  - Capstone
  - GNU Multiple Precision Arithmetic Library (GMP) 
  - QEMU
- for CAD engineers
  - Qt
  - Verilog-Perl
  - Verilator
- for FPGA prototype verification
  - Verilator
  - GTKWave
  - GOWIN Integrated Development Environment (IDE)

Introduction of tools

- Verilator

  https://verilator.org/guide/latest/install.html

  Verilator is a free, open-source tool used to convert Verilog (a hardware description language) code into C++ or SystemC code. Primarily, it's utilized for simulation purposes, allowing designers to test their digital circuits in a high-level programming environment.

- GTKWave

  https://gtkwave.sourceforge.net/

  GTKWave is an open-source waveform viewer that can display VCD (Value Change Dump), LXT, LXT2, VZT, FST, and many other types of simulation output files. It's particularly popular in the FPGA and ASIC design communities for its ability to visually represent signals over time, allowing designers to debug and verify their digital circuits.

- Qt

  https://www.qt.io/download-open-source

  Qt is a free and open-source widget toolkit for creating graphical user interfaces (GUIs) as well as cross-platform applications that run on various software and hardware platforms. Founded by Trolltech in 1991, Qt has evolved to be one of the primary choices for developers when targeting both desktop and mobile platforms.

- Unicorn Engine

  https://www.unicorn-engine.org/

  Unicorn is a lightweight, multi-platform, multi-architecture CPU emulator framework. Based on QEMU's virtualization engine, Unicorn allows developers to emulate CPU execution for various architectures, making it invaluable for tasks like reverse engineering, malware analysis, and debugging.

- RISC-V GNU Compiler Toolchain

  https://github.com/riscv-collab/riscv-gnu-toolchain

  The RISC-V GNU Compiler Toolchain is a collection of tools designed to support the development of software for RISC-V based architectures. It includes key components such as the GNU Compiler Collection (GCC), the GNU Binary Utilities (Binutils), and the GNU Debugger (GDB) which have been modified and extended to support the RISC-V instruction set architecture.

- Capstone

  https://www.capstone-engine.org/

  Capstone is an open-source disassembly framework that's designed to decode binary code into human-readable assembly instructions. It provides programming interfaces for multiple languages, enabling detailed inspection of binary code in applications such as reverse engineering, malware analysis, and debugger development.

- GNU Multiple Precision Arithmetic Library (GMP) 

  https://gmplib.org/

  GMP, standing for the GNU Multiple Precision Arithmetic Library, is a free and open-source software library for arbitrary-precision arithmetic. It provides capabilities for working with large numbers, far beyond the native capacities of standard programming languages. GMP offers high precision arithmetic for signed integers, rational numbers, and floating-point numbers.

- Verilog-Perl

  https://github.com/veripool/verilog-perl

  Verilog-Perl is a collection of Perl utilities for parsing and processing Verilog code. It's especially useful for Electronic Design Automation (EDA) tasks and engineers working extensively with Verilog, a hardware description language (HDL) commonly used for designing digital circuits.

- QEMU

  https://www.qemu.org/

  QEMU, which stands for "Quick Emulator," is a free and open-source hosted hypervisor that performs hardware virtualization. It emulates CPUs through dynamic binary translation and provides a set of device models, allowing it to run a variety of unmodified guest operating systems. QEMU can be used in standalone mode or in conjunction with KVM (Kernel-based Virtual Machine) to run virtual machines at near-native speed.

- OpenOCD

  https://openocd.org/

  OpenOCD is a versatile and powerful open-source tool that provides debugging and programming capabilities for a wide range of embedded systems and microcontrollers. It serves as a bridge between your development environment and the target hardware, enabling you to interact with and control microcontrollers for tasks such as debugging, flashing firmware, and accessing on-chip resources.

- GOWIN Integrated Development Environment (IDE)

  https://www.gowinsemi.com/en/support/home/

  The GOWIN IDE provides a comprehensive platform for FPGA development. It allows users to design, simulate, and program GOWIN FPGA devices.


## Reference

- riscv-operating-system-mooc

  https://github.com/plctlab/riscv-operating-system-mooc

- AHB 5 protocol specification

  https://documentation-service.arm.com/static/6141bf0d674a052ae36ca811?token=

- APB protocol specification

  https://developer.arm.com/documentation/ihi0024/latest/

- RISC-V Specifications

  https://riscv.org/technical/specifications/