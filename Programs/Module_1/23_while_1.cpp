#include <stdio.h>
int main()
{
    int i = 0;
        while (i<=5)
    {
        printf("%d\n", i);
        ++i;
    }
    return 0;
}
//when we experience infinite loop - when the termination is not defined properly

// while(Condition)
//	{
//		statement;
//	}

/*
While Loop

1. In while loop, a condition is evaluated before processing a body of the loop. 
2. If a condition is true then and only then the body of a loop is executed. 
3. After the body of a loop is executed then control again goes back at the beginning, and the condition is checked if it is true, the same process is executed until the condition becomes false. 
4. Once the condition becomes false, the control goes out of the loop.
5. After exiting the loop, the control goes to the statements which are immediately after the loop. 
6. The body of a loop can contain more than one statement. 
7. If it contains only one statement, then the curly braces are not compulsory. 
8. It is a good practice though to use the curly braces even we have a single statement in the body.
9. In while loop, if the condition is not true, then the body of a loop will not be executed, not even once. 
10. It is different in do while loop which we will see shortly.

*/
