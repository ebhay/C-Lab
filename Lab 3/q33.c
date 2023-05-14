#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter The Number");
    scanf("%d",&a);
    printf("Enter The Number");
    scanf("%d",&b);
    printf("Enter The Number");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("Number : %d is Largest",a);
    else if(b>a && b>>c)
        printf("Number : %d is Largest",b);
    else if(c>a && c>b)
        printf("Number : %d is Largest",c);
    else
        printf("All the numbers are equal");
}