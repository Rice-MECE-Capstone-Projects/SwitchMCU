module syncfifo_swc(
    rstn    ,
    clk     ,
    wen     ,
    wdata   ,
    full    ,
    ren     ,
    rdata   ,
    empty   
);

// parameters
parameter data_width = 32                               ;
parameter ram_size   = 16                               ; // must be a power of 2
parameter addr_width = $clog2(ram_size)                 ;

// general signals
input                           rstn                    ;
input                           clk                     ;

// write  
input                           wen                     ;
input   [data_width-1:0]        wdata                   ;
output                          full                    ;

// read     
input                           ren                     ;
output  reg [data_width-1:0]    rdata                   ;
output                          empty                   ;

// address
wire    [addr_width-1:0]        waddr                   ;
wire    [addr_width-1:0]        raddr                   ;

// address pointers
reg     [addr_width:0]          waddr_ptr               ;
reg     [addr_width:0]          raddr_ptr               ;

// FIFO ram
reg [data_width-1:0] fifo_ram [ram_size-1:0];
    
// waddr raddr
assign waddr = waddr_ptr[addr_width-1:0];
assign raddr = raddr_ptr[addr_width-1:0];

// write ram
generate
    genvar i;
    for (i = 0; i < ram_size; i = i + 1) begin
        always @(posedge clk) begin
            if (!rstn)
                fifo_ram[i] <= 0;
            else if (wen && !full && (i == waddr))
                fifo_ram[i] <= wdata;
            else
                fifo_ram[i] <= fifo_ram[i];
        end
    end
endgenerate

// read ram
always @(posedge clk) begin
    if(!rstn)
        rdata <= 0;
    else if(ren && !empty)
        rdata <= fifo_ram[raddr];
    else
        rdata <= 0;
end

// waddr_ptr
always @(posedge clk) begin
    if(!rstn)
        waddr_ptr <= 0;
    else if(wen && !full)
        waddr_ptr <= waddr_ptr + 1;
    else
        waddr_ptr <= waddr_ptr;
end

// raddr_ptr
always @(posedge clk) begin
    if(!rstn)
        raddr_ptr <= 0;
    else if(ren && (~empty))
        raddr_ptr <= raddr_ptr + 1;
    else
        raddr_ptr <= raddr_ptr;
end

// signs
assign empty = (raddr_ptr == waddr_ptr);
assign full  = (waddr_ptr[addr_width - 1:0] == raddr_ptr[addr_width - 1:0]) && (waddr_ptr[addr_width] != raddr_ptr[addr_width]);

endmodule
