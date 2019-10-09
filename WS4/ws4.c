//C program

#include<stdio.h>

int main(){
   int x = 0x87654321;
  
   //Bitwise anding x with 0x000000FF
   int A = x&0x000000FF;
   //Bitwise xoring x with FFFFFF00
   int B = x^0xFFFFFF00;
  
   printf("%X\n",A);
   printf("%X\n",B);
}
//sample output