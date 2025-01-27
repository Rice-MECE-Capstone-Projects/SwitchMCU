# UART Communication Modules

This project provides a simple implementation of a UART (Universal Asynchronous Receiver-Transmitter) system using Verilog. The system includes separate modules for UART transmission (`uart_tx`), reception (`uart_rx`), and a top-level module (`uart`) that integrates both functionalities.

---

## File Overview

### 1. `uart_tx.v`
- **Description**: Implements the UART transmission logic.
- **Features**:
  - Sends 8-bit parallel data serially.
  - Supports configurable baud rate and clock frequency.
  - Handles start bit, data bits, and stop bit.
  - Outputs signals indicating transmission activity (`tx_active`) and completion (`done_tx`).

### 2. `uart_rx.v`
- **Description**: Implements the UART reception logic.
- **Features**:
  - Receives 8-bit serial data and converts it to parallel format.
  - Detects start bit, data bits, and validates the stop bit.
  - Supports configurable baud rate and clock frequency.

### 3. `uart.v`
- **Description**: Top-level module that integrates `uart_tx` and `uart_rx`.
- **Features**:
  - Combines the functionality of both transmitter and receiver.
  - Provides a single interface for UART communication.

---

## Parameters
- `clk_freq`: Clock frequency in MHz (default: 50 MHz).
- `baud_rate`: UART communication speed in bits per second (default: 19200).

---

## Usage

1. **Integration**:
   - Use the `uart.v` module in your project for complete UART communication.
   - Connect `rx` to the serial input and `tx` to the serial output.
   - Provide a clock signal (`clk`) and an active-high reset signal (`rst`).

2. **Simulation**:
   - Test the `uart_tx` and `uart_rx` modules independently for transmission and reception functionality.
   - Simulate the `uart` module for end-to-end UART communication.

3. **Hardware Deployment**:
   - Synthesize and deploy these modules on an FPGA or ASIC for UART communication in embedded systems.

---

## Signal Overview

### Inputs
- `clk`: Clock signal.
- `rst`: Reset signal (active-high).
- `rx`: Serial input for receiving data.
- `tx_data_in`: 8-bit parallel data for transmission.
- `start`: Signal to initiate data transmission.

### Outputs
- `tx`: Serial output for transmitted data.
- `rx_data_out`: 8-bit parallel data received from serial input.
- `tx_active`: Indicates if data transmission is ongoing.
- `done_tx`: Indicates when the transmission is complete.

---

## Notes
- The modules are parameterized for flexibility in clock frequency and baud rate.
- Ensure that `clk_freq` and `baud_rate` are properly set to match your system requirements.

---

## License
This project is released under the MIT License.
