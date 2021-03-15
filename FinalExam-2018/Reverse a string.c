#include<stdio.h>
int main()
{
    char s1[300],s2[300];
    int len=0,i,j;
    printf("Enter a string : ");
    gets(s1);
    len=strlen(s1);
    for(j=0,i=len-1;i>=0;i--,j++)
    s2[j]=s1[i];
    s2[j]='\0';
    printf("The verse of string is :%s\n",s2);
    return 0;
}
