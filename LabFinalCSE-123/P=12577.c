#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int j=0;
	while(gets(str))
	{
		j++;
		if(strcmp(str,"Hajj")==0)
		{
			printf("Case %d :Hajj-e-Akbar\n",j);
		}
		else if(strcmp(str,"Umrah")==0)
		{
		printf("Case %d :Hajj-e-Asghar\n",j);
		}
		else if(str[0]=='*')
		{
			break;
		}
	}
	return 0;
}
