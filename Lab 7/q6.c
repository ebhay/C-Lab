#include<stdio.h>
void main()
{
    int arr[100];
    int n, i,j,temp;
    printf("ENTER THE  NO OF ELEMENTS: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ,",arr[i]);
    }
}