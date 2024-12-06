#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    printf("Guess the number (between 1 and 100):\n");

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed);

        no_of_guesses++;

        if (guessed < random_number) {
            printf("Too low! Try again.\n");
        } else if (guessed > random_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d guesses.\n", no_of_guesses);
        }
    } while (guessed != random_number);

    return 0;
}
