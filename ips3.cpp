#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    int a[m];
    for (i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]>100 || a[i]<0)
        {
            printf("Please enter valid number\n");
            exit(0);
        }
    }
    printf("The grade for %d subjects are\n",m-1);
    for (i=0;i<m;i++)
    {
      
        if (a[i]>=95 && a[i]<=100)
        {
	        printf("%d - S\n",a[i]);
        }
        else if (a[i]>=85 && a[i]<=94)
        {
            printf("%d - A\n",a[i]);
        }      
        else if (a[i]>=75 && a[i]<=84)
        {
            printf("%d - B\n",a[i]);
        }                                    
        else if (a[i]>=65 && a[i]<=74)
        {
            printf("%d - C\n",a[i]);
        }                                           
        else if (a[i]>=55 && a[i]<=64)
        {
            printf("%d - D\n",a[i]);
        }                                    
        else if (a[i]>=50 && a[i]<=54)
        {
            printf("%d - E\n",a[i]);
        }                                    
        else if (a[i]>=0 && a[i]<=49)
        {
            printf("%d - F\n",a[i]);
        }                                    
    }
    return 0;
}
