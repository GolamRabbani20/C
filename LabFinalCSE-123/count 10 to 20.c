#include<stdio.h>
int main()
{
	int i,ara[10],count=0;
	for(i=0;i<10;i++){
		scanf("%d",&ara[i]);
	}
	for(i=0;i<10;i++)
	{
		if(ara[i]>10 && ara[i]<20)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
