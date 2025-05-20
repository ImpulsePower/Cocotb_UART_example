module uart_axi_bridge (
    input wire clk,
    input wire resetn,
    
    // AXI Lite Interface
    input wire [31:0] s_axi_awaddr,
    input wire s_axi_awvalid,
    output wire s_axi_awready,
    
    input wire [31:0] s_axi_wdata,
    input wire [3:0] s_axi_wstrb,
    input wire s_axi_wvalid,
    output wire s_axi_wready,
    
    output wire [1:0] s_axi_bresp,
    output wire s_axi_bvalid,
    input wire s_axi_bready,
    
    input wire [31:0] s_axi_araddr,
    input wire s_axi_arvalid,
    output wire s_axi_arready,
    
    output wire [31:0] s_axi_rdata,
    output wire [1:0] s_axi_rresp,
    output wire s_axi_rvalid,
    input wire s_axi_rready,
    
    // UART Interface
    input wire uart_rx,
    input wire baud_rate_rd,
    input wire baud_rate_we,
    input wire [31:0] baud_rate,
    output wire uart_ready,
    output wire uart_done,
    output wire [7:0] uart_data
);

    // Сигналы для подключения FIFO
    wire fifo_we;
    wire [7:0] fifo_wdata;
    wire fifo_full;
    wire fifo_re;
    wire [7:0] fifo_rdata;
    wire fifo_empty;
    
    // Регистры для управления
    reg [31:0] control_reg = 0;
    reg [31:0] status_reg = 0;
    
    // AXI Lite логика записи
    assign s_axi_awready = ~fifo_full;
    assign s_axi_wready = ~fifo_full;
    assign s_axi_bvalid = s_axi_awready && s_axi_wready;
    assign s_axi_bresp = 2'b00; // Всегда OK
    
    // Запись в FIFO при валидной транзакции записи
    assign fifo_we = s_axi_awvalid && s_axi_wvalid && ~fifo_full;
    assign fifo_wdata = s_axi_wdata[7:0]; // Берем только младший байт
    
    // AXI Lite логика чтения
    assign s_axi_arready = 1'b1;
    assign s_axi_rvalid = s_axi_arvalid;
    assign s_axi_rresp = 2'b00; // Всегда OK
    
    // always_comb begin
    //     case (s_axi_araddr[3:2])
    //         2'b00: s_axi_rdata = {24'h0, fifo_rdata}; // Чтение данных из FIFO
    //         2'b01: s_axi_rdata = control_reg;        // Регистр управления
    //         2'b10: s_axi_rdata = status_reg;         // Регистр статуса
    //         default: s_axi_rdata = 32'h0;
    //     endcase
    // end
    
    // FIFO для буферизации данных
    uart_rx_fifo #(
        .DATA_WIDTH(8),
        .FIFO_DEPTH(16)
    ) fifo (
        .CLKip(clk),
        .RSTi(~resetn),
        .WEi(fifo_we),
        .WDi(fifo_wdata),
        .FULLo(fifo_full),
        .AFULLo(), // Не используется
        .REi(fifo_re),
        .RDo(fifo_rdata),
        .EMPTYo(fifo_empty),
        .AEMPTYo() // Не используется
    );
    
    // UART RX модуль (минимальные изменения)
    uart_rx #(
        .FREQ_CLK(100_000_000),
        .DATA_WDTH(8)
    ) uart_rx_inst (
        .CLKip(clk),
        .RSTi(~resetn),
        .RXi(uart_rx),
        .BAUD_RATE_RDi(baud_rate_rd),
        .BAUD_RATE_WEi(baud_rate_we),
        .BAUD_RATEi(baud_rate),
        .DONEo(uart_done),
        .READYo(uart_ready),
        .DATAo(uart_data)
    );
    
    // Чтение из FIFO когда UART готов
    assign fifo_re = uart_ready && !fifo_empty;
    
    // Обновление регистра статуса
    always @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            status_reg <= 0;
            control_reg <= 0;
        end else begin
            status_reg <= {fifo_full, fifo_empty, 30'h0};
            // Можно добавить другую логику управления
        end
    end

endmodule