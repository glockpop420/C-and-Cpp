#include <stdio.h>
int main() 
{
   int a = 5;
   int *p = &a;
   printf("%d\n", *p);  
   printf("%d\n",p);
   //printf("%d\n", &p);
   printf("%x\n", &a);
   printf("%x\n", &p);
   return 0; 
}



