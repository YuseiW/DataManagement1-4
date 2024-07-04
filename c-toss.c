#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variable to store the user's name
    char name[50];

    // Ask for the user's name
    printf("Who are you? \n> ");
    scanf("%49s", name);

    // Greet the user
    printf("Hello, %s!\n", name);

    // Seed the random number generator
    srand(time(NULL));

    int headsCount = 0;
    int tailsCount = 0;

    printf("Tossing a coin...\n");

    for (int i = 1; i <= 3; i++) {
        int coin = rand() % 2; // Generates 0 or 1
        if (coin == 0) {
            printf("Round %d: Heads\n", i);
            headsCount++;
        } else {
            printf("Round %d: Tails\n", i);
            tailsCount++;
        }
    }

    printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);

    return 0;
}
