#include <stdio.h>

void main() {
    float number1, number2;
    char operator;
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {
        case '+':
            printf("Addition: %.2f\n", number1 + number2);
            break;
        case '-':
            printf("Subtraction: %.2f\n", number1 - number2);
            break;
        case '*':
            printf("Multiplication: %.2f\n", number1 * number2);
            break;
        case '/':
            if (number2 != 0) {
                printf("Division: %.2f\n", number1 / number2);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
}
