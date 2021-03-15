#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
void display(node *start);
node *first_insertion(node *start, int item);
int main()
{
    int item;
    node *start,*prev,*temp;
    char ans,a;
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
                fflush(stdout);
                printf("Enter a data: ");
                fflush(stdin);
                scanf("%d",&start->data);
                prev=start;
                prev->next=start;
            }
            else
            {
                temp=(node*)malloc(sizeof(node));
                fflush(stdout);
                printf("Enter a data: ");
                fflush(stdin);
                scanf("%d",&temp->data);
                prev->next=temp;
                prev=temp;
                prev->next=start;
            }
        }
    }
    while(ans=='Y');
    display(start);
    do
    {
        fflush(stdout);
        printf("Do U want to insert item: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            fflush(stdout);
            printf("Enter data: ");
            fflush(stdin);
            scanf("%d",&item);
            start = first_insertion(start,item);
            display(start);
        }
    }
    while(a=='Y');
    return 0;
}
void display(node *start)
{
    node *temp;
    temp = start;
    fflush(stdout);
    if(temp!=NULL)
    {
        printf("Created list: ");
        do
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
        while(temp!=start);
        printf("\n\n");
    }
}
node *first_insertion(node *start, int item)
{
    node *temp, *last;
    if(start==NULL)
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=item;
        start=temp;
        temp->next=start;
    }
    else if(start->data>=item)
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=item;
        temp->next=start;
        last=start;
        while(last->next!=start)
        {
            last=last->next;
        }

        start=temp;
        last->next=start;
    }
    else
        printf("This is middle/last insertion. Enter again!\n");
    return start;
}

