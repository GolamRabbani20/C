#include<stdio.h>
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    printf("Fibonacci numbers are:%d",fibo(n));
    return 0;
}
 int fibo(int n)
 {
     if(n<=1)
        return n;
     return(fibo(n-1)+fibo(n-2));

 }
