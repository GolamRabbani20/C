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
node *mid_insertion(node *start, int item);
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
        printf("Do U want to insert item: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            fflush(stdout);
            printf("Enter data: ");
            fflush(stdin);
            scanf("%d",&item);
            start = mid_insertion(start,item);
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
node *mid_insertion(node *start,int item)
{
    node *head, *temp, *temp1;
    head = start;
    if(head!=NULL)
    {
        if(start->data<item)
        {
            while(head->next!=NULL && head->next->data<item)
                head = head->next;
            if(head->next==NULL)
                printf("This is last insertion. Insert again.\n");
            else
            {
                temp = (node*)malloc(sizeof(node));
                temp->data=item;
                temp1=head->next;
                temp->next=temp1;
                temp1->back=temp;
                head->next=temp;
                temp->back=head;
            }
        }
        else printf("This is first insertion. Insert again.\n");
    }
    else printf("Create minimum two nodes for middle insertion.\n");
    return start;
}
