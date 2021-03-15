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
node *last_deletion(node *start);
int main()
{
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
        printf("Do you want to delete the last node: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            start = last_deletion(start);
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

node *last_deletion(node *start)
{
    node *temp, *head;
    if(start==NULL || start->next==start)
        printf("Create two nodes\n");
    else
    {
        head=start;
        while(head->next->next!=start)
            head=head->next;
        temp=head->next;
        head->next=temp->next;
        temp->next->back=head;
        free(temp);
    }
    return start;
}

