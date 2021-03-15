#include<stdio.h>
int main()
{
    int i=0;
    double n,result;
    printf("Enter your amount: ");
    scanf("%lf",&n);
    while(n!<500)
    {
        result=n*0.05;
        printf("Month no %d,you have to paid:%.2lf\n",i+1,result);

        n=n-result;
        //n=n+result;
        i++;
    }
    printf("You total %d taka\n",n);
    return 0;
}
