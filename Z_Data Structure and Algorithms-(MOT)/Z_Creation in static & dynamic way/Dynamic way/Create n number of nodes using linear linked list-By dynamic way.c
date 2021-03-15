#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
void main()
{
    node *start,*temp,*prev;
    char ans;
    start=NULL;
    do
    {
        fflush(stdout);
        printf("Do you want to create a node(Y/N): ");
        fflush(stdin);
        ans=toupper(getchar());
        if(ans=='Y')
        {
            if(start==NULL)
            {
                start=(node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d",&start->data);
                start->next=NULL;
                prev=start;
            }
            else
            {
                temp=(node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d",&temp->data);
                temp->next=NULL;
                prev->next=temp;
                prev=temp;
            }
        }

    }while(ans=='Y');

    printf("Output\n");
    printf("............\n");

    while(start!=NULL)
    {
        printf("%d ",start->data);
        start=start->next;
    }
}
