#include <stdio.h>
int main()
{
    int m,n;
    int a[20][20];
    scanf("%d",&n);
    scanf("%d",&m);
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int total,average;
    for (i=0;i<n;i++)
    {
        total=0;
        average=0;
        for (j=0;j<m;j++)
        {
            total=total+a[i][j];
        }
        average=total/m;
        printf("%d\n",total);
        printf("%d\n",average);
    }
    return 0;
}
