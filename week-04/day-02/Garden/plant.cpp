//
// Created by arpad on 2019. 02. 11..
//

#include "plant.h"
#include <iostream>

Plant::Plant ()
{
    _color = Color::YELLOW;
    _waterAmount = 0;
    _name = "Plant";
}
Plant::Plant (Color color)
{
    _color = color;
    _waterAmount = 0;
    _name = "Plant";
}

std::string Plant::getColor ()
{
    if (_color == Color::YELLOW) {
        return "yellow";
    } else if (_color == Color::BLUE) {
        return "blue";
    } else
        return "undefined color";
}

void Plant::waterAbsorb (double increaseWaterByAmount)
{
    if (ifNeedsWater()) {
        _waterAmount += increaseWaterByAmount;
    }
}

void Plant::checkIfNeedsWater ()
{
    if (ifNeedsWater()) {
        std::cout << "The " << getColor() << " " << _name << " needs water" << std::endl;
    } else {
        std::cout << "The " << getColor() << " " << _name << " doesnt need water" << std::endl;
    }
}

double Plant::getWaterAmount ()
{
    return _waterAmount;
}