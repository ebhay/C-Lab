/*Program to understand the use of gets() and puts()*/
#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter The Name");
    gets(name);
    printf("Entered Name");
    puts(name);
}