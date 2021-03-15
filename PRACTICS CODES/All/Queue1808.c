#include<stdio.h>
int l_index=0;
int h_index=0;
int main()
{
    int i,S,data,A[100];

    printf("Enter Queue size: ");
    scanf("%d",&S);
    printf("Enter the data: \n");
    for(i=0; i<=S; i++)
    {

        scanf("%d",&data);
        insert(S,data,A);
    }

    printf("\tThe Queue is:\n");
    for(i=1; i<=S; i++)
        printf("\t%d\n",A[i]);

    return 0;
}
void insert(int S,int x,int A[100])
{
    l_index=(l_index+1)%(S+1);
    if(l_index==h_index)
        printf("Queue is full!\n");
    else
        A[l_index]=x;

}
