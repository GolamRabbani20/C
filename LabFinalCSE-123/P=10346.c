#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<=2 || a%2!=0)
	{
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	return 0;
}
