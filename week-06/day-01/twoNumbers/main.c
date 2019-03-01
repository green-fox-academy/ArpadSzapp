#include <stdio.h>

int main ()
{
    // Create a program that prints a few operations on two numbers: 22 and 13
    // Print the result of 13 added to 22
    int a=13;
    int b=22;

    printf("a+b= %d\n",a+b);

    // Print the result of 13 substracted from 22

    printf("b+a= %d\n",b-a);

    // Print the result of 22 multiplied by 13

    printf("b*a= %d\n",b*a);

    // Print the result of 22 divided by 13 (as a decimal fraction)

    printf("b/a= %d\n",b/a);

    // Print the reminder of 22 divided by 13

    printf("b%%a= %d\n",b%a);

    // Store the results in variables and use them when you display the result
    return 0;
}