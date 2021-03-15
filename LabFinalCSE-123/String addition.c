#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("Enter first string: \n");
	scanf("%s",a);
	printf("Enter second string: \n");
	scanf("%s",b);
	strcat(a,b);
	printf("string :%s",a);
	return 0;
}
