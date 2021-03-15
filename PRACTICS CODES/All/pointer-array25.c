#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
      scanf("%d",&a[i]);

    printf(">>>>>Array is>>>>>>>\n");
    for(i=0; i<n; i++)
        printf("\ta[%d]=%d\n",i,&a[i]);

    printf(">>>>>>>>>>>>>>>Value is>>>>>>>>>>>>\n");
    for(i=0; i<n; i++)
        printf("\ta[%d]=%d\n",i,a[i]);

    return 0;

}
