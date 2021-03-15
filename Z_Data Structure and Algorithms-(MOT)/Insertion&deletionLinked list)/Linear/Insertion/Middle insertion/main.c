//Middle insertion(Linear)
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
node *mid_insertion(node *start,int item);
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
    node *temp2;
    temp2 = start;
    fflush(stdout);
    printf("Created list: ");
    while(temp2!=NULL)
    {
        printf("%d ", temp2->data);
        temp2=temp2->next;
    }
    printf("\n\n");
}
node *mid_insertion(node *start,int item)
{
    node *head, *temp1;
    head = start;
    if(start->data<item)
    {
    while(head->next!=NULL && head->next->data<item)
        head = head->next;
    if(head->next==NULL)
       printf("Please create minimum two nodes for middle insertion\n");
    else
    {
        temp1 = (node*)malloc(sizeof(node));
        temp1->data=item;
        temp1->next=head->next;
        head->next=temp1;
    }
    }
    else printf("This is first.So Insert again.\n");
    return start;
}
