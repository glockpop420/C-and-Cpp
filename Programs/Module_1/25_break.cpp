#include <stdio.h>
int main() 
	{
		int num = 10;
		while (num > 0) 
		{
  			if (num == 5)
    		break;
  			printf("%d\n", num);
  			num--;	
		}
}

/* 
The break statement is used mainly in in the switch statement. It is also useful for immediately stopping a loop.

We consider the following program which introduces a break to exit a while loop:
num=10			9		8...	0
if num>0		9>0		8>0...	0>0 noooo
if num==0		fail	fail... passed
10 printed		9		8...	loop get terminated
num=9			8		7...
*/
