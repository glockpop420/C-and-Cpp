#include<stdio.h>  
void arth_oper(int x, int y, int &z) 
{    
    printf("Before operations the value of z is =%d,%d,%d \n", x,y,z);     
    z = x+y;
    printf("After addition operation the value of z is =%d,%d,%d \n", x,y,z);
	z = x-y;
	printf("After Subtraction operation the value of z is =%d,%d,%d \n", x,y,z);
	z = x*y;
	printf("After Multiplication operation the value of z is =%d,%d,%d \n", x,y,z);
	z = x/y;    
    printf("After Division operation the value of z is =%d,%d,%d \n", x,y,z);    
}    
int main() 
{    
    int x=10, y=10, z=0;    
    printf("Before function call x=%d,%d,%d \n", x,y,z);    
    arth_oper(x,y,z);//passing value in function    
    printf("After function call x=%d,%d,%d \n", x,y,z);    
return 0;  
} 





