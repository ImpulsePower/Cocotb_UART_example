module uart_axils #(
    parameter C_S_AXI_DATA_WIDTH = 32,
    parameter C_S_AXI_ADDR_WIDTH = 4,
    parameter CLK_FREQ = 100_000_000,
    parameter DATA_WIDTH = 8
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
    input   logic                               S_AXI_RREADY
    
    // UART Interface
    // input wire                                  UART_RX
);

endmodule: uart_axils
