#include<stdio.h>
void main()
{
    int arr[100];
    int n, i=0,temp,c=0;
    printf("ENTER THE  NO OF ELEMENTS: ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENT TO BE SEARCHED: ");
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            printf("NUMBER IS FOUND AT POSTION : %d",i+1);
            c=1;
            break;
        }
    }
    if(c==0)
    printf("ELEMENT IS NOT FOUND");

}