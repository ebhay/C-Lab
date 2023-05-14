/*Print characters of a string and address of each
character using pointer*/

#include<stdio.h>
void main()
{
    char str[]="India";
    char *p=str;
    while (*p!='\0')
    {   
        printf("Character = %c \t",*p);
        printf("Address = %u \n",&p);
        p++;
    }
}