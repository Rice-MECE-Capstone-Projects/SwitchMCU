

  
`timescale 1ps/1ps

module tb_instruction_memory;
    parameter MEM_DEPTH = 4096;
    // DUT interface signals
    reg         clk;
    reg         reset;
    reg  [31:0] pc_i;
    reg         pc_i_valid;
    wire        STALL_if_not_ready_w;
    wire [31:0] instruction_o_w;

    // Memory interface signals
    wire        data_req_o;
    wire [31:0] data_addr_o;
    wire        data_we_o;
    wire [3:0]  data_be_o;
    wire [31:0] data_wdata_o;
    reg  [31:0] data_rdata_i;
    reg         data_rvalid_i;
    reg         data_gnt_i;



    wire         ins_data_req_o;
    wire  [31:0] ins_data_addr_o;
    wire         ins_data_we_o;
    wire  [3:0]  ins_data_be_o;
    wire  [31:0] ins_data_wdata_o;
    
    wire [31:0] ins_data_rdata_i;
    wire        ins_data_rvalid_i;
    wire        ins_data_gnt_i;


// BRAM ports ins_mem 
    wire        ins_mem_clkb;
    wire        ins_mem_enb;
    wire        ins_mem_rstb;
    wire [3:0 ] ins_mem_web;
    wire [31:0] ins_mem_addrb;
    wire [31:0] ins_mem_dinb;
    wire        ins_mem_rstb_busy;
    wire [31:0] ins_mem_doutb;


    // Instantiate the DUT
    instruction_memory dut (
        .clk                 (clk),
        .reset               (reset),
        .pc_i                (pc_i),
        .pc_i_valid          (pc_i_valid),
        .STALL_if_not_ready_w(STALL_if_not_ready_w),
        .instruction_o_w     (instruction_o_w),
        .stall_i             (mem_stall), // No stall in testbench
        // Memory interface signals
        .data_req_o_w         (ins_data_req_o),
        .data_addr_o_w        (ins_data_addr_o),
        .data_we_o_w          (ins_data_we_o),
        .data_be_o_w          (ins_data_be_o),
        .data_wdata_o_w       (ins_data_wdata_o),
        .data_rdata_i       (ins_data_rdata_i),
        .data_rvalid_i      (ins_data_rvalid_i),
        .data_gnt_i         (ins_data_gnt_i)
    );

    //#(.MEM_DEPTH(MEM_DEPTH))
    inst_mem_bram_wrapper  inst_mem_bram_wrapper (
        .clk               (clk),
        .reset             (reset),
        .ins_data_req_o    (ins_data_req_o),
        .ins_data_addr_o   (ins_data_addr_o),
        .ins_data_we_o     (ins_data_we_o),
        .ins_data_be_o     (ins_data_be_o),
        .ins_data_wdata_o  (ins_data_wdata_o),
        .ins_data_rdata_i  (ins_data_rdata_i),
        .ins_data_rvalid_i (ins_data_rvalid_i),
        .ins_data_gnt_i    (ins_data_gnt_i),

        .ins_mem_clkb (ins_mem_clkb),
        .ins_mem_enb (ins_mem_enb),
        .ins_mem_rstb (ins_mem_rstb),
        .ins_mem_web (ins_mem_web),
        .ins_mem_addrb (ins_mem_addrb),
        .ins_mem_dinb (ins_mem_dinb),
        .ins_mem_rstb_busy (ins_mem_rstb_busy),
        .ins_mem_doutb (ins_mem_doutb)

    );
    
    bram_ins #(.MEM_DEPTH(1096) ) ins_mem_bram (
        .clkb(       ins_mem_clkb),
        .enb(        ins_mem_enb),
        .rstb(       ins_mem_rstb),
        .web(        ins_mem_web),
        .addrb(      ins_mem_addrb),
        .dinb(       ins_mem_dinb),
        .rstb_busy(  ins_mem_rstb_busy),
        .doutb(      ins_mem_doutb) 
        );


    
      initial begin
        $dumpfile("tb_instruction_memory.vcd"); // Specify the dump file name.
        $dumpvars(3, tb_instruction_memory);   // Dump all variables in tb_pulse_generator scope.
      end


    always begin
        clk = 1'b0;
        #5;
        clk = 1'b1;
        #5;
    end
    reg mem_stall;
    // Test stimulus
    initial begin
        clk = 1'b0;

        // Initialize all signals
        mem_stall = 1'b0;
        reset         = 1'b1;
        pc_i          = 32'b0;
        pc_i_valid    = 1'b0;
        $display("started");
        @(posedge clk);
        reset = 1'b0;
        $display("started 1");

        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        // #1
        pc_i       = 32'h0000_0004;
        pc_i_valid = 1'b1;
        @(posedge clk);
        pc_i_valid = 1'b0;

        $display("started 2");
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);

        pc_i_valid = 1'b0;
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b0;  pc_i = 32'h0000_0004; @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b0;  pc_i = 32'h0000_0008; @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b1;  pc_i = 32'h0000_000C; @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b1;  pc_i = 32'h0000_000C; @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b0;  pc_i = 32'h0000_0010; @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b0;  pc_i = 32'h0000_0014; @(posedge clk);
        pc_i_valid = 1'b1;  mem_stall = 1'b0;  pc_i = 32'h0000_0018; @(posedge clk);

        pc_i_valid = 1'b0;

        @(posedge clk);
        @(posedge clk);
        pc_i_valid = 1'b0;
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);

        // // Now provide the grant (delayed grant)
        // // data_gnt_i = 1'b1;
        // @(posedge clk);
        // data_gnt_i = 1'b0;
        // Deassert pc_i_valid after the grant
        // pc_i_valid = 1'b0;

        // Wait a couple cycles then provide valid read data
        // @(posedge clk);       
        // @(posedge clk);
        // @(posedge clk);

        // // Wait a few cycles before ending simulation
        // @(posedge clk);
        $finish;
    end

endmodule





module bram_ins #(  parameter MEM_DEPTH = 1096 ) (
    input  wire        clkb,
    input  wire        enb,
    input  wire        rstb,
    input  wire [3:0 ] web,
    input  wire [31:0] addrb,
    input  wire [31:0] dinb,
    output wire        rstb_busy,
    output wire [31:0] doutb
);

  assign doutb = doutb_reg;
  assign rstb_busy = 0;
  reg [31:0] DMEM [0:MEM_DEPTH-1];
  reg [31:0] doutb_reg;
  reg [29:0] addrb_word;
  wire [29:0] word_address;
  wire [ 1:0] byte_address;

  assign word_address = addrb[31:2];  
  assign byte_address = addrb[ 1:0];

  integer i;


  initial begin
    // First initialize memory to zero
    // integer i;
    for (i = 0; i < MEM_DEPTH; i = i + 1) begin
      DMEM[i] = 32'h00000013;
    end

    // $readmemh("sanity.hex", memory);  // Load the program into memory
      $readmemh("program.hex", DMEM);  
  end


  always @(posedge clkb) begin 
  if (rstb) begin
        for (i = 0; i < MEM_DEPTH; i = i + 1) begin
          DMEM[i] <= 32'h00000013;
        end 
        end
      
  end


  always @(posedge clkb) begin
    if (rstb) begin
      doutb_reg <= 32'b0;
    end else if (enb) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[word_address][ 7: 0]  <=  dinb[ 7: 0];   end 
        if (web[1]) begin DMEM[word_address][15: 8]  <=  dinb[15: 8];   end 
        if (web[2]) begin DMEM[word_address][23:16]  <=  dinb[23:16];   end 
        if (web[3]) begin DMEM[word_address][31:24]  <=  dinb[31:24];   end 
       doutb_reg <= {
          (web[3] ? dinb[31:24] : DMEM[word_address][31:24]),
          (web[2] ? dinb[23:16] : DMEM[word_address][23:16]),
          (web[1] ? dinb[15: 8] : DMEM[word_address][15: 8]),
          (web[0] ? dinb[ 7: 0] : DMEM[word_address][ 7: 0])
        };
      end else begin
        doutb_reg <= DMEM[word_address];
      end
    end
  end

endmodule






module inst_mem_bram_wrapper_old #(  parameter MEM_DEPTH = 1096 ) (
    input  wire         clk,
    input  wire         reset,
    
    // Memory interface
    input  wire         ins_data_req_o,     
    input  wire [31:0]  ins_data_addr_o,    
    input  wire         ins_data_we_o,      
    input  wire [3:0]   ins_data_be_o,      
    input  wire [31:0]  ins_data_wdata_o,


    output wire [31:0]  ins_data_rdata_i,   
    output wire         ins_data_rvalid_i,  
    output wire         ins_data_gnt_i      
);

    reg rvalid_reg;
    wire rstb_busy;
    assign ins_data_gnt_i     = ins_data_req_o;
    assign ins_data_rvalid_i  = rvalid_reg;
    // assign  bram_web = 4'b0;


    bram_ins #(
        .MEM_DEPTH(MEM_DEPTH)
    ) u_bram (
        .clkb     (clk),
        .enb      (ins_data_req_o),
        .rstb     (reset),
        .web      (4'b0000),
        .addrb    (ins_data_addr_o),
        .dinb     (32'b0),
        .rstb_busy(rstb_busy),
        .doutb    (ins_data_rdata_i)
    );

    always @(posedge clk) begin
        if (reset) begin
          rvalid_reg <= 1'b0;
        end
        else begin
          rvalid_reg <= ins_data_req_o;
        end
    end

endmodule






module inst_mem_bram_wrapper #(  parameter MEM_DEPTH = 1096 ) (
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

    reg rvalid_reg;
    wire rstb_busy;
    assign ins_data_gnt_i     = ins_data_req_o;
    assign ins_data_rvalid_i  = rvalid_reg;
    // assign  bram_web = 4'b0;


  assign ins_mem_clkb      = clk;
  assign ins_mem_enb       = ins_data_req_o;
  assign ins_mem_rstb      = 1'b0;
  assign ins_mem_web       = 4'b0000;
  assign ins_mem_addrb     = ins_data_addr_o;
  assign ins_mem_dinb      = 32'b0;
  // assign ins_mem_rstb_busy = rstb_busy;
  assign ins_data_rdata_i = ins_mem_doutb;



    always @(posedge clk) begin
        if (reset) begin
          rvalid_reg <= 1'b0;
        end
        else begin
          rvalid_reg <= ins_data_req_o;
        end
    end

endmodule
