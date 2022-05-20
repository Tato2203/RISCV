#include <16f877a.h>
#use DELAY(CLOCK=8M)
#FUSES HS, NOWDT, NOLVP
#define b pin_B2
#define h pin_B3
#define c pin_B4
#define m pin_B5
#define g pin_B6
int i;

void main(){
   for(i=0;i<=50;i++){
     output_high(b);
     delay_us(2600);
     output_low(b);
     output_high(h);
     delay_us(2000);
     output_low(h);
     output_high(c);
     delay_us(500);
     output_low(c);
     output_high(m);
     delay_us(1600);
     output_low(m);
     output_high(g);
     delay_us(1100);
     output_low(g);
     delay_us(19000);
   }
}