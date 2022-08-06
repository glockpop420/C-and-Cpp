#include <stdio.h>
void compare(int a, int b, int* addr_great, int* addr_small)
{	if (a > b) 
	{
		// a is stored in the address pointed
		// by the pointer variable *addr_great
		*addr_great = a;
		*addr_small = b;
	}
	else 
	{
		*addr_great = b;
		*addr_small = a;
	}
}
int main()
{
	int great, small, x, y;
	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);
	// The last two arguments are passed
	// by giving addresses of memory locations
	compare(x, y, &great, &small); //call by value or reference
	printf("\nThe greater number is  %d and the " "smaller number is %d",great, small);
	printf("\nThe greater number address is  %d and the " "smaller number address is %d",&great, &small);return 0;
}

