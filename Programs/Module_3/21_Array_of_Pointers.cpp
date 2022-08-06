#include <stdio.h>
const int MAX = 3;
int main () 
{
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
   for ( i = 0; i < MAX; i++) 
   {
      ptr[i] = &var[i]; /* assign the address of integer. */ 
   }
   for ( i = 0; i < MAX; i++) 
   {
      printf("Value of var[%d] = %d  %d | %d | %d\n", i, &ptr[i], ptr[i], *ptr[i], &var[i]);
      printf("%d",sizeof(ptr));
   }
   return 0;
}
