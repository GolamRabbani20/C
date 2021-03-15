#include <stdio.h>
int add_numbers(int n);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d",add_numbers(num));
    return 0;
}

int add_numbers(int n)
{
    if(n != 0)
    return n + add_numbers(n-1);
    else
    return n;
}
