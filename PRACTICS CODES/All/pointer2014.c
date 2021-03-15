#include<stdio.h>
int main()
{
    struct mydata
    {
        int age;
        double height;
    } s1;

   struct mydata *m;
   m=(struct mydata*)malloc(sizeof(struct mydata));
   m->age=25;
   m->height=12.36;

   printf("%d\n",m->age);
   printf("%f\n",m->height);

    return 0;
}
