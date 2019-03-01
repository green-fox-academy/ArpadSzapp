//
// Created by arpad on 2019. 02. 11..
//

#include <iostream>
#include "flower.h"

Flower::Flower()
{
    _name = "Flower";
}


Flower::Flower (Color color) : Plant(color)
{
    _name = "Flower";
}

bool Flower::ifNeedsWater ()
{
    return _waterAmount < 5;
}

void Flower::waterAbsorb (double increaseWaterByAmount)
{
    if (ifNeedsWater()) {
        _waterAmount += increaseWaterByAmount * 0.75;
    }
}

void Flower::checkIfNeedsWater ()
{
    if (ifNeedsWater()) {
        std::cout << "The " << getColor() << " " << _name << " needs water" << std::endl;
    } else {
        std::cout << "The " << getColor() << " " << _name << " doesnt need water" << std::endl;
    }
}