//Convert a binary number to a decimal number
#include<stdio.h>
void main()
{
    int n,bin,dec,j=1;
    printf("Enter The Number In Binary \n");
    scanf("%d",&bin);
    n=bin;
    while(n>0)
    {
        int rem= n%10;
        dec+=rem*j;
        j*=2;
        n=n/10;
    }
    printf("Number In Binary \n%d \nNumber In Decimal \n%d",bin,dec);
}