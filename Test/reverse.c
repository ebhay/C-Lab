#include<stdio.h>
void main()
{
    int number = 12345;
    int array[100];  
    int a;
    int size = 0;
    while (number > 0) {
        array[size] = number % 10;
        number /= 10;
        size++;
    }
    for(int i=0;i<size;i++)
    printf(" \t",array[i]);
}
