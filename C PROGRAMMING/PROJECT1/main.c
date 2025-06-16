#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed_number;

    do {
        printf("Guess the number: ");
        scanf("%d", &gussed_number);
        
        if (gussed_number > randomNumber) {
            printf("Lower number please!\n");
        } else if (gussed_number < randomNumber) {
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }

        no_of_guesses++;

    } while (gussed_number != randomNumber);

    printf("You gussed the number in %d guesses\n", no_of_guesses);

    return 0;
}
