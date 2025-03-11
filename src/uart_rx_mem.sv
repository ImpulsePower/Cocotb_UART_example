/*
* Author: ImpulsePower
* Date of creation: 18/02/2025
* Description: Memory for baud rate, 
* License:
* Language: SystemVerilog 2012
* History:

*/
module mem 
    # ( 
    parameter DATA_WIDTH = 32
    ) (
    input  logic                  CLKip,
    input  logic                  RDi,       
    input  logic                  WEi,     
    input  logic [DATA_WIDTH-1:0] DATAi,
    output logic [DATA_WIDTH-1:0] Qo
);
    
	logic [DATA_WIDTH-1:0] ram;
	
	always_ff @(posedge CLKip) if (WEi) ram <= DATAi;
	
	always_ff @(posedge CLKip) if (RDi) Qo <= ram;
    
endmodule