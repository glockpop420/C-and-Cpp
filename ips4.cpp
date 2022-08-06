#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    float div[y];
    for (int i=0;i<y;i++)
    {
        div[i]=(float)(i+1)/x;
    }
    for (int i=0;i<y;i++)
    {
        printf("%d / %d = %.1f\n",i+1,x,div[i]);
    }
    return 0;
}
