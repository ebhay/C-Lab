//Count the digits of a number using do...while loop
#include<stdio.h>
void main()
{
    int count=0,n;
    printf("Enter The Number \n");
    scanf("%d",&n);
    do
    {
        n/=10;
        count++;
    } 
    while (n!=0);
    printf("Number Of Digits In the Number \n%d",count);
}
    