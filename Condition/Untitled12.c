#include <stdio.h>

void main() {
    float a, b;
    int choice;
    printf("Enter two real numbers (a and b): ");
    scanf("%f %f", &a, &b);
    printf("Enter your choice (1: Addition, 2: Subtraction, 3: Multiplication, 4: Division): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition: %.2f\n", a + b);
            break;
        case 2:
            printf("Subtraction: %.2f\n", a - b);
            break;
        case 3:
            printf("Multiplication: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Quotient: %.6f\n", a / b);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
}
