module ins_mem (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] pc_i,
    input  wire        enb,
    output wire [31:0] instruction_o,

// BRAM ports
    output wire        ins_mem_clkb,
    output wire        ins_mem_enb,
    output wire        ins_mem_rstb,
    output wire [3:0 ] ins_mem_web,
    output wire [31:0] ins_mem_addrb,
    output wire [31:0] ins_mem_dinb,
    input  wire        ins_mem_rstb_busy,
    input  wire [31:0] ins_mem_doutb

);
    wire  [31:0] instruction;
    wire rstb_busy;
    assign instruction_o = reset ?  32'h00000013 : instruction ;
    
    assign ins_mem_clkb      =    clk;            
    assign ins_mem_enb       =    enb;             
    assign ins_mem_rstb      =     1'b0; 
    assign ins_mem_web       =     4'b0; 
    assign ins_mem_addrb     =    pc_i; 
    assign ins_mem_dinb      =    32'b0; 
        // ins_mem_rstb_busy =    rstb_busy   ;               
        // ins_mem_dout      =    instruction ;
    assign  rstb_busy = ins_mem_rstb_busy;              
    assign  instruction = ins_mem_doutb;

endmodule




// wire output         data_req_o,
// wire output [31:0]  data_addr_o,
// wire output         data_we_o,
// wire output [ 3:0]  data_be_o,
// wire output [31:0]  data_wdata_o,

// input wire [31:0]   data_rdata_i,
// input wire          data_rvalid_i,
// input wire          data_gnt_i







// module instruction_memory (
//     input  wire         clk,
//     input  wire         reset,
//     input  wire [31:0]  pc_i,
//     input  wire         pc_i_valid,
//     output reg          STALL_if_not_ready_w,
//     output reg [31:0]   instruction_o_w,

//     // Memory interface
//     output reg          data_req_o,
//     output reg [31:0]   data_addr_o,
//     output reg          data_we_o,
//     output reg [3:0]    data_be_o,
//     output reg [31:0]   data_wdata_o,

//     input  wire [31:0]  data_rdata_i,
//     input  wire         data_rvalid_i,
//     input  wire         data_gnt_i
// );
    
    

//     reg          STALL_if_not_ready;
//     reg [31:0]   instruction_o;

//     reg          data_req_o_w;
//     reg [31:0]   data_addr_o_w;
//     reg          data_we_o_w;
//     reg [3:0]    data_be_o_w;
//     reg [31:0]   data_wdata_o_w;

//     assign data_req_o_w =   data_req_o  ;
//     assign data_addr_o_w =  data_addr_o ;
//     assign data_we_o_w =    data_we_o   ;
//     assign data_be_o_w =    data_be_o   ;
//     assign data_wdata_o_w = data_wdata_o;
//     assign STALL_if_not_ready_w = STALL_if_not_ready;
//     assign instruction_o_w = instruction_o;

//     localparam [1:0] S_IDLE       = 2'b00,
//                      S_WAIT_GNT   = 2'b01,
//                      S_WAIT_RVALID= 2'b10;


//     reg [1:0] current_state, next_state;

//     reg [31:0] pc_decode;
//     reg [31:0] current_PC_wating_rvalid;

//     always @(*) begin
//         data_req_o          <= 1'b0;
//         data_addr_o         <= 32'b0;
//         data_we_o           <= 1'b0;
//         data_be_o           <= 4'b1111;  // We always want the entire word
//         data_wdata_o        <= 32'b0;
//         STALL_if_not_ready  <= 1'b0;
//         pc_decode           <= 32'b0; 
//         instruction_o       <= 32'b0;
//         pc_decode           <= 32'b0;

//         next_state = current_state;   // Default to stay in same state
//         case (current_state)
//             S_IDLE: begin
//                 if (pc_i_valid) begin
//                     data_req_o         <= 1'b1;        
//                     data_addr_o        <= pc_i;        
//                     data_we_o          <= 1'b0;  
//                     data_be_o          <= 4'b1111;     
//                     STALL_if_not_ready <= 1'b0;
//                 if (data_gnt_i) begin
//                     STALL_if_not_ready <= 1'b0;
//                     next_state         <= S_WAIT_RVALID;
//                 end else //if (pc_i_valid && ~data_gnt_i) begin   
//                     STALL_if_not_ready       <= 1'b1;
//                     next_state               <= S_WAIT_GNT;
//                 end
//             end
            
//             S_WAIT_GNT: begin
//                 data_req_o                   <= 1'b1;
//                 data_addr_o                  <= pc_i;  
//                 data_we_o                    <= 1'b0;
//                 data_be_o                    <= 4'b1111;
//                 STALL_if_not_ready           <= 1'b1;
//                 if (data_gnt_i) begin 
//                     STALL_if_not_ready       <= 1'b0;
//                     next_state = S_WAIT_RVALID;
//                 end 
//                 end

//             S_WAIT_RVALID: begin

//                 if (data_rvalid_i) begin
//                     instruction_o <= data_rdata_i;
//                     pc_decode     <= current_PC_wating_rvalid;

//                     if (pc_i_valid) begin
//                         data_req_o         <= 1'b1;        
//                         data_addr_o        <= pc_i;        
//                         data_we_o          <= 1'b0;  
//                         data_be_o          <= 4'b1111;     
//                         STALL_if_not_ready <= 1'b0;
//                     if (data_gnt_i) begin
//                         STALL_if_not_ready <= 1'b0;
//                         next_state         <= S_WAIT_RVALID;
//                     end else   
//                         STALL_if_not_ready       <= 1'b1;
//                         next_state               <= S_WAIT_GNT;
//                     end
//                     else begin 
//                         next_state <= S_IDLE;
//                     end 
//                 end else begin 
//                     data_req_o                   <=  1'b0;
//                     data_addr_o                  <= 32'b0;  
//                     data_we_o                    <=  1'b0;
//                     data_be_o                    <=  4'b1111;
//                     STALL_if_not_ready           <=  1'b1;
//                     next_state                   <= S_WAIT_RVALID;
//                 end
//             end

//             default: begin
//                 next_state <= S_IDLE;
//             end
//         endcase
//     end


//     always @(posedge clk) begin
//         if (reset) begin
//             current_state <= S_IDLE;
//             instruction_o <= 32'b0;
//         end
//         else begin
//             current_state <= next_state;
//         end

//         if ((next_state == S_WAIT_RVALID)) begin
//             current_PC_wating_rvalid <= pc_i; 

//         end   

//         // if ((current_state == S_WAIT_RVALID) && data_rvalid_i) begin
//             // instruction_o <= data_rdata_i;
//         // end
//     end




// endmodule




// `timescale 1ns/1ps

// module tb_instruction_memory;

//     // DUT interface signals
//     reg         clk;
//     reg         reset;
//     reg  [31:0] pc_i;
//     reg         pc_i_valid;
//     wire        STALL_if_not_ready_w;
//     wire [31:0] instruction_o_w;

//     // Memory interface signals
//     wire        data_req_o;
//     wire [31:0] data_addr_o;
//     wire        data_we_o;
//     wire [3:0]  data_be_o;
//     wire [31:0] data_wdata_o;
//     reg  [31:0] data_rdata_i;
//     reg         data_rvalid_i;
//     reg         data_gnt_i;

//     // Instantiate the DUT
//     instruction_memory dut (
//         .clk                 (clk),
//         .reset               (reset),
//         .pc_i                (pc_i),
//         .pc_i_valid          (pc_i_valid),
//         .STALL_if_not_ready_w(STALL_if_not_ready_w),
//         .instruction_o_w     (instruction_o_w),
//         .data_req_o         (data_req_o),
//         .data_addr_o        (data_addr_o),
//         .data_we_o          (data_we_o),
//         .data_be_o          (data_be_o),
//         .data_wdata_o       (data_wdata_o),
//         .data_rdata_i       (data_rdata_i),
//         .data_rvalid_i      (data_rvalid_i),
//         .data_gnt_i         (data_gnt_i)
//     );

//     // Clock generation
//     initial begin
//         clk = 1'b0;
//         forever #5 clk = ~clk;  // Clock toggles every 5 time units
//     end

//     // Test stimulus
//     initial begin
//         // Initialize all signals
//         reset         = 1'b1;
//         pc_i          = 32'b0;
//         pc_i_valid    = 1'b0;
//         data_rdata_i  = 32'b0;
//         data_rvalid_i = 1'b0;
//         data_gnt_i    = 1'b0;
        
//         // Release reset
//         @(posedge clk);
//         reset = 1'b0;
//         @(posedge clk);

//         //==========================================================
//         // Test Case 1: Immediate Grant Scenario
//         //==========================================================
//         // Drive a valid PC and immediately assert grant (data_gnt_i)
//         pc_i       = 32'h0000_1000;
//         pc_i_valid = 1'b1;
//         data_gnt_i = 1'b1;  // immediate grant along with request

//         @(posedge clk);
//         // Deassert single-cycle signals
//         pc_i_valid = 1'b0;
//         data_gnt_i = 1'b0;

//         // Wait one cycle and then provide valid read data
//         @(posedge clk);
//         data_rdata_i  = 32'hDEAD_BEEF;
//         data_rvalid_i = 1'b1;

//         @(posedge clk);
//         data_rvalid_i = 1'b0;

//         // Wait a couple of cycles
//         repeat (2) @(posedge clk);

//         //==========================================================
//         // Test Case 2: Delayed Grant Scenario
//         //==========================================================
//         // Initiate a new transaction with a new PC
//         pc_i       = 32'h0000_2000;
//         pc_i_valid = 1'b1;

//         // Wait for two clock cycles without granting
//         @(posedge clk);
//         @(posedge clk);

//         // Now provide the grant (delayed grant)
//         data_gnt_i = 1'b1;
//         @(posedge clk);
//         data_gnt_i = 1'b0;
//         // Deassert pc_i_valid after the grant
//         pc_i_valid = 1'b0;

//         // Wait a couple cycles then provide valid read data
//         @(posedge clk);
//         @(posedge clk);
//         data_rdata_i  = 32'h12345678;
//         data_rvalid_i = 1'b1;

//         @(posedge clk);
//         data_rvalid_i = 1'b0;

//         // Wait a few cycles before ending simulation
//         @(posedge clk);
//         $finish;
//     end

// endmodule
