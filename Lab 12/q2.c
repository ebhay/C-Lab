//Check a positive integer is palindrome or not.
#include <stdio.h>
int palidrom(int n)
{
    int s=0, n1=n;
    while (n>0)
    {
        s=s*10+(n%10);
        n/=10;
    }
    if(n1=s)
    return 0;
    return 1;
}
void main()
{
    int n;
    printf("Enter The Number");
    scanf("%d",&n);
    if(n<0)
    printf("Negative Integer, Palindrom Not Possible");
    else
    {
         printf("Positive Integer");
         int pali=palidrom(n);
         if(pali==0)
         printf("\t Number is Palindrom");
         else
         printf("\t Number is not Palindrom");
    }
}
