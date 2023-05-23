/*Write a program to accept the name, age and address
of five students and display the name of the eldest student.*/
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    char address[100];
    int age;
};
void main()
{
    int s, p,n;
    printf("NUMBER OF STUDENTS \n");
    scanf("%d",&n);
    struct student stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTER NAME  :");
        scanf("%s", &stu[i].name);
        printf("ENTER ADDRESS  :");
        scanf("%s",&stu[i].address);
        printf("ENTER AGE  :");
        scanf("%d", &stu[i].age);
    }
    s = 0;
    for (int i =0; i < n; i++)
    {
        if (s <= stu[i].age)
        {
            s = stu[i].age;
            p = i;
        }
    }
    printf("ELDEST STUDENT \n STUDENT[%d] NAME: %s \nAGE: %d \nADDRESS :%s",p, stu[p].name, stu[p].age, stu[p].address);
}
