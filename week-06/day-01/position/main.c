#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void listCharPos (char *sentence, char iChar);

int main ()
{
    char string[55] = "This is a string for testing";
    char iChar = 'i';
    //char *p;
    listCharPos(string, iChar);

    return 0;
}

void listCharPos (char *sentence, char iChar)
{
    for (int i = 0; i < strlen(sentence); ++i) {
        if (sentence[i] == iChar) {
            printf("%d\n", i);
        }
    }
}