#include <stdio.h>
#include <stdlib.h>

// Create a program which asks for a number and stores it 
// Create a function which takes a number as a parameter 
// and returns 1 if the number is a prime number and 0 otherwise
// (in this case 0 is not considered as a prime number)


int primeNum (int num);

int main ()
{
    int num;

    printf("Write in a positive integer to know its a prime or not ");
    scanf("%d", &num);

    printf("%d", primeNum(num));
    return 0;
}

int primeNum (int num)
{
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }

    }return 1;
}
