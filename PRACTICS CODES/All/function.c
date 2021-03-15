#include<stdio.h>
int love(int n)
{
    int i;
    for(i=1; i<=n; i=i+2)
        printf("%d\n",i++);
}
int main()
{
    int m;
    printf("Enter the value of M:");
    scanf("%d",&m);
    love(m);
    return 0;

}
