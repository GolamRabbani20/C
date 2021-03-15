#include<stdio.h>
int main()
{
    int n , i , item;
    int A[1000];
    int mid , first , last ;
    printf("Enter the array lize : ");
    scanf("%d",&n);
   printf("Enter %d interger numbers\n",n);
    for( i=1 ; i<=n ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Created list : ");
    for(i =1; i<=n ; i++)
    {
        printf("%d ",A[i]);
    }
    first = 1 ; last = n;
    printf("\nEnter the item to be Search : ");
    scanf("%d",&item);
while(first<=last)
{
        mid = (first+last) / 2;
        if(A[mid]==item)
        {
            printf("%d is found at %d position",item , mid);
            exit(0);
        }
        else if(A[mid] < item)
            first = mid + 1;
        else
            mid = last -1;
    }

if(first>last)
    printf("%d is not found\n\n",item);
    return 0;
}
