//Print the sum of digits of any number
#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter The Number \n");
    scanf("%d",&n);
    while (n!=0)
    {
        int rem = n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("Sum of The Digits Are: \n%d",sum);
    
}