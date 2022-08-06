#include <stdio.h>
int main() 
{
   int a = 5;
   float b = 10.2;
   int *p = &a;
   float* p2 = &b;
   printf("%d\n", *p); //5 
   printf("%x\n",p); //addr of a using pointer  variable
   //printf("%d\n", &p); //addr of p
   printf("%x\n", &p); //addr of p
   printf("%x\n", &a); //addr of a
   printf("%f\n", *p2);  //value of b 10.2
   //printf("%d\n", &p2);
   printf("%x\n", &p2); //addr of p2
   printf("%x\n", &b); //addr of b using & of variable
   printf("%x\n",p2); //addr of b using pointer variable
   return 0; 
}
