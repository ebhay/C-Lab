//Sum of Two Number
#include <stdio.h>
void sum1()
{
    int a,b,s;
    printf("Enter The Number 1: ");
    scanf("%d",&a);
    printf("Enter The Number 2: ");
    scanf("%d",&b);
    s=a+b;
    printf("SUM Of Two Number: %d",s);
}
int sum2()
{
    int a, b, s;
    printf("Enter The Number 1: ");
    scanf("%d",&a);
    printf("Enter The Number 2: ");
    scanf("%d",&b);
    s=a+b;
    return s;
}
void sum3(int n1,int n2)
{
    int s=n1+n2;
    printf("SUM Of Two Number: %d",s);
}
int sum4(int n1,int n2)
{
    int s=n1+n2;
    return s;
}
void main()
{
    printf("SUM 1 \n");
    sum1();
    printf("SUM 2 \n");
    int s=sum2();
    printf("SUM 3 \n");
    printf("SUM OF THE NUMBER: %d",s);
    int a,b;
    printf("Enter The Number 1: ");
    scanf("%d",&a);
    printf("Enter The Number 2: ");
    scanf("%d",&b);
    sum3(a,b);
    printf("SUM 4 \n");
    int su =sum4(a,b);
    printf("SUM Of Two Number: %d",s);
}
