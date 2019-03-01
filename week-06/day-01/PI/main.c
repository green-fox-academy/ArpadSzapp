#include <stdio.h>

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

#define PI 3.1415
#define area (radius * radius * PI)

double radiusCalculate (double radius);
int main ()
{
    double radius;

    printf("Write in the radius of the circle");
    scanf("%lf", &radius);

    printf("\nIf the radius of the circle is: %lf\n", radius);
    radiusCalculate(radius);

    return 0;
}

double radiusCalculate (double radius)
{
    printf("\nThe area of that circle is: %lf\n", area);
};