#include <stdio.h>

/*
Continue working on the pi.c project

Organise the function from the previous excercise to separate .c and .h files
Create another function which calculates the circumference of a circle
the radius of the circle should be passed as a parameter
the function should return the calculated circumference
circumference = 2 * radius * PI
this function should be in the same .c and .h files as the one which calculates the area
*/
#include "circumference.h"
int main ()
{
    double radius;
    printf("Write in the radius of the circle");
    scanf("%lf", &radius);

    printf("If the radius of the circle is: %lf\n", radius);

    areaCalculate (radius);
    circumferenceCalculate(radius);

    return 0;
}