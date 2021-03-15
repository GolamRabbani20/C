#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter a your full name:");
    //scanf("%s",&a);
    gets(a);
    printf("Your full name is:%s\n\n",a);
    puts(a);
    return 0;
}
