#include <stdio.h>

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
    printf("Hello, World!\n");
    return 0;
}