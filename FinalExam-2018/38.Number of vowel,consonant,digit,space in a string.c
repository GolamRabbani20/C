#include<stdio.h>
int main()
{
    char s[300];
    int i=0,vowel=0,consonant=0,space=0,digit=0;
    printf("Enter a string : ");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||
        s[i]=='I'||s[i]=='O'||s[i]=='U')
        vowel++;
        else if(s[i]>='0'&& s[i]<='9')
        digit++;
        else if(s[i]==' ')
        space++;
        else
        consonant++;
        i++;
    }
    printf("Number of vowel is:%d\n",vowel);
    printf("Number of digit is:%d\n",digit);
    printf("Number of space is:%d\n",space);
    printf("Number of consonant is:%d\n",consonant);
    return 0;
}
