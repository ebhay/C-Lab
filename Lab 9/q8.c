#include<stdio.h>
void main(){
    int i,j,n,temp,arr[100];
    printf("ENTER THE NUMBER OF THE ELEMENTS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT ARRAY 1");
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("After reversing the array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}