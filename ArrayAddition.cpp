#include <stdio.h>
int main()
{
	float a[2][2],b[2][2],result[2][2];
	int i,j;
	printf("enter elements of the first matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("enter a%d%d:",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("enter elements of the second matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("enter b%d%d:",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("result of addition of the two matrices\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%f\n",result[i][j]);
		}
	}
}
