#include <stdio.h>

void main() {
    float a, b;
    int choice, caseChoice;
    scanf("%f %f", &a, &b);
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
                printf("Enter your choice for division (1: Quotient, 2: Remainder): ");
                scanf("%d", &caseChoice);

                if (caseChoice == 1) {
                    printf("Quotient: %.6f\n", a / b);
                } else if (caseChoice == 2) {
                    printf("Reminder: %d\n", (int)a % (int)b);
                } else {
                    printf("Invalid case choice! Please enter 1 or 2.\n");
                }
            } else {
                printf("Error: Divisor is zero\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
}
