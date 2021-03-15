#include<stdio.h>
int A[20][20];
int main()
{
    int nodes,edges,n1,n2,i,j,weight;
    printf("Enter nodes & edges number: ");
    scanf("%d %d",&nodes,&edges);

    printf("Enter connected nodes and weight:\n");
    for(i=0;i<edges;i++)
    {
        scanf("%d %d %d",&n1,&n2,&weight);
        A[n1][n2]=weight;
        A[n2][n1]=weight;
    }

    printf("The Adjacent matrix is:\n");
    for(i=0;i<nodes;i++)
    {
        printf("\t\t\t");
        for(j=0;j<nodes;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
