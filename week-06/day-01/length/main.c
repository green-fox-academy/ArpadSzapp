#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringLength (char name);

int main ()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions


    char name[20];

    printf("Hello! What is your name?\n");
    scanf("%s", name);

    printf("Wow your name is %d characters long.", strlen(name));

    return 0;
}

int stringLength (char name)
{
    return stringLength(name);
}
