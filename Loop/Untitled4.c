#include <stdio.h>

void main() {
    int n;
    double number, sum = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &number);
        sum += number;
    }
    double average = sum / n;
    printf("AVG of %d inputs: %lf\n", n, average);
}
