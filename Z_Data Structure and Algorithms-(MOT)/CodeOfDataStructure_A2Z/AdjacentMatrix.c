#include<stdio.h>
int main()
{
    int i , j ;
    int A[4][4];
    char ch[]={'A' , 'B' , 'C' , 'D'};
    for(i=0 ; i<4 ; i++)
    {
        for(j =0 ; j<4 ; j++)
        {
            printf("A[%d][%d]=  ",i , j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0 ; i<4 ; i++)
    {
        for(j =0 ; j<4 ; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
     for(i=0 ; i<4 ; i++)
    {
        for(j =0 ; j<4 ; j++)
        {
            if(A[i][j]==1)
            printf("%c->%c   ",ch[i],ch[j]);
        }
        printf("\n");
    }
return 0;
}
