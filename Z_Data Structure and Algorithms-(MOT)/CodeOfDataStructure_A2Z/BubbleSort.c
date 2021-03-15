#include<stdio.h>
int main()
{
    int i , j , n , A[1000] , temp;
    printf("Enter the element numbers \n");
    scanf("%d",&n);
    printf("Enter %d intergers numbers \n",n);
    for(i = 1 ; i<=n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i = 1 ; i<=n-1 ; i++)
    {
        for(j =1 ; j<=n-i ; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j]=A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("Sorted list : ");
    for( i =1 ; i<= n ; i++)
    {
        printf("%d ",A[i]);
    }
}
