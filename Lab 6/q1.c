#include <stdio.h>
void main()
{
    char op;
    int a, b;
    printf("Enter the number operator and another number");
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("Result : %d", a + b);
        break;
    case '-':
        printf("Result : %d", a - b);
        break;
    case '*':
        printf("Result : %d", a * b);
        break;
    case '/':
        printf("Result : %d", a / b);
        break;
    default:
        printf("Wrong choice\n");
    }
}