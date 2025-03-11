/*
* Author: ImpulsePower
* Date of creation: 18/02/2025
* Description: 2FF Synchronizer for asynchronous signals, 
* License:
* Language: SystemVerilog 2012
* History:

*/
module sync 
( 
    input  logic CLKip, 
    input  logic SIGi,
    output logic SIGo
);

    logic meta_sig;

    always_ff @(posedge CLKip) meta_sig <= SIGi;

    always_ff @(posedge CLKip) SIGo     <= meta_sig;

endmodule: sync