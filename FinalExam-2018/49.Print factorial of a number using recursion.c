#include<stdio.h>
int main()
{
     int n;
    printf("Enter n:");
    scanf("%d",&n);
    int result=fact(n);
    printf("Factorial value of n is:%d\n",result);
    return 0;

}

 int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
