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
node *first_deletion(node *start, int item);
node *last_deletion(node *start,int item);
node *mid_deletion(node *start,int item);
int main()
{
    int item,n;
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
        printf("Do U want to delete node: ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            printf("Press 1 for First Deletion.\nPress 2 for Mid Deletion.\nPress 3 for Last Deletion.\n");
            scanf("%d",&n);
           switch(n)
           {
               case 1:fflush(stdout);
            printf("Enter item: ");
            fflush(stdin);
            scanf("%d",&item);
            start = first_deletion(start,item);
            display(start);
            break;
               case 2:
                fflush(stdout);
            printf("Enter item: ");
            fflush(stdin);
            scanf("%d",&item);
            start = mid_deletion(start,item);
            display(start);
            break;
               case 3:
                 fflush(stdout);
            printf("Enter item: ");
            fflush(stdin);
            scanf("%d",&item);
            start = last_deletion(start,item);
            display(start);
            break;
               default :
                printf("Deletion not possible.\n");
                break;
           }
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
node *first_deletion(node *start, int item)
{
    node *temp;
    if(start!=NULL)
    {
        if(start->data==item)
        {
            temp=start;
            start=start->next;
            free(temp);
        }
        else printf("This Mid/Last deletion. Try again\n");
    }
    else
        printf("There is no item to be deleted. Enter again!\n");

    return start;
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

node *mid_deletion(node *start,int item)
{
    node *head, *temp;
    if(start==NULL || start->next==NULL || start->next->next==NULL || start->data==item)
        printf("First deletion/Please create minimum three nodes for middle deletion.\n");
    else
    {
        head = start;
        while(head->next->next!=NULL && head->next->data!=item)
            head = head->next;
        if(head->next->next==NULL)
            printf("This is last deletion. Insert again.\n");
        else
        {
            temp=head->next;
            head->next=temp->next;
            free(temp);
        }
    }
    return start;
}
