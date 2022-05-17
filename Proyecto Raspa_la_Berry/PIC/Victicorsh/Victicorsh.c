#include<16f877a.h>
#use delay(clock=4M)
#fuses NOWDT, NOLVP, XT

int x=0;

void main(){
   while(true){
      if(input(pin_A0)==TRUE && x==0){
         output_high(pin_B0);
         output_high(pin_B1);
         output_high(pin_B2);
         x=x+1;
      }
      if(input(pin_A0)==TRUE && x==1){
         while(x==1){
            output_high(pin_B0);
            output_high(pin_B1);
            output_high(pin_B2);
            delay_ms(500);
            output_low(pin_B0);
            output_low(pin_B1);
            output_low(pin_B2);
            delay_ms(500);
            if(input(pin_A0)==TRUE){
               output_low(pin_B0);
               output_low(pin_B1);
               output_low(pin_B2);
               BREAK;   
            }
         }
      }
      if(input(pin_A1)==TRUE){
         output_low(pin_B0);
         output_high(pin_B1);
         output_low(pin_B2);
      }
   }
}