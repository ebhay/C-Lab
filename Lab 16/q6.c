/*WAP to input the information of the student like name,rollno avega mark
 & dob created a nested structure of dob data members date , month , year
 and display*/
 #include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    int avgmark;
    struct dob
    {   
        int dd;
        int mm;
        int yyyy;
    };    
};
void main()
{
    int s, p,n;
    struct student stu[n];
    printf("NUMBER OF STUDENTS \n");
    scanf("%d",&n);
    struct student stu[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTER NAME  :");
        scanf("%s", &stu[i].name);
        printf("ENTER ROLLNO  :");
        scanf("%d",&stu[i].roll);
        printf("ENTER AVGMARKS  :");
        scanf("%d", &stu[i].avgmark);
        
    }
    
}
