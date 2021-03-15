#include<stdio.h>
struct st_information
{
    char st_name[20];
    double tution_fees;
    char id[12];
    int course_no;
}st[2];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
     scanf("%s %lf  %d",st[i].st_name,&st[i].tution_fees,&st[i].course_no);
     gets(st[i].id);
    }

    for(i=0;i<2;i++)
    printf("Student name:%s\n Tution fees:%lf\n ID no :%s\n Course no :%d\n\n",st[i].st_name,&st[i].tution_fees,&st[i].id,&st[i].course_no);
    return 0;
}

