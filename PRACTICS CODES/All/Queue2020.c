#include<stdio.h>
#define SIZE 5
int A[SIZE];
int low_index=0;
int high_index=0;
void push(int n);
int main()
{
    int n,i;
    for(i=0; i<=SIZE; i++)
    {
        printf("Enter the data of N: ");
        scanf("%d",&n);
        push(n);
    }
    printf("\n\n");
    printf("The Queue is:\n");
    for(i=1; i<=SIZE; i++)
        printf("%d ",A[i]);
    printf("\n\n");
    return 0;
}

void push(int x)
{
    low_index=(low_index+1)%(SIZE+1);
    if(low_index==high_index)
        printf("The queue is full!\n");
    else
        A[low_index]=x;
}
