#include<stdio.h>
void main()
{
    int arr[100];
    int n, i,even=0,odd=0;
    printf("ENTER THE  NO OF ELEMENTS: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("EVEN ELEMENTS: %d \n ODD ELEMENTS: %d",even,odd);

}