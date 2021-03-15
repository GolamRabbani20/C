#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
int main()
{
    node *temp1, *temp2, *temp3,*temp4;
    temp1=(node*)malloc(sizeof(node));
    temp2=(node*)malloc(sizeof(node));
    temp3=(node*)malloc(sizeof(node));
    temp4=(node*)malloc(sizeof(node));
    fflush(stdin);
    scanf("%d",&temp1->data);
    fflush(stdin);
    scanf("%d",&temp2->data);
    fflush(stdin);
    scanf("%d",&temp3->data);
    fflush(stdin);
    scanf("%d",&temp4->data);

    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp1;

    fflush(stdout);
    printf("%d ",temp2->next->next->next->data);
    printf("%d ",temp2->data);
    printf("%d ",temp3->data);
    printf("%d ",temp4->data);
    return 0;
}
