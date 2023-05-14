#include<stdio.h>
int main(){
    float he_in,wt_lb,bmi;
    printf("Enter the weight in lb: ");
    scanf("%f",&wt_lb);
    printf("Enter the height in inches: ");
    scanf("%f",&he_in);
    bmi=(703*wt_lb)/(he_in*he_in);
    if(bmi>=30){
        printf("Obese");
    }
    else if(bmi>=25 && bmi<=29.9){
        printf("Overweight");
    }
    else if(bmi>=18.5 && bmi<=24.9){
        printf("Normal");
    }
    else{
        printf("Underweight");
    }
}