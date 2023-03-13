#include<stdio.h>
int main(){
int num,sum=0;
printf("Enter the number: "); 
scanf("%d",&num); 
while(num > 0){
int mod = num % 10; 
printf("%d\n",mod);
sum+=mod; 
num = num / 10; 
}
if(sum%9==0)
printf("It is divisible by 9");
else{
printf("It is not divisible by 9");
}
return 0;
}
