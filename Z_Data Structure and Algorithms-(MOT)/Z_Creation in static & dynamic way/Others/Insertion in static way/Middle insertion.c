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
node *mid_insertion(node *start);
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
    start = mid_insertion(start);
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
