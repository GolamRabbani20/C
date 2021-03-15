#include<stdio.h>
int main()
{
    int n,i,*p[100],a[200];

    printf("Enter n: ");
    scanf("%d",&n);
    p[100]=&a[100];

    printf("Address\n");
    for(i=0; i<n; i++)
        printf("\t%d\n",p[i]);

    return 0;
}
