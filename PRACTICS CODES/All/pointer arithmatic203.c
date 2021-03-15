#include<stdio.h>
int main()
{
    char *n,c='A';

    n=&c;
    printf("%d\n",n);
    printf("%c\n",*n);

    n=n+2;
    printf("%d\n",n);

}
