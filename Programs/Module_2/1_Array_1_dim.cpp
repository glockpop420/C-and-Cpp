// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>
int main() 
{
  int i, values[5];
  printf("Enter 5 integers: \n");
  // taking input and storing it in an array
  for(i = 0; i < 5; ++i) 
  {
     scanf("%d", &values[i]);
  }
  printf("Displaying integers: \n");
  // printing elements of an array
  for(int i = 0; i < 5; ++i) 
  {
     printf("%d\n", values[i]);
  }
  return 0;
}
