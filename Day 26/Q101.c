// WAP TO CREATE NUMBER GUESSING GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > number)
        {
            printf("Too High! Try again.\n");
        }
        else if(guess < number)
        {
            printf("Too Low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Number of attempts = %d\n", attempts);
        }

    } while(guess != number);

    return 0;
}