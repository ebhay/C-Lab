//Print the product of digits of any number
#include<stdio.h>
void main()
{
    int n,mult=1;
    printf("Enter The Number \n");
    scanf("%d",&n);
    while (n!=0)
    {
        int rem = n%10;
        n=n/10;
        mult*=rem;
    }
    printf("Multiplication of The Digits Are: \n%d",mult);
}