//Enter a number n and print the cube of all numbers from 1 to n which are divisible by 3.

#include <stdio.h>

int main() {
  int n, cube=0;
  printf("Enter the n: ");
  scanf("%d", &n);
  for(int i=1;i<=n;i++)
  {
    cube=i*i*i;
    if(cube%3==0)
    printf("%d, ", cube);
  }
    return 0;
}