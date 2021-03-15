//For undirected graph
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[100][100],i,j,n1,n2,node,edge,weight;

    printf("Enter the number of node and edge: ");
    scanf("%d %d",&node,&edge);

    printf("Enter connected nodes:\n");
    for(i=0; i<edge; i++)
    {
        scanf("%d %d %d",&n1,&n2,&weight);
        A[n1][n2]=weight;
        A[n2][n1]=weight;
    }

    printf("The Adjacent matrix of the graph is:\n");
    for(i=0; i<node; i++)
    {
        printf("\t\t");
        for(j=0; j<node; j++)
        printf("%d ",A[i][j]);
        printf("\n");
    }

     printf("Child of 0:");
    for(i=0;i<node;i++)
    {
        if(A[2][i]==1)
        printf("\t%d ",i);
    }
    return 0;
}
