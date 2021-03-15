#include<stdio.h>
int main()
{
   int a[2][3]={4,8,7,10,22,33};
   int b[3][2]={6,14,9,5,11,44};
   int c[2][2],i,j,k,sum;
   printf("Matrix A is :\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       printf("%5d\t",a[i][j]);
       printf("\n\n");
   }
   printf("Matrix B is :\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<2;j++)
       printf("%5d\t",b[i][j]);
       printf("\n\n");
   }
   printf("Matrix C is :\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
          sum=0;
          for(k=0;k<2;k++)
          sum=sum+a[i][k]*b[k][j];
          c[i][j]=sum;
          printf("%5d\t",c[i][j]);
        }
      printf("\n\n");
   }
   return 0;
}

