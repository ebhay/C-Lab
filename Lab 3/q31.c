#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number 1: ");
    scanf("%d",&a);
    printf("Enter the number 2: ");
    scanf("%d",&b);
    if(a>b){
        printf("The larger number is %d and smaller number is %d\n",a,b);
    }
    else{
        printf("The larger number is %d and smaller number is %d\n",b,a);   
    }
}
