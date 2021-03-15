#include<stdio.h>
struct Bank_account
{
    char em_name[20];
    double salary;
    int work_hour,age;
}em[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
    scanf("%s",em[i].em_name);
    scanf("%lf",&em[i].salary);
    scanf("%d",&em[i].work_hour);
    scanf("%d",&em[i].age);
    }
    for(i=0;i<3;i++)
    printf("Employee Name:%s\n Salary:%lf\n Working hours:%d\n Age:%d\n",em[i].em_name,em[i].salary,em[i].work_hour,em[i].age);

}
