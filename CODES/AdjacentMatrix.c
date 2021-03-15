#include<stdio.h>
int adjacent[100][100];
int main()
{
    int node,edges,i,j;
    int n1,n2;  // n1=node1,n2=node2
    printf("Enter node & edges number: ");
    scanf("%d %d",&node,&edges);

     printf("Enter connected nodes:\n");
    for(i=0;i<edges;i++)
    {
        printf("\t\t");
        scanf("%d %d",&n1,&n2);
        adjacent[n1][n2]=1;
        adjacent[n2][n1]=1;
    }
    printf("\n");

    for(i=0;i<node;i++)
    {
        printf("\t\t");
        for(j=0;j<node;j++)
        {
            printf("%d  ",adjacent[i][j]);
        }
        printf("\n");
    }
    return 0;
}
