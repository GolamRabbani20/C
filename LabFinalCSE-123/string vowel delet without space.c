#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
			str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			{
				for(j=i;str[j]!='\0';j++)
				{
					str[j]=str[j+1];
				}
			}
	}
	printf("%s",str);
	return 0;
}
