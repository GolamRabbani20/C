#include<stdio.h>
int main()
{   char s1[5];
    int i=0;
    //printf("Enter a name:");
    for(i=0;i<5;i++)
       scanf("%c",&s1[i]);
    int k=0;
    while(s1[k]!='\0')
        printf("The name is:%c",s1[k]);
        k++;
    return 0;
}
