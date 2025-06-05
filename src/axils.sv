/*
* Author: ImpulsePower
* Date of creation: 15/02/2025
* Description: Hardware description of AXI Lite Slave, 
* License:
* Language: SystemVerilog 2012
* History:

*/

module axils #(
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
    input   logic                               S_AXI_RREADY,
    
    // UART Interface
    input wire                                  UART_RX
);

    // Internal signals
    logic [31:0] baud_rate_reg;
    logic [DATA_WIDTH-1:0] rx_data;
    logic rx_done;
    logic rx_ready;
    
    // AXI Lite registers
    logic [C_S_AXI_DATA_WIDTH-1:0] slv_reg0; // Baud rate
    logic [C_S_AXI_DATA_WIDTH-1:0] slv_reg1; // Status/control
    logic [C_S_AXI_DATA_WIDTH-1:0] slv_reg2; // RX data
    
    // Internal version of S_AXI_RDATA
    logic [C_S_AXI_DATA_WIDTH-1:0] rdata_int;
    
    // AXI Lite control signals
    typedef enum logic [1:0] {
        WRITE_IDLE,
        WRITE_DATA,
        WRITE_RESPONSE
    } write_state_t;
    
    typedef enum logic [1:0] {
        READ_IDLE,
        READ_DATA
    } read_state_t;
    
    write_state_t write_state;
    read_state_t read_state;
    
    // Status register bits
    logic data_ready;        // slv_reg1[0] - данные готовы
    logic overrun_error;     // slv_reg1[1] - переполнение
    // Control register bits
    logic intr_enable;       // slv_reg1[8] - разрешение прерываний
    logic clear_data_ready;  // Сброс флага data_ready

    logic awready;
    logic wready;
    logic bvalid;
    logic awaddr_reg;

    logic arready;
    logic rvalid;
    logic araddr_reg;
    
// Регистры и управление
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            slv_reg0 <= 9600;
            // slv_reg1 <= 0;
            slv_reg2 <= 0;
            baud_rate_reg <= 9600;
            data_ready <= 0;
            overrun_error <= 0;
            intr_enable <= 0;
        end 
        else begin
            // Запись регистров через AXI
            if (S_AXI_AWVALID && S_AXI_WVALID && S_AXI_AWREADY && S_AXI_WREADY) begin
                case (S_AXI_AWADDR)
                    4'h0: begin
                        slv_reg0 <= S_AXI_WDATA;
                        baud_rate_reg <= S_AXI_WDATA;
                    end
                    4'h4: begin
                        intr_enable <= S_AXI_WDATA[8]; // Бит разрешения прерываний
                    end
                endcase
            end
            
            // Обработка принятых данных
            if (rx_done) begin
                slv_reg2 <= {24'b0, rx_data};
                
                if (data_ready) begin
                    overrun_error <= 1'b1; // Перезапись непрочитанных данных
                end
                else begin
                    data_ready <= 1'b1; // Установить флаг "данные готовы"
                end
                
            end
            
            // Сброс флага data_ready при чтении регистра данных
            if (clear_data_ready) begin
                data_ready <= 1'b0;
                overrun_error <= 1'b0; // Сброс ошибки при чтении
            end
        end
    end
    
    // Формирование статусного регистра
    assign slv_reg1 = {23'b0, intr_enable, 6'b0, overrun_error, data_ready};
    
    // Логика чтения регистров
    always_comb begin
        clear_data_ready = 1'b0;
        
        case (araddr_reg)
            4'h0: rdata_int = slv_reg0;          // Baud rate
            4'h4: rdata_int = slv_reg1;          // Status/control
            4'h8: begin
                rdata_int = slv_reg2;            // RX data
                clear_data_ready = S_AXI_RVALID && S_AXI_RREADY; // Сброс флага при успешном чтении
            end
            default: rdata_int = 32'h0000_0000;
        endcase
    end
    
    // ==============================================
    // Логика записи (Write Transaction)
    // ==============================================
    always_ff @(posedge S_AXI_ACLK) begin
        if (~S_AXI_ARESETN) begin
            write_state <= WRITE_IDLE;
            awready <= 1'b1;
            wready <= 1'b0;
            bvalid <= 1'b0;
            awaddr_reg <= 0;
        end else begin
            case (write_state)
                WRITE_IDLE: begin
                    if (S_AXI_AWVALID && awready) begin
                        awready <= 1'b0;
                        wready <= 1'b1;
                        awaddr_reg <= S_AXI_AWADDR;
                        write_state <= WRITE_DATA;
                    end
                end
                
                WRITE_DATA: begin
                    if (S_AXI_WVALID && wready) begin
                        wready <= 1'b0;
                        write_state <= WRITE_RESPONSE;
                    end
                end
                
                WRITE_RESPONSE: begin
                    bvalid <= 1'b1;
                    if (S_AXI_BREADY && bvalid) begin
                        bvalid <= 1'b0;
                        awready <= 1'b1;
                        write_state <= WRITE_IDLE;
                    end
                end
            endcase
        end
    end

    // ==============================================
    // Логика чтения (Read Transaction)
    // ==============================================
    always_ff @(posedge S_AXI_ACLK) begin
        if (~S_AXI_ARESETN) begin
            read_state <= READ_IDLE;
            arready <= 1'b1;
            rvalid <= 1'b0;
            araddr_reg <= 0;
        end else begin
            case (read_state)
                READ_IDLE: begin
                    if (S_AXI_ARVALID && arready) begin
                        arready <= 1'b0;
                        araddr_reg <= S_AXI_ARADDR;
                        read_state <= READ_DATA;
                        rvalid <= 1'b1;
                    end
                end
                
                READ_DATA: begin
                    if (S_AXI_RREADY && rvalid) begin
                        rvalid <= 1'b0;
                        arready <= 1'b1;
                        read_state <= READ_IDLE;
                    end
                end
            endcase
        end
    end

    // ==============================================
    // Подключение выходных сигналов AXI
    // ==============================================
    assign S_AXI_AWREADY = awready;
    assign S_AXI_WREADY = wready;
    assign S_AXI_BVALID = bvalid;
    assign S_AXI_BRESP = 2'b00; // OKAY response
    assign S_AXI_ARREADY = arready;
    assign S_AXI_RVALID = rvalid;
    assign S_AXI_RRESP = 2'b00; // OKAY response
    assign S_AXI_RDATA = rdata_int;
    
endmodule: axils