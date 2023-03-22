#include <stdio.h>
int main() {
    int arr[100];
    int n,i;
    printf("Elements with at least two smaller elements: ");
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &n);  
    

    for(i=0;i<n;i++)
    {
        printf("Enter The Element: ");
        scanf("%d",&arr[i]);
    } 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] < arr[i]) {
                count++;
            }
        }
        if (count >= 2) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}