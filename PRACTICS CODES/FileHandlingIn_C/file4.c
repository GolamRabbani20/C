#include<stdio.h>
int main()
{
    FILE *fp;
    char *f_name;
    printf("Enter file name: ");
    gets(f_name);
    if(fp=fopen(f_name,"r")==NULL)
        printf("Sorry file not found\n");
    else{
        printf("\n \"%s\"File found",f_name);
    }
}
