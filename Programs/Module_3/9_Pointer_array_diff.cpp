#include <stdio.h>
 int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int* ptr = arr;
     // sizof(int) * (number of element in arr[]) is printed
    printf("Size of arr[] %d\n", sizeof(arr));
    // sizeof a pointer is printed which is same for all
    printf("Size of ptr %d\n", sizeof(ptr));
    printf("Size of ptr %d\n", &ptr);
    printf("Size of ptr %d\n", sizeof(&ptr));
	printf("Size of ptr %d", sizeof(*ptr));
    return 0;
}
