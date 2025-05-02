`include "./DUT_2025/params.vh"

module data_mem_bram_wrapper #(  parameter MEM_DEPTH = 1096 ) (
    input  wire         clk,
    input  wire         reset,
    

    // BRAM interface Signals

    output wire        ins_mem_clkb,
    output wire        ins_mem_enb,
    output wire        ins_mem_rstb,
    output wire [3:0 ] ins_mem_web,
    output wire [31:0] ins_mem_addrb,
    output wire [31:0] ins_mem_dinb,
    input  wire        ins_mem_rstb_busy,
    input  wire [31:0] ins_mem_doutb,


    // core Memory interface
    input  wire         ins_data_req_o,     
    input  wire [31:0]  ins_data_addr_o,    
    input  wire         ins_data_we_o,      
    input  wire [3:0]   ins_data_be_o,      
    input  wire [31:0]  ins_data_wdata_o,
    output wire [31:0]  ins_data_rdata_i,   
    output wire         ins_data_rvalid_i,  
    output wire         ins_data_gnt_i      
);

    reg rvalid_reg,rvalid_reg_1,rvalid_reg_2,rvalid_reg_3,rvalid_reg_4,rvalid_reg_5,rvalid_reg_6,rvalid_reg_7;
    wire rstb_busy;
    assign ins_data_gnt_i     = ins_data_req_o;
    assign ins_data_rvalid_i  = rvalid_reg;
    // assign ins_data_gnt_i     = rvalid_reg_1;
    // assign ins_data_rvalid_i  = rvalid_reg_2;
    // assign  bram_web = 4'b0;


  assign ins_mem_clkb      = clk;
  assign ins_mem_enb       = ins_data_req_o;

  // assign enb = data_req_o;
  assign ins_mem_web = ins_data_we_o ? ins_data_be_o: 4'b0;

  assign ins_mem_rstb      = reset;
  // assign ins_mem_web       = 4'b0000;
  assign ins_mem_addrb     = ins_data_addr_o;
  assign ins_mem_dinb      = ins_data_wdata_o;
  // assign ins_mem_rstb_busy = rstb_busy;
  assign ins_data_rdata_i = ins_mem_doutb;

  reg [31:0] cycle_taken;
initial begin
    cycle_taken <= 0;
end

    always @(posedge clk) begin
        if (reset) begin
        rvalid_reg <= 1'b0; rvalid_reg_1 <= 1'b0;  rvalid_reg_2 <= 1'b0;     rvalid_reg_3 <= 1'b0; rvalid_reg_4 <= 1'b0;  rvalid_reg_5 <= 1'b0; rvalid_reg_6 <= 1'b0;  rvalid_reg_7 <= 1'b0;
        end
        else begin
          rvalid_reg   <= ins_data_req_o; rvalid_reg_1 <= rvalid_reg;  rvalid_reg_2 <= rvalid_reg_1; rvalid_reg_3 <= rvalid_reg_2;  rvalid_reg_4 <= rvalid_reg_3; rvalid_reg_5 <= rvalid_reg_4;  rvalid_reg_6 <= rvalid_reg_5; rvalid_reg_7 <= rvalid_reg_6;
        end
    end
endmodule