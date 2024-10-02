// Importing Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 999
    int randomNumber = rand() % 1000;
    int guessed_number;
    int no_of_guesses = 0;

    // Loop until the correct number is guessed
    do
    {
        printf("Guess a Number:");
        scanf("%d", &guessed_number);

        if (guessed_number > randomNumber){
            printf("Guess a Lower Number Please\n");
        }
        
        else if (guessed_number < randomNumber){
            printf("Guess a Higher Number Please\n");
        }
        else{
            printf("Congrats!\n");
        }
        no_of_guesses++;
        
    } while (guessed_number != randomNumber);
    

    // Print the number of attempts
    printf("You guessed the Random Number in %d tries.\n", no_of_guesses);

    return 0;
}
 