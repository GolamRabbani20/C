#include<stdio.h>
int main()
{
    char s[300];
    int i=0,length=0;
    gets(s);
    while(s[i]!='\0')
    {
    length++;
    i++;
    }

    printf("Length of the string is :%d\n",length);
    return 0;
}
