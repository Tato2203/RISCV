`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/06/2022 06:53:49 PM
// Design Name: 
// Module Name: ExtendUnit_20to32
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ExtendUnit_20to32(
    input [19:0] Extender,          // el valor debe ser 21 bits de y no de 5 bits
    output [31:0] Extendido        // el valor debe ser de 32 bits y no de 10 bits
    );
    
    assign Extendido = {{12{Extender[19]}},Extender};
    
endmodule
