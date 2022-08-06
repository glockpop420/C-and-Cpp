#include<stdio.h>
int main()
{
/*	
int* p, a;
a = 5;
p = &a;
a = 1;
printf("%d\n", a);    
printf("%d", *p);

int* p, a;
a = 5;
p = &a;
*p = 1;
printf("%d\n", *p);  
printf("%d", a); 
*/   
int* p, x, y;
x = 5;
y = -15;

p = &x; printf("%d\n", *p); // Output: 5
p = &y; printf("%d", *p); // Ouptut: -15
}
