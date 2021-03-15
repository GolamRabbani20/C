#include<stdio.h>
int main()
{
    int i,j,n,c,max=0;
    printf("Enter the value of i & j:");
    scanf("%d %d",&i,&j);
    printf("%d %d ",i,j);
    for(i=i; i<=j; i++)
    {
        c=1;
        n=i;
        while(n!=1)
        {
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            c++;
        }

        if(c>max)
            max=c;
    }
    printf(" %d",max);
    return 0;
}

