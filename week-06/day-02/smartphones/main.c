#include <stdio.h>
/*
Create a smartphone register application
* Read the content of smartphones.txt and store the informations in a structure called "smartphone:
* - the name of the gadget (which is shorter than 256 characters) (Don't bother with the underscore('_') character, it's the part of the name)
* - the year of the release (e.g. 2016)
* - the type of the screen size (as a custom type, see below)
*
* In the file the size is given in cm but you should store the screen size type in an enumeration ("screen_size"),
* the valid types are:
*  - BIG -> (>= 15 cm)
*  - MEDIUM -> (>= 12 cm)
*  - SMALL -> (< 12 cm)*/

typedef enum
{
    BIG, //-> (>= 15 cm)
    MEDIUM, //-> (>= 12 cm)
    SMALL // -> (< 12 cm)
} screen_size_t;

typedef struct
{
    char name[255]; //gadget name which is shorter than 256 characters
    int _relase; //gadget relase year
    screen_size_t screen_size; // screen size enum
} smartohone_t;

int main ()
{
    
    return 0;
}