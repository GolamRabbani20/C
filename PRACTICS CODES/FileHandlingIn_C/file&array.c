#include<stdio.h>
int main()
{
    FILE *x;
    x=fopen("arrayinput.txt","w");
    char ch[50];
    printf("Enter value: ");
    gets(ch);
    fputs(x);

}
