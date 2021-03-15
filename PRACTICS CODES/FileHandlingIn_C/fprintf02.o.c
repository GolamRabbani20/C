#include<stdio.h>
int main()
{
  FILE *x;
  char r[200],r1[20],id[21];
  int age,p;
  x=fopen("panga.txt","w");

  printf("Enter your name:");
  gets(r);
  printf("Enter your college name: ");
  gets(r1);
  printf("Enter your age: ");
  scanf("%d",&age);
  printf("Enter your phone: ");
  scanf("%d",&p);
  printf("\nEnter your ID: ");
  gets(id);

  fprintf(x,"Name:%s\nCollege name:%s\nAge:%d\nPhone:%d5\nID:%s\n",r,r1,age,p,id);
  return 0;
}
