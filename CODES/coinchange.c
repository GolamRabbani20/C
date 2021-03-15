// Given coins-(1,2,3)
// Total Taka = 5
// Findout the ways of this coin change

#include<stdio.h>
int A[4][6];
int main()
{
    int i,j;
    A[0][0]=1;



    for(i=1; i<4; i++)
    {
        for(j=0; j<6; j++)
        {
            if(i>j)
                A[i][j]=A[i-1][j];

            else
                A[i][j]=A[i-1][j]+A[i][j-i];

        }
    }

    printf("The ways of coin change:\n");
    for(i=0; i<4; i++)
    {
        printf("\t\t\t");
        for(j=0; j<6; j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    return 0;
}

