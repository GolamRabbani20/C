#include<stdio.h>
int main()
{
    int a[100],i,j;
    scanf("%d %d",&i,&j);
    for(i=i;i<=j;i++)
        a[i]=i;
    for(i=i;i<j;i++)
        printf("%d ",a[i]);
}
