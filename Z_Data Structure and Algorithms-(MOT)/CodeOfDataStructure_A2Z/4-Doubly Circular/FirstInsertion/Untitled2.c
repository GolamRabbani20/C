#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct list
{
    int data;
    struct list *next, *back;
};
typedef struct list node;
void display(node *start);
node *first_insertion(node *start, int item);
int main()
{
    int item, n;
    node *start, *prev, *temp, *head;
    char Ans, a;
    start = NULL;
    do
    {
        fflush(stdout);
        printf("Do U want to create a node(Y/N): ");
        fflush(stdin);
        Ans = toupper(getchar());
        if(Ans=='Y')
        {
            fflush(stdout);
            printf("Enter a data: ");
            if(start==NULL)
            {
                start = (node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d", &start->data);
                start->back = start;
                prev = start;
                prev->next = start;
            }
            else
            {
                temp = (node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d", &temp->data);
                prev->next = temp;
                temp->back = prev;
                prev = temp;
                prev->next = start;
                start->back = prev;
            }
        }
    }while(Ans=='Y');
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
    }while(a=='Y');
return 0;
}
void display(node *start)
{
    node *temp;
    temp = start;
    fflush(stdout);
    printf("Created list: ");
    if(temp!=NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }while(temp!=start);
        printf("\n\n");
    }
}
node *first_insertion(node *start, int item)
{
    node *temp, *head, *prev;
    if(start==NULL)
    {
        start=(node*)malloc(sizeof(node));
        start->data=item;
        start->next=start;
        start->back=start;
        prev=start;
    }
    else if(start->data>=item)
    {
        head=start;
        temp=(node*)malloc(sizeof(node));
        temp->data=item;
        while(head->next!=start)
            head=head->next;
        temp->next=start;
        start->back=temp;
        start=temp;
        head->next=start;
        start->back=head;
    }
    else
        printf("This is middle/last insertion. Enter again!\n");
    return start;
}


