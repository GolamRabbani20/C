#include<stdio.h>
int main()
{
    int x[5],i;
    double sum=0,count=0;
    for(i=0;i<5;i++)
    scanf("%d",&x[i]);
    for(i=0;i<5;i++)
    {
        if(x[i]%3==0)
            {
             sum=sum+x[i];
             count++;

            }

    }
    printf("Summation= %.2lf\n",sum);
    printf("Average:%.2lf\n",sum/count);
    return 0;
}
