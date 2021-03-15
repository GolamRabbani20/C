#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],word[100];
    int i,j ,flag;
    gets(str);
    gets(word);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==word[0])
            flag=1;
        for(j=0;word[j]!='\0';j++)
        {
            if(str[i+j]!=word[j])
            {
                flag=0;
                break;
            }
        }
    if(flag==1)
        break;
}
    if(flag==0)
    printf("we do not found the word %s",word);
    else
    printf("We found %s at position %d",word,i+1);
    return 0;
}
