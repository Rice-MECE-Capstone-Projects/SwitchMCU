// This is a basic testbench for StreamingHistogram assignment.

`timescale 1ps / 1ps

module ft_axi_fifoTB
#(
    parameter   TDATA_WIDTH = 64 ,
    parameter   TDATA_BYTES = 8
)
();
    glbl glbl ();
    localparam IDLE_LEN = 3;

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
    reg [31:0] cycle_count;
    
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
         cycle_count <=0;
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
        cycle_count <= cycle_count + 1;
   end

    if (s_axis_tready && s_axis_tvalid) begin 
        // $display("m_axis_tdata: %h",m_axis_tdata);
        s_axis_tdata_recived <=  s_axis_tdata;
   end


end

    initial begin : stim
        @(posedge s_axis_aresetn);
        repeat (IDLE_LEN) @(posedge s_axis_aclk);
        $display("%t: starting stream stimulus", $time);

        transfer_active <= 1;
        // send_data_S__valid(64'h700000001);
        send_data_SM_valid(64'h0000000000000000);
        send_data_SM_valid(64'h0000000700000001);
        send_data_SM_valid(64'h0000000700000002);
        send_data_SM_valid(64'h0000000700000003);
        send_data_SM_valid(64'h0000000700000004);
        send_data_SM_valid(64'h0000000700000005);
        send_data_SM_valid(64'h0000000700000006);
        send_data_SM_valid(64'h0000000700000007);
        send_data_SM_valid(64'h0000000700000008);
        send_data_SM_valid(64'h0000000700000009);
        send_data_SM_valid(64'h000000070000000A);
        send_data_SM_valid(64'h000000070000000B);
        send_data_SM_valid(64'h000000070000000C);
        send_data_SM_valid(64'h000000070000000D);
        send_data_SM_valid(64'h000000070000000D,1);
        send_data_SM_valid(64'h000000070000000D,0);

        repeat (2) @(posedge s_axis_aclk);
        transfer_active <= 0;
        repeat (2) @(posedge s_axis_aclk);

        $display("%t: TEST FINISHED", $time);
        $finish;
    end

// This task assigns data as input in array for clock cycle
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
    // $display("%t: SD Req, SM__valid  data: %h ,      last: %b ",
    //             $time, data, last);
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
        always @(negedge s_axis_aclk) begin : checker
        #1
        if (transfer_active) begin 
            // $display("%t:                 m_tdata:{%h},  s_tlast: {%b}, s_tready: {%b} , m_tvalid: {%b}           ",
            // $time,        m_axis_tdata,         s_axis_tlast,       s_axis_tready,        m_axis_tvalid         
            // );
            // if (s_axis_tready && s_axis_tvalid) begin 
            // $display("%t:       Contoler to RTL, sent    {%h} ", 
            // $time,           s_axis_tdata_recived
            // );
            // end
            if (m_axis_tready && m_axis_tvalid) begin 
            $display("%t:      Cycle {%d}, data {%d} ",
            $time,      cycle_count, m_axis_tdata_recived,     
            );
            end
        $display("__________________________________________________________________________________________________________________");
        end
        end
    endmodule
