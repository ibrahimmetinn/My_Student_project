#include <proje bit artýk.h>
#byte portc=7
#byte porta=5
#byte portb=6
int firstbutton;
int secondbutton;
int thirdbutton;
void main()
{
set_tris_a(0x00);
set_tris_c(0x00);
set_tris_b(0xff);
portc=0xff;
   while(TRUE)
   {
      portc=11111111;
      firstbutton=input(pin_B0);
      secondbutton=input(pin_B1);
      thirdbutton=input(pin_B2);
      
      if(firstbutton==1 & secondbutton==0 & thirdbutton==0 )
      {
      porta=00000101;
      
    
    }
    
   
      else if(secondbutton==1 & firstbutton==0 & thirdbutton==0 )
      {
     porta=00000110;
     
     
      }
     
     else if (thirdbutton==1 & firstbutton==0 & secondbutton==0)
      {
     porta=00000111; //TODO: User Code
   }
   else 
{
 output_low(pin_a0);
 output_low(pin_a1);
 output_low(pin_a2);
 output_low(pin_a3);
}

}
}

