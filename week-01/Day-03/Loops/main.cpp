#include <iostream>
#include <string>

int main(int argc, char* args[]) {

  int a = 0;

  while (a < 10) {
    std::cout << a << std::endl;
    a += 1;
  }

  for (int i = 0; i < 100 ; i++) {
    std::cout << i << std::endl;
  }

  return 0;
}