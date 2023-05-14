// Find out the prime factors of a number.
#include <stdio.h>
void primefactor(int n)
{
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
            n /= i;
        }
        else
            i++;
    }
}
void main()
{
    int a, b;
    printf("Enter The Number 1: ");
    scanf("%d", &a);
    primefactor(a);
}
