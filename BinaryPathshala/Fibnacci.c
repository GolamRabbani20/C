#include<stdio.h>
int main()
{
    int first=0,second=1,count=0,fibo,sum=0,n;
    printf("Enter N: ");
    scanf("%d",&n);
    while(count<=n)
    {
        if(count<=1)

            fibo=count;

        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
            sum=sum+fibo;

        }
          printf("%d ",fibo);
          count++;
    }
    printf("\nSum=%d",sum+1);
    return 0;
}
