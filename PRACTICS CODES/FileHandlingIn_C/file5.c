#include<stdio.h>
int main()
{
    FILE *x;
    char ch;
    x=fopen("takeString.txt","r");
    if(x==NULL)
        printf("File does not exit here!\n");
    else{
        printf("File opened successfully.\n");
        while(!feof(x))
        {
            ch=fgetc(x);
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
