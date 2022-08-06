#include<stdio.h>  
int main()
{  
int number=50;        
int *p;//pointer to int      
p=&number;//stores the address of number variable        
printf("Address of p is %u \n",p);  
printf("Value of p is %u \n",*p);      
*p=*p+1;   //adding 1 to pointer variable    
printf("After adding 1: Address of p variable is %u \n",p);
printf("Value of p variable is %u \n",*p);        
return 0;  
}    
