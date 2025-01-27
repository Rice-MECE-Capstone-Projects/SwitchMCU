module uart_rx(clk, rst, rx, rx_data_out);

// Define UART reception parameters
parameter clk_freq = 50000000; // Clock frequency in MHz
parameter baud_rate = 19200;   // Baud rate in bits per second

// Define module inputs and outputs
input clk;                     // Clock signal
input rst;                     // Reset signal
input rx;                      // Serial input for receiving data
output [7:0] rx_data_out;      // 8-bit output for received data

// Calculate the clock divide value for baud rate synchronization
localparam clock_divide = (clk_freq / baud_rate);

// Define state encoding for FSM controlling UART reception
enum bit [2:0] {
    rx_IDLE = 3'b000,          // Idle state, waiting for start bit
    rx_START = 3'b001,         // Start bit detection state
    rx_DATA = 3'b010,          // Data reception state
    rx_STOP = 3'b011,          // Stop bit validation state
    rx_DONE = 3'b100           // Reception done state
} rx_STATE, rx_NEXT;           // Current and next state variables

// Define internal registers for state, clock divider, data, and bit index
logic [11:0] clk_div_reg, clk_div_next;   // Clock divider register and next value
logic [7:0] rx_data_reg, rx_data_next;    // Data register and next value
logic [2:0] index_bit_reg, index_bit_next;// Bit index register and next value

// Sequential block to update registers on clock edge or reset
always_ff @(posedge clk) begin
    if (rst) begin
        // Initialize all registers to default values on reset
        rx_STATE <= rx_IDLE;
        clk_div_reg <= 0;
        rx_data_reg <= 0;
        index_bit_reg <= 0;
    end else begin
        // Update registers with next state values
        rx_STATE <= rx_NEXT;
        clk_div_reg <= clk_div_next;
        rx_data_reg <= rx_data_next;
        index_bit_reg <= index_bit_next;
    end
end

// Combinational block to define next state and outputs based on current state
always @(*) begin
    // Default assignments to retain current values
    rx_NEXT = rx_STATE;
    clk_div_next = clk_div_reg;
    rx_data_next = rx_data_reg;
    index_bit_next = index_bit_reg;

    case (rx_STATE)
        // Idle state: wait for the start bit
        rx_IDLE: begin
            clk_div_next = 0;            // Reset clock divider
            index_bit_next = 0;          // Reset bit index
            if (rx == 0) begin           // Start bit detected (line goes low)
                rx_NEXT = rx_START;
            end else begin
                rx_NEXT = rx_IDLE;
            end
        end

        // Start bit state: validate the start bit timing
        rx_START: begin
            if (clk_div_reg == (clock_divide - 1) / 2) begin // Middle of start bit
                if (rx == 0) begin       // Confirm start bit is low
                    clk_div_next = 0;
                    rx_NEXT = rx_DATA;
                end else begin
                    rx_NEXT = rx_IDLE;  // False start, return to idle
                end
            end else begin
                clk_div_next = clk_div_reg + 1; // Increment clock divider
                rx_NEXT = rx_START;
            end
        end

        // Data reception state: receive 8 data bits
        rx_DATA: begin
            if (clk_div_reg < clock_divide - 1) begin
                clk_div_next = clk_div_reg + 1; // Increment clock divider
                rx_NEXT = rx_DATA;
            end else begin
                clk_div_next = 0;       // Reset clock divider
                rx_data_next[index_bit_reg] = rx; // Store received bit
                if (index_bit_reg < 7) begin
                    index_bit_next = index_bit_reg + 1; // Move to next bit
                    rx_NEXT = rx_DATA;
                end else begin
                    index_bit_next = 0; // Reset bit index
                    rx_NEXT = rx_STOP; // Transition to stop bit state
                end
            end
        end

        // Stop bit state: validate the stop bit
        rx_STOP: begin
            if (clk_div_reg < clock_divide - 1) begin
                clk_div_next = clk_div_reg + 1; // Increment clock divider
                rx_NEXT = rx_STOP;
            end else begin
                clk_div_next = 0;       // Reset clock divider
                rx_NEXT = rx_DONE;     // Transition to done state
            end
        end

        // Done state: return to idle for the next reception
        rx_DONE: begin
            rx_NEXT = rx_IDLE;
        end

        // Default case: fallback to idle state
        default: rx_NEXT = rx_IDLE;
    endcase
end

// Assign received data to output
assign rx_data_out = rx_data_reg;

endmodule
