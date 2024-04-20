// Include files for interface definitions and the UVM package functionalities
`include "interface.sv"
`include "SFIFO_package.sv"

// Definitions for clock periods to simulate different clock domains
`define  write_logic_half_clock_period  100     // Half period for write logic clock
`define  read_logic_half_clock_period  1000     // Half period for read logic clock

//------------------------------------------------------------------------------------------
// Top-level module definition for the testbench
module test;
import uvm_pkg::*;                               // Import Universal Verification Methodology (UVM) package
import SFIFO_package::*;                         // Import definitions and classes from the SFIFO package

//------------------------------------------------------------------------------------------
// Signal declarations
bit clk_write_logic;                             // Clock for write operations
bit clk_read_logic;                              // Clock for read operations
bit reset;                                       // Reset signal for the DUT
bit scan_en, scan_in0, test_mode;                // Scan and test mode signals
wire scan_out0;                                  // Output wire for scan data, tied to a constant value
assign scan_out0 = 1'b0;                         // Assign constant value to scan_out0

// Initial block to setup initial conditions and reset sequence
initial  begin
    scan_en = 1'b0;                              // Initialize scan enable to 0
    scan_in0 = 1'b0;                             // Initialize scan input to 0
    test_mode = 1'b0;                            // Initialize test mode to 0
    clk_write_logic = 1'b0;                      // Initialize write clock to 0
    clk_read_logic = 1'b0;                       // Initialize read clock to 0
    reset = 0;                                   // Assert reset initially
    #25 reset = 1;                               // De-assert reset after 25 time units
    #25 reset = 0;                               // Re-assert reset after another 25 time units
end

// Clock generation for write and read logic using defined half-clock periods
always begin 
    #`write_logic_half_clock_period clk_write_logic  <=  ~clk_write_logic; // Toggle write clock
    #`read_logic_half_clock_period  clk_read_logic <= ~clk_read_logic;    // Toggle read clock
end

//------------------------------------------------------------------------------------------
// Interface instantiation
write_control_intf w_ctrl(clk_write_logic, reset); // Interface for write control
read_control_intf r_ctrl(clk_read_logic, reset);   // Interface for read control
mem_array_intf   memory_intf(clk_write_logic);     // Interface for memory array

//------------------------------------------------------------------------------------------
// DUT instantiation
SFIFO top (
    .reset(w_ctrl.reset),
    .clk_write_logic(w_ctrl.clk_write_logic),
    .clk_read_logic(r_ctrl.clk_read_logic),
    .read_request(r_ctrl.read_request),
    .w_data(memory_intf.w_data),
    .write_request(w_ctrl.write_request),
    .r_data(memory_intf.r_data),
    .read_ack(r_ctrl.read_ack),
    .w_enable(w_ctrl.w_enable),
    .r_enable(r_ctrl.r_enable),
    .empty_fifo_status(r_ctrl.empty_fifo_status),
    .halfempty_fifo_status(r_ctrl.halfempty_fifo_status),
    .full_fifo_status(w_ctrl.full_fifo_status),
    .halffull_fifo_status(w_ctrl.halffull_fifo_status),
    .write_ack(w_ctrl.write_ack),
    .scan_in0(scan_in0),
    .scan_en(scan_en),
    .test_mode(test_mode),
    .scan_out0(scan_out0)
);

//------------------------------------------------------------------------------------------
// UVM configuration and test execution setup
initial  begin
    $set_coverage_db_name("SFIFO");               // Set the name for the coverage database
    $timeformat(-9,2,"ns", 16);                   // Set the time format for simulation output
    `ifdef  SDFSCAN
    $sdf_annotate("sdf/SFIFO_tsmc18_scan.sdf", test.top); // Annotate SDF file for gate-level simulation
    `endif
    // Set the UVM configuration database with virtual interfaces
    uvm_config_db#(virtual write_control_intf)::set(uvm_root::get(), "*", "w_ctrl", w_ctrl);
    uvm_config_db#(virtual read_control_intf)::set(uvm_root::get(), "*", "r_ctrl", r_ctrl);
    uvm_config_db#(virtual mem_array_intf)::set(uvm_root::get(), "*", "memory_intf", memory_intf);
    run_test("test");                              // Start the UVM test named 'test'
end
//------------------------------------------------------------------------------------------
endmodule: test
