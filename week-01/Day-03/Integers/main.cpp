#include <iostream>

int main(int argc, char const *argv[]) {

  // Positive, negative and zero
  std::cout << 42 << std::endl;
  std::cout << -3 << std::endl;
  std::cout << 0 << std::endl;


  // Maximum and minimum value
  // A simple integer is represented in 4 bytes (32bit)

  // Maximum value:  2 147 483 647
  std::cout << 2147483647 << std::endl;
  // Minimum value: -2 147 483 648
  std::cout << -2147483647 << std::endl;

  // What will be the output for this and why?
  std::cout << 2147483648 << std::endl;

  return 0;
}