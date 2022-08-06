#include<stdio.h>  
int main ()  
{  
  char emp_name[2][10],dummy; // 2-dimensioanal character array names is used 
  //to store the names of the employee   
  int emp_id[2],i;  
  float emp_salary[5];  
  for (i=0;i<3;i++)  
  {  
    printf("Enter the emp_name, emp_id, and emp_salary %d ",i+1);  
    scanf("%s %d %f",&emp_name[i],&emp_id[i],&emp_salary[i]);  
    scanf("%c",&dummy); 
	// enter will be stored into dummy character at each iteration  
  }  
  printf("Printing the Employee details ...\n");  
  for (i=0;i<3;i++)  
  {  
    printf("%s %d %f\n",emp_name[i],emp_id[i],emp_salary[i]);  
  } 
}

