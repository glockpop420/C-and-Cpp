#include <stdio.h>
#include <string.h>
#define MAX_LEN (25)
typedef struct _TCar
{
	char make[MAX_LEN];
	char model[MAX_LEN];
	int year;
	long miles;
} *TCar;


void Car_Init ( TCar car, char * Make, char * Model, int yr, long mi)
{
	strcpy(car->make,Make);
	strcpy(car->model,Model);
	car->year = yr;
	car->miles = mi;
}

void Car_Output(TCar car, char * debugMsg)
{
	if (debugMsg!=NULL)
	{
		printf("***************\n");
		printf(debugMsg);
		printf("\n");
	}
	printf("*****************\n");	
	printf(" Car make is >%s< \n",car->make);
	printf(" Car model is >%s< \n",car->model);
	printf(" Car year is %d \n",car->year);
	printf(" Car miles is %ld \n ",car->miles);
    printf("---------------------------------------------------\n");
}
int main()
{
	struct _TCar myCar;	
	Car_Init( &myCar,

	           (char *) "Toyota",

	           (char *) "Yaris",

	           2012,

	           112365);
	Car_Output(&myCar, (char *) " my car");
}
