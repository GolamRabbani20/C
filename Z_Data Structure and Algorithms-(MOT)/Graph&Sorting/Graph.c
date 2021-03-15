#include <stdio.h>
void main()
{
    int A[4][4], i, j;
    char C[]= {'A','B','C','D'};

    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ", i,j);
            scanf("%d", &A[i][j]);
        }

    printf("\nAdjacent Matrix:\n");
    for(i=0; i<4; i++)
    {
        printf("\t");
        {
        for(j=0; j<4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
        }
    }
    printf("\nConnection:\n\t");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(A[i][j]==1)
                printf("%c->%c   ", C[i], C[j]);
        }
    }
    printf("\n\n");
}
