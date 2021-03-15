#include<stdio.h>
int main()
{
    char str1[10000];
    printf("Enter a string:");
    gets(str1);
    int k=0,len=0;
    for(;str1[k]!='\0';k++)
        len++;
    //printf("Number of char:%d\n\n",len);

    int i=0;
    printf("\nReversed string:");
    for(i=len;i>=0;i--)
        printf("%c",str1[i]);
    printf("\n");
    return 0;
}
