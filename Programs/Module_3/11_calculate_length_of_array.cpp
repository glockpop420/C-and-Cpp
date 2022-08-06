#include<stdio.h>

int main()
{
	int Length  =0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};//10 elements

	printf("Size of int array:%d \n",sizeof(arr));
	printf("Size of 1 int value :%d \n",sizeof(int));

	//Calculate length of the array ( Number of elements)
    Length  = sizeof(arr)/sizeof(int);

	//display array length

	printf("So, array length is:%d",Length );

	return 0;
}
