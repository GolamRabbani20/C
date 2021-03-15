#include<stdio.h>
int main()
{
    char s1[300],s2[300];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);
    strcat(s1 ,s2);
    printf("The new string is :%s\n",s1);
    return 0;
}
