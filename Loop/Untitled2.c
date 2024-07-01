#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d", 1 + 2 * i);
        if (i < n - 1) {
            printf(", ");
        }
    }
}
