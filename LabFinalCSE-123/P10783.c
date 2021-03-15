#include<stdio.h>
int main()
{
	int i,j,t,x,y,sum=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d %d",&x,&y);
		for(j=x;j<=y;j++){
			if(j%2==1){
				sum+=j;
			}
		}
		printf("Case %d : %d\n",i,sum);
		sum=0;
	}
	return 0;
}
