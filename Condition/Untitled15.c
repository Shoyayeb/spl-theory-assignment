#include <stdio.h>

void main() {
    int x;
    int n1, n2, n3;
    int flag = 0;
    printf("Enter the number to be guessed: ");
    scanf("%d", &x);
    printf("Enter first guesses: ");
    scanf("%d", &n1);
    if (n1 == x) {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    } else {
        printf("Wrong, 2 Chance(s) Left!\n");
    }
    if (!flag) {
        printf("Enter second guesses: ");
        scanf("%d", &n2);
        if (n2 == x) {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        } else {
            printf("Wrong, 1 Chance(s) Left!\n");
        }
    }

    if (!flag) {
        printf("Enter third guesses: ");
        scanf("%d", &n3);
        if (n3 == x) {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        } else {
            printf("Wrong, 0 Chance(s) Left!\n");
            printf("Player-1 wins!\n");
        }
    }
}
