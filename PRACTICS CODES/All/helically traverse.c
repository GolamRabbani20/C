#include<stdio.h>
int main()
{
    int A[20][20],size,i,j;
    printf("Enter row & col number of a Square matrix: ");
    scanf("%d",&size);

    printf("Enter the elements of the matrix:\n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("\t\t\tA[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("The Given Square matrix is:\n");
    for(i=0; i<size; i++)
    {
        printf("\t\t\t");
        for(j=0; j<size; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    Helically(A,size);
    return 0;
}
void Helically(int B[20][20],int n)
{
    int row,col;
    printf("Helically result is: ");
    row=1;
    while(n>0)
    {
        for(col=row; col<n+1; col++)
            printf("%d -> ",B[row][col]);
        for(col=row+1; col<n+1; ++col)
            printf("%d -> ",B[col][n]);
        for(col=n-1; col>row-1; col--)
            printf("%d ",B[n][col]);
        for(col=n-1; col>row; col--)
            printf("%d ",B[col][row]);
        row++;
        n--;
    }
}
