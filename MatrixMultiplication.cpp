#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],tot=0,m,n,p,q,i,j,k;
	printf("enter the number of rows and columns of first matrix\n");
	scanf("%d%d\n",&m,&n);
	printf("enter the elements of the first matrix\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("enter a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the number of rows and columns of the second matrix");
	scanf("%d%d\n",&p,&q);
	printf("enter the elements of the second matrix");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			printf("enter a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
}
