#include<stdio.h>
int main()
{
    int ara1[100],ara2[100],i,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    scanf("%d",&ara1[i]);
    printf("\nArray1:");
    for(i=0; i<n; i++)
    printf("%d ",ara1[i]);
    for(i=0; i<n; i++)
    ara2[i]=ara1[i];
    printf("\nArray2:");
    for(i=0; i<n; i++)
    printf("%d ",ara2[i]);
    return 0;

}
