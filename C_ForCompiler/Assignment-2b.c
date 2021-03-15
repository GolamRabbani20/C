#include<stdio.h>
int main()
{
    char str[1000],str2[1000];
    int i,k=0,j=0,sp=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(!(str[i]==' ' && str[i+1]==' ')){
            str2[j]=str[i];
            j++;
        }
    }
    str2[j]='\0';
    while(str2[k]!='\0')
    {
        if(str2[k]==' ')
            printf("\n");
        else
         printf("%c",str2[k]);
         k++;
    }

return 0;
}
