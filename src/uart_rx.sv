/*
* Author: ImpulsePower
* Date of creation: 03/02/2025
* Description: Hardware description of UART interface receiver, 
* License:
* Language: SystemVerilog 2012
* History:

*/
`timescale 1ns/1ps

module uart_rx 
    # (
    parameter FREQ_CLK  = 100_000_000, // Clock frequency in Hz (100 MHz)
    parameter DATA_WDTH = 8         // Data width (8 bits)
    ) (
    input   wire                    CLKip, // Clock signal
    input   wire                    RSTi, // Reset signal
    input   wire                    RXi, // Receive signal
    input   wire                    BAUD_RATE_RDi, // Read signal
    input   wire                    BAUD_RATE_WEi, // Baud rate write enable
    input   logic [31:0]            BAUD_RATEi, // Baud rate
    output  logic                   DONEo, // Done signal
    output  logic                   READYo, // Ready signal
    output  logic [DATA_WDTH-1:0]   DATAo //output data bus
    );

    // Variables
    // ===========================================================================
    int unsigned                    baud_rate; // var for BAUD_RATEi
    int unsigned                    bit_cntr; // var for counter (rx_strb)
    int unsigned                    half_bit_cntr; // var for counter (half_rx_strb)
    logic                           half_rx_strb; // var for half strobe bit
    logic                           rx_strb; // var for strobe bit   
    int unsigned                    clk_count; // var for counter
    logic [$clog2(DATA_WDTH+1)-1:0] bit_idx;  // var for bit counter (index)
    logic [DATA_WDTH-1:0]           data; // var for DATAo
    logic                           rx; // var for RXi
    logic                           rst; // var for RSTi
    logic                           done; // var for DONEo
    logic                           ready; // var for READYo
    logic                           baud_rate_read; // var for BAUD_RATE_RDi
    logic                           baud_rate_we; // var for Baud rate write enable
    int unsigned                    br; // output var for baud rate memory
    // ===========================================================================

    // Synchronizers for asynchronous input signals
    sync rx_stab (.CLKip (CLKip), .SIGi (RXi), .SIGo (rx));
    sync rst_stab (.CLKip (CLKip), .SIGi (RSTi), .SIGo (rst));
    sync br_we_stab (.CLKip (CLKip), .SIGi (BAUD_RATE_WEi), .SIGo (baud_rate_we));
    sync br_rd_stab (.CLKip (CLKip), .SIGi (BAUD_RATE_RDi), .SIGo (baud_rate_read));

    // Memory for baud rate
    mem baud_rate_mem (
        .CLKip  (CLKip),
        .RDi    (baud_rate_read),  
        .WEi    (baud_rate_we),
        .DATAi  (baud_rate), 
        .Qo     (br)
        );

    // FSM for UART receiver
    typedef enum logic [1:0] {       
        IDLE    = 2'h0,
        START   = 2'h1,
        RECEIVE = 2'h2,
        STOP    = 2'h3
    } statetype;
    statetype STATE;

    // Combinational calculation of the number of clock pulses per bit
    always_comb begin: calc_bit_value
        baud_rate = BAUD_RATEi;
        bit_cntr = FREQ_CLK / baud_rate;
        half_bit_cntr = bit_cntr >> 1;
    end

    // Strobe logic
always @(posedge CLKip) begin: strobe_logic
    if (rst) begin
        clk_count <= 0;
        half_rx_strb <= 0;
        rx_strb <= 0;
    end else begin
        case (STATE)
            IDLE: begin
                clk_count <= 0;
                half_rx_strb <= 0;
                rx_strb <= 0;
            end
            START: begin
                if (clk_count == half_bit_cntr) begin
                    half_rx_strb <= 1;
                    clk_count <= 0;
                end
                else begin
                    half_rx_strb <= 0;
                    clk_count <= clk_count + 1;
                end                
            end
            RECEIVE: begin
                if (clk_count == bit_cntr) begin
                    rx_strb <= 1;
                    clk_count <= 0;
                end
                else begin
                    rx_strb <= 0;
                    clk_count <= clk_count + 1;
                end                  
            end
            STOP: begin
                if (clk_count == bit_cntr) begin
                    rx_strb <= 1;
                    clk_count <= 0;
                end
                else begin
                    rx_strb <= 0;
                    clk_count <= clk_count + 1;
                end                  
            end  
            default: begin
                clk_count <= 0;
            end
        endcase
    end
end

    // Implementation of the UART receiver operation logic
    always_ff @(posedge CLKip) begin: fsm_uart_rx
        if (rst) begin
            bit_idx     <= 0;
            clk_count   <= 0;
        end
        else begin
            case (STATE)
                // Start bit wait mode
                IDLE: begin
                    ready          <= 1;
                    // done           <= 0;
                    if (rx == 1'b0) STATE <= rx ? IDLE : START;
                end
                // Waiting up to half of the start bit period
                START: begin
                    ready          <= 0;
                    done           <= 0;
                    if (half_rx_strb) begin
                        if (rx == 1'b0) STATE <= rx ? IDLE : RECEIVE;
                    end
                    else begin 
                        STATE <= START;
                    end
                end
                // Input Receiving State
                RECEIVE: begin
                    if (rx_strb) begin
                        /* verilator lint_off WIDTHTRUNC */                        
                        data[bit_idx] <= rx;
                        /* verilator lint_on WIDTHTRUNC */
                        if (bit_idx < DATA_WDTH-1) begin 
                            bit_idx <= bit_idx + 1;
                        end
                        else begin 
                            bit_idx <= 0;
                            STATE   <= STOP;
                            done    <= 1;
                        end 
                    end
                    else begin
                        STATE <= RECEIVE;
                    end  
                end
                //  Waiting up of the stop bit period
                STOP: begin
                    if (rx_strb) STATE <= rx_strb ? IDLE : STOP;
                end
                // Default state
                default: begin
                    STATE <= IDLE;
                end 

            endcase            
        end   
    end 
    // Combinational logic 
    always_comb begin: set_out
        DATAo = data;
        READYo = ready;
        DONEo = done;
    end

    initial begin
        $dumpfile("test/dump/uart_rx.fst");
        $dumpvars(0, uart_rx);
    end

endmodule: uart_rx