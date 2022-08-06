#include <stdio.h>  
int fact (int);  // function prototype
int main()  
{  
    int n,f;  
    printf("Enter the number whose factorial you want to calculate?");  
    scanf("%d",&n);  
    f = fact(n);  // function call - base case
    printf("factorial = %d",f);  
}  
int fact(int n)  // function defnition or body of the function
{  
    if (n==0)  
    {  
        return 1;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  //recursive
    }  
}  
