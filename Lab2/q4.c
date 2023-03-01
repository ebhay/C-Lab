//Write a C program to find P(2)+P(3). Let p(x) is a polynomial P(x)=2x^2-5x+1.
#include<stdio.h>
void main() 
{
    int x,y;
    

    printf("Type the value of x in p(x) - \n");
    scanf("%d", &x );
    printf("Type the value of y in p(y) - \n");
    scanf("%d", &y );
    int a = (x * x * 2) - (5 * x) + 1;
    int b = (y * y * 2) - (5 * y) + 1;
    int c = a + b;
    printf("The value of p(x) + p (y) = %d", c);

}