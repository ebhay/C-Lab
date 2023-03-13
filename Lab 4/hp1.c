//Multiply two positive numbers without using * operator.
#include <stdio.h>
void main(){
int x, y; 
int product = 0; 
printf("Enter two integers:\n");
scanf("%d%d", &x, &y);
while(y != 0)
{
product += x;
y--;
}
printf("Product = %d\n", product);
}