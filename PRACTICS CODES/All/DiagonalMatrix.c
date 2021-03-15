#include<stdio.h>
int main()
{
    int A[20][20],i,j,row,col;
    printf("Enter row & column numbers: ");
    scanf("%d %d",&row,&col);
    while(row!=col)
    {
        printf("Error!\n");
        printf("Enter row will be equal to column numbers: ");
        scanf("%d %d",&row,&col);
    }

     printf("Enter the elements of the matrix:\n");
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
             printf("\t\t\t A[%d][%d]=",i,j);
             scanf("%d",&A[i][j]);
         }
         printf("\n");
     }

     printf("The  given matrix: \n");
     for(i=0;i<row;i++)
     {
         printf("\t\t");
         for(j=0;j<col;j++)
         {
            printf("%d ",A[i][j]);
         }
         printf("\n");
     }
     printf("\n");

     main_diagonal(A,row,col);
     Above_diagonal(A,row,col);
     Bellow_diagonal(A,row,col);

     return 0;
}

void main_diagonal(int A[20][20],int r,int c)
{
    int i,j,sum=0;
    printf("The elements of main diagonal are:");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
            while(i==j){
            printf("%d ",A[i][j]);
            sum=sum+A[i][j];
            i++;
            }
        }
    }
    printf("\nThe summation of main-diagonal is: %d\n",sum);

}


 void Above_diagonal(int A[20][20],int r,int c)
{
    int i,j,sum=0;
    printf("\nThe elements of Above main-diagonal is :\n");
    for(i=0;i<r;++i)
    {
         printf("\t\t\t\t");
        for(j=0;j<c;++j)
        {
            if(i<j)
            {
            printf("\%d ",A[i][j]);
            sum=sum+A[i][j];
            }
        }
        printf("\n");
    }
    printf("The summation of elements above main-diagonal is : %d\n",sum);
}

 void Bellow_diagonal(int A[20][20],int r,int c)
 {
     int i,j,sum=0;
     printf("\nThe elements Bellow main diagonal are:\n");
     for(i=0;i<r;i++)
     {
         printf("\t\t\t\t");
         for(j=0;j<c;j++)
         {
             if(i>j){
            printf("\%d ",A[i][j]);
            sum=sum+A[i][j];
             }

         }
          printf("\n");
     }
     printf("Summation of Bellow elements of main diagonal:%d \n",sum);
 }
