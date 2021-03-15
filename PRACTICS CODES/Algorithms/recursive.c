#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    f(n);
    return 0;
}

void f(int x)
{
    if(x==0)
        return;
    x--;
    printf("%5d\n",x);
    f(x);
    printf("%5d\n",x);
}
