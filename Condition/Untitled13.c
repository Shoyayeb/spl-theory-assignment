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
            scanf("%d", &caseChoice);
            if (caseChoice == 1) {
                printf("Quotient: %.6f\n", a / b);
            } else if (caseChoice == 2) {
                printf("Reminder: %.2f\n", (int)a % (int)b);
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
}
