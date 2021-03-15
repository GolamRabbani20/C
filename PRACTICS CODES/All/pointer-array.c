#include<stdio.h>
int main()
{
    int a[3]={5,9,3};
    printf("\t%d\n",&a[0]);  // a=&a;
    printf("\t%d\n",a);

    printf("........................\n");

     printf("\t%d\n",a[0]);
     printf("\t%d\n",*a);  //a[0]=*a

     printf("........................\n");

     printf("\t%d\n",a[1]);
     printf("\t%d\n",*(a+1));

     return 0;
}
