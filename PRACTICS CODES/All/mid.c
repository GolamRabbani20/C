#include<stdio.h>

void funct(int n)
{
    if(n<=0) return;
    n=n-1;
    funct(n);
    printf("%d\n",n);
}
int main()
{
    funct(5);
}

