/*
* Author: ImpulsePower
* Date of creation: 15/02/2025
* Description: Hardware description of UART interface receiver, 
* License:
* Language: SystemVerilog 2012
* History:

*/

module axi_lite_slave (
    input wire clk,
    input wire resetn,
    
    // AXI Lite Write Address Channel
    input wire [31:0] s_axi_awaddr,
    input wire s_axi_awvalid,
    output reg s_axi_awready,
    
    // AXI Lite Write Data Channel
    input wire [31:0] s_axi_wdata,
    input wire [3:0] s_axi_wstrb,
    input wire s_axi_wvalid,
    output reg s_axi_wready,
    
    // AXI Lite Write Response Channel
    output reg [1:0] s_axi_bresp,
    output reg s_axi_bvalid,
    input wire s_axi_bready,
    
    // AXI Lite Read Address Channel
    input wire [31:0] s_axi_araddr,
    input wire s_axi_arvalid,
    output reg s_axi_arready,
    
    // AXI Lite Read Data Channel
    output reg [31:0] s_axi_rdata,
    output reg [1:0] s_axi_rresp,
    output reg s_axi_rvalid,
    input wire s_axi_rready
);
    
    // Пример регистрового пространства
    reg [31:0] registers[0:15];
    
    // Логика записи
    always @(posedge clk) begin
        if (!resetn) begin
            s_axi_awready <= 0;
            s_axi_wready <= 0;
            s_axi_bvalid <= 0;
            
            // Сброс регистров
            for (integer i = 0; i < 16; i = i + 1)
                registers[i] <= 0;
        end else begin
            // Write address channel
            if (s_axi_awvalid && !s_axi_awready) begin
                s_axi_awready <= 1;
            end else begin
                s_axi_awready <= 0;
            end
            
            // Write data channel
            if (s_axi_wvalid && !s_axi_wready) begin
                s_axi_wready <= 1;
                // Запись в регистр с учетом wstrb
                if (s_axi_awaddr[5:2] < 16) begin
                    for (integer i = 0; i < 4; i = i + 1) begin
                        if (s_axi_wstrb[i]) begin
                            registers[s_axi_awaddr[5:2]][i*8 +: 8] <= s_axi_wdata[i*8 +: 8];
                        end
                    end
                end
            end else begin
                s_axi_wready <= 0;
            end
            
            // Write response channel
            if (s_axi_awready && s_axi_wready) begin
                s_axi_bvalid <= 1;
                s_axi_bresp <= (s_axi_awaddr[5:2] < 16) ? 2'b00 : 2'b10; // OK или SLVERR
            end else if (s_axi_bready) begin
                s_axi_bvalid <= 0;
            end
            
            // Read address channel
            if (s_axi_arvalid && !s_axi_arready) begin
                s_axi_arready <= 1;
            end else begin
                s_axi_arready <= 0;
            end
            
            // Read data channel
            if (s_axi_arready) begin
                s_axi_rvalid <= 1;
                if (s_axi_araddr[5:2] < 16) begin
                    s_axi_rdata <= registers[s_axi_araddr[5:2]];
                    s_axi_rresp <= 2'b00; // OK
                end else begin
                    s_axi_rdata <= 32'hDEADBEEF;
                    s_axi_rresp <= 2'b10; // SLVERR
                end
            end else if (s_axi_rready) begin
                s_axi_rvalid <= 0;
            end
        end
    end
    
endmodule