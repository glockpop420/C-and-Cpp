#include <stdio.h>
int main()
{
	int n,rev,d,sum=0;
	scanf("%d",&n);
	int n1=n;
	while (n1>0)
	{
		d=n1%10;
		sum=sum+d;
		n1=n1/10;
	}
	printf("%d\n",sum);
	int rem;
	int sum1=sum;
	while (sum1 != 0) 
	{
    	rem = sum1 % 10;
    	rev = rev * 10 + rem;
    	sum1 /= 10;
    }
    printf("%d\n",rev);
    if ((rev*sum)==n)
    {
    	printf("Reverse-Back");
	}
	else
	{
		printf("Not Reverse-Back");
	}
}
