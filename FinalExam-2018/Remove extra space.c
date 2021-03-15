#include<stdio.h>
#include<string.h>
int main()
{
    char text[300],blank[300];
    int i=0,j=0;
    printf("Enter a text : ");
    gets(text);
    while(text[i]!='\0')
    {
        if(!(text[i]==' '&& text[i+1]==' '))
        {
            blank[j]=text[i];
            j++;
        }
        i++;
    }
    blank[j]='\0';
    printf("New text is :%s\n",blank);
    return 0;
}
