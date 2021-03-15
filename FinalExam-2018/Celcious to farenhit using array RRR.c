#include<stdio.h>
int main()
{
     double cel[500],F;
     int i,n;
    printf("Enter array size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%lf",&cel[i]);
    printf("Fahrenheit:");
    for(i=0;i<n;i++)
    {
    F=((cel[i]*9)/5+32);

    printf("%.2lf  ",F);
    }
    return 0;
}
