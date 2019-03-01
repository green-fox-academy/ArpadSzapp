#include <stdio.h>
// Create a program which asks for the age of the user and stores it
// Create a function which takes that age as a parameter and returns if the user is
// old enough to buy himself alcohol in Hungary
int ageToAlcohol (int age);

int main ()
{
    int age;
    printf("write in your age:");
    scanf("%d", &age);

    if (ageToAlcohol(age)) {
        printf("1");
    }else{
        printf("0");
    }

    return 0;
}

int ageToAlcohol (int age)
{
    return age >= 18;

    /*if (age > 18) {

        return 1;
    } else {
        return 0;
    }*/
}
