#include<stdio.h>
#define M 3
int x , i;
int top=-1;
int stack[M]={0};
int push(int x);
int pop();
int main()
{
    for(i =0 ; i<=M ; i++)
    {
        printf("Enter the push value : ");
        scanf("%d",&x);
        push(x);
    }
    for(i=0; i<=M ; i++)
    {
        pop();
    }
    return 0;
}
int push(int x)
{
    if(top+1>=M)
    {
        printf("Overflow value is %d\n",x);
    }
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
    {
        printf("Stack is underflow!!\n");
    }
    else
    {
        x = stack[top];
        printf("Pop value is %d \n",x);
        top=top-1;
        return x;
    }
}
