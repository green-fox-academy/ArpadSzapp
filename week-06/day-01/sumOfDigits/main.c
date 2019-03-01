#include <stdio.h>
#include <stdlib.h>

/*
 * // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0
*/

int func (int firstNum, int secondNum);

int main ()
{
    int firstNum;
    int secondNum;


    scanf("%d", &firstNum);
    scanf("%d", &secondNum);

    printf("%d", func(firstNum, secondNum));

    return 0;
}

int func (int firstNum, int secondNum)
{
    int result1 = 0;
    int result2 = 0;

    while ((firstNum != 0) || (secondNum != 0)) {
        result1 += (firstNum % 10);
        result2 += (secondNum % 10);

        firstNum /= 10;
        secondNum /= 10;
    }

    return result1 == result2;

}



