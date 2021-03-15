#include<stdio.h>
void paterns(int m,int r,int c)
{
    int row=r,col=c,n=m;

    //int n,row,col;
    //printf("Enter N: ");
    //scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=row; col++)
            printf("*");
            printf("\n");
    }
}
 int main()
 {
     int m,r,c;
     printf("Enter N: ");
     scanf("%d",&m);
     paterns(m,c,r);
     return 0;
 }
