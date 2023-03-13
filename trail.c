#include <stdio.h>
void main(){
float temp;
int a=0,b=0,c=0;
while (temp!=0){
printf("Enter the temperature: / Press 0 to exit \n");
scanf("%f",&temp);
if(temp>85){
a++;
}
else if(temp>60){
b++;
}
else{
c++;
}
}
printf("The number of hot, pleasant & cool days are: %d,%d,%d\n",a,b,c);
}
