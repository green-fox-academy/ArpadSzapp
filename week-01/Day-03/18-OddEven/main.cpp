#include <iostream>

// Write a program that reads a number from the standard input,

// Then prints "Odd" if the number is odd, or "Even" if it is even.

int main(int argc, char* args[]) {

  int a;

  std::cout << "Write in a number to know, odd or even: " << std::endl;
  std::cin >> a;

  if (a % 2 == 0) {

    std::cout << "Even" << std::endl;

  }else{

    std::cout << "Odd" << std::endl;

  }

  return 0;

}