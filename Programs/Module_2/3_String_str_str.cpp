#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[100]="A friend in need is a friend in deed";    
  char *sub;    
  sub=strstr(str,"is");    
  printf("\nSubstring is: %s",sub);    
 return 0;    
}    
