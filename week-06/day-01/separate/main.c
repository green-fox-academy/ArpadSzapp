#include <stdio.h>
#include "circumference.h"

int main ()
{
    double radius;
    printf("Write in the radius of the circle");
    scanf("%lf", &radius);
    printf("If the radius of the circle is: %lf\n", radius);
    radiusCalculate(radius);
    circumferenceCalculate(radius);

    return 0;
}