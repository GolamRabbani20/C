#include<stdio.h>
int main()
{
    int a[]={2,5,6,32,4,652,23,89,2,7,52,8,5,2,5,0,15,22,5,2,45,5,5,4,5,5,4,4,5,12};
    int x=sizeof(a)/sizeof(a[0]);//120/4=30 ti data
    int s=sizeof(a);//30*4=120 bits
    int s1=sizeof(a[]);//4 bits; Becasue an integer take 4 bits space
    printf("S1=%d\n",s1);
    printf("s=%d\n",s);
    printf("Size is:%d\n",x);
    }
