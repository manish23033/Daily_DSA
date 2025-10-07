#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, nguesses = 1;


    // Initialize random seed and generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    // Uncomment for debugging
     printf("The number is %d\n", number);

    do {
        printf("Guess the number between 1 to 100: ");
        
        scanf("%d", &guess); // Fix the format specifier
        
        if (guess > number) {
            printf("Lower number please.\n");

        } else if (guess < number) {
            printf("Higher number please.\n");
        } else {
            printf("You guessed it in %d attempts!\n", nguesses);
        }

        nguesses++;
    } while (guess != number);

    return 0;
}
