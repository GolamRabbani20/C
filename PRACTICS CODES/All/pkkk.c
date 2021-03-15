#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=1;i<=200;i++)
    {

        for(j=1;j<=n;j=j*2)
        {

            for(k=0;k<n;k++)
            printf("DIU ");
        }
    }
    printf("\a");
}
