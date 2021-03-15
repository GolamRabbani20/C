#include<stdio.h>
#define M 3
int A[M];
int f=0;
int r=0;
void insert(int x);
void delete();
int main()
{
    int i,x;
    for(i=0;i<=M;i++)
    {
        printf("Enter the data to be inserted:");
        scanf("%d", &x);
        insert(x);
    }
    printf("\n\n");
    printf("Queue is:");
    for(i=1;i<M+1;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    for(i=0; i<=M; i++)
        delete();
    return 0;
}
void insert(int x)
{
    r=(r+1)%(M+1);
    if(f==r)
        printf("Queue is overflow!!\n");

    else
    {
        A[r]=x;
        printf("inserted item: %d\n", A[r]);
    }
}
void delete()
{
    int x;
    r = M;
    if(f==r)
        printf("Underflow!!");

    else
    {
        f=(f+1)%(M+1);
        x = A[f];
        printf("Deleted item: %d\n", x);
        A[f]=NULL;
    }
}
