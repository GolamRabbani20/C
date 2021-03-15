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
node *mid_deletion(node *start, int item);
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
    }
    while(ans=='Y');
    display(start);
    do
    {
        fflush(stdout);
        printf("Do U want to delete a middle node: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            fflush(stdout);
            printf("Enter data: ");
            fflush(stdin);
            scanf("%d",&item);
            start = mid_deletion(start,item);
            display(start);
        }
    }
    while(a=='Y');
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
node *mid_deletion(node *start,int item)
{
    node *head, *temp, *temp1;
    if(start==NULL || start->next==NULL || start->next->next==NULL || start->data==item)
        printf("First deletion/Please create minimum three nodes for middle deletion.\n");
    else
    {
        head = start;
        while(head->next->next!=NULL && head->next->data!=item)
            head = head->next;
        if(head->next->next==NULL)
            printf("This is last deletion/Invalid item.\n");
        else
        {
            temp=head->next;
            temp1=head->next->next;
            head->next=temp1;
            temp1->back=head;
            free(temp);
        }
    }
    return start;
}
