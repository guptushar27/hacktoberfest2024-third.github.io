#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));
    
    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to 'Guess the Number' game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}
