#include<stdio.h>
int main()
{
    char s[300],n;
    int i=0,count=0;

    gets(s);
    printf("Enter a character : ");
    scanf("%c",&n);
    while(s[i]!='\0')
    {
        if(s[i]==n)
        count++;
        i++;
    }


    printf("Frequency of character : %d\n",count);
    return 0;
}
