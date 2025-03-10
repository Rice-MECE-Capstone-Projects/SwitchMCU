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



