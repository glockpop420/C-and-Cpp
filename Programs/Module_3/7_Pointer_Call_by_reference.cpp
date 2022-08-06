/* #include<stdio.h> 

void change(int *num) 
{    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num); 
	printf("Address of num=%d \n", &num); 
	printf("Value of num=%d \n", num);   
}      
int main() 
{    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x); 
	printf("After function call x=%d \n", &x);
return 0;  
} 

*/




#include<stdio.h>  
void change(int &num) 
{    
    printf("Before adding value inside function num=%d %d \n",&num, num);    
    (num) += 100;    
    printf("After adding value inside function num=%d %d \n", &num, num);    
}      
int main() 
{    
    int x=100;    
    printf("Before function call x=%d % d\n", x, &x);    
    change(x);//passing reference in function  
    printf("After function call x=%d %d \n", x, &x); //100 or 200   
return 0;  
} 

