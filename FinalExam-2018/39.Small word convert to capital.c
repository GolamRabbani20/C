#include<stdio.h>
int main()
{
    char s[300];
    int i=0;
    gets(s);
   while(s[i]!='\0')
    {
        if(s[i]>=97 && s[i]<=122)
        s[i]=s[i]-32;
        i++;
    }
    printf("\nCapital word= %s",s);
    return 0;
}
