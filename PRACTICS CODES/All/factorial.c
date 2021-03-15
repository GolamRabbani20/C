#include<stdio.h>
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    int result=fact(n);
    while(n>=1)
    {
        printf("%d*",n);
        n--;
    }

    printf(" Result:%d",result);
    return 0;
}
int fact(int m)
{
    if(m<=1)
        return 1;
    return m*fact(m-1);
}
