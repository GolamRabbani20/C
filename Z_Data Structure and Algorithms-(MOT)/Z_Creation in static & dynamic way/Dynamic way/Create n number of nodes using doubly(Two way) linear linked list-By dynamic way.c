#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list{
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
        printf("Do you want to create a node(Y/N): ");
        fflush(stdin);
        ans=toupper(getchar());
        if(ans=='Y')
        {
            if(start==NULL)
            {
                start=(node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d",&start->data);
                start->next=NULL;
                start->back=NULL;
                prev=start;
            }
            else{
                temp=(node*)malloc(sizeof(node));
                fflush(stdin);
                scanf("%d",&temp->data);
                temp->next=NULL;
                temp->back=prev;
                prev->next=temp;
                prev=temp;
            }
        }

    }while(ans=='Y');
    temp1=start;
    printf("%d ",start->data);
    while(temp1->next!=NULL)
    {
        printf("%d ",temp1->next->data);
        temp1=temp1->next;
    }
}
