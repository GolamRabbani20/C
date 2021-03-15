#include<stdio.h>
int main()
{
    char name[200];
    FILE *x;
    x=fopen("takeString.txt","a");
    if(x==NULL)
        printf("File does not open\n");
    else
    {
        printf("File has been opened successfully!\n");
        printf("Enter a string: ");
        gets(name);
        fputs(name,x);
        fputs("\n",x);
        printf("String has been written successfully.\n");

        fclose(x);
    }

}
