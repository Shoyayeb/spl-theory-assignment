#include <stdio.h>

void main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("%d is greater than %d\n", x, y);
    } else if (x < y) {
        printf("%d is less than %d\n", x, y);
    } else {
        printf("%d is equal to %d\n", x, y);
    }
}
