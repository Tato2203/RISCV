#include<16F877A.h>
#use DELAY (CLOCK=8M)
#fuses HS, NOLVP, NOWDT

#define b pin_B2
#define h pin_B3
#define c pin_B4
#define m pin_B5
#define g pin_B6

int i;

void main(){
   for(i=0;i<=50;i++){  //Alinea
     output_high(b);
     delay_us(2600);
     output_low(b);
     output_high(h);
     delay_us(600);
     output_low(h);
     output_high(c);
     delay_us(712);
     output_low(c);
     output_high(m);
     delay_us(1600);
     output_low(m);
     output_high(g);
     delay_us(1600);
     output_low(g);
     delay_us(19000);
   }
   
   for(i=0;i<=25;i++){  //Cierra garra
     output_high(b);
     delay_us(2600);
     output_low(b);
     output_high(h);
     delay_us(600);
     output_low(h);
     output_high(c);
     delay_us(600);
     output_low(c);
     output_high(m);
     delay_us(1600);
     output_low(m);
     output_high(g);
     delay_us(900);
     output_low(g);
     delay_us(19000);
   }
   
   for(i=0;i<=50;i++){  //Desplaza
     output_high(b);
     delay_us(2266);
     output_low(b);
     output_high(h);
     delay_us(1100);
     output_low(h);
     output_high(c);
     delay_us(2600);
     output_low(c);
     output_high(m);
     delay_us(1600);
     output_low(m);
     output_high(g);
     delay_us(900);
     output_low(g);
     delay_us(19000);
   }
   
   for(i=0;i<=25;i++){  //Abre garra
     delay_us(2266);
     output_low(b);
     output_high(h);
     delay_us(1100);
     output_low(h);
     output_high(c);
     delay_us(2600);
     output_low(c);
     output_high(m);
     delay_us(1600);
     output_low(m);
     output_high(g);
     delay_us(1600);
     output_low(g);
     delay_us(19000);
   }
   
   for(i=0;i<=50;i++){  //Home
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