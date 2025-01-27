module wbu_swc (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    mau_load_rd                                 ,
    mau_load_data                               ,
    mau_load_en                                 ,
    reg_waddr                                   ,
    reg_wen                                     ,
    reg_wdata                                   
);

// general siganls
input                       hclk                ;
input                       hrstn               ;
input           [3:0]       cycle_cnt           ;

// signals from mau
input           [4:0]       mau_load_rd         ;
input           [31:0]      mau_load_data       ;
input                       mau_load_en         ;

// regfile signals
inout           [4:0]       reg_waddr           ;
inout                       reg_wen             ;
inout           [31:0]      reg_wdata           ;

// middle signals
reg             [4:0]       mid_reg_waddr       ;
reg                         mid_reg_wen         ;
reg             [31:0]      mid_reg_wdata       ;

assign reg_waddr   = mid_reg_wen   ? mid_reg_waddr    : 'z  ;
assign reg_wen     = mid_reg_wen   ? mid_reg_wen      : 'z  ;
assign reg_wdata   = mid_reg_wen   ? mid_reg_wdata    : 'z  ;

// the process
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin     
        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    // This stops pipelining from working (You have to wait for the cycle count which means that the system has to wait before it can do this)
    // This should activate exact cycle after MAU actually loads data into its output ports
    end else if(mau_load_en)begin
        if(cycle_cnt == 1) begin
            mid_reg_waddr   <= mau_load_rd;
            mid_reg_wen     <= 1;
            mid_reg_wdata   <= mau_load_data;
        end else begin
            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end
    end else begin
        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end
end

endmodule