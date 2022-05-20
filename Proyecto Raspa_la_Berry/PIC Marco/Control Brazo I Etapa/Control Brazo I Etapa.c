#INCLUDE<16F877A.h>
#USE delay (CLOCK=8M)
#FUSES HS, NOWDT, NOLVP
#DEFINE g pin_b4
#DEFINE m pin_b3
#DEFINE c pin_b2
#DEFINE h pin_b1
#DEFINE b pin_b0

int i;

void main(){
   while(true){
      for(i=0;i<50;i++){   //Homeo el brazo
         output_high(b);
         output_high(h);
         output_high(c);
         output_high(m);
         output_high(g);
         delay_us(1600);
         output_low(b);
         output_low(h);
         output_low(c);
         output_low(m);
         output_low(g);
         delay_us(19000);
      }
      
      for(i=0;i<15;i++){   //Cierro garra
         output_high(b);
         output_high(h);
         output_high(c);
         output_high(m);
         delay_us(1600);
         output_low(b);
         output_low(h);
         output_low(c);
         output_low(m);
         output_high(g);
         delay_us(600);
         output_low(g);
         delay_us(19000);
      }

     for(i=0;i<15;i++){   //Abro garra
         output_high(b);
         output_high(h);
         output_high(c);
         output_high(m);
         delay_us(1600);
         output_low(b);
         output_low(h);
         output_low(c);
         output_low(m);
         output_high(g);
         delay_us(1600);
         output_low(g);
         delay_us(19000);
      }
      
      for(i=0;i<15;i++){   //Cierro garra 2
         output_high(b);
         output_high(h);
         output_high(c);
         output_high(m);
         delay_us(1600);
         output_low(b);
         output_low(h);
         output_low(c);
         output_low(m);
         output_high(g);
         delay_us(600);
         output_low(g);
         delay_us(19000);
      }
      
      for(i=0;i<30;i++){   //Vuelta mu�eca
         output_high(b);
         output_high(h);
         output_high(c);
         delay_us(1600);
         output_low(b);
         output_low(h);
         output_low(c);
         output_high(m);
         delay_us(600);
         output_low(m);
         output_high(g);
         delay_us(600);
         output_low(g);
         delay_us(19000);
      }
       for(i=0;i<30;i++){   //Vuelta mu�eca 2
         output_high(b);
         output_high(h);
         output_high(c);
         delay_us(1600);
         output_low(b);
         output_low(h);
         output_low(c);
         output_high(m);
         delay_us(2600);
         output_low(m);
         output_high(g);
         delay_us(600);
         output_low(g);
         delay_us(19000);
      }
           
      for(i=0;i<50;i++){   //Posicionamiento para agarrar
         output_high(b);
         delay_us(1100);
         output_low(b);
         output_high(g);
         delay_us(1600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(600);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);   
      }
      
      for(i=0;i<30;i++){   //Cierro garra
         output_high(b);
         delay_us(1100);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(600);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
       for(i=0;i<30;i++){   //Subo un poco
         output_high(b);
         delay_us(1100);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(1100);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
      for(i=0;i<30;i++){   //Muevo a la izquierda
         output_high(b);
         delay_us(2100);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(1100);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      for(i=0;i<30;i++){   //Bajo
         output_high(b);
         delay_us(2100);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(711);
         output_low(h);
         output_high(c);
         delay_us(1711);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
      for(i=0;i<30;i++){   //Abro garra
         output_high(b);
         delay_us(2100);
         output_low(b);
         output_high(g);
         delay_us(1600);
         output_low(g);
         output_high(h);
         delay_us(711);
         output_low(h);
         output_high(c);
         delay_us(1711);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
      for(i=0;i<40;i++){   //Veo frente
         output_high(b);
         delay_us(1600);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(900);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
       for(i=0;i<15;i++){   //Abro garra
         output_high(b);
         delay_us(1600);
         output_low(b);
         output_high(g);
         delay_us(1600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(900);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
       for(i=0;i<15;i++){   //Cierro garra
         output_high(b);
         delay_us(1600);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(900);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
       for(i=0;i<15;i++){   //Abro garra2
         output_high(b);
         delay_us(1600);
         output_low(b);
         output_high(g);
         delay_us(1600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(900);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
      
       for(i=0;i<15;i++){   //Cierro garra2
         output_high(b);
         delay_us(1600);
         output_low(b);
         output_high(g);
         delay_us(600);
         output_low(g);
         output_high(h);
         delay_us(1600);
         output_low(h);
         output_high(c);
         delay_us(900);
         output_low(c);
         output_high(m);
         delay_us(1600);
         output_low(m);
         delay_us(19000);        
      }
   }
}
