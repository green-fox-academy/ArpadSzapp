#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringSameFunc (char string1[], char string2[]);

int main ()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char string1[30];
    char string2[30];
    printf("write in two word to know its same or not");
    printf("first word: ");
    gets(string1);
    printf("second word");
    gets(string2);

    printf("%d", stringSameFunc(string1, string2));

    return 0;
}

int stringSameFunc (char string1[], char string2[])
    {
        int stringOne = strlen(string1);
        int stringTwo = strlen(string2);

        if (stringOne != stringTwo) {
            return 0;
        }

        for (int i = 0; i < stringOne; i++) {
            if (string1[i] >= 'A' && string1[i] <= 'Z')
                string1[i] += 32;

            if (string2[i] >= 'A' && string2[i] <= 'Z')
                string2[i] += 32;

            if (string1[i] != string2[i])
                return 0;
        }
        return 1;
    }
