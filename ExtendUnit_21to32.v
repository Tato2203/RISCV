`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/12/2022 11:50:32 AM
// Design Name: 
// Module Name: ExtendUnit_21to32
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


module ExtendUnit_21to32(
    input [5:0] Extender,          // el valor debe ser 21 bits de y no de 5 bits
    output [10:0] Extendido        // el valor debe ser de 32 bits y no de 10 bits
    );
    
    assign Extendido = {{5{Extender[5]}},Extender};
    
endmodule
