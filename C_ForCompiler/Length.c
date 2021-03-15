#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter a string:");
    gets(str);
    //printf("The string is:%s\n\n",str);
    int i=0,len=0;
    for (;str[i]!='\0';i++)
        len++;
    printf("The Length is:%d\n\n",len);
    printf("The Length is: %d",strlen(str));
    return 0;
}
