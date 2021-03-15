#include<stdio.h>
int main()
{
    char a[200];
    FILE *x;
    x=fopen("input9.txt","w");
    if(x==NULL)
        printf("Error\n");
    else{
        printf("Successful\n");
        printf("Enter: ");
        gets(a);
        fputs(a,x);
        fclose(x);
    }
    return 0;
}
