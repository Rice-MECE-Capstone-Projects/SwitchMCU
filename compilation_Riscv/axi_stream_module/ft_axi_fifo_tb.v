// This is a basic testbench for StreamingHistogram assignment.

`timescale 1ps / 1ps

module ft_axi_fifoTB
#(
    parameter   TDATA_WIDTH = 64 ,
    parameter   TDATA_BYTES = 8
)
();
    glbl glbl ();
    localparam IDLE_LEN = 10;

    reg                      s_axis_aclk;
    reg                      s_axis_aresetn;
    wire                     m_axis_aresetn;
  
    reg [TDATA_WIDTH-1:0]    s_axis_tdata, m_axis_tdata_recived, s_axis_tdata_recived;
    reg [TDATA_BYTES-1:0]    s_axis_tkeep;
    reg                      s_axis_tlast;
    wire                     s_axis_tready;
    reg                      s_axis_tvalid;


//s_axis_tready
    wire [TDATA_WIDTH-1:0]   m_axis_tdata;
    wire [TDATA_BYTES-1:0]   m_axis_tkeep;
    wire                     m_axis_tlast;
    reg                      m_axis_tready;
    wire                     m_axis_tvalid;
    
    wire               [3:0] leds_4bits_tri_o;
    reg transfer_active;
    ft_axi_fifo
`ifndef GATESIM
#(    .TDATA_WIDTH(TDATA_WIDTH),
      .TDATA_BYTES(TDATA_BYTES)) 
`endif
    dut (
        .s_axis_aclk(   s_axis_aclk),
        .s_axis_aresetn(s_axis_aresetn),
        
        .m_axis_aresetn(m_axis_aresetn),

        .s_axis_tdata( s_axis_tdata),
        .s_axis_tkeep( s_axis_tkeep),
        .s_axis_tlast( s_axis_tlast),
        .s_axis_tready(s_axis_tready),
        .s_axis_tvalid(s_axis_tvalid),
        .m_axis_tdata(m_axis_tdata),
        .m_axis_tkeep(m_axis_tkeep),
        .m_axis_tlast(m_axis_tlast),
        .m_axis_tready(m_axis_tready),
        .m_axis_tvalid(m_axis_tvalid),
        .leds_4bits_tri_o(leds_4bits_tri_o));


    always begin
        s_axis_aclk = 1'b0;
        #5000;
        s_axis_aclk = 1'b1;
        #5000;
    end


    initial begin : init
        //logic [32*8-1:0] vcdfile;
        string vcdfile;
        int vcdlevel;
        m_axis_tdata_recived <=0;
        s_axis_tdata_recived <= 0;
        s_axis_aresetn <= 1'b0;
        s_axis_tdata   <= 0;
        s_axis_tkeep   <= 0;
        s_axis_tlast   <= 0;
        s_axis_tvalid  <= 0;
        m_axis_tready  <= 0;
        transfer_active <=0;
        if ($value$plusargs("VCDFILE=%s",vcdfile))
            $dumpfile(vcdfile);
        if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
            $dumpvars(vcdlevel);
        @(posedge s_axis_aclk);
        $display("%t: asserted reset", $time);
        repeat (10) @(posedge s_axis_aclk);
        s_axis_aresetn <= 1'b1;
        $display("%t: negated reset", $time);
    end

    // -------------------------
    // stream and query stimulus


always @(posedge s_axis_aclk) begin 

    if (m_axis_tready && m_axis_tvalid) begin 
        // $display("m_axis_tdata: %h",m_axis_tdata);
        m_axis_tdata_recived <=  m_axis_tdata;
   end

    if (s_axis_tready && s_axis_tvalid) begin 
        // $display("m_axis_tdata: %h",m_axis_tdata);
        s_axis_tdata_recived <=  s_axis_tdata;
   end


end

    initial begin : stim

        // @(negedge s_axis_aresetn);
        @(posedge s_axis_aresetn);
        // repeat ((1 << IDLE_LEN) + 20) @(posedge s_axis_aclk);
        repeat (IDLE_LEN) @(posedge s_axis_aclk);
        $display("%t: starting stream stimulus", $time);

        transfer_active <= 1;
        // send_data_S__valid(64'h700000000);
        // send_data_S__valid(64'h700000001);
        send_data_SM_valid(64'h700000000);
        send_data_SM_valid(64'h700000001);
        send_data_SM_valid(64'h700000002);
        send_data_SM_valid(64'h700000003);
        send_data_SM_valid(64'h700000004);
        send_data_SM_valid(64'h700000005);
        send_data_SM_valid(64'h700000006);
        send_data_SM_valid(64'h700000007);
        send_data_SM_valid(64'h700000008);
        send_data_SM_valid(64'h700000009);
        send_data_SM_valid(64'h70000000A);
        send_data_SM_valid(64'h70000000B);
        send_data_SM_valid(64'h70000000C);
        send_data_SM_valid(64'h70000000D);
        send_data_SM_valid(64'h70000000D,1);
        send_data_SM_valid(64'h70000000D,0);
        // send_data__M_valid(64'h70000000E,0);
        // send_data____spacer();
        // send_data____spacer();

        // send_data_S__valid(64'h700000003);
        // send_data_SM_valid(64'h700000004);
        // send_data__M_valid(64'h700000002);

        // send_data____spacer();
        // send_data____spacer();
        // send_data____spacer();
        // send_data____spacer();
        // send_data__M_valid(64'h700000002);
        // send_data____spacer();
        // send_data____spacer();
        // send_data____spacer();
        
        // send_data_SM_valid(64'h700000007);
        // send_data_S__valid(64'h700000002);
        // send_data_S__valid(64'h70000000A);
        // send_data____spacer();
        // send_data____spacer();
        // send_data__M_valid(64'h700000003);
        // send_data_SM_valid(64'h700000004);
        // send_data_S__valid(64'h700000005);
        // send_data_SM_valid(64'h700000006);
        // send_data_SM_valid(64'h200000006);
        // send_data_SM_valid(64'h300000006);
        // send_data_SM_valid(64'h600000006);
        // send_data_SM_valid(64'h700000007, 1); // Last data word, with tlast
        // send_data__M_valid(64'h700000008, 0); // Last data word, with tlast
        // send_data_S__valid(64'h700000008, 0); // Last data word, with tlast
        // send_data_S__valid(64'h700000008, 0); // Last data word, with tlast
        // send_data_S__valid(64'h700000008, 0); // Last data word, with tlast
        // send_data_S__valid(64'h700000008, 0); // Last data word, with tlast
        // send_data__M_valid(64'h700000009, 0); // Last data word, with tlast

        //send_data_SM_valid(input [TDATA_WIDTH-1:0] data, input last = 0)

        repeat (2) @(posedge s_axis_aclk);
        transfer_active <= 0;
        repeat (2) @(posedge s_axis_aclk);

        $display("%t: TEST PASSED", $time);
        $finish;
    end


task send_data_SM_valid(input [TDATA_WIDTH-1:0] data, input last = 0);
begin
    @(posedge s_axis_aclk);
    #1000
    s_axis_tvalid <= 1;
    s_axis_tdata <= data;
    s_axis_tlast <= last;
    s_axis_aresetn <= 1'b1;
    s_axis_tkeep   <= {TDATA_BYTES{1'b1}};
    m_axis_tready  <= 1;
    $display("%t: SD Req, SM__valid  data: %h ,      last: %b ",
                $time, data, last);
end
endtask

task send_data__M_valid(input [TDATA_WIDTH-1:0] data, input last = 0);
begin
    @(posedge s_axis_aclk);
    #1000

    s_axis_tvalid <= 0;
    s_axis_tdata <= data;
    s_axis_tlast <= last;
    s_axis_aresetn <= 1'b1;
    s_axis_tkeep   <= {TDATA_BYTES{1'b1}};
    m_axis_tready  <= 1;
    $display("%t: SD Req, _M__valid  data: %h ,      last: %b ",
                $time, data, last);
end
endtask

task send_data_S__valid(input [TDATA_WIDTH-1:0] data, input last = 0);
begin
    @(posedge s_axis_aclk);
    #1000

    
    s_axis_tvalid <= 1;
    s_axis_tdata <= data;
    s_axis_tlast <= last;
    s_axis_aresetn <= 1'b1;
    s_axis_tkeep   <= {TDATA_BYTES{1'b1}};
    m_axis_tready  <= 0;
    $display("%t: SD Req, S___valid  data: %h ,      last: %b ",
                $time, data, last);
    
end
endtask


task send_data____spacer();
begin
    @(posedge s_axis_aclk);
    #1000

    
    s_axis_tvalid <= 0;
    s_axis_tdata <= 0;
    s_axis_tlast <= 0;
    s_axis_aresetn <= 1'b1;
    s_axis_tkeep   <= {TDATA_BYTES{1'b1}};
    m_axis_tready  <= 0;
    $display("%t: SD Req, ____SPACER data: -- ,      last: -- ",
                $time);
    
end
endtask


// //s_axis_tready
//     wire [TDATA_WIDTH-1:0]   m_axis_tdata;
//     wire [TDATA_BYTES-1:0]   m_axis_tkeep;
//     wire                     m_axis_tlast;
//     wire                     m_axis_tvalid;
    

        always @(negedge s_axis_aclk) begin : checker
        if (transfer_active) begin 
            $display("%t:                 m_tdata:{%h},  s_tlast: {%b}, s_tready: {%b} , m_tvalid: {%b}           ",
            $time,        m_axis_tdata,         s_axis_tlast,       s_axis_tready,        m_axis_tvalid         
            );
            if (s_axis_tready && s_axis_tvalid) begin 
            $display("%t:       Contoler to RTL, sent    {%h} ", 
            $time,           s_axis_tdata_recived
            );
            end
            if (m_axis_tready && m_axis_tvalid) begin 
            $display("%t:      RTL to FIFO sent, recived {%h} ",
            $time,      m_axis_tdata_recived,     
            );
            end
        $display("__________________________________________________________________________________________________________________");
        end

        end



    // always @(negedge s_axis_aclk) begin : checker
    //     if (query_valid_p3) begin
    //         if (query_count == counters[query_word_p3]) begin
    //             $display("%t: query count [%x] = %d (ok)",
    //                 $time, query_word_p3, query_count);
    //         end

    endmodule

        // repeat (100) begin : repeated_stream_data
        //     integer i;
        //     @(posedge s_axis_aclk);
        //     stream_valid <= {$random} % 100 < 95;
        //     for (i = 0; i < 2 ** log2_words; i=i+1)
        //         stream_word[i] <= rw[{$random} % 2 ** log2_words];
        // end
        // repeat (1000) begin : rand_stream_data
        //     integer i;
        //     @(posedge s_axis_aclk);
        //     stream_valid <= {$random} % 100 < 95;
        //     for (i = 0; i < 2 ** log2_words; i=i+1)
        //         stream_word[i] <= {$random} % 2 ** word_width;
        // end

        // $display("%t: completed stream stimulus", $time);

        // repeat (10) @(posedge s_axis_aclk);
        // $display("%t: starting query stimulus", $time);

        // repeat (2 << word_width) begin
        //     @(posedge s_axis_aclk);
        //     query_valid  <= {$random} % 100 < 95;
        //     query_word   <= {$random} % 2 ** word_width;
        // end

        // query_valid  <= 1'b0;
        // query_word   <= {$random} % 2 ** word_width;
        // $display("%t: completed query stimulus", $time);

    // -----
    // model

    // reg [count_width-1:0] counters [0 : 2 ** word_width - 1];
    // initial begin : init_counters
    //     integer i;
    //     for (i = 0; i < 2 ** word_width; i=i+1) begin
    //         counters[i] = {count_width{1'b0}};
    //     end
    // end

    // always @(negedge s_axis_aclk) begin : model
    //     reg [word_width-1:0] word;
    //     if (stream_valid) begin : model_counters
    //         integer i;
    //         for (i = 0; i < 2 ** log2_words; i=i+1) begin
    //             word = stream_data >> (i * word_width);
    //             counters[word] = counters[word] + 1;
    //             $display("%t: stream word[%0d] = %x, count = %d",
    //                 $time, i, word, counters[word]);
    //         end
    //     end
    // end

    // -------
    // // checker

    // reg                     query_valid_p1;
    // reg                     query_valid_p2;
    // reg                     query_valid_p3;

    // reg  [word_width-1:0]   query_word_p1;
    // reg  [word_width-1:0]   query_word_p2;
    // reg  [word_width-1:0]   query_word_p3;

    // always @(posedge s_axis_aclk) begin
    //     query_valid_p1 <= query_valid;
    //     query_valid_p2 <= query_valid_p1;
    //     query_valid_p3 <= query_valid_p2;

    //     query_word_p1  <= query_word;
    //     query_word_p2  <= query_word_p1;
    //     query_word_p3  <= query_word_p2;
    // end

    // always @(negedge s_axis_aclk) begin : checker
    //     if (query_valid_p3) begin
    //         if (query_count == counters[query_word_p3]) begin
    //             $display("%t: query count [%x] = %d (ok)",
    //                 $time, query_word_p3, query_count);
    //         end
    //         else begin
    //             $fatal(1, "%t: query count [%x] = %d, expected %d (error)",
    //                 $time, query_word_p3, query_count, counters[query_word_p3]);
    //         end
    //     end
    // end



