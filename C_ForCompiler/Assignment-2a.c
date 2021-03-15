#include<stdio.h>
int main()
{
    char str[1000];
    int i,s=0,d=0,v=0,c=0;
    printf("Enter a string:");
    gets(str);
    for (i=0;str[i]!='\0';i++){
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
        else if(str[i]>='0' && str[i]<='9')
            d++;
        else if(str[i]==' ')
            s++;
        else
          c++;
    }
    printf("No of Vowel=%d",v);
    printf("\nNo of Consonant=%d",c);
    printf("\nNo of digits=%d\n",d);

    return 0;
}
