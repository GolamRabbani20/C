#include<stdio.h>
int main()
{
	int x=-1,y=0,z=-2;
	x+=2;
	z=x+y;
	printf("1.x=%d\n",x++);
	y=x+2;
	printf("2.y=%d\n",--y);
	printf("3.z=%d\n",z++);
	return 0;
}
