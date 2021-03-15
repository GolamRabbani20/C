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
node *last_deletion(node *start, int item);
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
                start->back=NULL;
                prev=start;
                prev->next=NULL;
            }
            else
            {
                temp=(node*)malloc(sizeof(node));
                fflush(stdout);
                printf("Enter a data: ");
                fflush(stdin);
                scanf("%d",&temp->data);
                temp->back=prev;
                prev->next=temp;
                prev=temp;
                prev->next=NULL;
            }
        }
    }while(ans=='Y');
    display(start);
    do
    {
        fflush(stdout);
        printf("Do U want to delete thr last node: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            fflush(stdout);
            printf("Enter item: ");
            fflush(stdin);
            scanf("%d",&item);
            start = last_deletion(start,item);
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
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}
node *last_deletion(node *start,int item)
{
    node *head, *temp;
    head = start;
    if(head==NULL || head->next==NULL)
        printf("There is no item to be deleted/Create minmum two nodes.\n");
    else
    {
        while(head->next!=NULL)
            head = head->next;
        if(head->data==item)
        {
            temp = head->back;
            free(head);
            temp->next = NULL;
        }
        else printf("This is first/mid deletion/Invalid item.\n");
    }
    return start;
}
