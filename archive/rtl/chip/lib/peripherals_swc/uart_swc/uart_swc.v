module uart_swc (
    pclk        ,
    prstn       ,
    paddr       ,
    psel        ,
    penable     ,
    pwrite      ,
    pwdata      ,
    pready      ,
    prdata      ,
    pslverr     ,
    tx          ,
    rx          
);
// Address
localparam UART_SR_ADDR   = 'h0010_0100;
localparam UART_WDR_ADDR  = 'h0010_0104;
localparam UART_RDR_ADDR  = 'h0010_0108;
localparam UART_BRR_ADDR  = 'h0010_010C;
localparam UART_CR1_ADDR  = 'h0010_0110;
localparam UART_CR2_ADDR  = 'h0010_0114;
localparam UART_CR3_ADDR  = 'h0010_0118;
// APB Bus Signals
input                           pclk        ;
input                           prstn       ;
input           [31:0]          paddr       ;
input                           psel        ;
input                           penable     ;
input                           pwrite      ;
input           [31:0]          pwdata      ;
output                          pready      ;
output          [31:0]          prdata      ;
output                          pslverr     ;
output reg                      tx          ;
input                           rx          ;
reg                             pready_buff ;
reg             [31:0]          prdata_buff ;
reg                             pslverr_buff;
// Registers
reg             [31:0]          UART_SR     ;
reg             [31:0]          UART_WDR    ;
reg             [31:0]          UART_RDR    ;
reg             [31:0]          UART_BRR    ;
reg             [31:0]          UART_CR1    ;
reg             [31:0]          UART_CR2    ;
reg             [31:0]          UART_CR3    ;

// Buffer the outputs
assign pready  = psel ? pready_buff  : 'z;
assign prdata  = psel ? prdata_buff  : 'z;
assign pslverr = psel ? pslverr_buff : 'z;

// State machine
localparam APB_TRANS_IDLE       =   0   ,
           APB_TRANS_READY      =   1   ,
           APB_TRANS_READ       =   2   ,
           APB_TRANS_DELAY      =   3   ;

reg     [2:0]                   apb_state       ;
reg     [2:0]                   apb_nextstate   ;

always @(posedge pclk) begin
    if(!prstn) begin
        apb_state <= APB_TRANS_IDLE;
    end else begin
        apb_state <= apb_nextstate;
    end 
end
        
always @(*) begin
    case(apb_state)
    APB_TRANS_IDLE: begin
        if(psel && !pwrite && paddr == UART_RDR_ADDR) begin
            apb_nextstate = APB_TRANS_READ;
        end else if(psel) begin
            apb_nextstate = APB_TRANS_READY;
        end else begin
            apb_nextstate = APB_TRANS_IDLE;
        end
    end
    APB_TRANS_READY: begin
        apb_nextstate = APB_TRANS_IDLE;
    end
    APB_TRANS_READ: begin
        apb_nextstate = APB_TRANS_DELAY;
    end
    APB_TRANS_DELAY:begin
        apb_nextstate = APB_TRANS_READY;
    end
    endcase
end

// addr_error = 1 indicates there's a request with error address on apb bus
wire addr_error;

// addr_error
assign addr_error = psel && !(  paddr == UART_SR_ADDR   ||
                                paddr == UART_WDR_ADDR  ||
                                paddr == UART_RDR_ADDR  || 
                                paddr == UART_BRR_ADDR  || 
                                paddr == UART_CR1_ADDR  || 
                                paddr == UART_CR2_ADDR  || 
                                paddr == UART_CR3_ADDR  );

// pslverr_buff
always @(posedge pclk) begin
    if(!prstn) begin
        pslverr_buff <= 0;
    end else if(apb_nextstate == APB_TRANS_READY) begin
        if(addr_error) begin
            pslverr_buff <= 1;
        end else begin
            pslverr_buff <= 0;
        end
    end else begin
        pslverr_buff <= 0;
    end
end

// pready_buff
always @(posedge pclk) begin
    if(!prstn) begin
        pready_buff <= 0;
    end else if(apb_nextstate == APB_TRANS_READY) begin
        pready_buff <= 1;
    end else begin
        pready_buff <= 0;
    end
end
 
// UART_BRR
always @(posedge pclk) begin
    if(!prstn) begin
        UART_BRR <= 'h0000_0000;
    end else if(psel && penable && pwrite && paddr == UART_BRR_ADDR) begin
        UART_BRR <= pwdata;
    end else begin
        UART_BRR <= UART_BRR;
    end
end

// UART_CR1
always @(posedge pclk) begin
    if(!prstn) begin
        UART_CR1 <= 'h0000_0000;
    end else if(psel && penable && pwrite && paddr == UART_CR1_ADDR) begin
        UART_CR1 <= pwdata;
    end else begin
        UART_CR1 <= UART_CR1;
    end
end

// UART_CR2
always @(posedge pclk) begin
    if(!prstn) begin
        UART_CR2 <= 'h0000_0000;
    end else if(psel && penable && pwrite && paddr == UART_CR2_ADDR) begin
        UART_CR2 <= pwdata;
    end else begin
        UART_CR2 <= UART_CR2;
    end
end

// UART_CR3
always @(posedge pclk) begin
    if(!prstn) begin
        UART_CR3 <= 'h0000_0000;
    end else if(psel && penable && pwrite && paddr == UART_CR3_ADDR) begin
        UART_CR3 <= pwdata;
    end else begin
        UART_CR3 <= UART_CR3;
    end
end

// rdr_ren
always @(posedge pclk) begin
    if(!prstn) begin
        rdr_ren <= 0;
    end else if(apb_nextstate == APB_TRANS_READ) begin
        rdr_ren <= 1;
    end else begin
        rdr_ren <= 0;
    end
end

// prdata_buff
always @(posedge pclk) begin
    if(!prstn) begin
        prdata_buff <= 0;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_SR_ADDR) begin
        prdata_buff <= UART_SR;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_WDR_ADDR) begin
        prdata_buff <= 0;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_RDR_ADDR) begin
        prdata_buff <= {16'b0, rdr_rdata};
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_BRR_ADDR) begin
        prdata_buff <= UART_BRR;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_CR1_ADDR) begin
        prdata_buff <= UART_CR1;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_CR2_ADDR) begin
        prdata_buff <= UART_CR2;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == UART_CR3_ADDR) begin
        prdata_buff <= UART_CR3;
    end else begin
        prdata_buff <= 0;
    end
end

// FIFO Width
localparam FIFO_WIDTH = 16;

// WDR FIFO control
reg                                 wdr_wen         ;
reg         [FIFO_WIDTH-1:0]        wdr_wdata       ;
wire                                wdr_full        ;
reg                                 wdr_ren         ;
wire        [FIFO_WIDTH-1:0]        wdr_rdata       ;
wire                                wdr_empty       ;

// WDR_FIFO
syncfifo_swc #(
    .data_width     (FIFO_WIDTH     ),
    .ram_size       (16             )
) wdr_syncfifo_swc_inst (
    .rstn           (prstn          ),
    .clk            (pclk           ),
    .wen            (wdr_wen        ),
    .wdata          (wdr_wdata      ),
    .full           (wdr_full       ),
    .ren            (wdr_ren        ),
    .rdata          (wdr_rdata      ),
    .empty          (wdr_empty      )
);

// wdr_wen
always @(posedge pclk) begin
    if(!prstn) begin
        wdr_wen <= 0;
    end else if(psel && penable && pwrite && paddr == UART_WDR_ADDR && !wdr_full) begin
        wdr_wen <= 1;
    end else begin
        wdr_wen <= 0;
    end
end

// wdr_wdata
always @(posedge pclk) begin
    if(!prstn) begin
        wdr_wdata <= 0;
    end else if(psel && penable && pwrite && paddr == UART_WDR_ADDR && !wdr_full) begin
        wdr_wdata <= pwdata[FIFO_WIDTH-1:0];
    end else begin
        wdr_wdata <= 0;
    end
end

// Signals for UART transfer
localparam COUNTER_WIDTH = 16;
wire                                UART_CR1_UE             ;
wire                                UART_CR1_M              ;
wire                                UART_CR1_PCE            ;
wire                                UART_CR1_PS             ;
wire    [1:0]                       UART_CR2_STOP           ;
wire    [3:0]                       total_bits              ;
reg     [15:0]                      tx_uartwdata_full_buff  ;
reg     [3:0]                       tx_byte_cnt             ;
reg     [15:0]                      tx_bit_cnt              ;

// SPI_CR_SPE
assign UART_CR1_UE   = UART_CR1[13];
// UART_CR1_M
assign UART_CR1_M    = UART_CR1[12];
// UART_CR1_PCE
assign UART_CR1_PCE  = UART_CR1[10];
// UART_CR1_PS
assign UART_CR1_PS   = UART_CR1[9];
// UART_CR2_STOP
assign UART_CR2_STOP = UART_CR2[13:12];
// total_bits
assign total_bits   =   (UART_CR1_M             ? 9 : 8)    +
                        (UART_CR2_STOP == 2'b10 ? 2 : 1)    +
                        (UART_CR1_PCE           ? 1 : 0)    +
                        1                                   ;

// TX state machine
localparam UART_TX_IDLE     =   0   ,
           UART_TX_READ     =   1   ,
           UART_TX_DELAY    =   2   ,
           UART_TX_BUFFER   =   3   ,
           UART_TX_COUNT    =   4   ;

reg     [2:0]                       uart_tx_state       ;
reg     [2:0]                       uart_tx_nextstate   ;

always @(posedge pclk) begin
    if(!prstn) begin
        uart_tx_state <= UART_TX_IDLE;
    end else begin
        uart_tx_state <= uart_tx_nextstate;
    end 
end

always @(*) begin
    case(uart_tx_state)
    UART_TX_IDLE: begin
        if(!wdr_empty && UART_CR1_UE) begin
            uart_tx_nextstate = UART_TX_READ;  
        end else begin
            uart_tx_nextstate = UART_TX_IDLE;
        end
    end
    UART_TX_READ: begin
        uart_tx_nextstate = UART_TX_DELAY;
    end
    UART_TX_DELAY: begin
        uart_tx_nextstate = UART_TX_BUFFER;
    end
    UART_TX_BUFFER: begin
        uart_tx_nextstate = UART_TX_COUNT;    
    end
    UART_TX_COUNT: begin
        if(tx_byte_cnt == total_bits - 1 && tx_bit_cnt == UART_BRR[15:0] - 1) begin
            uart_tx_nextstate = UART_TX_IDLE;
        end else begin
            uart_tx_nextstate = UART_TX_COUNT;
        end      
    end
    default:
        uart_tx_nextstate = UART_TX_IDLE;
    endcase
end

// wdr_ren
always @(posedge pclk) begin
    if (!prstn) begin
        wdr_ren <= 0;
    end else if(uart_tx_nextstate == UART_TX_READ)begin
        wdr_ren <= 1;
    end else begin
        wdr_ren <= 0;
    end   
end

// Parity bits
wire tx_odd_tx_parity_bit;
assign tx_odd_tx_parity_bit =  ^(wdr_rdata);
wire tx_even_tx_parity_bit;
assign tx_even_tx_parity_bit = ~tx_odd_tx_parity_bit;
wire tx_parity_bit = UART_CR1_PS ? tx_odd_tx_parity_bit : tx_even_tx_parity_bit;

// tx_uartwdata_with_start
wire [15:0] tx_uartwdata_with_start;
assign tx_uartwdata_with_start = {wdr_rdata[14:0], 1'b0};

// uartwdata_with_parity
wire [15:0] tx_uartwdata_full;
assign tx_uartwdata_full = ({UART_CR1_M, UART_CR1_PCE} == 2'b10) ? {{6{1'b1}}, tx_uartwdata_with_start[9:0]}                  :
                        ({UART_CR1_M, UART_CR1_PCE} == 2'b11) ? {{5{1'b1}}, tx_parity_bit, tx_uartwdata_with_start[9:0]}   :
                        ({UART_CR1_M, UART_CR1_PCE} == 2'b00) ? {{7{1'b1}}, tx_uartwdata_with_start[8:0]}                  :
                        {{6{1'b1}}, tx_parity_bit, tx_uartwdata_with_start[8:0]};

// tx_uartwdata_full_buff
always @(posedge pclk) begin
    if (!prstn) begin
        tx_uartwdata_full_buff <= 0;
    end else if(uart_tx_nextstate == UART_TX_BUFFER)begin
        tx_uartwdata_full_buff <= tx_uartwdata_full;
    end else if(uart_tx_nextstate == UART_TX_COUNT)begin
        tx_uartwdata_full_buff <= tx_uartwdata_full_buff;
    end else begin
        tx_uartwdata_full_buff <= 0;
    end   
end

// tx_bit_cnt
always @(posedge pclk) begin
    if(!prstn) begin
        tx_bit_cnt <= 0;
    end else if(uart_tx_nextstate == UART_TX_COUNT) begin
        if(tx_bit_cnt == UART_BRR[15:0] - 1) begin
            tx_bit_cnt <= 0;
        end else begin
            tx_bit_cnt <= tx_bit_cnt + 1;
        end
    end else begin
        tx_bit_cnt <= 0;
    end
end

// tx_byte_cnt
always @(posedge pclk) begin
    if(!prstn) begin
        tx_byte_cnt <= 0;
    end else if(uart_tx_nextstate == UART_TX_COUNT) begin
        if(tx_bit_cnt == UART_BRR[15:0] - 1) begin
            if(tx_byte_cnt + 1 == total_bits) begin
                tx_byte_cnt <= 0;
            end else begin
                tx_byte_cnt <= tx_byte_cnt + 1;
            end
        end else begin
            tx_byte_cnt <= tx_byte_cnt;
        end
    end else begin
        tx_byte_cnt <= 0;
    end
end

// tx
always @(posedge pclk) begin
    if (!prstn) begin
        tx <= 0;
    end else if(uart_tx_nextstate == UART_TX_COUNT || uart_tx_state == UART_TX_COUNT)begin
        tx <= tx_uartwdata_full_buff[tx_byte_cnt];
    end else begin
        tx <= 1;
    end
end

// Signals for UART transfer
reg     [3:0]                       rx_byte_cnt             ;
reg     [15:0]                      rx_bit_cnt              ;

// RX edge detector
reg     rx_dly;
wire    rx_negedge;
always @(posedge pclk) begin
    if(!prstn) begin
        rx_dly <= 0;
    end else begin
        rx_dly <= rx;
    end 
end
assign rx_negedge = (rx_dly) && (!rx);

// RX state machine
localparam UART_RX_IDLE     =   0   ,
           UART_RX_COUNT    =   1   ,
           UART_RX_WRITE    =   2   ;

reg     [2:0]                       uart_rx_state       ;
reg     [2:0]                       uart_rx_nextstate   ;

always @(posedge pclk) begin
    if(!prstn) begin
        uart_rx_state <= UART_RX_IDLE;
    end else begin
        uart_rx_state <= uart_rx_nextstate;
    end 
end

always @(*) begin
    case(uart_rx_state)
    UART_RX_IDLE: begin
        if(rx_negedge && UART_CR1_UE) begin
            uart_rx_nextstate = UART_RX_COUNT;  
        end else begin
            uart_rx_nextstate = UART_RX_IDLE;
        end
    end
    UART_RX_COUNT: begin
        if(rx_byte_cnt == total_bits - 1 && rx_bit_cnt == UART_BRR[15:0] - 1) begin
            uart_rx_nextstate = UART_RX_WRITE;
        end else begin
            uart_rx_nextstate = UART_RX_COUNT;
        end      
    end
    UART_RX_WRITE: begin
        uart_rx_nextstate = UART_RX_IDLE;
    end
    default:
        uart_rx_nextstate = UART_RX_IDLE;
    endcase
end

// rx_bit_cnt
always @(posedge pclk) begin
    if(!prstn) begin
        rx_bit_cnt <= 0;
    end else if(uart_rx_nextstate == UART_RX_COUNT) begin
        if(rx_bit_cnt == UART_BRR[15:0] - 1) begin
            rx_bit_cnt <= 0;
        end else begin
            rx_bit_cnt <= rx_bit_cnt + 1;
        end
    end else begin
        rx_bit_cnt <= 0;
    end
end

// rx_byte_cnt
always @(posedge pclk) begin
    if(!prstn) begin
        rx_byte_cnt <= 0;
    end else if(uart_rx_nextstate == UART_RX_COUNT) begin
        if(rx_bit_cnt == UART_BRR[15:0] - 1) begin
            if(rx_byte_cnt + 1 == total_bits) begin
                rx_byte_cnt <= 0;
            end else begin
                rx_byte_cnt <= rx_byte_cnt + 1;
            end
        end else begin
            rx_byte_cnt <= rx_byte_cnt;
        end
    end else begin
        rx_byte_cnt <= 0;
    end
end

// capture_bit_cnt_value
wire [15:0] capture_bit_cnt_value;
assign capture_bit_cnt_value = UART_BRR[15:0] >> 1;

// uartrdata_full
reg         [15:0]                  uartrdata_full        ;
always @(posedge pclk) begin
    if (!prstn) begin
        uartrdata_full <= 0;
    end else if(rx_bit_cnt == capture_bit_cnt_value) begin
        uartrdata_full <= {rx, uartrdata_full[15:1]};
    end else if(uart_rx_nextstate == UART_RX_COUNT || uart_rx_nextstate == UART_RX_WRITE) begin
        uartrdata_full <= uartrdata_full;
    end else begin
        uartrdata_full <= 0;
    end
end

// uartrdata
reg         [15:0]                  uartrdata              ;
wire        [3:0]                   data_start             ;
wire        [3:0]                   data_end               ;
assign data_start = (UART_CR2_STOP == 2'b10 ? 2 : 1)    +
                    (UART_CR1_PCE           ? 1 : 0)    ;
assign data_end   = UART_CR1_M ? 7 : 8;
assign uartrdata  = (uartrdata_full << data_start) >> data_end;

// parity_check
wire                                parity_check            ;
assign parity_check =   ~UART_CR1_PCE   ? 1                     :
                        UART_CR1_PS     ? ^(uartrdata)          :
                        ~(^(uartrdata))                         ;

// stop_check
wire                                stop_check              ;
assign stop_check = UART_CR2_STOP == 2'b10 ?    uartrdata_full[15:14]   == 2'b11    :
                                                uartrdata_full[15]      == 1'b01    ;

// RDR FIFO control
reg                                 rdr_wen                 ;
wire        [FIFO_WIDTH-1:0]        rdr_wdata               ;
wire                                rdr_full                ;
reg                                 rdr_ren                 ;
wire        [FIFO_WIDTH-1:0]        rdr_rdata               ;
wire                                rdr_empty               ;

// RDR_FIFO
syncfifo_swc #(
    .data_width     (FIFO_WIDTH     ),
    .ram_size       (16             )
) rdr_syncfifo_swc_inst (
    .rstn           (prstn          ),
    .clk            (pclk           ),
    .wen            (rdr_wen        ),
    .wdata          (rdr_wdata      ),
    .full           (rdr_full       ),
    .ren            (rdr_ren        ),
    .rdata          (rdr_rdata      ),
    .empty          (rdr_empty      )
);

// rdr_wen
always @(posedge pclk) begin
    if (!prstn) begin
        rdr_wen <= 0;
    end else if(uart_rx_nextstate == UART_RX_WRITE && !rdr_full && parity_check && stop_check) begin
        rdr_wen <= 1;
    end else begin
        rdr_wen <= 0;
    end
end

// rdr_wdata
assign rdr_wdata = uartrdata;

endmodule
