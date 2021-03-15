#include<stdio.h>
int main()
{
    int r,c,i,j,A[100][100], B[100][100],C[100][100];

    printf("Enter the number of rows,R : ");
    scanf("%d",&r);
    printf("Enter the number of column,C: ");
    scanf("%d",&c);

    printf("\n");
    printf("Enter elements for A matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t\tEnter A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("\t\n\nA =");

    for(i=0; i<r; i++)
    {
        printf("\t\t");
        for(j=0; j<c; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter elements for B matrix:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t\tEnter A[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }

        printf("\n");
    }

    printf("\t\n\nB = ");

    for(i=0; i<r; i++)
    {
        printf("\t\t");
        for(j=0; j<c; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }



    return 0;
}
