//store information using structure

#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float cgpa;
} s;

int main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.cgpa);


    printf("Displaying Information:\n");

    printf("Name: ");
    puts(s.name);

    printf("Roll number: %d\n",s.roll);

    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}
