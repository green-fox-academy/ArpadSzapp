#include <stdio.h>
double radiusCalculate(double radius);
int main ()
{
    double radius = 20;
    radiusCalculate(radius);

    return 0;
}
double radiusCalculate(double radius)
{

    double pi = 3.14;
    printf("The radius is %lf", pi * (2 * radius));
};