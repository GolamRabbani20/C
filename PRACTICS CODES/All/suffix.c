#include<stdio.h>
int main()
{
    int i=5,j;
    j=i--;
    printf("I=%d",i);
    printf("\nJ=%d",j);
    j=--i;
    printf("\nJ=%d",j);
    printf("\nI=%d",i);

}
