#include <stdio.h>

int main() {
   int i = 1;

   do {
      printf("%d ", i);
      i += 3;
   } while (i <= 15);

   return 0;
}