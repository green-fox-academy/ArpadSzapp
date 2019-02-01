#include <iostream>

// Write a program that asks for two numbers and prints the bigger one

int main(int argc, char* args[]) {

  int num1, num2;

  std::cout << "Write in two numbers!" << std::endl;
  std::cout << "First: " << std::endl;

  std::cin >> num1;

  std::cout << "Second: " << std::endl;

  std::cin >> num2;

  if (num1 > num2) {

    std::cout << num1 << " is the bigger number" << std::endl;

  }else{

    std::cout << num2 << " is the bigger number" << std::endl;

  }

  return 0;

}