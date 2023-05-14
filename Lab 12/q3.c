// Find the LCM and HCF of two numbers
#include <stdio.h>
void hcflcm(int num1,int num2)
{
    int a,b,temp,hcf,lcm;
    a = num1;
    b = num2;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (num1 * num2) / hcf;
    printf("LCM OF THE NUMBER: %d \n HCF OF THE NUMBER: %d",lcm,hcf);
}
void main()
{
    int a,b;
    printf("Enter The Number 1: ");
    scanf("%d", &a);
    printf("Enter The Number 2: ");
    scanf("%d", &b);
    hcflcm(a,b);
}
