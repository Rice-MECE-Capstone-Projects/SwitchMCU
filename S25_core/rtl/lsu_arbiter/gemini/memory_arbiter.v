module memory_arbiter (
  input clk,
  input rst,

  // LSU Interface
  input data_req_i_lsu,
  input [31:0] data_addr_i_lsu,
  input data_we_i_lsu,
  input [3:0] data_be_i_lsu,
  input [31:0] data_wdata_i_lsu,
  output reg data_gnt_o_lsu,
  output reg [31:0] data_rdata_o_lsu,
  output reg data_rvalid_o_lsu,

  // I-Cache Interface
  input data_req_i_icache,
  input [31:0] data_addr_i_icache,
  input data_we_i_icache,
  input [3:0] data_be_i_icache,
  input [31:0] data_wdata_i_icache,
  output reg data_gnt_o_icache,
  output reg [31:0] data_rdata_o_icache,
  output reg data_rvalid_o_icache,

  // D-Cache Interface
  input data_req_i_dcache,
  input [31:0] data_addr_i_dcache,
  input data_we_i_dcache,
  input [3:0] data_be_i_dcache,
  input [31:0] data_wdata_i_dcache,
  output reg data_gnt_o_dcache,
  output reg [31:0] data_rdata_o_dcache,
  output reg data_rvalid_o_dcache,

  // Main Memory Interface (Simplified)
  output reg data_req_o_mem,
  output reg [31:0] data_addr_o_mem,
  output reg data_we_o_mem,
  output reg [3:0] data_be_o_mem,
  output reg [31:0] data_wdata_o_mem,
  input data_gnt_i_mem,
  input [31:0] data_rdata_i_mem,
  input data_rvalid_i_mem
);

  // Internal Signals
  reg [1:0] current_request; // 00: I-Cache, 01: D-Cache, 10: LSU
  reg [31:0] read_data_temp;
  reg read_valid_temp;

  // Priority Logic (I-Cache > D-Cache > LSU)
  always @(*) begin
    if (data_req_i_icache) begin
      current_request = 2'b00;
    end else if (data_req_i_dcache) begin
      current_request = 2'b01;
    end else if (data_req_i_lsu) begin
      current_request = 2'b10;
    end else begin
      current_request = 2'b11; // No request
    end
  end

  // Grant Logic
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      data_gnt_o_lsu <= 1'b0;
      data_gnt_o_icache <= 1'b0;
      data_gnt_o_dcache <= 1'b0;
      data_req_o_mem <= 1'b0;
      data_we_o_mem <= 1'b0;
      data_be_o_mem <= 4'b0;
      data_addr_o_mem <= 32'b0;
      data_wdata_o_mem <= 32'b0;
      data_rdata_o_lsu <= 32'b0;
      data_rvalid_o_lsu <= 1'b0;
      data_rdata_o_icache <= 32'b0;
      data_rvalid_o_icache <= 1'b0;
      data_rdata_o_dcache <= 32'b0;
      data_rvalid_o_dcache <= 1'b0;
    end else begin
      case (current_request)
        2'b00: begin // I-Cache Request
          data_gnt_o_lsu <= 1'b0;
          data_gnt_o_icache <= 1'b1;
          data_gnt_o_dcache <= 1'b0;
          data_req_o_mem <= data_req_i_icache;
          data_we_o_mem <= data_we_i_icache;
          data_be_o_mem <= data_be_i_icache;
          data_addr_o_mem <= data_addr_i_icache;
          data_wdata_o_mem <= data_wdata_i_icache;
          data_rdata_o_icache <= read_data_temp;
          data_rvalid_o_icache <= read_valid_temp;
        end
        2'b01: begin // D-Cache Request
          data_gnt_o_lsu <= 1'b0;
          data_gnt_o_icache <= 1'b0;
          data_gnt_o_dcache <= 1'b1;
          data_req_o_mem <= data_req_i_dcache;
          data_we_o_mem <= data_we_i_dcache;
          data_be_o_mem <= data_be_i_dcache;
          data_addr_o_mem <= data_addr_i_dcache;
          data_wdata_o_mem <= data_wdata_i_dcache;
          data_rdata_o_dcache <= read_data_temp;
          data_rvalid_o_dcache <= read_valid_temp;
        end
        2'b10: begin // LSU Request
          data_gnt_o_lsu <= 1'b1;
          data_gnt_o_icache <= 1'b0;
          data_gnt_o_dcache <= 1'b0;
          data_req_o_mem <= data_req_i_lsu;
          data_we_o_mem <= data_we_i_lsu;
          data_be_o_mem <= data_be_i_lsu;
          data_addr_o_mem <= data_addr_i_lsu;
          data_wdata_o_mem <= data_wdata_i_lsu;
          data_rdata_o_lsu <= read_data_temp;
          data_rvalid_o_lsu <= read_valid_temp;
        end
        default: begin // No Request
          data_gnt_o_lsu <= 1'b0;
          data_gnt_o_icache <= 1'b0;
          data_gnt_o_dcache <= 1'b0;
          data_req_o_mem <= 1'b0;
          data_we_o_mem <= 1'b0;
          data_be_o_mem <= 4'b0;
          data_addr_o_mem <= 32'b0;
          data_wdata_o_mem <= 32'b0;
          data_rdata_o_lsu <= 32'b0;
          data_rvalid_o_lsu <= 1'b0;
          data_rdata_o_icache <= 32'b0;
          data_rvalid_o_icache <= 1'b0;
          data_rdata_o_dcache <= 32'b0;
          data_rvalid_o_dcache <= 1'b0;
        end
      endcase
    end
  end

  // Memory Response Handling (Simplified)
  always @(posedge clk) begin
    if (data_gnt_i_mem && data_rvalid_i_mem) begin
      read_
