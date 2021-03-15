
#include<stdio.h>
int main()
{
    int array[10000],i,n,min=array[0];

    printf("Enter array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<n;i++)
    {
     if(array[i]<min)
        min=array[i];
    }
    printf("Minimum number in the array= %d\n",min);
    return 0;
}
