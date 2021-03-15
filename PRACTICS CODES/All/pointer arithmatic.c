#include<stdio.h>
int main()
{
    int *m,x=10;
    m=&x;

    printf("%d\n",x);
    printf("%d\n",m);
    printf("%d\n",*m);

    printf(".....................................\n");

     --m;
     printf("M=%d\n",m);
     ++(*m);
     printf("M1=%d\n",*m);
     --m;
     printf("%d\n",m);
     m=m+2;
     printf("%d\n",m);

     return 0;
}
