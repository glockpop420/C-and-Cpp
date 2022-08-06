#include<stdio.h>  
int main()
{  
int number=50;        
int *p;//pointer to int      
p=&number;//stores the address of number variable        
printf("Address of number is %u \n",&number); 
printf("Value pointer p is %u \n",p); 
printf("Address of pointer p is %u \n",&p);       
printf("Before increment: value of p is %d \n",*p);
printf("Before increment: value of number %d \n",number);
p=p+1;        
printf("After increment: Address of p variable is %u \n",p); // in our case, p will get incremented by 4 bytes.      
printf("After increment: value of p %d \n",*p);
printf("After increment: value of number %d \n",number);
return 0;  
}    
