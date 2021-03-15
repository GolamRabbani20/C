#include<stdio.h>
int main()
{
    int A[200],i,n,count=0,Result;
    printf("Enter range n: ");
    scanf("%d",&n);
    A[i]=fibo2020(A,n);
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
    return 0;
}
int fibo2020(int m[],int p)
{
    int i;
    m[0]=0;
    m[1]=1;
    for(i=2;i<=p;i++)
    m[i]=m[i-1]+m[i-2];
}
