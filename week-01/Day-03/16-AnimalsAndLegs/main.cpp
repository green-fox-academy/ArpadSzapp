#include <iostream>

// Write a program that asks for two integers

// The first represents the number of chickens the farmer has

// The second represents the number of pigs owned by the farmer

// It should print how many legs all the animals have

int main() {

    int chicken;

    int pig;

    std::cout << "The number of chickens the farmer has:" << std::endl;

    std::cin >> chicken;

    std::cout << "The number of pigs owned by the farmer:" << std::endl;

    std::cin >> pig;

    std::cout << "Your animals have " <<

    (chicken * 2) + (pig * 4) << " legs." << std::endl;

    return 0;

}