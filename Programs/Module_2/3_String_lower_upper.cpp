#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20];    
  //char a[20];
  printf("Enter string: ");    
  gets(str);//reads string from console    
  //a[20]=str[20];
  printf("String is: %s",str);    
  printf("\nUpper String is: %s",strupr(str)); 
  printf("\nReverse String is: %s",strrev(str));   
    
 return 0;    
}  
