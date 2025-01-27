module asyncfifo_swc(
    rstn    ,
    wclk    ,
    wen     ,
    wdata   ,
    full    ,
    rclk    ,
    ren     ,
    rdata   ,
    empty   
);
parameter data_width = 16                               ;
parameter ram_size   = 256                              ; // must be a power of 2
parameter addr_width = $clog2(ram_size)                 ;

input                           rstn                    ;
// write        
input                           wclk                    ;
input                           wen                     ;
input   [data_width-1:0]        wdata                   ;
output                          full                    ;
// read     
input                           rclk                    ;
input                           ren                     ;
output  reg [data_width-1:0]    rdata                   ;
output                          empty                   ;
// address
wire    [addr_width-1:0]        waddr                   ;
wire    [addr_width-1:0]        raddr                   ;
// address pointers
reg     [addr_width:0]          waddr_ptr               ;
reg     [addr_width:0]          raddr_ptr               ;

wire    [addr_width:0]          waddr_ptr_gray          ;
reg     [addr_width:0]          waddr_ptr_gray_r        ;
reg     [addr_width:0]          waddr_ptr_gray_rr       ;

wire    [addr_width:0]          raddr_ptr_gray          ;
reg     [addr_width:0]          raddr_ptr_gray_r        ;
reg     [addr_width:0]          raddr_ptr_gray_rr       ;

reg     [addr_width:0]          waddr_ptr_restore       ;
reg     [addr_width:0]          raddr_ptr_restore       ;

// FIFO ram
reg [data_width-1:0] fifo_ram [ram_size-1:0];
    
// waddr raddr
assign waddr = waddr_ptr[addr_width-1:0];
assign raddr = raddr_ptr[addr_width-1:0];

// write ram
generate
    genvar i;
    for (i = 0; i < ram_size; i = i + 1) begin
        always @(posedge wclk) begin
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
always @(posedge rclk) begin
    if(!rstn)
        rdata <= 0;
    else if(ren && !empty)
        rdata <= fifo_ram[raddr];
    else
        rdata <= 0;
end

// waddr_ptr
always @(posedge wclk) begin
    if(!rstn)
        waddr_ptr <= 0;
    else if(wen && !full)
        waddr_ptr <= waddr_ptr + 1;
    else
        waddr_ptr <= waddr_ptr;
end

// raddr_ptr
always @(posedge rclk) begin
    if(!rstn)
        raddr_ptr <= 0;
    else if(ren && (~empty))
        raddr_ptr <= raddr_ptr + 1;
    else
        raddr_ptr <= raddr_ptr;
end

// binary to gray
assign waddr_ptr_gray = (waddr_ptr >> 1) ^ waddr_ptr;
assign raddr_ptr_gray = (raddr_ptr >> 1) ^ raddr_ptr;

// gray cdc
always @(posedge wclk) begin
    if(!rstn)begin
        waddr_ptr_gray_r <= 0;
        waddr_ptr_gray_rr <= 0;
    end else begin
        waddr_ptr_gray_r <= waddr_ptr_gray;
        waddr_ptr_gray_rr <= waddr_ptr_gray_r;
    end
end

always @(posedge rclk) begin
    if(!rstn)begin
        raddr_ptr_gray_r <= 0;
        raddr_ptr_gray_rr <= 0;
    end else begin
        raddr_ptr_gray_r <= raddr_ptr_gray;
        raddr_ptr_gray_rr <= raddr_ptr_gray_r;
    end
end

// gray to binary
always @(*) begin
    integer i;
    waddr_ptr_restore[addr_width] = waddr_ptr_gray_rr[addr_width];
    for (i = addr_width - 1; i >= 0; i = i - 1) begin
        waddr_ptr_restore[i] = waddr_ptr_restore[i + 1] ^ waddr_ptr_gray_rr[i];
    end
end

always @(*) begin
    integer i;
    raddr_ptr_restore[addr_width] = raddr_ptr_gray_rr[addr_width];
    for (i = addr_width - 1; i >= 0; i = i - 1) begin
        raddr_ptr_restore[i] = raddr_ptr_restore[i + 1] ^ raddr_ptr_gray_rr[i];
    end
end

// signs
assign empty = (raddr_ptr == waddr_ptr_restore);
assign full  = (waddr_ptr[addr_width - 1:0] == raddr_ptr_restore[addr_width - 1:0]) && (waddr_ptr[addr_width] != raddr_ptr_restore[addr_width]);

endmodule
