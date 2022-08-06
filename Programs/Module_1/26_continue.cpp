#include <stdio.h>
int main() 
{
	int num = 10;
	while (num > 0) 
	{
  		num--;
  		if (num == 5)
    	continue;
 		printf("%d\n", num);
	}
}

// When you want to skip to the next iteration but remain in the loop, you should use the continue statement.
