#include <iostream>

// Write a program that stores 3 sides of a cuboid as variables (doubles)

// The program should write the surface area and volume of the cuboid like:

//

// Surface Area: 600

// Volume: 1000

int main(int argc, char* args[]) {

  double a = 20;
  double b = 30;
  double c = 1.666667;

  double SurfaceArea = a * b;
  double Volume = a * b * c;

  std::cout << "The Surface Area is:" << SurfaceArea << std::endl;

  std::cout  << "The Volume is:" << Volume << std::endl;

  return 0;

}