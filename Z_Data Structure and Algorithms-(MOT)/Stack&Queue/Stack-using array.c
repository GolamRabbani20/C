#include<stdio.h>
#define M 3
int top=-1, stack[M]={0};
int x;
int push(int x,int i, int stack[]);
int pop();
int main()
{
    int i;

    for(i=0; i<=M; i++)
    {
        printf("Enter the push value:");
        scanf("%d",&x);
        push(x,i,stack);
    }

    pop();
    pop();
    pop();
    pop();
    return 0;
}
int push (int x,int i, int stack[])
{

    if(top+1>=M)
        printf("ovet flow value =%d",x);
    else
    {
        top=top+1;
        stack[top]=x;
    }
    return x;
}
int pop()
{


    if(top==-1)
        printf("\nUnderflow");
    else
    {
        x= stack[top];
        printf("\nThe pop Value: %d\n", x);
        top = top-1;
        return x;
    }
}


