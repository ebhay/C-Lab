//Find the sum of this series up to n terms 1+2+4+7+11+16+...
#include <stdio.h>

void main() {
    int n, sum = 0, term = 1, diff = 1;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += term;
        term += diff;
        diff++;
    }
    
    printf("The sum of the series up to %d terms is: %d\n", n, sum);

}
