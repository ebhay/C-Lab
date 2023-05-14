//Print the reverse of a positive integer.
#include <stdio.h>
int reverse(int n)
{
    int s=0;
    while (n>0)
    {
        s=s*10+(n%10);
        n/=10;
    }
    return s;
}
void main()
{
    int n;
    printf("Enter The Number");
    scanf("%d",&n);
    int rev =reverse(n);
    printf("Reverse of The Number: %d",rev);
}
