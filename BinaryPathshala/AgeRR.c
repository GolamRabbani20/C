#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter your birth year N : ");
    scanf("%d",&n);
    for(i=n;n<=2018;i++)
    {
        //for(i=1;i<=36;i++)
        sum=sum+i;
    }
    printf("Your old is %d day.",sum);
    return 0;
}
