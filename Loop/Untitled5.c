#include <stdio.h>

void main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    while (x != y) {
        printf("%d, ", x * x);
        if (x < y) {
            x++;
        } else {
            x--;
        }
    }
    printf("Reached!\n");
}
