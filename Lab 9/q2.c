//Given an array of positive integers of size n, find the minimum repeating number and its frequency in this array. For example, let the array be arr[ ] = {1, 2, 1, 2, 2, 2, 3, 8, 9, 2, 3,9}, the minimum repeating number is 8. Its frequency is 1
#include<stdio.h>
void main()
{
    int arr[100];
    int n,i,feq=0,ele,min;
    printf("ENTER THE NUMBER OF THE ELEMENTS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT");
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        int temp=0;
        ele=arr[i];
        for (int j = 0; j <n; j++)
        {
            if (arr[i]==arr[j] && arr[i]!=-1)
            {
                ++temp;   
                arr[j]=-1;
            }
        }
        if(feq<temp)
        {
            min=ele;
            feq=temp;
        }
    }
        printf("ELEMENT %d FREQUENCY %d",min,feq);   
}
