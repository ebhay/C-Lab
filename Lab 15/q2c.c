/*User defined function to copy one string to another
string*/
#include<stdio.h>
void mystrcpy(char str1[],char str2[])
{
    int i=0;
    for(i=0;str1[i]!='\0';i++)
    str2[i]=str1[i];
    str2[i]='\0';
}
void main()
{
    char str1[10],str2[10];
    printf("Enter The String ");
    gets(str1);
    mystrcpy(str1,str2);
    printf("Copied String %s",str2);
}
