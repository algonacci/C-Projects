#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guessedNumber;

    printf("Guess the number: \n");
    scanf("%d", &guessedNumber);

    while (guessedNumber != number)
    {
        if (guessedNumber < number)
        {
            printf("The guessed number is smaller\n");
        }
        else
        {
            printf("The guessed number is bigger\n");
        }

        if (abs(guessedNumber - number) <= 5)
        {
            printf("You are getting closer!!\n");
        }

        printf("Guess again!\n");
        scanf("%d", &guessedNumber);
    }

    printf("CONGRATS!!! You are correct!");

    return 0;
}