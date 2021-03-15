#include<stdio.h>
int main()
{
    int x=100;
    int *m=&x;

    printf("%d\n",x);// output=100
    printf("%d\n",&x); // output=6356732
    printf("%d\n",*(&x)); // output=100

    printf("...........................................\n");

    printf("%d\n",m); /// Output=6356732
    printf("%d\n",*m); ///Output=100
    printf("%d\n",&m); ///Output=6356728
    printf("%d\n",&(*m));

    printf("...........................................\n");

    *m=2019;
    printf("%d\n",*m); //Output=2019
    printf("%d\n",x);  //Output=2019


    return 0;
}
