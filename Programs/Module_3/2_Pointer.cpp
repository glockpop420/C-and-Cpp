#include <stdio.h>
int main () 
{
   int  a = 100;   /* actual variable declaration */
   int  *p;        /* pointer variable declaration */
   p = &a;  /* store address of var in pointer variable*/
  //int *p = &a;
   printf("Value of var variable: %d\n", a ); //value of a = 100
   printf("Address of var variable: %x\n", &a ); // address of a
   /* address stored in pointer variable */
   printf("Address stored in pointer p variable: %x\n", p ); // address of a
   /* access the value using the pointer */
   printf("Value of *p variable: %d\n", *p ); //value of a = 100
   printf("Address of p is: %x\n", &p ); 
   return 0;
}
