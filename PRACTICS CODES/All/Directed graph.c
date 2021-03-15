#include<stdio.h>
int Adj[100][100];
int main()
{
    int nodes,edges,n1,n2,i,j;
    printf("Enter the number of Nodes & Edges: ");
    scanf("%d %d",&nodes,&edges);

    printf("Enter the connected nodes:\n");
    for(i=0; i<edges; i++)
    {
        printf("\t\t\t");
        scanf("%d %d",&n1,&n2);
        Adj[n1][n2]=1;
    }

    printf("The connected Adjacent matrix is:\n");
    for(i=0; i<nodes; i++)
    {
        printf("\t\t\t");
        for(j=0; j<nodes; j++)
        {
            printf("%4d",Adj[i][j]);
        }
        printf("\n");
    }
    return 0;
}
