#include<stdio.h>
int main()
{
    char s[300];
    printf("Enter a string : ");
    gets(s);
    printf("The first letter of the string is :%c\n",s[0]);
    return 0;
}
