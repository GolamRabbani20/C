#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *x;
    x=fopen("niton.txt","w");
    char ch[200];
    printf("File has been opened please write something: ");
    gets(ch);
    puts(x);
    fclose(x);
    x=fopen("niton.tex","r");
    //printf("In file data:\n");
    while(!feof(x)){
        printf("%c",ch);
    }
    fclose(x);
    return 0;
}

