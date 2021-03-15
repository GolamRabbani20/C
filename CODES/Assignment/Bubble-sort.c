#include<stdio.h>
int main()
{
    int i,j,n,item,A[100];
    printf("Enter array size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    scanf("%d",&A[i]);
    printf("\n");
    for(i=0; i<n; i++)
    {
      for(j=0; j<n-i-1; j++)
        {

            if(A[j]>A[j+1])
            {
                item=A[j];
                A[j]=A[j+1];
                A[j+1]=item;
            }
        }
    }
    printf("After Sorting: ");
    for(i=0; i<n; i++)
    printf("%d ",A[i]);
    printf("\n");
    getch();
}
