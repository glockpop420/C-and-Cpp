#include <stdio.h>

int *divisible(int *a,int n,int k);
int *divisible(int *a,int n,int k)
{
	int b[n],i;
	for (i=0;i<n;i++)
	{
		if(*(a+i)%k==0)
		{
			b[i]=0;	
		}
		else
		{
			b[i]=*(a+i)%k;
		}
	}	
	for (i=0;i<n;i++)
	{
		printf("%d",b[i]);	
	}
	return b;
}
int main()
{
	int n,k,i;
	printf("enter a number for size of array: ");
	scanf("%d",&n);
	int *a[n];
	printf("enter the array values till range n: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a value of k to divide the elemnets of the array: ");
	scanf("%d",&k);
	printf("final array after division: ");
	int b[n];
	divisible(*a,n,k);
}

