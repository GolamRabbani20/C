#include<stdio.h>
int main()
{
    FILE *x;
    x=fopen("takeString.txt","r");
    char ch[100];
    if(x==NULL)
        printf("SORRY!");
    else
    {
        printf("File opened successfully.\n");

        while(!feof(x))
        {
            fgets(ch,2,x);
            printf("%s",ch);
        }
        printf("\n");
    }
    return 0;
}
