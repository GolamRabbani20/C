#include<stdio.h>
int main()
{
    float d=2020;
    float *c=&d;
    printf("%f\n",d);
    printf("%x\n",&d);
    printf("%f\n",*c);

    printf("................................\n");

    *c=120.25;
    printf("%f\n",*c);
    printf("%f\n",d);
    printf("%d\n",&c);
    printf("%f\n",*(&c));

    return 0;
}
