//Find the factorial of any number
#include<stdio.h>
void main()
{
    int n,fac=1;
    printf("Enter The Number \n");
    scanf("%d",&n);
    if (n<0)
    {           
        printf("No Factorial For Negative Number");
    }
    else{
        while (n!=0)
        {
            fac=fac*n;
            n-=1;
        }  
       printf("Factorial  Of the Number is: \n%d",fac);
    }
}