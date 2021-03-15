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
node *first_insertion(node *start, int item);
node *mid_insertion(node *start,int item);
node *last_insertion(node *start,int item);
node *first_deletion(node *start);
node *mid_deletion(node *start,int item);
node *last_deletion(node *start);
int main()
{
    int item, n;
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
        printf("\nDo U want to see the options of Linked list operations(Y/N): ");
        fflush(stdin);
        a=toupper(getchar());
        if(a=='Y')
        {
            fflush(stdout);
            printf("\n\t\t\t\t\tPlease choose any option:");
            fflush(stdout);
            printf("\n\n\t\tPress 1 for First Insertion.\n\t\tPress 2 for Middle Insertion.");
            fflush(stdout);
            printf("\n\t\tPress 3 for Last Insertion.\n\t\tPress 4 for First Deletion.");
            fflush(stdout);
            printf("\n\t\tPress 5 for Middle Deletion.\n\t\tPress 6 for Last Deletion.\n\t\t\n\tReplay: ");
            fflush(stdout);
            fflush(stdin);
            scanf("%d", &n);
            if(n==1)
            {
                fflush(stdout);
                printf("\nEnter data to be first insertion: ");
                fflush(stdin);
                scanf("%d",&item);
                start = first_insertion(start,item);
                display(start);
            }
            if(n==2)
            {
                fflush(stdout);
                printf("\nEnter data to be middle insertion: ");
                fflush(stdin);
                scanf("%d",&item);
                start = mid_insertion(start,item);
                display(start);
            }
            if(n==3)
            {
                fflush(stdout);
                printf("\nEnter data to be last insertion: ");
                fflush(stdin);
                scanf("%d",&item);
                start = last_insertion(start,item);
                display(start);
            }
            if(n==4)
            {
                start = first_deletion(start);
                display(start);
            }
            if(n==5)
            {
                fflush(stdout);
                printf("\nEnter item to be middle deletion: ");
                fflush(stdin);
                scanf("%d",&item);
                start = mid_deletion(start,item);
                display(start);
            }
            if(n==6)
            {
                start = last_deletion(start);
                display(start);
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
node *first_insertion(node *start, int item)
{
    node *temp;
    if(start==NULL)
    {
        start=(node*)malloc(sizeof(node));
        start->data=item;
        start->next=NULL;
        start->back=NULL;
    }
    else if(start->data>=item)
    {
        temp=(node*)malloc(sizeof(node));
        temp->data=item;
        temp->next=start;
        start->back=temp;
        start=temp;
        start->back=NULL;
    }
    else
        printf("This is middle/last insertion. Enter again!\n");

    return start;
}

node *mid_insertion(node *start,int item)
{
    node *head, *temp, *temp1;
    if(start==NULL||start->next==NULL||start->data>item)
        printf("Error\n");
    else
    {
        head=start;
        while(head->next!=NULL && head->next->data<item)
            head=head->next;
        if(head->next==NULL)
            printf("Invalid item\n");
        else
        {
            temp=(node*)malloc(sizeof(node));
            temp->data=item;
            temp1=head->next;
            temp->next=temp1;
            temp1->back=temp;
            head->next=temp;
            temp->back=head;
        }
    }
    return start;
}

node *last_insertion(node *start,int item)
{
    node *head, *temp;
    if(start==NULL)
        printf("Create Minimum One Node\n");
    else
    {
        head = start;
        while(head->next!=NULL)
            head=head->next;
        if(head->data<=item)
        {
            temp = (node*)malloc(sizeof(node));
            temp->data=item;
            head->next=temp;
            temp->back=head;
            temp->next=NULL;
        }
        else
            printf("This is first/middle insertion. Insert again!\n");
    }
    return start;
}

node *first_deletion(node *start)
{
    node *temp, *head;
    if(start==NULL)
        printf("There is no item to be deleted. Enter again!\n");
    else if(start->next==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        temp=start;
        start=start->next;
        free(temp);
        start->back=NULL;
    }
    return start;
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
            temp1=temp->next;
            head->next=temp1;
            temp1->back=head;
            free(temp);
        }
    }
    return start;
}

node *last_deletion(node *start)
{
    node *head, *temp;
    if(start==NULL || start->next==NULL)
        printf("There is no item to be deleted/Create minmum two nodes.\n");
    else
    {
        head = start;
        while(head->next->next!=NULL)
            head = head->next;
        free(head->next);
        head->next = NULL;
    }
    return start;
}
