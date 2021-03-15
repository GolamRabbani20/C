#include<stdio.h>
int main()
{
    int i,j,k,n,c3=0,c1=0,c2=0;
    scanf("%d",&n);
    for(i=1; i<=200; i++)
    {
        c1++;
        for(j=1; j<=n; j=j*2)
        {
            c2++;
            printf("@\n");

            for(k=1; k<=n; k++)
            {

                printf("DIU\n");
                c3++;
        }
    }
    }
    printf("\nCount1=%d\n",c1);
    printf("Count2=%d\n",c2);
    printf("Count3=%d\n",c3);
}
