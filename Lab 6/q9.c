//Enter a six digit number and print the sum of all even digits of that number and multiplication of all odd digits.
#include <stdio.h>

int main() {

  int n,sumofeven=0,mulofodd=1,rem;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    rem = n % 10;
    if(rem%2==0)
        sumofeven+=rem;
    else 
        mulofodd*=rem;   
    n /= 10;
  }

  printf("SUM OF DIGITS = %d \n MULTIPLICATION OF ODD DIGIT %d",sumofeven,mulofodd);

  return 0;
}
