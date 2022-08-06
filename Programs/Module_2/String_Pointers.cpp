#include <stdio.h>

int main(void) {
  char name[] = "Swami nathan";

  printf("%c", *name);     
  printf("%c", *(name+1)); 
  printf("%c", *(name+2)); 
  printf("%c", *(name+3)); 
  printf("%c", *(name+4));   
  printf("%c", *(name+5));  
  printf("%c", *(name+6)); 
  printf("%c", *(name+7)); 
  printf("%c", *(name+8));   
  printf("%c", *(name+9));  
  printf("%c", *(name+10)); 
  printf("%c", *(name+11)); 
  
  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     
  printf("%c", *(name+1)); 
  printf("%c", *(name+2)); 
  printf("%c", *(name+3)); 
  printf("%c", *(name+4));   
  printf("%c", *(name+5));  
}
