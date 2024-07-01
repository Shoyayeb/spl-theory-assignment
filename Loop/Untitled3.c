#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("1");
        } else {
            printf("0");
        }
        if (i < n - 1) {
            printf(", ");
        }
    }
    }
}
