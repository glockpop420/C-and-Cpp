#include <stdio.h>
 
int main () {

   /* local variable definition */
   char grade;
   printf("Enter you grade :");
   scanf("%c",&grade);

   switch(grade) 
   {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      	 printf("Very Good!\n" );
         break;
      case 'C' :
         printf("Good\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}
