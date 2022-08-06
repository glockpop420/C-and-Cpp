#include <stdio.h>
int main()
{
    int a,b;
    char o;
    scanf("%d%d\n",&a,&b);
    scanf("%c\n",&o);
    switch(o)
    {
        case '+':
            printf("%d + %d = %d",a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d",a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d",a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d",a, b, a/b);
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
