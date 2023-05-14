#include<stdio.h>
int main(){
    int arr3[100],arr4[100],arr5[100];
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
    
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i]+arr2[i];
        arr4[i]=arr1[i]-arr2[i];
        arr5[i]=arr1[i]*arr2[i];
    }
    printf("The Addition of two arrays is: \n");
    for(int j=0;j<n;j++){
        printf("%d ",arr3[j]);
    }
    printf("\nThe Subtraction of two arrays is: \n");
    for(int k=0;k<n;k++){
        printf("%d ",arr4[k]);
    }
    printf("\nThe Product of two arrays is: \n");
    for(int l=0;l<n;l++){
        printf("%d ",arr3[l]);
    }
}