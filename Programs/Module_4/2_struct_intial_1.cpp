#include<stdio.h> 
struct rectangle
{
   // structure definition 
   int length;   
   int breadth;   
};
int main()
{
   struct rectangle my_rect; // structure variables;
   my_rect.length = 10;
   my_rect.breadth = 6;
   printf("%d %d",my_rect.length,my_rect.breadth);
}
