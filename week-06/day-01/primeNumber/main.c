#include <stdio.h>
#include <stdlib.h>
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
