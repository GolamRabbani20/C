#include<stdio.h>
int main()
{
    int s[1000],n,i,negative=0,odd=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
         for(i=0;i<n;i++)
         {
            if(s[i]<0)
            negative++;
            else if(s[i]%2==1)
            odd++;
         }
         printf("Total negative numbers :%d\n",negative);
         printf("Total odd numbers :%d\n",odd);
         return 0;
}
