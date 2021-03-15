#include<stdio.h>
struct student_information
{
    char st_name[20];
    int roll;
    double marks;
}Rohim,Korim;
int main()
{
    scanf("%s",Rohim.st_name);
    scanf("%d",&Rohim.roll);
    scanf("%lf",&Rohim.marks);
    scanf("%s",Korim.st_name);
    scanf("%d",&Korim.roll);
    scanf("%lf",&Korim.marks);
    printf("Student name:%s\n Roll:%d\n Marks:%lf\n",Rohim.st_name,Rohim.roll,Rohim.marks);
    printf("Student name:%s\n Roll:%-10d\n Marks:%lf\n",Korim.st_name,Korim.roll,Korim.marks);
    return 0;
}
