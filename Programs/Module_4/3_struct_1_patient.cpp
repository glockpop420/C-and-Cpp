#include <stdio.h>
#include <string.h>
struct patient_details
{
   // data members
   char P_name[10];
   int P_age;
   char P_gender;
};
int main()
{
   // structure variables
   struct patient_details p1, p2;
   // structure variables accessing the data members.
   strcpy(p1.P_name, "XYZ");
   //p1.P_name = "XYZ";
   p1.P_age = 25;
   p1.P_gender = 'M';
   strcpy(p2.P_name, "ABC");
   p2.P_age = 50;
   p2.P_gender = 'F';
   // print the patient records.
   // patient 1
   printf("The name of the 1st patient is: %s\n", p1.P_name);
   printf("The age of the 1st patient is: %d\n", p1.P_age);
   if (p1.P_gender == 'M')
   {
      printf("The gender of the 1st patient is: Male\n");
   }
   else
   {
      printf("The gender of the 1st patient is: Female\n");
   }
   printf("\n");
   // patient 2
   printf("The name of the 2nd patient is: %s\n", p2.P_name);
   printf("The age of the 2nd patient is: %d\n", p2.P_age);
   if (p2.P_gender == 'M')
   {
      printf("The gender of the 2nd patient is: Male\n");
   }
   else
   {
      printf("The gender of the 2nd patient is: Female\n");
   }
   return 0;
}
