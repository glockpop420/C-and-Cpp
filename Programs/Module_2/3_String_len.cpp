#include<stdio.h>  
#include <string.h>    
int main()
{    
char name[50]={'s', 'w', 'a', 'm', 'i', 'n', 'a', 't', 'h', 'a', 'n'};    
   printf("Length of string is: %d\n",strlen(name));    
   printf("Value of second string is: %s", name); 
   printf("The value: %s",name[51]);
   return 0;
}
