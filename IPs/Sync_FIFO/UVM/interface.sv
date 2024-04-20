`define ADDR_WIDTH 6         // Define the width of the address bus
`define DATA_WIDTH 16        // Define the width of the data bus

// Interface definition for the write control path of the FIFO
interface write_control_intf(input logic clk_write_logic, input logic reset);
    bit [`ADDR_WIDTH:0] read_pointer;       // Current read pointer position from the FIFO
    logic write_request;                    // Signal to request a write operation
    logic w_enable;                         // Write enable signal, controlled by the FIFO logic
    logic write_ack;                        // Acknowledgement signal for a successful write operation
    bit [`ADDR_WIDTH:0] write_pointer;      // Current write pointer position in the FIFO
    logic full_fifo_status;                 // Status signal indicating the FIFO is full
    logic halffull_fifo_status;             // Status signal indicating the FIFO is half full
    logic scan_in0, scan_en, test_mode, scan_out0; // Scan and test signals for test mode operations

    // Clocking block for write control path, triggered on the positive edge of clk_write_logic
    clocking cb@(posedge clk_write_logic);
        output reset;                       // Reset signal output
        output read_pointer;                // Output the current read pointer
        output write_request;               // Output the write request signal
        output scan_in0, scan_en, test_mode; // Test signals outputs
        input w_enable;                     // Input for write enable signal from DUT
        input write_ack;                    // Input for write acknowledgement from DUT
        input write_pointer;                // Input for current write pointer from DUT
        input full_fifo_status;             // Input for full status of FIFO
        input halffull_fifo_status;         // Input for half full status of FIFO
        input scan_out0;                    // Input for test mode scan output
    endclocking:cb

    modport WC(clocking cb, input clk_write_logic); // Modport for write control interface
endinterface:write_control_intf

// Interface definition for the read control path of the FIFO
interface read_control_intf(input logic clk_read_logic, input logic reset);
    bit [`ADDR_WIDTH:0] write_pointer;      // Current write pointer position from the FIFO
    logic read_request;                     // Signal to request a read operation
    logic r_enable;                         // Read enable signal, controlled by the FIFO logic
    logic read_ack;                         // Acknowledgement signal for a successful read operation
    bit [`ADDR_WIDTH:0] read_pointer;       // Current read pointer position in the FIFO
    logic empty_fifo_status;                // Status signal indicating the FIFO is empty
    logic halfempty_fifo_status;            // Status signal indicating the FIFO is half empty
    logic scan_in0, scan_en, test_mode, scan_out0; // Scan and test signals for test mode operations

    // Clocking block for read control path, triggered on the positive edge of clk_read_logic
    clocking cb@(posedge clk_read_logic);
        output reset;                       // Reset signal output
        output write_pointer;               // Output the current write pointer
        output read_request;                // Output the read request signal
        output scan_in0, scan_en, test_mode; // Test signals outputs
        input r_enable;                     // Input for read enable signal from DUT
        input read_ack;                     // Input for read acknowledgement from DUT
        input read_pointer;                 // Input for current read pointer from DUT
        input empty_fifo_status;            // Input for empty status of FIFO
        input halfempty_fifo_status;        // Input for half empty status of FIFO
        input scan_out0;                    // Input for test mode scan output
    endclocking:cb

    modport RC(clocking cb, input clk_read_logic); // Modport for read control interface
endinterface:read_control_intf

// Interface definition for the memory array used in the FIFO
interface mem_array_intf(input logic clk_write_logic);
    logic clk_read_logic;                   // Clock signal for read operations
    bit [`ADDR_WIDTH-1:0] w_addr;           // Write address in the FIFO
    bit [`ADDR_WIDTH-1:0] r_addr;           // Read address in the FIFO
    logic w_enable;                         // Write enable signal
    logic r_enable;                         // Read enable signal
    bit [`DATA_WIDTH-1:0] w_data;           // Data to be written into the FIFO
    bit [`DATA_WIDTH-1:0] r_data;           // Data read from the FIFO

    // Clocking block for memory array interface, triggered on the positive edge of clk_write_logic
    clocking cb@(posedge clk_write_logic);
        output clk_read_logic;              // Output the read logic clock
        output w_addr;                      // Output the write address
        output r_addr;                      // Output the read address
        output w_enable;                    // Output the write enable signal
        output r_enable;                    // Output the read enable signal
        output w_data;                      // Output the write data
        input r_data;                       // Input for read data from FIFO
    endclocking:cb

    modport MEM(clocking cb, input clk_write_logic); // Modport for memory array interface
endinterface:mem_array_intf

