#include<stdio.h>
void main()
{
    int arr[100];
    int a[100];
    int n, i;
    printf("ENTER THE  NO OF ELEMENTS: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}