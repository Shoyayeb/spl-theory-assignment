#include <stdio.h>

void main() {
    char input;
    int count = 1;
    while (1) {
        scanf(" %c", &input);

        if (input == 'A') {
            break;
        }

        printf("Input %d: %c\n", count, input);
        count++;
    }
}
