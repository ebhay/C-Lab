#include<stdio.h>
int main(){
    int arr1[100];
    int arr2[100];
    int n,i;
    printf("ENTER THE NUMBER OF THE ELEMENTS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT ARRAY 1");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT ARRAY 2");
        scanf("%d",&arr2[i]);
    }
    int x;
    printf("Enter the sum: \n");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr1[i]+arr2[j]==x){
                printf("%d and %d",arr1[i],arr2[j]);
                break;
            }
        }
    }
}