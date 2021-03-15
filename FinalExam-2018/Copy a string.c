#include<stdio.h>
int main()
{
    char s1[300],s2[300];
    printf("Enter first string : ");
    gets(s1);
    strcpy(s2,s1);
    printf("S2=%s\n",s2);
    return 0;
}
