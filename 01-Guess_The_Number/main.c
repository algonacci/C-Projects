#include <stdio.h>

int main()
{
    int number = 76;
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

        printf("Guess again!\n");
        scanf("%d", &guessedNumber);
    }

    printf("CONGRATS!!! You are correct!");

    return 0;
}