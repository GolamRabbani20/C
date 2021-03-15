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
    node *start, *prev, *temp, *head;
    char Ans, a;
    start = NULL;
    do
    {
        fflush(stdout);
        printf("Do U want to create a node(Y/N): ");
        fflush(stdin);
        Ans = toupper(getchar());
        if(Ans=='Y')
        {
            fflush(stdout);
            printf("Enter a data: ");
            if(start==NULL)
            {
                start = (node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d", &start->data);
                start->back = start;
                prev = start;
                prev->next = start;
            }
            else
            {
                temp = (node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d", &temp->data);
                prev->next = temp;
                temp->back = prev;
                prev = temp;
                prev->next = start;
                start->back = prev;
            }
        }
    }while(Ans=='Y');
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
    if(temp!=NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }while(temp!=start);
        printf("\n\n");
    }
}
node *first_insertion(node *start, int item)
{
    node *temp, *head, *prev;
    if(start==NULL)
    {
        start=(node*)malloc(sizeof(node));
        start->data=item;
        start->next=start;
        start->back=start;
        prev=start;
    }
    else if(start->data>=item)
    {
        head=start;
        temp=(node*)malloc(sizeof(node));
        temp->data=item;
        while(head->next!=start)
            head=head->next;
        temp->next=start;
        start->back=temp;
        start=temp;
        head->next=start;
        start->back=head;
    }
    else
        printf("This is middle/last insertion. Enter again!\n");
    return start;
}
node *mid_insertion(node *start,int item)
{
    node *head, *temp, *temp1;
    if(start==NULL || start->next==start || start->data>item)
        printf("Invalid Item\n");
    else
    {
        head = start;
        while(head->next!=start && head->next->data<item)
            head = head->next;
        if(head->next==start)
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
    return start;
}
node *last_insertion(node *start,int item)
{
    node *head, *temp;
    if(start==NULL)
        printf("This is 1st insertion. PLZ create Minimum one node.\n");
    else
    {
        temp = (node*)malloc(sizeof(node));
        temp->data=item;
        head = start;
        while(head->next!=start)
            head=head->next;
        if(head->data<=item)
        {
            head->next=temp;
            temp->back=head;
            temp->next=start;
            start->back=temp;
        }
        else
            printf("Wrong item\n");
    }
    return start;
}

node *first_deletion(node *start)
{
    node *head, *temp;
    if(start==NULL)
        printf("There is no item to be deleted. Enter again!\n");
    else if(start->next==start)
    {
        free(start);
        start=NULL;
    }
    else
    {
        head=start;
        while(head->next!=start)
            head=head->next;
        temp=start;
        start=start->next;
        free(temp);
        head->next=start;
        start->back=head;
    }
    return start;
}
node *mid_deletion(node *start,int item)
{
    node *head, *temp;
    if(start==NULL || start->next==start || start->next->next==start || start->data==item)
        printf("Invalid Item / Create 3 nodes.\n");
    else
    {
        head = start;
        while(head->next->next!=start && head->next->data!=item)
            head = head->next;
        if(head->next->next==start)
            printf("Invalid Item.\n");
        else
        {
            temp=head->next;
            head->next=temp->next;
            temp->next->back=head;
            free(temp);
        }
    }
    return start;
}
node *last_deletion(node *start)
{
    node *temp, *head;
    if(start==NULL || start->next==start)
        printf("Create two nodes\n");
    else
    {
        head=start;
        while(head->next->next!=start)
            head=head->next;
        temp=head->next;
        head->next=temp->next;
        temp->next->back=head;
        free(temp);
    }
    return start;
}
