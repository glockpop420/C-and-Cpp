#include <stdio.h>
#include <string.h>

int main()
{
    char c[]="hello sir HOW aRE yoU";
    printf("%c\n",c[0]);
    printf("%c\n",c[1]);
    printf("%ld\n",strlen(c));
    char c1[100];
    strcpy(c1,c);
    printf("%s\n",c1);
    printf("%s\n",strcat(c,c1));
    printf("%d\n",strcmp("A","a"));
    printf("%s\n",strrev(c1));
    printf("%s\n",strlwr(c));
    printf("%s\n",strupr(c));
    return 0;
}
