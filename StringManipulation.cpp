#include <stdio.h>
#include <string.h>
int main()
{
	char ch[10]={'G','O','O','D',' ','\0'};
	char ch2[10]={'M','O','R','N','I','N','G','\0'};
	printf("length of ch before concat is : %d\n",strlen(ch));
	char ch3[20]={strcat(ch,ch2)};
	printf("value of first string is : %s\n",ch);
	printf("length of the ch after concat is : %d\n",strlen(ch));
	return 0;
}

