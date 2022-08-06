#include<stdio.h>
#include<conio.h>
int main()
{
	int num=1;	
	do	
	{
		printf("%d\n",2*num);
		num++;		
	}while(num<=1);
	return 0;
}


/*

1. A do...while loop in C is similar to the while loop except that the condition is always executed after the body of a loop. 

2. It is also called an exit-controlled loop.

3. As we saw in a while loop, the body is executed if and only if the condition is true. 

4. In some cases, we have to execute a body of the loop at least once even if the condition is false. 

5. This type of operation can be achieved by using a do-while loop.

6. In the do-while loop, the body of a loop is always executed at least once. 

7. After the body is executed, then it checks the condition. 

8. If the condition is true, then it will again execute the body of a loop otherwise control is transferred out of the loop.

9. Similar to the while loop, once the control goes out of the loop the statements which are immediately after the loop is executed.

10. The critical difference between the while and do-while loop is that in while loop the while is written at the beginning. 

11. In do-while loop, the while condition is written at the end and terminates with a semi-colon (;)

*/
