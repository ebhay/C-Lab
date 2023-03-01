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
        printf("\n Number : %d is Greater",a);
    else if(b>a && b>>c)
        printf("\n Number : %d is Greater",b);
    else
        printf("\n Number : %d is Greater",c);
}