#include <stdio.h>
double radiusCalculate(double radius);
int main ()
{
    double radius;
    printf("Write in the radius of the circle");
    scanf("%lf", &radius);
    printf("If the radius of the circle is: %lf\n", radius);
    radiusCalculate(radius);


    return 0;
}
double radiusCalculate(double radius)
{

    double pi = 3.14;
    printf("The area of that cirle is: %lf", pi * (2 * radius));
};