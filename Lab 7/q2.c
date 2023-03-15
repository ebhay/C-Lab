#include<stdio.h>
void main()
{
    int arr[100];
    int n, i,sum=0;
    printf("ENTER THE  NO OF ELEMENTS: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("SUM OF ALL THE ELEMENTS: %d",sum);

}