/*
* Author: ImpulsePower
* Date of creation: [Current Date]
* Description: Top-level module connecting UART receiver, async FIFO and AXI Lite interface
* License:
* Language: SystemVerilog 2012
*/

module uart #(
    parameter C_S_AXI_DATA_WIDTH = 32,
    parameter C_S_AXI_ADDR_WIDTH = 4,
    parameter CLK_FREQ = 100_000_000,
    parameter UART_DATA_WIDTH = 8,
    parameter FIFO_DEPTH = 16
) (
    // AXI Lite Interface
    input   logic                               S_AXI_ACLK,
    input   logic                               S_AXI_ARESETN,
    input   logic [C_S_AXI_ADDR_WIDTH-1:0]      S_AXI_AWADDR,
    input   logic                               S_AXI_AWVALID,
    output  logic                               S_AXI_AWREADY,
    input   logic [C_S_AXI_DATA_WIDTH-1:0]      S_AXI_WDATA,
    input   logic [(C_S_AXI_DATA_WIDTH/8)-1:0]  S_AXI_WSTRB,
    input   logic                               S_AXI_WVALID,
    output  logic                               S_AXI_WREADY,
    output  logic [1:0]                         S_AXI_BRESP,
    output  logic                               S_AXI_BVALID,
    input   logic                               S_AXI_BREADY,
    input   logic [C_S_AXI_ADDR_WIDTH-1:0]      S_AXI_ARADDR,
    input   logic                               S_AXI_ARVALID,
    output  logic                               S_AXI_ARREADY,
    output  logic [C_S_AXI_DATA_WIDTH-1:0]      S_AXI_RDATA,
    output  logic [1:0]                         S_AXI_RRESP,
    output  logic                               S_AXI_RVALID,
    input   logic                               S_AXI_RREADY,
    
    // UART Interface
    input wire                              UART_RX
);

    // Internal signals
    logic [31:0] baud_rate;
    logic [UART_DATA_WIDTH-1:0] uart_rx_data;
    logic uart_rx_done;
    logic uart_rx_ready;
    
    // FIFO signals
    logic fifo_we;
    logic fifo_re;
    logic [UART_DATA_WIDTH-1:0] fifo_wdata;
    logic [UART_DATA_WIDTH-1:0] fifo_rdata;
    logic fifo_full;
    logic fifo_afull;
    logic fifo_empty;
    logic fifo_aempty;
    
    // AXI register signals
    logic data_ready;
    logic overrun_error;
    logic clear_data_ready;
    
    // Instantiate AXI Lite interface
    axils #(
        .C_S_AXI_DATA_WIDTH(C_S_AXI_DATA_WIDTH),
        .C_S_AXI_ADDR_WIDTH(C_S_AXI_ADDR_WIDTH),
        .CLK_FREQ(CLK_FREQ),
        .DATA_WIDTH(UART_DATA_WIDTH)
    ) uart_axi (
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WSTRB(S_AXI_WSTRB),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_BRESP(S_AXI_BRESP),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RRESP(S_AXI_RRESP),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_RREADY(S_AXI_RREADY),
        .UART_RX(UART_RX),
        
        // Internal connections
        .baud_rate_reg(baud_rate),
        .rx_data(fifo_rdata),
        .rx_done(!fifo_empty),
        .rx_ready(fifo_re),
        .data_ready(data_ready),
        .overrun_error(overrun_error),
        .clear_data_ready(clear_data_ready)
    );
    
    // Instantiate UART receiver
    uart_rx #(
        .FREQ_CLK(CLK_FREQ),
        .DATA_WDTH(UART_DATA_WIDTH)
    ) uart_receiver (
        .CLKip(S_AXI_ACLK),
        .RSTi(~S_AXI_ARESETN),
        .RXi(UART_RX),
        .BAUD_RATE_RDi(1'b0),  // Not used in this configuration
        .BAUD_RATE_WEi(1'b0),  // Not used in this configuration
        .BAUD_RATEi(baud_rate),
        .DONEo(uart_rx_done),
        .READYo(uart_rx_ready),
        .DATAo(uart_rx_data)
    );
    
    // Instantiate async FIFO
    sync_fifo #(
        .DATA_WIDTH(UART_DATA_WIDTH),
        .FIFO_DEPTH(FIFO_DEPTH)
    ) uart_fifo (
        // Write domain (UART RX side)
        .WCLK(S_AXI_ACLK),
        .WRST(~S_AXI_ARESETN),
        .WEi(uart_rx_done),
        .WDi(uart_rx_data),
        .FULLo(fifo_full),
        .AFULLo(fifo_afull),
        
        // Read domain (AXI side)
        .RCLK(S_AXI_ACLK),
        .RRST(~S_AXI_ARESETN),
        .REi(fifo_re),
        .RDo(fifo_rdata),
        .EMPTYo(fifo_empty),
        .AEMPTYo(fifo_aempty)
    );
    
    // Control logic
    assign fifo_we = uart_rx_done && !fifo_full;
    assign fifo_re = clear_data_ready;  // Reading from FIFO when AXI reads data
    
// Connect AXI registers to FIFO
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            baud_rate <= 9600;
            data_ready <= 0;
            overrun_error <= 0;
        end else begin
            // Update status flags based on FIFO state
            if (fifo_we) begin
                if (!fifo_empty) begin
                    overrun_error <= 1'b1;
                end
                data_ready <= 1'b1;
            end
            
            if (fifo_re) begin
                data_ready <= !fifo_empty;
                overrun_error <= 1'b0;
            end
        end
    end

endmodule: uart