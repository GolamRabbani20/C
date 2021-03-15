#include<stdio.h>
int main()
{
    int array[10000],i,n,max=0;

    printf("Enter array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<n;i++)
    {
     if(array[i]>0)
        max=array[i];
    }
    printf("Maximum number in the array= %d\n",max);
    return 0;
}
