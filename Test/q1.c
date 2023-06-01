#include <stdio.h>

int mod(int n, int val, int dig)
{
    int number = 12345;
    int array[100];  
    int size = sizeof(number)/sizeof(int);
    while (number > 0) {
        array[size] = number % 10;
        number /= 10;
        size++;
    }
}

int value(int n, int pos)
{
    int a = 1, val = 0;
    while (n != 0)
    {
        val = n % 10;
        n /= 10;
        if (a == pos)
            return val;
        a++;
    }
    return 0;
}

void arrModifier(int arr[], int n)
{
    int dig = n / 2;
    int i, val1, val2, s;
    for (i = 0; i < n; i += 2)
    {
        val1 = value(arr[i], dig);
        val2 = value(arr[i + 1], dig);
        s = arr[i];
        arr[i] = mod(s, val2, dig);
        s = arr[i + 1];
        arr[i + 1] = mod(s, val1, dig);
        dig--;
    }
    printf("MODIFIED ARRAY: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, i;
    int arr[100];
    printf("ENTER THE NUMBER OF DIGITS: ");
    scanf("%d", &n);
    n = 2 * n;
    printf("SIZE OF ARRAY: %d\n", n);
    printf("ENTER %d ELEMENTS: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    arrModifier(arr, n);
    return 0;
}
