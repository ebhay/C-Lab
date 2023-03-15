#include<stdio.h>
void main()
{
    int arr[100];
    int n, i,max,min;
    printf("ENTER THE  NO OF ELEMENTS: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }

        printf("Maximium Element: %d \n Minimium Element: %d",max,min);
}