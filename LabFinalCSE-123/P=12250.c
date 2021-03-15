#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int j=0;
	while(gets(str))
	{
		j++;
		if(strcmp(str,"#")==0)
		{
			break;
		}
		else if(strcmp(str,"HELLO")==0)
		{
			printf("Case %d :ENGLISH\n",j);

		}
		else if(strcmp(str,"HOLA")==0)
		{
			printf("Case %d :SPANISH\n",j);
		}
		else if(strcmp(str,"BONJOUR")==0)
		{
			printf("Case %d :FRENCH\n",j);
		}
		else if(strcmp(str,"CIAO")==0)
		{
			printf("Case %d :ITALIAN\n",j);
		}
		else if(strcmp(str,"ZDRAVSTVUJTE")==0)
		{
			printf("Case %d :RUSSHIAN\n",j);
		}
		else
		{
			printf("UNKNOWN\n");
		}
		return 0;
	}

