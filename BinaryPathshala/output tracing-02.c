#include<stdio.h>
int main()
{
	int x=-1,y=-5,z=1;
	x=x++ + ++y;
	printf("1.x = %d\n",x++);
	z=x+(-5);
	printf("2.y=%d\n",y++);
	x=y;
	printf("3.z=%d\n",--z);
	return 0;
}
