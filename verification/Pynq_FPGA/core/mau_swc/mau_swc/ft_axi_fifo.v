module ft_axi_fifo 
   # (
    parameter   TDATA_WIDTH = 64 ,
    parameter   TDATA_BYTES = 8
   ) (
    input  wire s_axis_aclk,
    input  wire s_axis_aresetn,

    output  wire m_axis_aclk,
    output  wire m_axis_aresetn,

    // AXI Stream input (from DMA)
    input  wire [TDATA_WIDTH-1:0]  s_axis_tdata,
    input  wire [TDATA_BYTES-1:0]  s_axis_tkeep,
    input  wire        s_axis_tlast,
    output wire        s_axis_tready,
    input  wire        s_axis_tvalid,

    output  wire [TDATA_WIDTH-1:0] m_axis_tdata,
    output  wire [TDATA_BYTES-1:0]  m_axis_tkeep,
    output  wire        m_axis_tlast,
    input   wire        m_axis_tready,
    output  wire        m_axis_tvalid,

    // Output to LEDs or other peripherals
    output wire [3:0] leds_4bits_tri_o

);

reg  [TDATA_WIDTH-1:0] module_input, reg_module_output;
wire [TDATA_WIDTH-1:0] module_output,module_input_concat,module_output_concat;
wire tb_clk;
wire [TDATA_WIDTH-1:0] s_axis_tdata_kept;
reg XOR_reg;
reg s_axis_tready_r, m_axis_tlast_r, m_axis_tvalid_r, OFF_cllk,  enable_next_cycle, reg_tlast;

wire [7:0] byte_in[ TDATA_BYTES-1:0];
wire [7:0] byte_out[TDATA_BYTES-1:0];

wire                       hclk                ; // in
wire                       hrstn               ; // in
wire           [3:0]       cycle_cnt           ; // in
wire           [1:0]       flush               ; // in
wire                       flush_stall         ;// out



//specdific to module


initial begin 
// tb_clk            <=0;
s_axis_tready_r   <=0;
enable_next_cycle <=0;
m_axis_tlast_r    <=0;
m_axis_tvalid_r   <=0;
reg_tlast         <=0;

XOR_reg           <= 1'b0;
module_input      <= 0;
reg_module_output <=0;
end

genvar i;
generate
    for (i = 0; i < TDATA_BYTES; i = i + 1) begin : gen_active_bytes
        assign s_axis_tdata_kept[i*8 +: 8] = s_axis_tkeep[i] ? s_axis_tdata[i*8 +: 8] : 8'b0;
    end
endgenerate
        

    // add_upper_lower_half_clk #(
    //     .N(TDATA_WIDTH)
    // ) mini_DUT (
    //     .clk(~tb_clk),
    //     .rst(1'b0),
    //     .in_signal( module_input_concat),
    //     .out_signal(module_output_concat)
    // );
    
main_DUT exu_flush_inst(
  .hclk               (hclk                             ),
  .hrstn              (hrstn                            ),
  .cycle_cnt          (cycle_cnt                        ),
  .flush              (flush                            ),
  .flush_stall        (flush_stall                      )
);

assign hclk            = ~tb_clk;
assign hrstn           = byte_in[0][0];
assign cycle_cnt       = byte_in[1][3:0];
assign flush           = byte_in[2][1:0];

assign byte_out[0]     = {7'b0,flush_stall};
assign byte_out[1]     = {8'b0};
assign byte_out[2]     = {8'b0};
assign byte_out[3]     = {8'b0};
assign byte_out[4]     = {8'b0};
assign byte_out[5]     = {8'b0};
assign byte_out[6]     = {8'b0};
assign byte_out[7]     = {8'b0};



    // assign module_input_concat  = {byte_in[7], byte_in[6], byte_in[5], byte_in[4], byte_in[3], byte_in[2], byte_in[1], byte_in[0]};
    // assign {byte_out[7], byte_out[6], byte_out[5], byte_out[4], byte_out[3], byte_out[2], byte_out[1], byte_out[0]} = module_output_concat; 





    genvar K, L;
    generate
        for (K = 0; K < TDATA_BYTES; K = K + 1) begin : input_splice
            assign byte_in[K] = module_input[K*8 +: 8];
        end
    endgenerate


    generate
        for (L = 0; L < TDATA_BYTES; L = L + 1) begin : output_concat
            assign module_output[L*8 +: 8] = byte_out[L];
        end
    endgenerate




    assign tb_clk =   enable_next_cycle & s_axis_aclk;
    assign able_to_process =  ~(enable_next_cycle && (m_axis_tvalid_r && ~m_axis_tready));

    assign m_axis_tdata  = reg_module_output;
    assign m_axis_tkeep  = {TDATA_BYTES{1'b1}};
    assign m_axis_tlast  = m_axis_tlast_r;
    assign s_axis_tready = able_to_process;
    assign m_axis_tvalid = m_axis_tvalid_r;


    always @(posedge s_axis_aclk ) begin
        if (~s_axis_aresetn) begin
            // state           <= 0;
            module_input    <= 0;
            XOR_reg         <= 0; 
            // s_axis_tready_r <= 1;
            m_axis_tlast_r  <= 0;
            m_axis_tvalid_r <= 0;
            OFF_cllk        <= 0;
            reg_module_output <=0;
            enable_next_cycle <= 0; 
        end else begin 
        if (s_axis_tvalid && able_to_process) begin 
            module_input      <= s_axis_tdata_kept;
            reg_tlast         <= s_axis_tlast;
            enable_next_cycle <= 1;        
        end else if (~able_to_process) begin 
            module_input        <= module_input;
            reg_tlast           <= reg_tlast;
            enable_next_cycle   <= enable_next_cycle;        
        end else begin 
            module_input        <= 0;
            reg_tlast           <= 0;
            enable_next_cycle   <= 0;        
        end

        if (enable_next_cycle ) begin 
            if  ( (m_axis_tvalid_r && ~m_axis_tready) ) begin 
            reg_module_output <= reg_module_output;
            m_axis_tlast_r    <= m_axis_tlast_r;
            m_axis_tvalid_r   <= m_axis_tvalid_r;
            end else begin 
            reg_module_output <= module_output;
            m_axis_tlast_r    <= reg_tlast;
            m_axis_tvalid_r   <= 1;            
            end 
        end else if  (((m_axis_tvalid_r && ~m_axis_tready) ) )begin 
            reg_module_output <= reg_module_output;
            m_axis_tlast_r    <= m_axis_tlast_r;
            m_axis_tvalid_r   <= m_axis_tvalid_r;
        end else begin 
            reg_module_output <= 0;
            m_axis_tvalid_r   <= 0;
            m_axis_tlast_r    <= 0;
        end
        
        end
        // end
    XOR_reg <= XOR_reg^s_axis_tlast;
    end

assign leds_4bits_tri_o  = {XOR_reg,XOR_reg,XOR_reg,XOR_reg};
// assign s_axis_tdata  = m_axis_tdata;
// assign s_axis_tkeep  = m_axis_tkeep;
// assign s_axis_tlast  = m_axis_tlast;
// assign s_axis_tready = m_axis_tready;
// assign s_axis_tvalid = m_axis_tvalid;
assign m_axis_aclk    = s_axis_aclk;
assign m_axis_aresetn = s_axis_aresetn;
endmodule


