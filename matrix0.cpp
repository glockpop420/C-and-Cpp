#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int arr[m][n];
	
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int arr1[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (arr[i][j]==0)
			{
				for (int k=0;k<m;k++)
				{
					arr1[k][j]=0;	
				}
				for (int l=0;l<n;l++)
				{
					arr1[i][l]=0;
				}
			} 
			else
			{
				arr1[i][j]=arr[i][j];
			}
		}
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}
