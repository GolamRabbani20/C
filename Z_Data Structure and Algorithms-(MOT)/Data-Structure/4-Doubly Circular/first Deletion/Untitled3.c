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
node *first_deletion(node *start);
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
        printf("Do U want to delete the first node: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            start = first_deletion(start);
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

node *first_deletion(node *start)
{
    node *head, *temp;
    if(start==NULL)
        printf("There is no item to be deleted. Enter again!\n");
    else if(start->next==start)
    {
        free(start);
        start=NULL;
    }
    else
    {
        head=start;
        while(head->next!=start)
            head=head->next;
        temp=start;
        start=start->next;
        free(temp);
        head->next=start;
        start->back=head;
    }
    return start;
}

