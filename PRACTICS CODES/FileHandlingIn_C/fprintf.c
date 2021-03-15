#include<stdio.h>
int main()
{
    char str[200],str1[20];
    FILE *n;
    int h;
    n=fopen("take input.txt","a");
    if(n==NULL)
        printf("File does not exit!\n");
    else
    {
        printf("File has been opened successfully.\n");
        printf("Enter your name: ");
        gets(str);
        printf("Enter your Versity name:");
        gets(str1);
        printf("Enter your Age: ");
        scanf("%d",&h);
        fputs("\n",n);
        fprintf(n,"Name:%s\nVersity name:%s\nAge:%d\n",str,str1,h);
    }
    return 0;
}
