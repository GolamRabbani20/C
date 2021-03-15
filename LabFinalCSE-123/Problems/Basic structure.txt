#include<stdio.h>

struct student{

    char name[10];
    int roll;
    float cgpa;
};
int main()
{
    struct student student1,student2;
    printf("Student 1 :\n");
    strcpy(student1.name,"Habib");
    student1.roll=1907;
    student1.cgpa=3.88;
    printf("Name :%s\n",student1.name);
    printf("Roll :%d\n",student1.roll);
    printf("Cgpa :%f\n",student1.cgpa);

    printf("Student 2 :\n");
    strcpy(student2.name,"Ashik");
    student2.roll=1724;
    student2.cgpa=3.88;
    printf("Name :%s\n",student2.name);
    printf("Roll :%d\n",student2.roll);
    printf("Cgpa :%f\n",student2.cgpa);
    return 0;
}
