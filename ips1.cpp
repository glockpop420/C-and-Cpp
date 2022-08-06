#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l1,l2,m,sc,st,total,average;
    scanf("%d",&l1);
    if (l1<0)
    {
        printf("Please enter valid marks");
        exit(0);
    }
    scanf("%d",&l2);
    if (l2<0)
    {
        printf("Please enter valid marks");
        exit(0);
    }
    scanf("%d",&m);
    if (m<0)
    {
        printf("Please enter valid marks");
        exit(0);
    }
    scanf("%d",&sc);
    if (sc<0)
    {
        printf("Please enter valid marks");
        exit(0);
    }
    scanf("%d",&st);
    if (st<0)
    {
        printf("Please enter valid marks");
        exit(0);
    }   
    total=l1+l2+m+sc+st;
    average=total/5;
    printf("%d\n",total);
    printf("%d\n",average);
}
