#include <iostream>
#include <vector>
#include "station.h"
#include "car.h"

int main()
{

    station station1;

    Car car1(10, 20);
    Car car2(20, 40);
    Car car3(100, 100);
    Car car4(60, 70);
    Car car5(100, 100);

    std::vector<Car> carsVector;

    carsVector.push_back(car1);
    carsVector.push_back(car2);
    carsVector.push_back(car3);
    carsVector.push_back(car4);
    carsVector.push_back(car5);

    for (int i = 0; i < carsVector.size(); i++) {
        station1.fill(carsVector[i]);

    }

    std::cout << "car1 is full " << car1.isFull() << std::endl;
    std::cout << "car2 is full " << car2.isFull() << std::endl;
    std::cout << "car3 is full " << car3.isFull() << std::endl;
    std::cout << "car4 is full " << car4.isFull() << std::endl;
    std::cout << "car5 is full " << car5.isFull() << std::endl;

    return 0;
}