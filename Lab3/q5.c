#include<stdio.h>
void main()
{
    int year;
    printf("Enter The Year");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
        printf("\n The Year is a Leap Year");
    else if(year%4==0)
        printf("\n The Year is a Leap Year");
    else 
        printf("\n The Year is not a Leap Year");
}