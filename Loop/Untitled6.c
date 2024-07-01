#include <stdio.h>

void main() {
    int x, n, guess, tries;

    printf("Player-1, enter the number to be guessed (X): ");
    scanf("%d", &x);
    printf("Enter the number of tries for Player-2 (N): ");
    scanf("%d", &n);
    for (tries = n; tries > 0; tries--) {
        printf("Player-2, enter your guess: ");
        scanf("%d", &guess);

        if (guess == x) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", tries - 1);
        }
    }
    if (tries == 0) {
        printf("Player-1 wins!\n");
    }
}
