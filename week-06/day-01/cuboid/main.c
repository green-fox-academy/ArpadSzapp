#include <stdio.h>

int main ()
{

// Write a program that stores 3 sides of a cuboid as variables (doubles)
double sideL;
double sideW;
double sideH;

// You should get these variables via console input
printf("type in the 3 side of a cuboid\n");
scanf("%lf %lf %lf", &sideL, &sideW, &sideH);

    double surface = (2*(sideL*sideW+sideL*sideH+sideW*sideH));
    double volume  = (sideL*sideW*sideH);

// The program should write the surface area and volume of the cuboid like:
printf("Surface Area: %.2f\nVolume:%.2f", surface, volume);
//
// Surface Area: 600
// Volume: 1000
    return 0;
}