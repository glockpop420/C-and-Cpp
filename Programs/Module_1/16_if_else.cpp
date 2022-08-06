#include<stdio.h> 
int main()
{
	int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	if (marks>=50) //condition
		printf("You passed in this exam\n"); //statement 1 - condition passed
	else 
		printf("You failed in this exam"); //statement 2 - condition failed
	return 0;
}
