#include<stdio.h>
void main()
{
    int m1,m2,m3,m4;
    float per;

    char grade;
    printf("Enter The Marks of Subject 1");
    scanf("%d",&m1);
    printf("\n Enter The Marks of Subject 2");
    scanf("%d",&m2);
    printf("\n Enter The Marks of Subject 3");
    scanf("%d",&m3);
    printf("\n Enter The Marks of Subject 4");
    scanf("%d",&m4);
    per=(m1+m2+m3+m4)/4;
    if(per>=85)
        grade='A';
    else if(per>=70 && per<85)
        grade='B';
    else if(per>=55 && per<75)
        grade='C';    
    else if(per>=40 && per<55)
        grade='D';    
    else 
        grade='E';    
    printf("\n Percentage = %f  & Grade = %c",per,grade);
}