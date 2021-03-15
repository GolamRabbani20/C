#include<stdio.h>
int main()
{
   int i,first,mid,last,item,n,A[200];

   printf("Enter array size: ");
   scanf("%d",&n);

   printf("Enter the elements of the array: ");
   for(i=0;i<n;i++)
   scanf("%d",& A[i]);

   printf("Enter the item that U want to search: ");
   scanf("%d",&item);

   first=0;
   last=n-1;
   mid=(first+last)/2;

   while(first<last)
   {
       if(item==A[mid])
        {
       printf("The item is found at the position of %d",mid+1);
       break;
       }
        else if(item>A[mid])
            first=mid+1;
        else
        last=mid-1;
        mid=(first+last)/2;
   }
   if(first>last)
   printf("\n item %d is not in the array",item);
   return 0;
}
