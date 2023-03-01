#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter The Number");
    scanf("%d",&a);
    printf("Enter The Number");
    scanf("%d",&b);
    if(a>b){
        printf("\n Number : %d is Greater",a);}
    else if(a==b){
        printf("\n Numbers Are Equal : %d ",a);}
    else{
        printf("\n Number : %d is Greater",b);}
}