#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list{
    int data;
    struct list *next;
};
typedef struct list node;
void main()
{
  node *start,*next,*prev,*temp,*temp1;
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
            prev=start;
            start->next=prev;

        }
        else{
            temp=(node*)malloc(sizeof(node));
            fflush(stdin);
            scanf("%d",&temp->data);
            temp->next=start;
            prev->next=temp;
            prev=temp;
        }
    }

  }while(ans=='Y');
  printf("Out put\n");
  printf("-------------\n");
  temp1=start;
  printf("%d ",start->data);
  while(temp1->next!=start){
    printf("%d ",temp1->next->data);
    temp1=temp1->next;
  }

}
