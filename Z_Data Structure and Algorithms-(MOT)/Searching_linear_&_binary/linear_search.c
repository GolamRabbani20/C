#include<stdio.h>
int main()
{
    int a[100],i,n,item,pos=-1,count=0;
    printf("Enter the size of array(<100): ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number that you want to search from the array: ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    printf("Not found! %d is n't present in the array.",item);
    else
    printf("%d is found in the position:%d",item,pos);
    return 0;
}
