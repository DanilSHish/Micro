#include <8051.h>

void main()
{
 unsigned char i,j; 
 unsigned char massiv [5]=
  {
  0xA4,
  0x99,
  0x82,
  0x80,
  0xFF 
  };

 
 P1=massiv [4]; 
 i = 0;

 while(1){

  if(P30 == 1 && i<=5){
  if(i == 5){i = 0;}
  P2=massiv[i];
  i++;   
  }

 }  
 P2=massiv[4]; 
}

