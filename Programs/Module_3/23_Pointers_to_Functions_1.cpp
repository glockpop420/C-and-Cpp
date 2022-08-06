#include <stdio.h>  
int add(int,int);  
int main()  
{  
   int a,b;  
   int (*ip)(int,int);  //syntax for pointer function
   int result;  
   printf("Enter the values of a and b : ");  
   scanf("%d %d",&a,&b);
   printf("The addr of a is %d and addr of b is %d\n",&a, &b);  
   ip=add;  
   //result=(*ip)(a,b);  
   result=ip(a,b); // calling the function pointer
   printf("Value and address of result is : %d and it is stored in % d\n",result, &result); 
   printf("%d %d %d %d\n",&ip, ip, add, *ip); 
   return 0;  
}  
int add(int a,int b)  
{  
    int c=a+b; 
	printf("The value and addr of c is : %d %d\n", c, &c);
    return c;  
}  
