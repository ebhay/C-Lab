#include <stdio.h>
#include<math.h>
void main()
{
    int n, i;
    int arr[100];
    printf("ENTER THE NUMBER OF DIGIT");
    scanf("%d", &n);
    n = 2 * n;
    printf("SIZE OF ARRAY %d", n);
    for (i = 0; i < n; i++)
    {
        printf("ENTER THE ELEMENT");
        scanf("%d", &arr[i]);
    }
    int sum,dig=n-1;
    for(i=0;i<n;i=i+2)
    {
        int power = (int)(pow(10,dig));
        sum=arr[i]+arr[i+1];
        int val = (sum%(power));
        printf("\n SUM OF PAIRS :%d",val);
        --dig;
    }

}