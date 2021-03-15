#include<stdio.h>
void call(int x)
{
    if(x<=10)
        printf("%d\n",x);
    return call(x+1);
}
int main()
{
    int a=1;
    call(a);
    return 0;
}
