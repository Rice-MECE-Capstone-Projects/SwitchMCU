`timescale 1ps / 1ps
`include "params.vh"

module riscv32iTB
#(
    parameter  N_param = 32, 
    parameter memory_offset_param = 32'h00000600,
    parameter success_code = 32'hDEADBEEF,
    parameter cycles_timeout = 1100,
    parameter initial_pc    = 32'h000001CC
)
();
    glbl glbl ();
    localparam IDLE_LEN = 10;
    reg                      tb_clk;
    reg                      tb_reset;
    reg [31:0] Cycle_count;
    reg [31:0] initial_pc_i;
    wire [31:0] final_value;
    reg [31:0] cycle_to_end;
    reg [31:0] memory_offset;
    wire [31:0] GPIO0_R0_CH1;
    reg enable_design;


// BRAM PORTS data mem
    wire        data_mem_clkb;
    wire        data_mem_enb;
    wire        data_mem_rstb;
    wire [3:0 ] data_mem_web;
    wire [31:0] data_mem_addrb;
    wire [31:0] data_mem_dinb;
    wire        data_mem_rstb_busy;
    wire [31:0] data_mem_doutb;

// BRAM ports ins_mem 
    wire        ins_mem_clkb;
    wire        ins_mem_enb;
    wire        ins_mem_rstb;
    wire [3:0 ] ins_mem_web;
    wire [31:0] ins_mem_addrb;
    wire [31:0] ins_mem_dinb;
    wire        ins_mem_rstb_busy;
    wire [31:0] ins_mem_doutb;




riscv32i
`ifndef GATESIM
#(    .N_param(N_param)
      ) 
`endif
    dut (
        .clk(   tb_clk),
        .reset(tb_reset),
        .GPIO0_R0_CH1(GPIO0_R0_CH1),
        .Cycle_count(Cycle_count),
        .memory_offset(memory_offset),
        .initial_pc_i(initial_pc_i),
        .final_value(final_value),

        //bram ports data_mem
        .data_mem_clkb(      data_mem_clkb     ),
        .data_mem_addrb(     data_mem_addrb    ),
        .data_mem_dinb(      data_mem_dinb     ),
        .data_mem_enb(       data_mem_enb      ),
        .data_mem_rstb(      data_mem_rstb     ),
        .data_mem_web(       data_mem_web      ),
        .data_mem_doutb(     data_mem_doutb    ),
        .data_mem_rstb_busy( data_mem_rstb_busy ),


        //bram ports ins_mem
        .ins_mem_clkb(       ins_mem_clkb),
        .ins_mem_enb(        ins_mem_enb),
        .ins_mem_rstb(       ins_mem_rstb),
        .ins_mem_web(        ins_mem_web),
        .ins_mem_addrb(      ins_mem_addrb),
        .ins_mem_dinb(       ins_mem_dinb),
        .ins_mem_rstb_busy(  ins_mem_rstb_busy),
        .ins_mem_doutb(      ins_mem_doutb)

);

        assign GPIO0_R0_CH1[0] = enable_design ;

    always begin
        tb_clk = 1'b0;
        #5000;
        tb_clk = 1'b1;
        #5000;
    end

    initial begin : init
        string vcdfile;
        int vcdlevel;
        if ($value$plusargs("VCDFILE=%s",vcdfile))
            $dumpfile(vcdfile);
        if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
            $dumpvars(vcdlevel);
            end

    initial begin : stim
        $display("%t: starting stream stimulus", $time);
        $display("%t: TEST PASSED", $time);
        // $finish;
    end
    // Simulation control

    initial begin
        enable_design <= 32'b0;
        cycle_to_end <= 0;
        tb_clk = 0;
        memory_offset <= memory_offset_param;
        initial_pc_i = initial_pc;
        tb_reset = 1;  
        repeat (1) @(posedge tb_clk);
        #7000
        tb_reset = 0;
        repeat (10) @(posedge tb_clk);
        enable_design <= 32'b1;
        repeat (1) @(posedge tb_clk);

        // HERE CHANGE THIS VALUE TO DERTMINE CLOCK CYCLES
        repeat (cycles_timeout) @(posedge tb_clk);
        $finish;
    end

always @(posedge tb_clk) begin
  	 if (tb_reset)
	    Cycle_count  <= 32'h0;
	 else 
            Cycle_count <= Cycle_count + 1;
  end
always @(posedge tb_clk ) begin
    if (final_value == success_code)begin 
        cycle_to_end = cycle_to_end + 1;
    end
    if (cycle_to_end >= 30) begin
        $display("\n\n\n\n----TB FINISH:Test Passed----\n\n\n\n\nTEST FINISHED by success write :%h \n\n\n\n\n",success_code);
        $finish;
    end


    
end


    // BRAM PORTS data mem
    bram_mem #(.MEM_DEPTH(4096))  data_mem_bram (
        .clkb(      data_mem_clkb     ),
        .addrb(     data_mem_addrb    ),
        .dinb(      data_mem_dinb     ),
        .enb(       data_mem_enb      ),
        .rstb(      data_mem_rstb     ),
        .web(       data_mem_web      ),
        .doutb(     data_mem_doutb    ),
        .rstb_busy( data_mem_rstb_busy )
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



      
// bram_mem #(.MEM_DEPTH(mem_size) ) bram_mem (
//   // .final_value(final_value),// debug port not in actual FPGA
//   .clkb(clk),
//   .addrb(address),
//   .dinb(store_data),
//   .doutb(raw_bram_data_word),
//   .enb(  enb),
//   .rstb( 1'b0),
//   .web(web),
//   .rstb_busy(rstb_busy) );


    endmodule




module bram_mem #(  parameter MEM_DEPTH = 1096 ) (
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
    integer i;
    for (i = 0; i < MEM_DEPTH; i = i + 1) begin
      DMEM[i] = 32'h00000000;
    end
  end


  always @(posedge clkb) begin 
  if (rstb) begin
        for (i = 0; i < MEM_DEPTH; i = i + 1) begin
          DMEM[i] <= 32'h00000000;
        end 
        end
      
  end

reg [ 3:0] web_reg;  
reg        enb_reg;  
reg [31:0] addrb_reg; 
reg [31:0] data_in_reg;

  always @(posedge clkb) begin
    web_reg <= web;
    enb_reg <= enb;
    addrb_reg <= addrb;
    data_in_reg <= dinb;  

    if (rstb) begin
      doutb_reg <= 32'b0;
    end else if (enb) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[word_address][ 7: 0]  <=  dinb[ 7: 0];   end 
        if (web[1]) begin DMEM[word_address][15: 8]  <=  dinb[15: 8];   end 
        if (web[2]) begin DMEM[word_address][23:16]  <=  dinb[23:16];   end 
        if (web[3]) begin DMEM[word_address][31:24]  <=  dinb[31:24];   end
      // end

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
  

integer M,n;
always @(negedge clkb) begin
      #120
      $write("\n\nDATA_MEM:  ");
      for (M=0; M < MEM_DEPTH; M=M+1) begin 
      if (DMEM[M] != 0) begin
    //   $write("   D%4d: %9h,", M, DMEM[M]);
      $write("   D%4h: %10h,", M*4, DMEM[M]);
      end
      end
      $write("\nDATA_MEM*: ");
      for (n=0; n < MEM_DEPTH; n=n+1) begin 
      if (DMEM[n] != 0) begin
      $write("   D%4h: %9d,", n*4, $signed(DMEM[n]));
      end
    end
    if (enb_reg) begin
     if ((web_reg == 0))begin
    //   $write("\nDATA LOADED:  D%8h: %8d, word in Mem %d",address,loadData,word_address);
      $write("\nDATA LOADED:  D%8h: %8h",addrb_reg,doutb_reg);
     end else begin
      $write("\nDATA STORED:  D%8h: %8h",addrb_reg,doutb_reg);
      end
    $write("\n----------------------------------------------------------------------------------END\n");

    end
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
    integer i;
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

