#include <stdio.h>
int main()
{
    // Pointer to an array of five numbers
    int (*a)[5], i=0;
    int b[5] = { 1, 2, 3, 4, 5 };
    // Points to the whole array b
    a = &b;
    for (i = 0; i < 5; i++)
  	  printf("%d, %d | %d\n", &b[i], (*a + i),*(*a + i));
    return 0;
}

//int *a;
// a = &b
