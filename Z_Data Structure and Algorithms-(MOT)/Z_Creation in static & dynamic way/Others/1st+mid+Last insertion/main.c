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
node *first_insertion(node *start);
node *mid_insertion(node *start);
node *last_insertion(node *start);

int main()
{
    node *start,*prev,*temp;
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
    }
    while(ans=='Y');
    display(start);
    start = first_insertion(start);
    display(start);
    start = mid_insertion(start);
    display(start);
    start = last_insertion(start);
    display(start);
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
node *first_insertion(node *start)
{
    int item;
    node *temp;
    fflush(stdout);
    printf("Enter item for 1st insertion: ");
    fflush(stdin);
    scanf("%d", &item);
    if((start==NULL)||(start->data>=item))
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=item;
        temp->next=start;
        start=temp;
    }
    else
        printf("Invalid item!\n");
    return start;
}
node *mid_insertion(node *start)
{
    int item;
    node *head, *temp;
    fflush(stdout);
    printf("Enter item for middle insertion: ");
    fflush(stdin);
    scanf("%d", &item);
    head = start;
    while(head!=NULL)
    {
        if(head->next->data>=item && start->data<=item)
        {
            temp = (node*)malloc(sizeof(node));
            temp->data=item;
            temp->next=head->next;
            head->next=temp;
            break;
        }
        head=head->next;
        if(head->next==NULL||start->data>item)
        {
            printf("Invalid item!\n");
            break;
        }

    }

    return start;
}
node *last_insertion(node *start)
{
    int item;
    node *head, *temp;
    fflush(stdout);
    printf("Enter item for last insertion: ");
    fflush(stdin);
    scanf("%d", &item);
    head = start;
    while(head!=NULL)
    {
        if(head->next==NULL&&head->data<=item)
        {
            temp = (node*)malloc(sizeof(node));
            temp->data=item;
            temp->next=NULL;
            head->next=temp;
            break;
        }
        else if(head->next==NULL) printf("Invalid item!\n");
        head=head->next;
    }
    return start;
}
