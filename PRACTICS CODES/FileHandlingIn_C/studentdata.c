#include<stdio.h>
int main()
{
    FILE *p;
    int i,n,age,ph;
    char name[100];
    p=fopen("student.txt","a");

    if(p==NULL)
        printf("File does not exit\n");
    else
    {
        printf("Enter number of student: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {

            printf("Enter student name: ");
            scanf("%s",&name);
            printf("Enter student age: ");
            scanf("%d",&age);
            printf("Enter phone no:");
            scanf("%d",&ph);
            fprintf(p,"\t%s\t\t %d\t %d\n",name,age,ph);
        }
        fclose(p);
    }
    return 0;
}
