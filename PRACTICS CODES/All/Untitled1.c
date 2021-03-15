#include<stdio.h>
int subtract(int a,int b)
{
    return a-b;
}
int sum(int m,int n)
{
    int sum=m+n;
    return sum;
}
float divided(int s,int w)
{
    float divition=s/w;
    return divition;
}
int main()
{
    int p,q,result,result2;
    float result3;
    printf("Enter p:");
    scanf("%d",&p);

    printf("Enter q:");
    scanf("%d",&q);
     result3=divided(p,q);
     printf("Division:%f\n",result3);

   result=sum(p,q);
   printf("Sum=%d\n",result);
   printf("Result=%d",subtract(p,q));
   printf("Result7=%d",subtract(56,60));

    getch();
}
