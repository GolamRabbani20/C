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
node *last_deletion(node *start,int item);
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
                start->next=NULL;
                prev=start;
            }
            else
            {
                temp=(node*)malloc(sizeof(node));
                fflush(stdout);
                printf("Enter a data: ");
                fflush(stdin);
                scanf("%d",&temp->data);
                temp->next=NULL;
                prev->next=temp;
                prev=temp;
            }
        }
    }while(ans=='Y');
    display(start);
    do
    {
        fflush(stdout);
        printf("Do U want to delete the last node: ");
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
    if(start==NULL || start->next==NULL || start->data==item)
        printf("This is first deletion/Create minimum two nodes.\n");
    else
    {
        head = start;
        while(head->next->next!=NULL && head->next->data!=item)
        {
            head=head->next;
        }
        if(head->next->next==NULL && head->next->data==item)
        {
            temp=head->next;
            head->next=temp->next;
            free(temp);
        }
        else printf("Invalid item/Insert again.\n");
    }
    return start;
}

