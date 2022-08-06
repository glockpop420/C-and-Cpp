#include<stdio.h> 
int main()
{
int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	if (marks<0 || marks>100) //condition 1
		printf("Enter a valid mark\n"); //statement 1
	else if (marks>=50 && marks<=100) //condition 4
		printf("You passed in this exam\n");	//statement 3
	else // condition 5
		printf("You failed in this exam"); // statement 4
	return 0;
}
