#include <stdio.h>
void main()
{
    int a, b, sum;
    a = 4;
    b = 6;
    func(a, b, &sum);
    printf("The sum is = %d", sum);
}
func(int x, int y, int *s)
{
    *s = x + y;
}