#include<stdio.h>
int main(){
    int arr1[100];
    int arr2[100];
    int arr3[100];
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
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT ARRAY 3");
        scanf("%d",&arr3[i]);
    }
    int j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(arr1[i]==arr2[j] && arr2[j]==arr3[k] && arr3[k]==arr1[i]){
                    printf("%d\n",arr1[i]);
                }
            }
        }
    }
}