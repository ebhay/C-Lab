#include<stdio.h>
void main()
{
    int arr[100];
    int n, i=0,temp;
    printf("ENTER THE  NO IN DECIMAL: ");
    scanf("%d",&n);

    while (n!=0)
    {
        arr[i]=n%2;
        n/=2;
        i++;
    }
    i--;
    for(;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

}