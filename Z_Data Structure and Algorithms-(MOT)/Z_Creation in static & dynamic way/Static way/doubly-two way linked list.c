#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next, *back;
};
typedef struct list rabbani;
int main()
{
    rabbani *temp1, *temp2, *temp3;
    temp1=(rabbani*)malloc(sizeof(rabbani));
    temp2=(rabbani*)malloc(sizeof(rabbani));
    temp3=(rabbani*)malloc(sizeof(rabbani));

    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=NULL;
    temp3->back=temp2;
    temp2->back=temp1;
    temp1->back=NULL;
    fflush(stdin);
    scanf("%d %d %d",&temp1->data,&temp2->data,&temp3->data);
    fflush(stdout);
    printf("%d %d %d",temp1->next->data,temp2->data,temp3->back->back->data);
    return 0;
}
