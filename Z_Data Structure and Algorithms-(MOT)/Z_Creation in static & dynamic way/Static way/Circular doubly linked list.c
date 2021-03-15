#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next,*back;
};
typedef struct list node;
void main()
{
    node *temp,*temp1,*temp2;
    temp=(node*)malloc(sizeof(node));
    temp1=(node*)malloc(sizeof(node));
    temp2=(node*)malloc(sizeof(node));

    temp->next=temp1;temp1->next=temp2;temp2->next=temp;
    temp->back=temp2;temp2->back=temp1;temp1->back=temp;

    fflush(stdin);
    scanf("%d %d %d",&temp->data, &temp1->data, &temp2->data);
    fflush(stdout);
    printf("%d %d %d",temp->data, temp1->next->data, temp2->data);
    return 0;

}
