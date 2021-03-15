#include<stdio.h>
int main()
{
    int A[20],n,i,j;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);
    printf("\nResult=%d",sum(A,n));
    return 0;
}
int sum(int A[],int m)
{
    int k,sum=0;
    for(k=0; k<m; k++)
        sum=sum+A[k];
    return sum;
}
