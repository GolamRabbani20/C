#include<stdio.h>
int main()
{
    int i,a,b,t;
    printf("Enter case number: ");
    scanf("%d",&t);
    for( i=0; i<t; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            swap(a,b,i);
         else
            printf("\tcase %d = %d %d\n",i+1,a,b);
    }
    return 0;
}
void swap(int x,int y,int i)
{
    int k;
    k=x;
    x=y;
    y=k;
    printf("\tcase %d = %d %d\n",i+1,x,y);
}
