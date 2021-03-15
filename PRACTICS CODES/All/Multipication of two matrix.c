#include<stdio.h>
int main()
{
    int i,j,k,r1,c1,r2,c2,sum=0;

    int A[20][20],B[20][20],C[20][20];

    printf("Enter the number of row and column for A: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of row and column for B:");
    scanf("%d %d",&r2,&c2);
    if(c1==r2){

    printf("Enter the elements for matrix A:\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\t\t\t A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    printf("Enter the elements for matrix B:\n");

    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("\t\t\t B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("\t\n\nA=");
    for(i=0; i<r1; i++)
    {
        printf("\t\t\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\t\t\n\nB=");
    for(i=0; i<c1; i++)
    {
        printf("\t\t\t");
        for(j=0; j<r2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<r2;i++)               //c1 or r2 j kono akta use korlaii hobe,because c1=r2;
    {
        for(j=0;j<c1;j++)           //c1 or r2 j kono akta use korlaii hobe,because c1=r2;
        {
            for(k=0;k<r2;k++)       //c1 or r2 j kono akta use korlaii hobe,because c1=r2;
            {
                sum=sum+A[i][k]*B[k][j];


            }

                     C[i][j]=sum;
                     sum=0;
        }

    }

     printf("\t\n\nResulted Matrix is\n");
     for(i=0;i<r2;i++)                   //c1 or r2 j kono akta use korlaii hobe,because c1=r2;
     {
         printf("\t\t\t");
         for(j=0;j<c1;j++)               //c1 or r2 j kono akta use korlaii hobe,because c1=r2;
         {
             printf("%d ",C[i][j]);
         }
         printf("\n");
     }
    }
    else
    printf("\nMultiplication is not possible because c1 != r2");

    return 0;
}
