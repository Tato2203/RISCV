#include <16f877a.h>
#use DELAY(CLOCK=8M)
#FUSES HS, NOWDT, NOLVP
int i;


void main(){
   while(true){
   
      for(i=0;i<=200;i++) {
         output_high(pin_b0);
         output_high(pin_b1);
         output_high(pin_b2);
         output_high(pin_b3);
         output_high(pin_b4);
         delay_us(1600);
         output_low(pin_b0);
         output_low(pin_b1);
         output_low(pin_b2);
         output_low(pin_b3);
         output_low(pin_b4);
         delay_us(19000);
      }
      
      for(i=0;i<=70;i++) {
         output_high(pin_b0);
         output_high(pin_b1);
         output_high(pin_b2);
         output_high(pin_b3);
         output_high(pin_b4);
         delay_us(1300);
         output_low(pin_b0);
         output_low(pin_b1);
         output_low(pin_b2);
         output_low(pin_b3);
         output_low(pin_b4);
         delay_us(19000);
      }
      
       for(i=0;i<=200;i++) {
         output_high(pin_b0);
         output_high(pin_b1);
         output_high(pin_b2);
         output_high(pin_b3);
         output_high(pin_b4);
         delay_us(1100);
         output_low(pin_b0);
         output_low(pin_b1);
         output_low(pin_b2);
         output_low(pin_b3);
         output_low(pin_b4);
         delay_us(19000);
      }
      
      for(i=0;i<=70;i++) {
         output_high(pin_b0);
         output_high(pin_b1);
         output_high(pin_b2);
         output_high(pin_b3);
         output_high(pin_b4);
         delay_us(1300);
         output_low(pin_b0);
         output_low(pin_b1);
         output_low(pin_b2);
         output_low(pin_b3);
         output_low(pin_b4);
         delay_us(19000);
      }
   }
}