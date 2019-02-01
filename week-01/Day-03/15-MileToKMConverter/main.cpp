#include <iostream>

// Write a program that asks for an integer that is a distance in kilometers,

// then it converts that value to miles and prints it

int main(int argc, char* args[]) {

  int Distance;

  std::cout << "To change KM to Miles, write in the distance in KM: " << std::endl,

  std::cin >> Distance;

  std::cout << "The distance is " << Distance * 1.6 << " in miles." << std::endl;

  return 0;

}