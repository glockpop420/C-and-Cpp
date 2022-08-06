#include <stdio.h>
int main () 
{
   int  var;
   int  *ptr; //pointer
   int  **pptr; //dual pointer - it points to another pointer
   var = 3000;
   /* take the address of var */
   ptr = &var;
   /* take the address of ptr using address of operator & */
   pptr = &ptr;
   /* take the value using pptr */
   printf("Value of var = %d | address of var = %d \n", var, &var);
   printf("Value available at *ptr = %d | address of ptr = %d, %d \n", *ptr, &ptr, ptr);
   printf("Value available at **pptr = %d | address of pptr = %d, %d \n", **pptr, &pptr, pptr);
   return 0;
}
