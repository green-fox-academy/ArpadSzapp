#include <iostream>
#include "Sharpie.h"
#include <string>

int main(int argc, char * argv[])
{
  Sharpie object ("green" , 10.0);
  int decrease;
  std::cout << "Tell me how much would you like to decrease the inkAmount: ";
  std::cin >> decrease;
  for (int i = 0; i < decrease; i++) {
    object.use();
  }

  std::cout << object.inkAmount << " % of " << object.color << " " << object.width << std::endl;
  return 0;
}