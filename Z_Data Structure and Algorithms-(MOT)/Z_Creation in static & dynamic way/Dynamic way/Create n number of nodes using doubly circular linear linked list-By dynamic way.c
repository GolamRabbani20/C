#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list
{
    int data;
    struct list *next,*back;
};
typedef struct list node;
void main()
{
    node *start,*temp,*prev,*temp1;
    char ans;
    start=NULL;
    do{
        fflush(stdout);
        printf("Do you want to create a node(Y/N):");
        fflush(stdin);
        ans=toupper(getchar());

        if(ans=='Y')
        {
            if(start==NULL)
            {
                start=(node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d",&start->data);
                prev=start;
                prev->next=start;
                prev->back=start;
            }
            else{
                temp=(node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d",&temp->data);
                prev->next=temp;
                temp->back=prev;
                prev=temp;
                prev->next=start;
                start->back=prev;
            }
        }
    }while(ans=='Y');
    temp1=start;
    //fflush(stdout);
    printf("%d ",start->data);
    while(temp1->next!=start)
    {
        //fflush(stdout);
        printf("%d ",temp1->next->data);
        temp1=temp1->next;
    }
}

