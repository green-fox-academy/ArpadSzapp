#include <stdio.h>

int main ()
{
// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8
    int guessNumber = 13;
    int try;

    printf("try find out my number (0-20)\n");
    scanf("%d", &try);

        while (guessNumber != try) {
            if (try <= guessNumber) {
                printf("The stored number is higher than: %d", try);
                printf("\ntry find out my number again\n");
                scanf("%d", &try);

            } else if (try >= guessNumber) {
                printf("The stored number is lower than: %d", try);
                printf("\ntry find out my number again\n");
                scanf("%d", &try);
            }
        }
    if (guessNumber == try) {
        printf("You found the number: %d", guessNumber);}

    return 0;
}