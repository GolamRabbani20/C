#include<stdio.h>
int main()
{
    int i,j,B[10][10];
    B[0][0] = 1;
    for(i=0;i<1;i++)
    {
        for(j=1;j<=5;j++)
        {
             B[i][j] =0;
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(i>j)
            {
                B[i][j]=B[i-1][j];
            }

            else{
                B[i][j]=B[i-1][j] + B[i][j-i];
            }

        }
    }
    for(i=0 ; i<=3 ; i++)
    {
        for(j=0 ;j<=5 ;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}
