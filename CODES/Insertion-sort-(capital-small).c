#include<stdio.h>
int main()
{
    int i,j,n,item,A[100];
    printf("Enter the array size n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        printf("\n");
    for(i=1;i<n;i++)
    {
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]<item)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=item;
    }
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
    return 0;
}

