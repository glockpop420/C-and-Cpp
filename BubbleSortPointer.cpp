#include <stdio.h>
void sort(int *i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
void bubbleSort(int a[],int n)
{
    int x,y,temp;
    for (x=0;x<n-1;x++)
    {
        for (y=0;y<n-x-1;y++)
        {
            if(a[y]>a[y+1])
            {
               sort(&a[y],&a[y+1]);
            }
        }
    }
}
int main()
{
    int a[50],n,x;
    scanf("%d",&n);
    for (x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    bubbleSort(a,n);
    for (x=0;x<n;x++)
    {
        printf("%d\n",a[x]);
    }
    return 0;
}
