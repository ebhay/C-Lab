//Input a string and calculate the frequency of each character in that string
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int i, j, n;
    printf("Enter the string: ");
    scanf("%s", str);
    n = strlen(str);
    for (i = 0; i < n; i++) {
        int count = 1;
        if (str[i] != '*') {
            for (j = i + 1; j < n; j++) {
                if (str[i] == str[j]) {
                    ++count;
                    str[j] = '*';
                }
            }
            printf("\n%c available %d times", str[i], count);
        }
    }
    return 0;
}
