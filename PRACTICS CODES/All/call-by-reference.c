#include<stdio.h>
int main()
{
    int x=20;
    int *f=&x;
    chake(&x);
    printf("%d\n",f);
    printf("%d\n",&f);
    printf("%d\n",*f);
    return 0;
}

void chake(int *q)
{
    *q=120;
    printf("Q=%d\n",*q);
}
