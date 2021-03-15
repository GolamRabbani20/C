#include<stdio.h>
int main()
{
    int n,fibo,first=0,second=1,c=0;
    printf("Enter N: ");
    scanf("%d",&n);
    while(c<n)
    {
        if(c<=1)
        printf("%d ",c);
        else{
            fibo=first+second;
            first=second;
            second=fibo;
            printf("%d ",fibo);
        }

        c++;
    }
    return 0;
}
