module uart_axils #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    // Global Signals
    input   logic                       S_AXI_ACLK,
    input   logic                       S_AXI_ARESETN,

    // AXI Write Address Channel
    input   logic [ADDR_WIDTH-1:0]      S_AXI_AWADDR,
    input   logic                       S_AXI_AWVALID,
    output  logic                       S_AXI_AWREADY,

    // AXI Write Data Channel
    input   logic [DATA_WIDTH-1:0]      S_AXI_WDATA,
    input   logic [(DATA_WIDTH/8)-1:0]  S_AXI_WSTRB,
    input   logic                       S_AXI_WVALID,
    output  logic                       S_AXI_WREADY,

    // AXI Write Response Channel
    output  logic [1:0]                 S_AXI_BRESP,
    output  logic                       S_AXI_BVALID,
    input   logic                       S_AXI_BREADY,

    // AXI Read Address Channel
    input   logic [ADDR_WIDTH-1:0]      S_AXI_ARADDR,
    input   logic                       S_AXI_ARVALID,
    output  logic                       S_AXI_ARREADY,

    // AXI Read Data Channel
    output  logic [DATA_WIDTH-1:0]      S_AXI_RDATA,
    output  logic [1:0]                 S_AXI_RRESP,
    output  logic                       S_AXI_RVALID,
    input   logic                       S_AXI_RREADY,

    // ПРОСТОЙ ИНТЕРФЕЙС ДЛЯ ВАШЕЙ ЛОГИКИ
    output  logic [ADDR_WIDTH-1:0]      reg_addr,
    output  logic [DATA_WIDTH-1:0]      reg_wdata,
    output  logic                       reg_write,
    output  logic                       reg_read,
    input   logic [DATA_WIDTH-1:0]      reg_rdata
);

    // // Регистры для захвата адреса и данных
    typedef enum logic [(DATA_WIDTH/4)-1:0] {       
        REG_CONTROL = 8'h0,
        REG_STATUS  = 8'h4,
        REG_TX_DATA = 8'h8,
        REG_RX_DATA = 8'h0C,
        REG_BAUD    = 8'h10
    } uart_reg_t;

    typedef enum logic [2:0] {
        WR_IDLE,
        WR_DATA,
        WR_EXECUTE,
        WR_SEND_RESPONSE,
        WAIT_RESPONSE_ACK
    } write_statetype;
    write_statetype write_state;

    typedef enum logic [1:0] {
        IDLE,
        WAIT_DATA,
        READ_DATA,
        RD_SEND_RESPONSE
    } read_statetype;
    read_statetype read_state;

    typedef enum logic [1:0] {
        OKAY    = 2'b00,
        EXOKAY  = 2'b01,
        SLVERR  = 2'b10,
        DECERR  = 2'b11
    } bresp_t;
    bresp_t bresp;

    logic [ADDR_WIDTH-1:0] captured_addr;
    logic [DATA_WIDTH-1:0] captured_data;
    logic [(DATA_WIDTH/8)-1:0] captured_strb;

    logic awready;  
    logic wready;
    logic bvalid;
    logic rvalid;
    logic arready;
    logic [ADDR_WIDTH-1:0] araddr;
    logic [DATA_WIDTH-1:0] rdata;


    // // Логика для Write Address Channel
    // always @(posedge S_AXI_ACLK) begin
    //     if (~S_AXI_ARESETN) begin
    //         awready <= 1'b0;
    //     end 
    //     else begin
    //         if (~awready && S_AXI_AWVALID) begin
    //             // awready <= 1'b1; // Захватываем адрес
    //             captured_addr  <= S_AXI_AWADDR;
    //         end 
    //         else begin
    //             awready <= 1'b0;
    //         end
    //     end
    // end

    // // Логика для Write Data Channel
    // always @(posedge S_AXI_ACLK) begin
    //     if (~S_AXI_ARESETN) begin
    //         wready <= 1'b0;
    //     end 
    //     else begin
    //         if (~wready && S_AXI_WVALID) begin
    //             captured_strb <= S_AXI_WSTRB; 
    //             captured_data  <= S_AXI_WDATA;
    //         end 
    //         else begin
    //             wready <= 1'b0;
    //         end
    //     end
    // end

    // // Логика для Write Response Channel
    // always @(posedge S_AXI_ACLK) begin
    //     if (~S_AXI_ARESETN) begin
    //         bvalid <= 1'b0;
    //     end 
    //     else begin
    //         if (reg_write && ~bvalid) begin
    //             bvalid <= 1'b1; // Запись завершена, формируем ответ
    //         end 
    //         else begin
    //             if (S_AXI_BREADY && bvalid) begin
    //                 bvalid <= 1'b0; // Ответ принят мастером
    //             end
    //         end
    //     end
    // end

    // // Логика для Read Address Channel
    // always @(posedge S_AXI_ACLK) begin
    //     if (~S_AXI_ARESETN) begin
    //         arready <= 1'b0;
    //         araddr  <= 0;
    //     end else begin
    //         if (~arready && S_AXI_ARVALID) begin
    //             arready <= 1'b1; // Захватываем адрес для чтения
    //             araddr  <= S_AXI_ARADDR;
    //         end else begin
    //             arready <= 1'b0;
    //         end
    //     end
    // end

    // // Логика для Read Data Channel
    // always @(posedge S_AXI_ACLK) begin
    //     if (~S_AXI_ARESETN) begin
    //         rvalid <= 1'b0;
    //         rdata  <= 0;
    //     end else begin
    //         if (reg_read) begin
    //             rvalid <= 1'b1; // Данные готовы
    //             rdata  <= reg_rdata; // Читаем данные из вашей логики
    //         end else if (rvalid && S_AXI_RREADY) begin
    //             rvalid <= 1'b0; // Данные приняты мастером
    //         end
    //     end
    // end

    
    // always_comb begin
        
    // end

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            awready <= 1'b0;
            wready <= 1'b0;
            bvalid <= 1'b0;
        end 
        else begin
            case (write_state)
                IDLE: begin
                    if (S_AXI_AWVALID) begin
                        captured_addr <= S_AXI_AWADDR;
                        awready <= 1'b0;
                        write_state <= WRITE_DATA;
                    end
                    else begin
                        awready <= 1'b1;  // Готовы принять адрес 
                    end
                end

                WRITE_DATA: begin
                    wready <= 1'b1;  // Готовы принять данные
                    if (S_AXI_WVALID) begin
                        captured_data <= S_AXI_WDATA;
                        captured_strb <= S_AXI_WSTRB;
                        wready <= 1'b0;
                        write_state <= SEND_RESPONSE;
                    end
                end

                SEND_RESPONSE: begin
                    // Выполняем фактическую запись в регистры
                    // perform_register_write(captured_addr, captured_data, captured_strb);

                    bvalid <= 1'b1;  // Ответ готов
                    bresp <= OKAY;   // или SLVERR при ошибке
                    write_state <= WAIT_RESPONSE_ACK;
                end

                WAIT_RESPONSE_ACK: begin
                    if (S_AXI_BREADY) begin
                        bvalid <= 1'b0;
                        write_state <= IDLE;
                    end
                end
            endcase
        end
    end
    // uart_reg_t write_reg;
    // assign write_reg = uart_reg_t'(S_AXI_AWADDR[7:0]);
    
    // // Для чтения  
    // uart_reg_t read_reg;
    // assign read_reg = uart_reg_t'(S_AXI_ARADDR[7:0]);
endmodule: uart_axils
