#include<stdio.h>
int main()
{
    int ara[1000],n,m,i,count=0;
    printf("Enter array size(Size<1000) : ");
    scanf("%d",&n);
    printf("Enter the elements of the array :\n");
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    printf("Enter a number that you want to see : ");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        if(ara[i]==m)
        {

            count++;
        }
         printf("%d is found in the array\n",m);
    }
    printf("The frequency of %d ,\"Rabbani\"in the array is : %d\n",m,count);
    return 0;
}
