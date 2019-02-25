//
// Created by arpad on 2019. 02. 25..
//

#ifndef SEPARATE_CIRCUMFERENCE_H
#define SEPARATE_CIRCUMFERENCE_H

double radiusCalculate(double radius)
{

    double pi = 3.14;
    printf("The area of that circle is: %lf\n", pi * (radius * radius));
};

double circumferenceCalculate(double radius)
{
    double pi = 3.14;
    printf("The circumference of that circle is: %lf\n", (2 * pi) * radius);
};

#endif //SEPARATE_CIRCUMFERENCE_H
