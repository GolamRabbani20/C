#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
void display(node *top);
int main()
{
    node *top,*temp;
    char ans, a;
    int x;
    top=NULL;
    do
    {
        fflush(stdout);
        printf("Do you want to push: ");
        fflush(stdin);
        ans=toupper(getchar());
        if(ans=='Y')
        {
            if(top==NULL|| top!=NULL)
            {
                temp=(node*)malloc(sizeof(node));
                fflush(stdout);
                printf("Enter a data: ");
                fflush(stdin);
                scanf("%d",&x);
                temp->data=x;
                temp->next=top;
                top=temp;
            }
        }
    }
    while(ans=='Y');
    display(top);
    do
    {
        fflush(stdout);
        printf("Do you want to pop: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            node *temp1;
            if(top==NULL)
            {
                printf("Underflow\n");
                exit(0);
            }
            else
            {
                temp1=top;
                printf("\npop value: %d\n", temp1->data);
                top=temp1->next;
                free(temp1);
                display(top);
            }
        }
    }
    while(a=='Y');
    return 0;
}
void display(node *top)
{
    node *temp1;
    temp1=top;
    fflush(stdout);
    printf("Stack is: ");
    while(temp1!=NULL)
    {
        fflush(stdout);
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
    printf("\n\n");
}
