#include <stdio.h>
int main()
{
	int i, values[5];
	printf("Enter 5 integers: \n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&values[i]);
	}
	printf("Displaying integers \n");
	for (i=0;i<5;i++)
	{
		printf("%d\n",values[i]);
	}
}

