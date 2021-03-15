#include<stdio.h>
int main()
{
    int a[1000],i,n;
    printf("Enter array size(Maximum 1000) : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}
