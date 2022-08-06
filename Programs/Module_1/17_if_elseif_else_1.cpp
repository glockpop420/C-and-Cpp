#include<stdio.h> 
int main()
{
int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	if (marks>=50) //condition 1
		if(marks<=100) //condition 2
			printf("You passed in this exam\n"); //statement 1
		else //condition 3
			printf("Enter a valid mark\n"); //statement 2
	else if (marks<0) //condition 4
		printf("Enter a valid mark\n");	//statement 3
	else // condition 5
		printf("You failed in this exam"); // statement 4
	return 0;
}

