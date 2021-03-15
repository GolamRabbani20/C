#include<stdio.h>
int main()
{
    int a[100],n,i,first,last,mid,item;
    printf("Enter the array size(<100): ");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number that you want to search: ");
    scanf("%d",&item);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(item==a[mid])
        {
        printf("%d item is found at the position %d .",a[mid],mid+1);
        break;
        }
        else if(item>a[mid])
        first=mid+1;
        else
        last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
    printf("Not found! %d is n't present in the array.\n",item);

    return 0;
}
