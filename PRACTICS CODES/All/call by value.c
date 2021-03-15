#include<stdio.h>
int main()
{

    int x=120;
    change(x);
    printf("\t%d\n",x);
    return 0;
}
 void change(int m)
 {
     m=100;
     printf("\tX=%d\n",m);
 }
