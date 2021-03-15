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
node *first_deletion(node *start, int item);
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
        printf("Do U want to delete the first node: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            fflush(stdout);
            printf("Enter item: ");
            fflush(stdin);
            scanf("%d",&item);
            start = first_deletion(start,item);
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
node *first_deletion(node *start, int item)
{
    node *temp;
    if(start==NULL)
        printf("There is no item to be deleted.\n");
   else
   {
        if(start->next==NULL && start->data==item)
        {
            free(start);
            start = NULL;
        }
    else if(start->data==item)
    {
        temp = start;
        start = start->next;
        free(temp);
        start->back = NULL;
    }
    else printf("This is mid/last deletion.\n");
   }
    return start;
}

