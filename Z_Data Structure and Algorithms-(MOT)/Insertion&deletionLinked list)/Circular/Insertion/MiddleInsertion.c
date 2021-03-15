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
    if(temp!=NULL)
    {
        printf("Created list: ");
        do
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }while(temp!=start);
        printf("\n\n");
    }
}
node *mid_insertion(node *start,int item)
{
    node *head, *temp;
    head = start;
    if(head!=NULL)
    {
        if(start->data<item)
        {
            while(head->next!=start && head->next->data<item)
                head = head->next;
            if(head->next==start)
                printf("This is last insertion. Insert again.\n");
            else
            {
                temp = (node*)malloc(sizeof(node));
                temp->data=item;
                temp->next=head->next;
                head->next=temp;
            }
        }
        else printf("This is first insertion. Insert again.\n");
    }
    else printf("Create minimum two nodes for middle insertion.\n");
    return start;
}
