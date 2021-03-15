#include<stdio.h>
int main()
{
    FILE *z;
    z=fopen("standard.txt","w");
    char ch, a[200];
    int m;
    if(z==NULL)
        printf("Sorry!\n");
    else
    {
        printf("File opened successfully!\n");
        printf("Enter a string: ");
        gets(a);
        printf("Enter a number: ");
        scanf("%d",&m);
        fclose(z);
        display(a,z);
    }
    return 0;
}
void display(char a[200],FILE *z)
{

    z=fopen("standard.txt","r");

    char ch;
    while(feof(z))
    {
        ch=fgetc(z);
        printf("%c",ch);
    }
}
