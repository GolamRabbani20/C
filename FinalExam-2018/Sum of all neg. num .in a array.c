#include<stdio.h>
int main()
{
    int ara[10000],i,n,sum=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
    {
        if(ara[i]<0)
        {
            printf("ara[%d]=%d\n",i,ara[i]);
            sum=sum+ara[i];
        }
    }
    printf("Sum=%d",sum);
    return 0;

}
