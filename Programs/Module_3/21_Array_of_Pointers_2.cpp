#include <stdio.h>
const int MAX = 4;
int main () 
{
   char *names[] = {"Raj","Yogesh","Gopi","Karpagam"};
   int i = 0;
   for (i = 0; i < MAX; i++) 
   {
      printf("Value of names[%d] : %d = %s\n", i, &names[i], names[i]);
   }
   return 0;
}
