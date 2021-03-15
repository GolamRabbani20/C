#include<stdio.h>
int main()
{
    FILE *x;
    x=fopen("input4.txt","a");
    char name[200]= {" Bangladesh is an Islamic country"};
    int i,length=strlen(name);

    if(x==NULL)
        printf("File dose not exit\n");
    else
    {
        printf("File is open successfully!\n");
        for(i=0; i<length; i++)
        fputc(name[i],x);
        printf("File is written successfully.\n");
        fclose(x);
    }
}
