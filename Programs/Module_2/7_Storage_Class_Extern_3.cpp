#include <stdio.h>  
int a;   
int main()  
{  
extern int a = 0; // this will show a compiler error since we can not use extern and initializer at same time   
printf("%d",a);  
}  
