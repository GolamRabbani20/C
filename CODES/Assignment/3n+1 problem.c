#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the value of n:" );
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==1)
        {
            m=3*n+1;
            n=m;
        }
        else
        {
            m=n/2;
            n=m;
        }

        printf("%d ",n);
    }
    return 0;
}
