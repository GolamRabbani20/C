#include<stdio.h>
#define M 3
int r=0;
int f=0;
int queue[M]={0};
int insert(int x);
void deletion();
int main()
{
    int i , x;
    for(i=0 ; i<=M ; i++)
    {
        printf("\nEnter the item to be inserted : ");
        scanf("%d",&x);
        insert(x);
    }
    printf("\n");
    printf("Inserted item: ");
    for(i=1 ; i<=M ; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
      for(i=0 ; i<=M ; i++)
    {
        deletion();
    }
    printf("\n");
    return 0;
}
int insert(int x)
{
    r=(r+1) % (M+1);
    if(r==f)
    {
        printf("The queue is overflow\n");
    }
    else
    {
        queue[r]=x;
        printf("Enserted item : %d",queue[r]);
    }
    return x;
}
void deletion()
{
    int x;
    r=M;
    if(r==f)
    {
        printf("The queue is underflow\n");
    }
    else
    {
        f=(f+1) % (M+1);
        x=queue[f];
        printf("Deleted item is %d\n",x);
        queue[f]=NULL;
    }
    return;
}
