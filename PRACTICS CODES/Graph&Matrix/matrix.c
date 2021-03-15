#include<stdio.h>
int A[5][5];

int main()
{
    int i,j;
    printf("\t");
    for(i=0;i<5;i++)
    {
        printf("\t\t");
        for(j=0;j<5;j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
