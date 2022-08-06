#include <stdio.h>
#include <time.h>
void getSeconds(unsigned long *par);
int main () 
{
   unsigned long sec;
   getSeconds( &sec );
   /* print the actual value */
   printf("Number of seconds: %ld and the address is %d \n", sec, &sec );
   return 0;
}
void getSeconds(unsigned long *par) 
{
   /* get the current number of seconds */
   *par = time(NULL);
   printf("Number of seconds in par: %ld and the address of par %d \n", *par, &par );
   return;
}
