 #include<stdio.h>
 struct Bank_account
 {
     char em_name[20];
     double salary;
     int work_hour,age;
 }Rakkos,Kokkosh;
 int main()
 {
    scanf("%s",Rakkos.em_name);
    scanf("%lf",&Rakkos.salary);
    scanf("%d",&Rakkos.work_hour);
    scanf("%d",&Rakkos.age);
    scanf("%s",Kokkosh.em_name);
    scanf("%lf",&Kokkosh.salary);
    scanf("%s",&Kokkosh.work_hour);
    scanf("%s",&Kokkosh.age);

    printf("Employee Name:%s\n Salary:%10lf\n Working hours:%10d\n Age:%10d\n",Rakkos.em_name,Rakkos.salary,Rakkos.work_hour,Rakkos.age);
    printf("Employee Name:%s\n Salary:%lf\n Working hours:%d\n Age:%d\n",Kokkosh.em_name,Kokkosh.salary,Kokkosh.work_hour,Kokkosh.age);
    return 0;
 }
