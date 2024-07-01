#include <stdio.h>

void main() {
    int number, reversed = 0;
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("%d\n", reversed);
}
