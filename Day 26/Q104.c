// WAP TO CREATE QUIZ APPLICATION

#include <stdio.h>

int main()
{
    int score = 0;
    char ans;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Chennai\nd) Kolkata\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    // Question 2
    printf("\nQ2. Which language is used for system programming?\n");
    printf("a) C\nb) HTML\nc) CSS\nd) SQL\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'a' || ans == 'A')
        score++;

    // Question 3
    printf("\nQ3. How many days are there in a leap year?\n");
    printf("a) 365\nb) 366\nc) 364\nd) 367\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    // Question 4
    printf("\nQ4. Which symbol is used to end a statement in C?\n");
    printf("a) :\nb) ;\nc) ,\nd) .\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    // Question 5
    printf("\nQ5. Which function is used to print output in C?\n");
    printf("a) scanf()\nb) printf()\nc) gets()\nd) puts()\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}